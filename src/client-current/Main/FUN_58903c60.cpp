// Complete Ghidra body ranges for the selected function.
// 5 discontiguous segments; total 124 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903C60 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58903c60_segment_00() {
    __asm {
        push ebx
        mov bl, byte ptr [esp + 8]
        push esi
        push edi
        mov esi, ecx
        test bl, 2
        ; Exact mapped bytes 74 2A: je 0x58903c98
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esi - 4]
        push 58903a80h
        lea edi, [esi - 4]
        push eax
        push 40h
        push esi
        ; Exact mapped bytes E8 D9 93 07 00: call 0x5897d05b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        test bl, 1
        ; Exact mapped bytes 74 09: je 0x58903c90
        __asm _emit 0x74
        __asm _emit 0x09
        push edi
        ; Exact mapped bytes E8 B5 8F 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903C90 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58903c60_segment_01() {
    __asm {
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        xor edi, edi
        mov dword ptr [esi], 589a2520h
        cmp eax, edi
        ; Exact mapped bytes 74 0C: je 0x58903cb3
        __asm _emit 0x74
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 95 8F 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 10h], edi
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903CB3 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58903c60_segment_02() {
    __asm {
        mov eax, dword ptr [esi + 14h]
        cmp eax, edi
        ; Exact mapped bytes 74 0C: je 0x58903cc6
        __asm _emit 0x74
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 82 8F 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 14h], edi
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903CC6 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58903c60_segment_03() {
    __asm {
        test bl, 1
        ; Exact mapped bytes 74 09: je 0x58903cd4
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 71 8F 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903CD4 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58903c60_segment_04() {
    __asm {
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
