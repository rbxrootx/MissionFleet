// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F42F0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100f42f0_100F42F0() {
    __asm {
        ; Exact mapped bytes C7 01 14 66 17 10: mov dword ptr [ecx], 0x10176614
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x14
        __asm _emit 0x66
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 75 A4 00 00: jmp 0x100fe770
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
