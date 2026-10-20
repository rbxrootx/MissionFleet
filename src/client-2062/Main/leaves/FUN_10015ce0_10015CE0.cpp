// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10015CE0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10015ce0_10015CE0() {
    __asm {
        ; Exact mapped bytes C7 01 34 54 17 10: mov dword ptr [ecx], 0x10175434
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x34
        __asm _emit 0x54
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 85 8A 0E 00: jmp 0x100fe770
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}
