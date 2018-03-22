package main

import (
    "C"
    "fmt"
    "github.com/axgle/mahonia"
)


//export MakeJWT
func MakeJWT(buffer *C.char)(*C.char) {
    dec := mahonia.NewDecoder("gbk")
    fmt.Println( dec.ConvertString( C.GoString(buffer) ) )
    enc := mahonia.NewEncoder("gbk")
    return C.CString( enc.ConvertString("return 返回 ..."))
}

func main() {

}
 