// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101027D0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_101027d0_101027D0() {
    __asm {
        ; Exact mapped bytes C7 01 1C 54 17 10: mov dword ptr [ecx], 0x1017541c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x1c
        __asm _emit 0x54
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 B5 C3 FF FF: jmp 0x100feb90
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
