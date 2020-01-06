// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: echo.proto
#ifndef GRPC_echo_2eproto__INCLUDED
#define GRPC_echo_2eproto__INCLUDED

#include "echo.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace echo {

class Echo final {
 public:
  static constexpr char const* service_full_name() {
    return "echo.Echo";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Hi(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::echo::EchoReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoReply>> AsyncHi(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoReply>>(AsyncHiRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoReply>> PrepareAsyncHi(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoReply>>(PrepareAsyncHiRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Hi(::grpc::ClientContext* context, const ::echo::EchoRequest* request, ::echo::EchoReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Hi(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::echo::EchoReply* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoReply>* AsyncHiRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoReply>* PrepareAsyncHiRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Hi(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::echo::EchoReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoReply>> AsyncHi(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoReply>>(AsyncHiRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoReply>> PrepareAsyncHi(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoReply>>(PrepareAsyncHiRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Hi(::grpc::ClientContext* context, const ::echo::EchoRequest* request, ::echo::EchoReply* response, std::function<void(::grpc::Status)>) override;
      void Hi(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::echo::EchoReply* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::echo::EchoReply>* AsyncHiRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::echo::EchoReply>* PrepareAsyncHiRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Hi_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Hi(::grpc::ServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Hi : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Hi() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Hi() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Hi(::grpc::ServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHi(::grpc::ServerContext* context, ::echo::EchoRequest* request, ::grpc::ServerAsyncResponseWriter< ::echo::EchoReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Hi<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Hi : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_Hi() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::echo::EchoRequest, ::echo::EchoReply>(
          [this](::grpc::ServerContext* context,
                 const ::echo::EchoRequest* request,
                 ::echo::EchoReply* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->Hi(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_Hi() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Hi(::grpc::ServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Hi(::grpc::ServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoReply* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_Hi<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Hi : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Hi() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Hi() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Hi(::grpc::ServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Hi : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Hi() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Hi() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Hi(::grpc::ServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHi(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Hi : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_Hi() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->Hi(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_Hi() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Hi(::grpc::ServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Hi(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Hi : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Hi() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::echo::EchoRequest, ::echo::EchoReply>(std::bind(&WithStreamedUnaryMethod_Hi<BaseClass>::StreamedHi, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Hi() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Hi(::grpc::ServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHi(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::echo::EchoRequest,::echo::EchoReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Hi<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Hi<Service > StreamedService;
};

}  // namespace echo


#endif  // GRPC_echo_2eproto__INCLUDED
