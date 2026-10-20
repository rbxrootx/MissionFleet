// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004723A0 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_004723a0_004723A0() {
    __asm {
        ; Exact mapped bytes 83 7D E4 00: cmp dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x4723ae
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x47246c
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x472441
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
