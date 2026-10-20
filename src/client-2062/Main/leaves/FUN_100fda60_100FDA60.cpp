// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FDA60 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100fda60_100FDA60() {
    __asm {
        ; Exact mapped bytes C7 01 04 67 17 10: mov dword ptr [ecx], 0x10176704
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 25 11 00 00: jmp 0x100feb90
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
