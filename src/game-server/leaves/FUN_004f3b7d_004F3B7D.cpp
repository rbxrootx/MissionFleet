// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F3B7D .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_004f3b7d_004F3B7D() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 00 18 00 00: push 0x1800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 CC 5D 00: push 0x5dcc00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xcc
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 DF 57 FB FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x57
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
