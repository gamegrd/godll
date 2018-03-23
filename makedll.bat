:BEGIN
go build -buildmode=c-archive jwtlibgo.go
gcc -shared -o jwtlib.dll jwtlib.c jwtlibgo.a -lWinMM -lntdll -lWS2_32
pause
goto BEGIN