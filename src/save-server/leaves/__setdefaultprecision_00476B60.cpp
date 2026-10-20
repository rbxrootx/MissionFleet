// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476B60 .. +0x17 bytes.
extern "C" __declspec(naked) void __setdefaultprecision_00476B60() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 00 00 03 00: push 0x30000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 01 00: push 0x10000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 2E 57 00 00: call 0x47c2a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
