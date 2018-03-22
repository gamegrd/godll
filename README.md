
### There is a project on github which shows how to create a DLL
````
go build -buildmode=c-archive jwtlibgo.go
gcc -shared -o jwtlib.dll jwtlib.c jwtlibgo.a -lWinMM -lntdll -lWS2_32
````
