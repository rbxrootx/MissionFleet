// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9980 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_004c9980_004C9980() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 A0 99 4C 00: push 0x4c99a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0x4c
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 EF FD FF: call 0x4a88e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
