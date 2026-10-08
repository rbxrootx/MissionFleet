// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 84 bytes in 2 exact ranges.
// Source symbol alias: FUN_58772580.

// Ghidra body range 0x58772580..0x587725B9; 57 mapped bytes.
extern "C" __declspec(naked) void FUN_58772580_segment_00() {
    __asm {
        // 0x58772580: push ebx
        __asm _emit 0x53
        // 0x58772581: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58772585: push ebp
        __asm _emit 0x55
        // 0x58772586: push esi
        __asm _emit 0x56
        // 0x58772587: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877258B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5877258D: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x5877258F: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58772594: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58772596: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877259A: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5877259C: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x5877259F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587725A1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587725A4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587725A6: imul eax, eax, 0x118
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587725AC: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587725AE: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587725B0: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x587725B2: je 0x587725d7
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x587725B4: sub ebp, esi
        __asm _emit 0x2B
        __asm _emit 0xEE
        // 0x587725B6: push edi
        __asm _emit 0x57
        // 0x587725B7: jmp 0x587725c0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x587725C0..0x587725DB; 27 mapped bytes.
extern "C" __declspec(naked) void FUN_58772580_segment_01() {
    __asm {
        // 0x587725C0: lea edi, [edx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x2A
        // 0x587725C3: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587725C5: add edx, 0x118
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587725CB: mov ecx, 0x46
        __asm _emit 0xB9
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587725D0: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587725D2: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587725D4: jne 0x587725c0
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x587725D6: pop edi
        __asm _emit 0x5F
        // 0x587725D7: pop esi
        __asm _emit 0x5E
        // 0x587725D8: pop ebp
        __asm _emit 0x5D
        // 0x587725D9: pop ebx
        __asm _emit 0x5B
        // 0x587725DA: ret
        __asm _emit 0xC3
    }
}
