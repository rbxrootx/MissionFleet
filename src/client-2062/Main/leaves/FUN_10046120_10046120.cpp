// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10046120 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10046120_10046120() {
    __asm {
        ; Exact mapped bytes C7 01 F4 59 17 10: mov dword ptr [ecx], 0x101759f4
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xf4
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 F5 CD FF FF: jmp 0x10042f20
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
