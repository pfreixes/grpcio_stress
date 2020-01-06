_default: protos
protos:
	python -m grpc_tools.protoc -I. --python_out=. --grpc_python_out=. proto/echo.proto

.PHONY: protos
