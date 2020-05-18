// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: demo/notification/v1/notification.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_demo_2fnotification_2fv1_2fnotification_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_demo_2fnotification_2fv1_2fnotification_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_demo_2fnotification_2fv1_2fnotification_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_demo_2fnotification_2fv1_2fnotification_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto;
namespace demo {
namespace notification {
namespace v1 {
class Notification;
class NotificationDefaultTypeInternal;
extern NotificationDefaultTypeInternal _Notification_default_instance_;
}  // namespace v1
}  // namespace notification
}  // namespace demo
PROTOBUF_NAMESPACE_OPEN
template<> ::demo::notification::v1::Notification* Arena::CreateMaybeMessage<::demo::notification::v1::Notification>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace demo {
namespace notification {
namespace v1 {

// ===================================================================

class Notification :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:demo.notification.v1.Notification) */ {
 public:
  Notification();
  virtual ~Notification();

  Notification(const Notification& from);
  Notification(Notification&& from) noexcept
    : Notification() {
    *this = ::std::move(from);
  }

  inline Notification& operator=(const Notification& from) {
    CopyFrom(from);
    return *this;
  }
  inline Notification& operator=(Notification&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Notification& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Notification* internal_default_instance() {
    return reinterpret_cast<const Notification*>(
               &_Notification_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Notification& a, Notification& b) {
    a.Swap(&b);
  }
  inline void Swap(Notification* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Notification* New() const final {
    return CreateMaybeMessage<Notification>(nullptr);
  }

  Notification* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Notification>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Notification& from);
  void MergeFrom(const Notification& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Notification* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "demo.notification.v1.Notification";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto);
    return ::descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNotificationIdFieldNumber = 1,
    kDataFieldNumber = 2,
  };
  // string notification_id = 1;
  void clear_notification_id();
  const std::string& notification_id() const;
  void set_notification_id(const std::string& value);
  void set_notification_id(std::string&& value);
  void set_notification_id(const char* value);
  void set_notification_id(const char* value, size_t size);
  std::string* mutable_notification_id();
  std::string* release_notification_id();
  void set_allocated_notification_id(std::string* notification_id);
  private:
  const std::string& _internal_notification_id() const;
  void _internal_set_notification_id(const std::string& value);
  std::string* _internal_mutable_notification_id();
  public:

  // .google.protobuf.Any data = 2;
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const PROTOBUF_NAMESPACE_ID::Any& data() const;
  PROTOBUF_NAMESPACE_ID::Any* release_data();
  PROTOBUF_NAMESPACE_ID::Any* mutable_data();
  void set_allocated_data(PROTOBUF_NAMESPACE_ID::Any* data);
  private:
  const PROTOBUF_NAMESPACE_ID::Any& _internal_data() const;
  PROTOBUF_NAMESPACE_ID::Any* _internal_mutable_data();
  public:

  // @@protoc_insertion_point(class_scope:demo.notification.v1.Notification)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr notification_id_;
  PROTOBUF_NAMESPACE_ID::Any* data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_demo_2fnotification_2fv1_2fnotification_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Notification

// string notification_id = 1;
inline void Notification::clear_notification_id() {
  notification_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Notification::notification_id() const {
  // @@protoc_insertion_point(field_get:demo.notification.v1.Notification.notification_id)
  return _internal_notification_id();
}
inline void Notification::set_notification_id(const std::string& value) {
  _internal_set_notification_id(value);
  // @@protoc_insertion_point(field_set:demo.notification.v1.Notification.notification_id)
}
inline std::string* Notification::mutable_notification_id() {
  // @@protoc_insertion_point(field_mutable:demo.notification.v1.Notification.notification_id)
  return _internal_mutable_notification_id();
}
inline const std::string& Notification::_internal_notification_id() const {
  return notification_id_.GetNoArena();
}
inline void Notification::_internal_set_notification_id(const std::string& value) {
  
  notification_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Notification::set_notification_id(std::string&& value) {
  
  notification_id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:demo.notification.v1.Notification.notification_id)
}
inline void Notification::set_notification_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  notification_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:demo.notification.v1.Notification.notification_id)
}
inline void Notification::set_notification_id(const char* value, size_t size) {
  
  notification_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:demo.notification.v1.Notification.notification_id)
}
inline std::string* Notification::_internal_mutable_notification_id() {
  
  return notification_id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Notification::release_notification_id() {
  // @@protoc_insertion_point(field_release:demo.notification.v1.Notification.notification_id)
  
  return notification_id_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Notification::set_allocated_notification_id(std::string* notification_id) {
  if (notification_id != nullptr) {
    
  } else {
    
  }
  notification_id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), notification_id);
  // @@protoc_insertion_point(field_set_allocated:demo.notification.v1.Notification.notification_id)
}

// .google.protobuf.Any data = 2;
inline bool Notification::_internal_has_data() const {
  return this != internal_default_instance() && data_ != nullptr;
}
inline bool Notification::has_data() const {
  return _internal_has_data();
}
inline const PROTOBUF_NAMESPACE_ID::Any& Notification::_internal_data() const {
  const PROTOBUF_NAMESPACE_ID::Any* p = data_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Any*>(
      &PROTOBUF_NAMESPACE_ID::_Any_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Any& Notification::data() const {
  // @@protoc_insertion_point(field_get:demo.notification.v1.Notification.data)
  return _internal_data();
}
inline PROTOBUF_NAMESPACE_ID::Any* Notification::release_data() {
  // @@protoc_insertion_point(field_release:demo.notification.v1.Notification.data)
  
  PROTOBUF_NAMESPACE_ID::Any* temp = data_;
  data_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any* Notification::_internal_mutable_data() {
  
  if (data_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Any>(GetArenaNoVirtual());
    data_ = p;
  }
  return data_;
}
inline PROTOBUF_NAMESPACE_ID::Any* Notification::mutable_data() {
  // @@protoc_insertion_point(field_mutable:demo.notification.v1.Notification.data)
  return _internal_mutable_data();
}
inline void Notification::set_allocated_data(PROTOBUF_NAMESPACE_ID::Any* data) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(data_);
  }
  if (data) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      data = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, data, submessage_arena);
    }
    
  } else {
    
  }
  data_ = data;
  // @@protoc_insertion_point(field_set_allocated:demo.notification.v1.Notification.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace notification
}  // namespace demo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_demo_2fnotification_2fv1_2fnotification_2eproto
