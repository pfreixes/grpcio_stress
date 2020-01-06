import asyncio
import grpc
from grpc.experimental import aio

from proto import echo_pb2
from proto import echo_pb2_grpc


async def run_sync_request(loop):
    global finish_benchmark

    aio.init_grpc_aio()
    channel = grpc.insecure_channel("127.0.0.1:50051")
    stub = echo_pb2_grpc.EchoStub(channel)
    response = stub.Hi(echo_pb2.EchoRequest(message="ping"))
    assert response
    print("eureka")

if __name__ == '__main__':
    loop = asyncio.get_event_loop()
    loop.run_until_complete(run_sync_request(loop))
