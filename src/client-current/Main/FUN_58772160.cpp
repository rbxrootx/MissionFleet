// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 164 bytes in 2 exact ranges.
// Source symbol alias: FUN_58772160.

// Ghidra body range 0x58772160..0x58772189; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_58772160_segment_00() {
    __asm {
        // 0x58772160: push ebx
        __asm _emit 0x53
        // 0x58772161: push ebp
        __asm _emit 0x55
        // 0x58772162: push esi
        __asm _emit 0x56
        // 0x58772163: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58772165: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x58772168: sub ecx, dword ptr [esi + 0x24]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5877216B: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58772170: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58772172: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58772175: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58772177: push edi
        __asm _emit 0x57
        // 0x58772178: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5877217B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5877217D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5877217F: je 0x587721db
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x58772181: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772185: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58772187: jmp 0x58772190
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58772190..0x5877220B; 123 mapped bytes.
extern "C" __declspec(naked) void FUN_58772160_segment_01() {
    __asm {
        // 0x58772190: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x58772193: sub ecx, dword ptr [esi + 0x24]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58772196: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x5877219B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5877219D: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587721A0: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587721A2: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587721A5: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587721A7: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587721A9: jb 0x587721b0
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587721AB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xAA
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587721B0: mov edx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587721B3: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x587721B6: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587721B8: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x587721BD: cmp dword ptr [edx + ebx + 0x104], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0x1A
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587721C4: je 0x587721e4
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587721C6: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587721C8: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587721CB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587721CD: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587721D0: inc edi
        __asm _emit 0x47
        // 0x587721D1: add ebx, 0x108
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587721D7: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587721D9: jne 0x58772190
        __asm _emit 0x75
        __asm _emit 0xB5
        // 0x587721DB: pop edi
        __asm _emit 0x5F
        // 0x587721DC: pop esi
        __asm _emit 0x5E
        // 0x587721DD: pop ebp
        __asm _emit 0x5D
        // 0x587721DE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587721E0: pop ebx
        __asm _emit 0x5B
        // 0x587721E1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587721E4: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587721E6: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587721E9: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587721EB: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587721EE: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587721F0: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587721F2: jb 0x587721f9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587721F4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xAA
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587721F9: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587721FB: imul eax, eax, 0x108
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772201: add eax, dword ptr [esi + 0x24]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58772204: pop edi
        __asm _emit 0x5F
        // 0x58772205: pop esi
        __asm _emit 0x5E
        // 0x58772206: pop ebp
        __asm _emit 0x5D
        // 0x58772207: pop ebx
        __asm _emit 0x5B
        // 0x58772208: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
