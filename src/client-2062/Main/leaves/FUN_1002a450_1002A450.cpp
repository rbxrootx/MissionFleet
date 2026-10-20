// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002A450 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_1002a450_1002A450() {
    __asm {
        ; Exact mapped bytes C7 01 EC 56 17 10: mov dword ptr [ecx], 0x101756ec
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 45 44 0D 00: jmp 0x100fe8a0
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
    }
}
