// Code generated by protoc-gen-go. DO NOT EDIT.
// source: demo/notification/v1/notification_api.proto

package notificationv1

import (
	context "context"
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	grpc "google.golang.org/grpc"
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

type SubscribeRequest struct {
	// Scope of subscription as a wild card. (default: '*' for all notifications)
	Scope                string   `protobuf:"bytes,1,opt,name=scope,proto3" json:"scope,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *SubscribeRequest) Reset()         { *m = SubscribeRequest{} }
func (m *SubscribeRequest) String() string { return proto.CompactTextString(m) }
func (*SubscribeRequest) ProtoMessage()    {}
func (*SubscribeRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_630f8bd015d57249, []int{0}
}

func (m *SubscribeRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SubscribeRequest.Unmarshal(m, b)
}
func (m *SubscribeRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SubscribeRequest.Marshal(b, m, deterministic)
}
func (m *SubscribeRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SubscribeRequest.Merge(m, src)
}
func (m *SubscribeRequest) XXX_Size() int {
	return xxx_messageInfo_SubscribeRequest.Size(m)
}
func (m *SubscribeRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_SubscribeRequest.DiscardUnknown(m)
}

var xxx_messageInfo_SubscribeRequest proto.InternalMessageInfo

func (m *SubscribeRequest) GetScope() string {
	if m != nil {
		return m.Scope
	}
	return ""
}

func init() {
	proto.RegisterType((*SubscribeRequest)(nil), "demo.notification.v1.SubscribeRequest")
}

func init() {
	proto.RegisterFile("demo/notification/v1/notification_api.proto", fileDescriptor_630f8bd015d57249)
}

var fileDescriptor_630f8bd015d57249 = []byte{
	// 202 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0xd2, 0x4e, 0x49, 0xcd, 0xcd,
	0xd7, 0xcf, 0xcb, 0x2f, 0xc9, 0x4c, 0xcb, 0x4c, 0x4e, 0x2c, 0xc9, 0xcc, 0xcf, 0xd3, 0x2f, 0x33,
	0x44, 0xe1, 0xc7, 0x27, 0x16, 0x64, 0xea, 0x15, 0x14, 0xe5, 0x97, 0xe4, 0x0b, 0x89, 0x80, 0x14,
	0xeb, 0x21, 0x4b, 0xea, 0x95, 0x19, 0x4a, 0xa9, 0x13, 0x34, 0x02, 0xa2, 0x5d, 0x49, 0x83, 0x4b,
	0x20, 0xb8, 0x34, 0xa9, 0x38, 0xb9, 0x28, 0x33, 0x29, 0x35, 0x28, 0xb5, 0xb0, 0x34, 0xb5, 0xb8,
	0x44, 0x48, 0x84, 0x8b, 0xb5, 0x38, 0x39, 0xbf, 0x20, 0x55, 0x82, 0x51, 0x81, 0x51, 0x83, 0x33,
	0x08, 0xc2, 0x31, 0xca, 0xe1, 0xe2, 0xf7, 0x43, 0xd2, 0xef, 0x58, 0x90, 0x29, 0x14, 0xc9, 0xc5,
	0x09, 0xd7, 0x2c, 0xa4, 0xa6, 0x87, 0xcd, 0x25, 0x7a, 0xe8, 0xa6, 0x4b, 0x29, 0x61, 0x57, 0x87,
	0x6c, 0xb6, 0x01, 0xa3, 0x53, 0x19, 0x97, 0x44, 0x72, 0x7e, 0x2e, 0x56, 0xa5, 0x4e, 0x22, 0x68,
	0xee, 0x08, 0x00, 0xf9, 0x24, 0x80, 0x31, 0x8a, 0x0f, 0x59, 0x61, 0x99, 0xe1, 0x22, 0x26, 0x66,
	0x17, 0xbf, 0x88, 0x55, 0x4c, 0x22, 0x2e, 0x20, 0x43, 0x90, 0xf5, 0xe8, 0x85, 0x19, 0x9e, 0x82,
	0x08, 0xc7, 0x20, 0x0b, 0xc7, 0x84, 0x19, 0x26, 0xb1, 0x81, 0x83, 0xc5, 0x18, 0x10, 0x00, 0x00,
	0xff, 0xff, 0xcd, 0x86, 0x65, 0x08, 0x84, 0x01, 0x00, 0x00,
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// NotificationApiClient is the client API for NotificationApi service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type NotificationApiClient interface {
	Subscribe(ctx context.Context, in *SubscribeRequest, opts ...grpc.CallOption) (NotificationApi_SubscribeClient, error)
}

type notificationApiClient struct {
	cc *grpc.ClientConn
}

func NewNotificationApiClient(cc *grpc.ClientConn) NotificationApiClient {
	return &notificationApiClient{cc}
}

func (c *notificationApiClient) Subscribe(ctx context.Context, in *SubscribeRequest, opts ...grpc.CallOption) (NotificationApi_SubscribeClient, error) {
	stream, err := c.cc.NewStream(ctx, &_NotificationApi_serviceDesc.Streams[0], "/demo.notification.v1.NotificationApi/Subscribe", opts...)
	if err != nil {
		return nil, err
	}
	x := &notificationApiSubscribeClient{stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

type NotificationApi_SubscribeClient interface {
	Recv() (*Notification, error)
	grpc.ClientStream
}

type notificationApiSubscribeClient struct {
	grpc.ClientStream
}

func (x *notificationApiSubscribeClient) Recv() (*Notification, error) {
	m := new(Notification)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

// NotificationApiServer is the server API for NotificationApi service.
type NotificationApiServer interface {
	Subscribe(*SubscribeRequest, NotificationApi_SubscribeServer) error
}

func RegisterNotificationApiServer(s *grpc.Server, srv NotificationApiServer) {
	s.RegisterService(&_NotificationApi_serviceDesc, srv)
}

func _NotificationApi_Subscribe_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(SubscribeRequest)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(NotificationApiServer).Subscribe(m, &notificationApiSubscribeServer{stream})
}

type NotificationApi_SubscribeServer interface {
	Send(*Notification) error
	grpc.ServerStream
}

type notificationApiSubscribeServer struct {
	grpc.ServerStream
}

func (x *notificationApiSubscribeServer) Send(m *Notification) error {
	return x.ServerStream.SendMsg(m)
}

var _NotificationApi_serviceDesc = grpc.ServiceDesc{
	ServiceName: "demo.notification.v1.NotificationApi",
	HandlerType: (*NotificationApiServer)(nil),
	Methods:     []grpc.MethodDesc{},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "Subscribe",
			Handler:       _NotificationApi_Subscribe_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "demo/notification/v1/notification_api.proto",
}
