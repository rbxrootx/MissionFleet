// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FE770 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100fe770_100FE770() {
    __asm {
        ; Exact mapped bytes C7 01 F8 51 17 10: mov dword ptr [ecx], 0x101751f8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xf8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 15 04 00 00: jmp 0x100feb90
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
