// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10017AA0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10017aa0_10017AA0() {
    __asm {
        ; Exact mapped bytes C7 01 D0 54 17 10: mov dword ptr [ecx], 0x101754d0
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xd0
        __asm _emit 0x54
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 95 F9 FF FF: jmp 0x10017440
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
