// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F2B324 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_58f2b324() {
    __asm {
        ; Exact mapped bytes 0F 85 67 0E DF FF: jne 0x58d1c191
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x0e
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 03 61: cmp byte ptr [eax + ecx + 3], 0x61
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x61
        ; Exact mapped bytes E9 24 06 00 00: jmp 0x58f2b958
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F C8: bswap eax
        __asm _emit 0x0f
        __asm _emit 0xc8
        ; Exact mapped bytes D1 C8: ror eax, 1
        __asm _emit 0xd1
        __asm _emit 0xc8
        ; Exact mapped bytes 66 85 DE: test si, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xde
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 35 3B 1E EB 40: xor eax, 0x40eb1e3b
        __asm _emit 0x35
        __asm _emit 0x3b
        __asm _emit 0x1e
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes D1 C0: rol eax, 1
        __asm _emit 0xd1
        __asm _emit 0xc0
    }
}
