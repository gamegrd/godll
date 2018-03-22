package main

import (
    "C"
    "fmt"
    "github.com/axgle/mahonia"
)


//export MakeJWT
func MakeJWT(buffer *C.char) {
    dec := mahonia.NewDecoder("gbk")

    fmt.Println( dec.ConvertString( C.GoString(buffer) ) )

}

func main() {

}
 