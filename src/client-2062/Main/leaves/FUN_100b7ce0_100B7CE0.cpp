// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B7CE0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100b7ce0_100B7CE0() {
    __asm {
        ; Exact mapped bytes C7 81 B8 00 00 00 00 00 00 40: mov dword ptr [ecx + 0xb8], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
