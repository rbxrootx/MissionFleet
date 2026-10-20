// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10021A20 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10021a20_10021A20() {
    __asm {
        ; Exact mapped bytes C7 01 B4 55 17 10: mov dword ptr [ecx], 0x101755b4
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xb4
        __asm _emit 0x55
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 45 CD 0D 00: jmp 0x100fe770
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xcd
        __asm _emit 0x0d
        __asm _emit 0x00
    }
}
