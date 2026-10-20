// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584811C0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_584811c0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 30 24 96 58: mov ecx, 0x58962430
        __asm _emit 0xb9
        __asm _emit 0x30
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 01 11 00: call 0x58591340
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 68 C0 2E 89 58: push 0x58892ec0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x2e
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 08 3B 00: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x08
        __asm _emit 0x3b
        __asm _emit 0x00
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
