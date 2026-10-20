// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BFE40 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100bfe40_100BFE40() {
    __asm {
        ; Exact mapped bytes C7 01 7C 62 17 10: mov dword ptr [ecx], 0x1017627c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x7c
        __asm _emit 0x62
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 B5 77 F8 FF: jmp 0x10047600
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
