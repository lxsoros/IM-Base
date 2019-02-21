// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "IM.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace muduo {

namespace {

const ::google::protobuf::Descriptor* Query_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Query_reflection_ = NULL;
const ::google::protobuf::Descriptor* Answer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Answer_reflection_ = NULL;
const ::google::protobuf::Descriptor* Empty_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Empty_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_IM_2eproto() {
  protobuf_AddDesc_IM_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "IM.proto");
  GOOGLE_CHECK(file != NULL);
  Query_descriptor_ = file->message_type(0);
  static const int Query_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Query, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Query, questioner_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Query, question_),
  };
  Query_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Query_descriptor_,
      Query::default_instance_,
      Query_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Query, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Query, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Query));
  Answer_descriptor_ = file->message_type(1);
  static const int Answer_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Answer, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Answer, questioner_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Answer, answerer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Answer, solution_),
  };
  Answer_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Answer_descriptor_,
      Answer::default_instance_,
      Answer_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Answer, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Answer, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Answer));
  Empty_descriptor_ = file->message_type(2);
  static const int Empty_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Empty, id_),
  };
  Empty_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Empty_descriptor_,
      Empty::default_instance_,
      Empty_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Empty, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Empty, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Empty));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_IM_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Query_descriptor_, &Query::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Answer_descriptor_, &Answer::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Empty_descriptor_, &Empty::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_IM_2eproto() {
  delete Query::default_instance_;
  delete Query_reflection_;
  delete Answer::default_instance_;
  delete Answer_reflection_;
  delete Empty::default_instance_;
  delete Empty_reflection_;
}

void protobuf_AddDesc_IM_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\010IM.proto\022\005muduo\"9\n\005Query\022\n\n\002id\030\001 \002(\003\022\022"
    "\n\nquestioner\030\002 \002(\t\022\020\n\010question\030\003 \003(\t\"L\n\006"
    "Answer\022\n\n\002id\030\001 \002(\003\022\022\n\nquestioner\030\002 \002(\t\022\020"
    "\n\010answerer\030\003 \002(\t\022\020\n\010solution\030\004 \003(\t\"\023\n\005Em"
    "pty\022\n\n\002id\030\001 \001(\005", 175);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "IM.proto", &protobuf_RegisterTypes);
  Query::default_instance_ = new Query();
  Answer::default_instance_ = new Answer();
  Empty::default_instance_ = new Empty();
  Query::default_instance_->InitAsDefaultInstance();
  Answer::default_instance_->InitAsDefaultInstance();
  Empty::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_IM_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_IM_2eproto {
  StaticDescriptorInitializer_IM_2eproto() {
    protobuf_AddDesc_IM_2eproto();
  }
} static_descriptor_initializer_IM_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Query::kIdFieldNumber;
const int Query::kQuestionerFieldNumber;
const int Query::kQuestionFieldNumber;
#endif  // !_MSC_VER

Query::Query()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:muduo.Query)
}

void Query::InitAsDefaultInstance() {
}

Query::Query(const Query& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:muduo.Query)
}

void Query::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = GOOGLE_LONGLONG(0);
  questioner_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Query::~Query() {
  // @@protoc_insertion_point(destructor:muduo.Query)
  SharedDtor();
}

void Query::SharedDtor() {
  if (questioner_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete questioner_;
  }
  if (this != default_instance_) {
  }
}

void Query::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Query::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Query_descriptor_;
}

const Query& Query::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_IM_2eproto();
  return *default_instance_;
}

Query* Query::default_instance_ = NULL;

Query* Query::New() const {
  return new Query;
}

void Query::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    id_ = GOOGLE_LONGLONG(0);
    if (has_questioner()) {
      if (questioner_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        questioner_->clear();
      }
    }
  }
  question_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Query::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:muduo.Query)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_questioner;
        break;
      }

      // required string questioner = 2;
      case 2: {
        if (tag == 18) {
         parse_questioner:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_questioner()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->questioner().data(), this->questioner().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "questioner");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_question;
        break;
      }

      // repeated string question = 3;
      case 3: {
        if (tag == 26) {
         parse_question:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_question()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->question(this->question_size() - 1).data(),
            this->question(this->question_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "question");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_question;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:muduo.Query)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:muduo.Query)
  return false;
#undef DO_
}

void Query::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:muduo.Query)
  // required int64 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // required string questioner = 2;
  if (has_questioner()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->questioner().data(), this->questioner().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "questioner");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->questioner(), output);
  }

  // repeated string question = 3;
  for (int i = 0; i < this->question_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->question(i).data(), this->question(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "question");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->question(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:muduo.Query)
}

::google::protobuf::uint8* Query::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:muduo.Query)
  // required int64 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->id(), target);
  }

  // required string questioner = 2;
  if (has_questioner()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->questioner().data(), this->questioner().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "questioner");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->questioner(), target);
  }

  // repeated string question = 3;
  for (int i = 0; i < this->question_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->question(i).data(), this->question(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "question");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->question(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:muduo.Query)
  return target;
}

