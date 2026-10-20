// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10024320 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_10024320_10024320() {
    __asm {
        mov eax, dword ptr [ecx + 5ch]
        mov ecx, dword ptr [ecx + 60h]
        push esi
        cmp eax, ecx
        ; Exact mapped bytes 74 15: je 0x10024340
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [esp + 8]
        mov esi, dword ptr [eax]
        mov esi, dword ptr [esi + 8]
        cmp dword ptr [esi + 64h], edx
        ; Exact mapped bytes 74 0D: je 0x10024346
        __asm _emit 0x74
        __asm _emit 0x0d
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 EF: jne 0x1002432f
        __asm _emit 0x75
        __asm _emit 0xef
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
