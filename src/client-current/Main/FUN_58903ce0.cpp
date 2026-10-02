// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 44 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903CE0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58903ce0_segment_00() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a2528h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58903cf9
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 A0 92 07 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x92
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58903d09
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 3C 8F 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
