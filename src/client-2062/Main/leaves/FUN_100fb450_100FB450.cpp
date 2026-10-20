// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB450 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100fb450_100FB450() {
    __asm {
        ; Exact mapped bytes C7 01 88 66 17 10: mov dword ptr [ecx], 0x10176688
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x66
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 75 73 00 00: jmp 0x101027d0
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
