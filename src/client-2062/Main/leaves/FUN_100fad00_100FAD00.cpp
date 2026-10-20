// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FAD00 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_100fad00_100FAD00() {
    __asm {
        mov eax, dword ptr [ecx + 14h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x100fad1a
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [eax + 0ch]
        cmp dword ptr [edx + 50h], ecx
        ; Exact mapped bytes 74 0C: je 0x100fad1f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 8]
        test eax, eax
        ; Exact mapped bytes 75 F1: jne 0x100fad0b
        __asm _emit 0x75
        __asm _emit 0xf1
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
