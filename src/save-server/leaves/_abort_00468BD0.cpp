// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468BD0 .. +0x20 bytes.
extern "C" __declspec(naked) void _abort_00468BD0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes E8 76 92 00 00: call 0x471e50
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 6A 16: push 0x16
        __asm _emit 0x6a
        __asm _emit 0x16
        ; Exact mapped bytes E8 3C D0 00 00: call 0x475c20
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes E8 42 14 00 00: call 0x46a030
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
