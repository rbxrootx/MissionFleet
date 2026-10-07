// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 84 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B3F0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5887b3f0_segment_00() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5C 24 0C: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 2B CE: sub ecx, esi
        __asm _emit 0x2b
        __asm _emit 0xce
        ; Exact mapped bytes B8 79 78 78 78: mov eax, 0x78787879
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 8D 44 4D 00: lea eax, [ebp + ecx*2]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes 3B F3: cmp esi, ebx
        __asm _emit 0x3b
        __asm _emit 0xf3
        ; Exact mapped bytes 74 21: je 0x5887b446
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 2B EE: sub ebp, esi
        __asm _emit 0x2b
        __asm _emit 0xee
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes EB 06: jmp 0x5887b430
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B430 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_5887b3f0_segment_01() {
    __asm {
        ; Exact mapped bytes 8D 3C 2A: lea edi, [edx + ebp]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x2a
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes B9 08 00 00 00: mov ecx, 8
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 83 C2 22: add edx, 0x22
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x22
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 EB: jne 0x5887b430
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
