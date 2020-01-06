_default: cpp_server

CXX = g++
CXXFLAGS += -I/Users/paufreixes/skyscanner/grpc/include -I/Users/paufreixes/skyscanner/grpc/third_party/protobuf/src
CXXFLAGS += -std=c++11
LDFLAGS += -L/Users/paufreixes/skyscanner/grpc/libs/opt\
		   -L/Users/paufreixes/skyscanner/grpc/libs/opt/protobuf\
		   -lgrpc\
           -lgrpc++\
		   -lprotobuf\
           -ldl

clean:
	rm *.o cpp_server

cpp_server: echo.pb.o echo.grpc.pb.o cpp_server.o
	$(CXX) $^ $(LDFLAGS) -o $@

protos:
	/Users/paufreixes/skyscanner/grpc/bins/opt/protobuf/protoc -I ../proto/ --cpp_out=. ../proto/echo.proto
	/Users/paufreixes/skyscanner/grpc/bins/opt/protobuf/protoc -I ../proto/ --grpc_out=. --plugin=protoc-gen-grpc=/Users/paufreixes/skyscanner/grpc/bins/opt/grpc_cpp_plugin ../proto/echo.proto

run:
	DYLD_LIBRARY_PATH=/Users/paufreixes/skyscanner/grpc/libs/opt ./cpp_server

.PHONY: protos cpp_server
