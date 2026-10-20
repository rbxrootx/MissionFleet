// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890C210 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5890c210() {
    __asm {
        ; Exact mapped bytes C7 01 78 2C 9A 58: mov dword ptr [ecx], 0x589a2c78
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x78
        __asm _emit 0x2c
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E9 85 05 00 00: jmp 0x5890c7a0
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
