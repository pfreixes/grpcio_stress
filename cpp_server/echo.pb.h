// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: echo.proto

#ifndef PROTOBUF_INCLUDED_echo_2eproto
#define PROTOBUF_INCLUDED_echo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_echo_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_echo_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_echo_2eproto();
namespace echo {
class EchoReply;
class EchoReplyDefaultTypeInternal;
extern EchoReplyDefaultTypeInternal _EchoReply_default_instance_;
class EchoRequest;
class EchoRequestDefaultTypeInternal;
extern EchoRequestDefaultTypeInternal _EchoRequest_default_instance_;
}  // namespace echo
namespace google {
namespace protobuf {
template<> ::echo::EchoReply* Arena::CreateMaybeMessage<::echo::EchoReply>(Arena*);
template<> ::echo::EchoRequest* Arena::CreateMaybeMessage<::echo::EchoRequest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace echo {

// ===================================================================

class EchoRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:echo.EchoRequest) */ {
 public:
  EchoRequest();
  virtual ~EchoRequest();

  EchoRequest(const EchoRequest& from);

  inline EchoRequest& operator=(const EchoRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EchoRequest(EchoRequest&& from) noexcept
    : EchoRequest() {
    *this = ::std::move(from);
  }

  inline EchoRequest& operator=(EchoRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const EchoRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EchoRequest* internal_default_instance() {
    return reinterpret_cast<const EchoRequest*>(
               &_EchoRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(EchoRequest* other);
  friend void swap(EchoRequest& a, EchoRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EchoRequest* New() const final {
    return CreateMaybeMessage<EchoRequest>(nullptr);
  }

  EchoRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<EchoRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const EchoRequest& from);
  void MergeFrom(const EchoRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EchoRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string message = 1;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:echo.EchoRequest)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_echo_2eproto;
};
// -------------------------------------------------------------------

class EchoReply final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:echo.EchoReply) */ {
 public:
  EchoReply();
  virtual ~EchoReply();

  EchoReply(const EchoReply& from);

  inline EchoReply& operator=(const EchoReply& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EchoReply(EchoReply&& from) noexcept
    : EchoReply() {
    *this = ::std::move(from);
  }

  inline EchoReply& operator=(EchoReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const EchoReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EchoReply* internal_default_instance() {
    return reinterpret_cast<const EchoReply*>(
               &_EchoReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(EchoReply* other);
  friend void swap(EchoReply& a, EchoReply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EchoReply* New() const final {
    return CreateMaybeMessage<EchoReply>(nullptr);
  }

  EchoReply* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<EchoReply>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const EchoReply& from);
  void MergeFrom(const EchoReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EchoReply* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string message = 1;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:echo.EchoReply)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_echo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EchoRequest

// string message = 1;
inline void EchoRequest::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EchoRequest::message() const {
  // @@protoc_insertion_point(field_get:echo.EchoRequest.message)
  return message_.GetNoArena();
}
inline void EchoRequest::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:echo.EchoRequest.message)
}
#if LANG_CXX11
inline void EchoRequest::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:echo.EchoRequest.message)
}
#endif
inline void EchoRequest::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:echo.EchoRequest.message)
}
inline void EchoRequest::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:echo.EchoRequest.message)
}
inline ::std::string* EchoRequest::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:echo.EchoRequest.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EchoRequest::release_message() {
  // @@protoc_insertion_point(field_release:echo.EchoRequest.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EchoRequest::set_allocated_message(::std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:echo.EchoRequest.message)
}

// -------------------------------------------------------------------

// EchoReply

// string message = 1;
inline void EchoReply::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EchoReply::message() const {
  // @@protoc_insertion_point(field_get:echo.EchoReply.message)
  return message_.GetNoArena();
}
inline void EchoReply::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:echo.EchoReply.message)
}
#if LANG_CXX11
inline void EchoReply::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:echo.EchoReply.message)
}
#endif
inline void EchoReply::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:echo.EchoReply.message)
}
inline void EchoReply::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:echo.EchoReply.message)
}
inline ::std::string* EchoReply::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:echo.EchoReply.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EchoReply::release_message() {
  // @@protoc_insertion_point(field_release:echo.EchoReply.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EchoReply::set_allocated_message(::std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:echo.EchoReply.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace echo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_echo_2eproto
