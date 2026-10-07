// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 91 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881FDE0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_5881fde0_segment_00() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 39 44 24 08: cmp dword ptr [esp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 74 37: je 0x5881fe22
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 66 3B 83 9A 0C 00 00: cmp ax, word ptr [ebx + 0xc9a]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x83
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 7D 24: jge 0x5881fe1d
        __asm _emit 0x7d
        __asm _emit 0x24
        ; Exact mapped bytes 8B 2D A4 C1 98 58: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 7B 64: lea edi, [ebx + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 18: je 0x5881fe26
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 0F BF 93 9A 0C 00 00: movsx edx, word ptr [ebx + 0xc9a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x93
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 83 C7 18: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x18
        ; Exact mapped bytes 3B F2: cmp esi, edx
        __asm _emit 0x3b
        __asm _emit 0xf2
        ; Exact mapped bytes 7C E5: jl 0x5881fe02
        __asm _emit 0x7c
        __asm _emit 0xe5
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 76: lea eax, [esi + esi*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x76
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 38 4C C3 64: cmp byte ptr [ebx + eax*8 + 0x64], cl
        __asm _emit 0x38
        __asm _emit 0x4c
        __asm _emit 0xc3
        __asm _emit 0x64
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 0F 95 C1: setne cl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc1
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
