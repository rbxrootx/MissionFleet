// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004359E0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_004359e0_004359E0() {
    __asm {
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 83 88 D4 00 00 00 FF: or dword ptr [eax + 0xd4], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 83 88 04 01 00 00 FF: or dword ptr [eax + 0x104], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 F0 D6 43 00: mov dword ptr [eax], 0x43d6f0
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0xd6
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
