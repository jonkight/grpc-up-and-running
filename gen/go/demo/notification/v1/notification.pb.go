// Code generated by protoc-gen-go. DO NOT EDIT.
// source: demo/notification/v1/notification.proto

package notificationv1

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	any "github.com/golang/protobuf/ptypes/any"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

// Represents a wrapper for a notification.
type Notification struct {
	// Unique identifier for the notification.
	NotificationId string `protobuf:"bytes,1,opt,name=notification_id,json=notificationId,proto3" json:"notification_id,omitempty"`
	// Generic message data that contains the notification.
	Data                 *any.Any `protobuf:"bytes,2,opt,name=data,proto3" json:"data,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Notification) Reset()         { *m = Notification{} }
func (m *Notification) String() string { return proto.CompactTextString(m) }
func (*Notification) ProtoMessage()    {}
func (*Notification) Descriptor() ([]byte, []int) {
	return fileDescriptor_685ad63db91f96ff, []int{0}
}

func (m *Notification) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Notification.Unmarshal(m, b)
}
func (m *Notification) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Notification.Marshal(b, m, deterministic)
}
func (m *Notification) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Notification.Merge(m, src)
}
func (m *Notification) XXX_Size() int {
	return xxx_messageInfo_Notification.Size(m)
}
func (m *Notification) XXX_DiscardUnknown() {
	xxx_messageInfo_Notification.DiscardUnknown(m)
}

var xxx_messageInfo_Notification proto.InternalMessageInfo

func (m *Notification) GetNotificationId() string {
	if m != nil {
		return m.NotificationId
	}
	return ""
}

func (m *Notification) GetData() *any.Any {
	if m != nil {
		return m.Data
	}
	return nil
}

func init() {
	proto.RegisterType((*Notification)(nil), "demo.notification.v1.Notification")
}

func init() {
	proto.RegisterFile("demo/notification/v1/notification.proto", fileDescriptor_685ad63db91f96ff)
}

var fileDescriptor_685ad63db91f96ff = []byte{
	// 197 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x52, 0x4f, 0x49, 0xcd, 0xcd,
	0xd7, 0xcf, 0xcb, 0x2f, 0xc9, 0x4c, 0xcb, 0x4c, 0x4e, 0x2c, 0xc9, 0xcc, 0xcf, 0xd3, 0x2f, 0x33,
	0x44, 0xe1, 0xeb, 0x15, 0x14, 0xe5, 0x97, 0xe4, 0x0b, 0x89, 0x80, 0x14, 0xea, 0xa1, 0x48, 0x94,
	0x19, 0x4a, 0x49, 0xa6, 0xe7, 0xe7, 0xa7, 0xe7, 0xa4, 0xea, 0x83, 0xd5, 0x24, 0x95, 0xa6, 0xe9,
	0x27, 0xe6, 0x55, 0x42, 0x34, 0x28, 0x25, 0x72, 0xf1, 0xf8, 0x21, 0xa9, 0x16, 0x52, 0xe7, 0xe2,
	0x47, 0xd6, 0x1d, 0x9f, 0x99, 0x22, 0xc1, 0xa8, 0xc0, 0xa8, 0xc1, 0x19, 0xc4, 0x87, 0x2c, 0xec,
	0x99, 0x22, 0xa4, 0xc1, 0xc5, 0x92, 0x92, 0x58, 0x92, 0x28, 0xc1, 0xa4, 0xc0, 0xa8, 0xc1, 0x6d,
	0x24, 0xa2, 0x07, 0xb1, 0x42, 0x0f, 0x66, 0x85, 0x9e, 0x63, 0x5e, 0x65, 0x10, 0x58, 0x85, 0x53,
	0x31, 0x97, 0x44, 0x72, 0x7e, 0xae, 0x1e, 0x36, 0x97, 0x39, 0x09, 0x22, 0x5b, 0x1e, 0x00, 0xd2,
	0x1b, 0xc0, 0x18, 0x85, 0x62, 0x55, 0x99, 0xe1, 0x22, 0x26, 0x66, 0x17, 0xbf, 0x88, 0x55, 0x4c,
	0x22, 0x2e, 0x20, 0x13, 0x90, 0x35, 0xe8, 0x85, 0x19, 0x9e, 0x82, 0x08, 0xc7, 0x20, 0x0b, 0xc7,
	0x84, 0x19, 0x26, 0xb1, 0x81, 0x1d, 0x62, 0x0c, 0x08, 0x00, 0x00, 0xff, 0xff, 0xd2, 0x77, 0x0e,
	0x93, 0x3a, 0x01, 0x00, 0x00,
}
