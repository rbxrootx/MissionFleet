// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F40D0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100f40d0_100F40D0() {
    __asm {
        ; Exact mapped bytes C7 01 FC 65 17 10: mov dword ptr [ecx], 0x101765fc
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 B5 AA 00 00: jmp 0x100feb90
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
