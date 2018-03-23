package main

 
import (
    "C"
    "fmt"
    "unsafe"
    "github.com/axgle/mahonia"
)


//export MakeJWT
func MakeJWT(buffer *C.char)(*C.char) {
    dec := mahonia.NewDecoder("gbk")
    fmt.Println( dec.ConvertString( C.GoString(buffer) ) )
    enc := mahonia.NewEncoder("gbk")
    return C.CString( enc.ConvertString("MakeJWT 返回 ..."))
}


 

func main() {

}
 