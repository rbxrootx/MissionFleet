// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B40F0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_587b40f0() {
    __asm {
        ; Exact mapped bytes C7 01 74 9F 99 58: mov dword ptr [ecx], 0x58999f74
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0x9f
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 95 C4 FF FF: jmp 0x587b0590
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