int Query::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->id());
    }

    // required string questioner = 2;
    if (has_questioner()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->questioner());
    }

  }
  // repeated string question = 3;
  total_size += 1 * this->question_size();
  for (int i = 0; i < this->question_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->question(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Query::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Query* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Query*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Query::MergeFrom(const Query& from) {
  GOOGLE_CHECK_NE(&from, this);
  question_.MergeFrom(from.question_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_questioner()) {
      set_questioner(from.questioner());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Query::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Query::CopyFrom(const Query& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Query::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void Query::Swap(Query* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(questioner_, other->questioner_);
    question_.Swap(&other->question_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Query::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Query_descriptor_;
  metadata.reflection = Query_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Answer::kIdFieldNumber;
const int Answer::kQuestionerFieldNumber;
const int Answer::kAnswererFieldNumber;
const int Answer::kSolutionFieldNumber;
#endif  // !_MSC_VER

Answer::Answer()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:muduo.Answer)
}

void Answer::InitAsDefaultInstance() {
}

Answer::Answer(const Answer& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:muduo.Answer)
}

void Answer::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = GOOGLE_LONGLONG(0);
  questioner_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  answerer_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Answer::~Answer() {
  // @@protoc_insertion_point(destructor:muduo.Answer)
  SharedDtor();
}

void Answer::SharedDtor() {
  if (questioner_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete questioner_;
  }
  if (answerer_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete answerer_;
  }
  if (this != default_instance_) {
  }
}

void Answer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Answer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Answer_descriptor_;
}

const Answer& Answer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_IM_2eproto();
  return *default_instance_;
}

Answer* Answer::default_instance_ = NULL;

Answer* Answer::New() const {
  return new Answer;
}

void Answer::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    id_ = GOOGLE_LONGLONG(0);
    if (has_questioner()) {
      if (questioner_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        questioner_->clear();
      }
    }
    if (has_answerer()) {
      if (answerer_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        answerer_->clear();
      }
    }
  }
  solution_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Answer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:muduo.Answer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_questioner;
        break;
      }

      // required string questioner = 2;
      case 2: {
        if (tag == 18) {
         parse_questioner:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_questioner()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->questioner().data(), this->questioner().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "questioner");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_answerer;
        break;
      }

      // required string answerer = 3;
      case 3: {
        if (tag == 26) {
         parse_answerer:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_answerer()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->answerer().data(), this->answerer().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "answerer");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_solution;
        break;
      }

      // repeated string solution = 4;
      case 4: {
        if (tag == 34) {
         parse_solution:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_solution()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->solution(this->solution_size() - 1).data(),
            this->solution(this->solution_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "solution");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_solution;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:muduo.Answer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:muduo.Answer)
  return false;
#undef DO_
}

void Answer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:muduo.Answer)
  // required int64 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // required string questioner = 2;
  if (has_questioner()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->questioner().data(), this->questioner().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "questioner");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->questioner(), output);
  }

  // required string answerer = 3;
  if (has_answerer()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->answerer().data(), this->answerer().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "answerer");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->answerer(), output);
  }

  // repeated string solution = 4;
  for (int i = 0; i < this->solution_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->solution(i).data(), this->solution(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "solution");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->solution(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:muduo.Answer)
}

::google::protobuf::uint8* Answer::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:muduo.Answer)
  // required int64 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->id(), target);
  }

  // required string questioner = 2;
  if (has_questioner()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->questioner().data(), this->questioner().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "questioner");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->questioner(), target);
  }

  // required string answerer = 3;
  if (has_answerer()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->answerer().data(), this->answerer().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "answerer");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->answerer(), target);
  }

  // repeated string solution = 4;
  for (int i = 0; i < this->solution_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->solution(i).data(), this->solution(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "solution");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(4, this->solution(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:muduo.Answer)
  return target;
}

int Answer::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->id());
    }

    // required string questioner = 2;
    if (has_questioner()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->questioner());
    }

    // required string answerer = 3;
    if (has_answerer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->answerer());
    }

  }
  // repeated string solution = 4;
  total_size += 1 * this->solution_size();
  for (int i = 0; i < this->solution_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->solution(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Answer::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Answer* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Answer*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Answer::MergeFrom(const Answer& from) {
  GOOGLE_CHECK_NE(&from, this);
  solution_.MergeFrom(from.solution_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_questioner()) {
      set_questioner(from.questioner());
    }
    if (from.has_answerer()) {
      set_answerer(from.answerer());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Answer::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Answer::CopyFrom(const Answer& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Answer::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void Answer::Swap(Answer* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(questioner_, other->questioner_);
    std::swap(answerer_, other->answerer_);
    solution_.Swap(&other->solution_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Answer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Answer_descriptor_;
  metadata.reflection = Answer_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Empty::kIdFieldNumber;
#endif  // !_MSC_VER

Empty::Empty()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:muduo.Empty)
}

void Empty::InitAsDefaultInstance() {
}

Empty::Empty(const Empty& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:muduo.Empty)
}

void Empty::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Empty::~Empty() {
  // @@protoc_insertion_point(destructor:muduo.Empty)
  SharedDtor();
}

void Empty::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Empty::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Empty::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Empty_descriptor_;
}

const Empty& Empty::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_IM_2eproto();
  return *default_instance_;
}

Empty* Empty::default_instance_ = NULL;

Empty* Empty::New() const {
  return new Empty;
}

void Empty::Clear() {
  id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Empty::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:muduo.Empty)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:muduo.Empty)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:muduo.Empty)
  return false;
#undef DO_
}

void Empty::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:muduo.Empty)
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:muduo.Empty)
}

::google::protobuf::uint8* Empty::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:muduo.Empty)
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:muduo.Empty)
  return target;
}

int Empty::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Empty::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Empty* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Empty*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Empty::MergeFrom(const Empty& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Empty::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Empty::CopyFrom(const Empty& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Empty::IsInitialized() const {

  return true;
}

void Empty::Swap(Empty* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Empty::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Empty_descriptor_;
  metadata.reflection = Empty_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace muduo

// @@protoc_insertion_point(global_scope)
