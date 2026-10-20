// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883285C .. +0xC bytes.
extern "C" __declspec(naked) void FUN_5883285c() {
    __asm {
        ; Exact mapped bytes 68 28 67 96 58: push 0x58966728
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 D4 43 89 58: call dword ptr [0x588943d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
