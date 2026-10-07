// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 90 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887b450.

// Ghidra body range 0x5887B450..0x5887B4AA; 90 mapped bytes.
extern "C" __declspec(naked) void FUN_5887b450_segment_00() {
    __asm {
        // 0x5887B450: push ebx
        __asm _emit 0x53
        // 0x5887B451: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5887B455: push ebp
        __asm _emit 0x55
        // 0x5887B456: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5887B45A: push esi
        __asm _emit 0x56
        // 0x5887B45B: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5887B45F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887B461: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x5887B463: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x5887B468: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5887B46A: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5887B46D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5887B46F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5887B472: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5887B474: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5887B476: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5887B479: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x5887B47B: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5887B47D: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5887B47F: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5887B481: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5887B483: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x5887B485: je 0x5887b4a6
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x5887B487: sub ebp, esi
        __asm _emit 0x2B
        __asm _emit 0xEE
        // 0x5887B489: push edi
        __asm _emit 0x57
        // 0x5887B48A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887B490: sub edx, 0x22
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x22
        // 0x5887B493: lea edi, [edx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x2A
        // 0x5887B496: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887B49B: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5887B49D: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5887B49F: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xA5
        // 0x5887B4A1: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5887B4A3: jne 0x5887b490
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5887B4A5: pop edi
        __asm _emit 0x5F
        // 0x5887B4A6: pop esi
        __asm _emit 0x5E
        // 0x5887B4A7: pop ebp
        __asm _emit 0x5D
        // 0x5887B4A8: pop ebx
        __asm _emit 0x5B
        // 0x5887B4A9: ret
        __asm _emit 0xC3
    }
}
