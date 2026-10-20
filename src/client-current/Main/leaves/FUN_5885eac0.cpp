// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885EAC0 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_5885eac0() {
    __asm {
        ; Exact mapped bytes C7 81 B0 00 00 00 00 00 00 00: mov dword ptr [ecx + 0xb0], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
