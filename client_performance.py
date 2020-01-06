import argparse
import asyncio
import time
import uvloop

from grpc.experimental import aio

from proto import echo_pb2


DEFAULT_CONCURRENCY = 1
DEFAULT_SECONDS = 10

finish_benchmark = False

async def requests(idx, multicallable):
    global finish_benchmark

    times = []
    while not finish_benchmark:
        start = time.monotonic()
        response = await multicallable(echo_pb2.EchoRequest(message="ping"))
        elapsed = time.monotonic() - start
        times.append(elapsed)

    return times


async def benchmark(loop, seconds=DEFAULT_SECONDS, concurrency=DEFAULT_CONCURRENCY):
    global finish_benchmark

    aio.init_grpc_aio()

    print("Creating channels and warmming up ....")
    multicallables = []
    for i in range(concurrency):
        channel = aio.insecure_channel("127.0.0.1:50051")
        multicallable = channel.unary_unary(
            '/echo.Echo/Hi',
            request_serializer=echo_pb2.EchoRequest.SerializeToString,
            response_deserializer=echo_pb2.EchoReply.FromString
        )
        response = await multicallable(echo_pb2.EchoRequest(message="ping"))
        assert response

        multicallables.append(multicallable)

    print("Starting tasks ....")
    tasks = [ asyncio.ensure_future(requests(idx, multicallable)) for idx, multicallable in enumerate(multicallables) ]

    await asyncio.sleep(seconds)

    print("Finishing tasks ....")
    finish_benchmark = True

    while not all([task.done() for task in tasks]):
        await asyncio.sleep(0)

    times = []
    for task in tasks:
        times += task.result()

    times.sort()

    total_requests = len(times)
    avg = sum(times) / total_requests 

    p75 = times[int((75*total_requests)/100)]
    p90 = times[int((90*total_requests)/100)]
    p99 = times[int((99*total_requests)/100)]

    print('QPS: {0}'.format(int(total_requests/seconds)))
    print('Avg: {0:.6f}'.format(avg))
    print('P75: {0:.6f}'.format(p75))
    print('P90: {0:.6f}'.format(p90))
    print('P99: {0:.6f}'.format(p99))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-u', '--uvloop', action='store_true')
    parser.add_argument('-c', '--concurrency', type=int, default=DEFAULT_CONCURRENCY)
    parser.add_argument('-s', '--seconds', type=int, default=DEFAULT_SECONDS)
    args = parser.parse_args()
    if args.uvloop:
        uvloop.install()
    print("Starting benchmark with concurrency {} during {} seconds".format(args.concurrency, args.seconds))
    loop = asyncio.get_event_loop()
    loop.run_until_complete(benchmark(loop, seconds=args.seconds, concurrency=args.concurrency))
