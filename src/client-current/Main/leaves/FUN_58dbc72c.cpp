// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58DBC72C .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_58dbc72c() {
    __asm {
        ; Exact mapped bytes D3 C3: rol ebx, cl
        __asm _emit 0xd3
        __asm _emit 0xc3
        ; Exact mapped bytes D2 C1: rol cl, cl
        __asm _emit 0xd2
        __asm _emit 0xc1
        ; Exact mapped bytes 02 DA: add bl, dl
        __asm _emit 0x02
        __asm _emit 0xda
        ; Exact mapped bytes F7 C5 AF 1B DB 08: test ebp, 0x8db1baf
        __asm _emit 0xf7
        __asm _emit 0xc5
        __asm _emit 0xaf
        __asm _emit 0x1b
        __asm _emit 0xdb
        __asm _emit 0x08
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 80 E9 3E: sub cl, 0x3e
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0x3e
        ; Exact mapped bytes 32 C3: xor al, bl
        __asm _emit 0x32
        __asm _emit 0xc3
        ; Exact mapped bytes C0 E1 E8: shl cl, 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe1
        __asm _emit 0xe8
        ; Exact mapped bytes F6 D9: neg cl
        __asm _emit 0xf6
        __asm _emit 0xd9
        ; Exact mapped bytes 8A C8: mov cl, al
        __asm _emit 0x8a
        __asm _emit 0xc8
        ; Exact mapped bytes E9 1F B7 FC FF: jmp 0x58d87e69
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xff
    }
}
