// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: demo/notification/v1/notification.proto

#include "demo/notification/v1/notification.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fany_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Any_google_2fprotobuf_2fany_2eproto;
namespace demo {
namespace notification {
namespace v1 {
class NotificationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Notification> _instance;
} _Notification_default_instance_;
}  // namespace v1
}  // namespace notification
}  // namespace demo
static void InitDefaultsscc_info_Notification_demo_2fnotification_2fv1_2fnotification_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::demo::notification::v1::_Notification_default_instance_;
    new (ptr) ::demo::notification::v1::Notification();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::demo::notification::v1::Notification::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Notification_demo_2fnotification_2fv1_2fnotification_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Notification_demo_2fnotification_2fv1_2fnotification_2eproto}, {
      &scc_info_Any_google_2fprotobuf_2fany_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_demo_2fnotification_2fv1_2fnotification_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_demo_2fnotification_2fv1_2fnotification_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_demo_2fnotification_2fv1_2fnotification_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_demo_2fnotification_2fv1_2fnotification_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::demo::notification::v1::Notification, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::demo::notification::v1::Notification, notification_id_),
  PROTOBUF_FIELD_OFFSET(::demo::notification::v1::Notification, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::demo::notification::v1::Notification)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::demo::notification::v1::_Notification_default_instance_),
};

const char descriptor_table_protodef_demo_2fnotification_2fv1_2fnotification_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\'demo/notification/v1/notification.prot"
  "o\022\024demo.notification.v1\032\031google/protobuf"
  "/any.proto\"K\n\014Notification\022\027\n\017notificati"
  "on_id\030\001 \001(\t\022\"\n\004data\030\002 \001(\0132\024.google.proto"
  "buf.AnyBs\n\030com.demo.notification.v1B\021Not"
  "ificationProtoP\001Z\016notificationv1\242\002\003DNX\252\002"
  "\024Demo.Notification.V1\312\002\024Demo\\Notificatio"
  "n\\V1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto_sccs[1] = {
  &scc_info_Notification_demo_2fnotification_2fv1_2fnotification_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto_once;
static bool descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto = {
  &descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto_initialized, descriptor_table_protodef_demo_2fnotification_2fv1_2fnotification_2eproto, "demo/notification/v1/notification.proto", 292,
  &descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto_once, descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto_sccs, descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_demo_2fnotification_2fv1_2fnotification_2eproto::offsets,
  file_level_metadata_demo_2fnotification_2fv1_2fnotification_2eproto, 1, file_level_enum_descriptors_demo_2fnotification_2fv1_2fnotification_2eproto, file_level_service_descriptors_demo_2fnotification_2fv1_2fnotification_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_demo_2fnotification_2fv1_2fnotification_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_demo_2fnotification_2fv1_2fnotification_2eproto), true);
namespace demo {
namespace notification {
namespace v1 {

// ===================================================================

void Notification::InitAsDefaultInstance() {
  ::demo::notification::v1::_Notification_default_instance_._instance.get_mutable()->data_ = const_cast< PROTOBUF_NAMESPACE_ID::Any*>(
      PROTOBUF_NAMESPACE_ID::Any::internal_default_instance());
}
class Notification::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Any& data(const Notification* msg);
};

const PROTOBUF_NAMESPACE_ID::Any&
Notification::_Internal::data(const Notification* msg) {
  return *msg->data_;
}
void Notification::clear_data() {
  if (GetArenaNoVirtual() == nullptr && data_ != nullptr) {
    delete data_;
  }
  data_ = nullptr;
}
Notification::Notification()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:demo.notification.v1.Notification)
}
Notification::Notification(const Notification& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  notification_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_notification_id().empty()) {
    notification_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.notification_id_);
  }
  if (from._internal_has_data()) {
    data_ = new PROTOBUF_NAMESPACE_ID::Any(*from.data_);
  } else {
    data_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:demo.notification.v1.Notification)
}

void Notification::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Notification_demo_2fnotification_2fv1_2fnotification_2eproto.base);
  notification_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_ = nullptr;
}

Notification::~Notification() {
  // @@protoc_insertion_point(destructor:demo.notification.v1.Notification)
  SharedDtor();
}

void Notification::SharedDtor() {
  notification_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete data_;
}

void Notification::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Notification& Notification::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Notification_demo_2fnotification_2fv1_2fnotification_2eproto.base);
  return *internal_default_instance();
}


void Notification::Clear() {
// @@protoc_insertion_point(message_clear_start:demo.notification.v1.Notification)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  notification_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && data_ != nullptr) {
    delete data_;
  }
  data_ = nullptr;
  _internal_metadata_.Clear();
}

const char* Notification::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string notification_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_notification_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "demo.notification.v1.Notification.notification_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Any data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_data(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Notification::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:demo.notification.v1.Notification)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string notification_id = 1;
  if (this->notification_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_notification_id().data(), static_cast<int>(this->_internal_notification_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "demo.notification.v1.Notification.notification_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_notification_id(), target);
  }

  // .google.protobuf.Any data = 2;
  if (this->has_data()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::data(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:demo.notification.v1.Notification)
  return target;
}

size_t Notification::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:demo.notification.v1.Notification)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string notification_id = 1;
  if (this->notification_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_notification_id());
  }

  // .google.protobuf.Any data = 2;
  if (this->has_data()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *data_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Notification::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:demo.notification.v1.Notification)
  GOOGLE_DCHECK_NE(&from, this);
  const Notification* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Notification>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:demo.notification.v1.Notification)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:demo.notification.v1.Notification)
    MergeFrom(*source);
  }
}

void Notification::MergeFrom(const Notification& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:demo.notification.v1.Notification)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.notification_id().size() > 0) {

    notification_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.notification_id_);
  }
  if (from.has_data()) {
    _internal_mutable_data()->PROTOBUF_NAMESPACE_ID::Any::MergeFrom(from._internal_data());
  }
}

void Notification::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:demo.notification.v1.Notification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Notification::CopyFrom(const Notification& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:demo.notification.v1.Notification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Notification::IsInitialized() const {
  return true;
}

void Notification::InternalSwap(Notification* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  notification_id_.Swap(&other->notification_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(data_, other->data_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Notification::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace notification
}  // namespace demo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::demo::notification::v1::Notification* Arena::CreateMaybeMessage< ::demo::notification::v1::Notification >(Arena* arena) {
  return Arena::CreateInternal< ::demo::notification::v1::Notification >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
