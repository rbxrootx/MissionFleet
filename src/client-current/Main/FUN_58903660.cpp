// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 51 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903660 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58903660_segment_00() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a2510h
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58903677
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes FF 15 88 C0 98 58: call dword ptr [0x5898c088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test byte ptr [esp + 8], 1
        mov dword ptr [esi], 589a2500h
        ; Exact mapped bytes 74 09: je 0x5890368d
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 B8 95 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
