// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 188 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897b790.

// Ghidra body range 0x5897B790..0x5897B84C; 188 mapped bytes.
extern "C" __declspec(naked) void FUN_5897b790_segment_00() {
    __asm {
        // 0x5897B790: push ebx
        __asm _emit 0x53
        // 0x5897B791: push esi
        __asm _emit 0x56
        // 0x5897B792: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5897B796: push edi
        __asm _emit 0x57
        // 0x5897B797: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5897B799: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897B79B: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5897B79E: push esi
        __asm _emit 0x56
        // 0x5897B79F: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897B7A1: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5897B7A3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5897B7A5: mov dword ptr [esi + 0x13c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B7AB: push esi
        __asm _emit 0x56
        // 0x5897B7AC: mov dword ptr [edi], 0x5897bdd0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0xD0
        __asm _emit 0xBD
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B7B2: mov dword ptr [edi + 4], 0x5897c240
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x40
        __asm _emit 0xC2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B7B9: mov dword ptr [edi + 8], 0x5897c270
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x70
        __asm _emit 0xC2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897B7C0: mov byte ptr [edi + 0xd], bl
        __asm _emit 0x88
        __asm _emit 0x5F
        __asm _emit 0x0D
        // 0x5897B7C3: call 0x5897b850
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B7C8: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B7CE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5897B7D1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5897B7D3: je 0x5897b7e0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5897B7D5: push esi
        __asm _emit 0x56
        // 0x5897B7D6: call 0x5897ba20
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B7DB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B7DE: jmp 0x5897b7f0
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x5897B7E0: mov byte ptr [esi + 0xd4], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B7E6: mov dword ptr [esi + 0xa8], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B7F0: cmp byte ptr [esi + 0xd4], bl
        __asm _emit 0x38
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B7F6: je 0x5897b7ff
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5897B7F8: mov byte ptr [esi + 0xb2], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5897B7FF: cmp byte ptr [esp + 0x14], bl
        __asm _emit 0x38
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897B803: je 0x5897b81f
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5897B805: cmp byte ptr [esi + 0xb2], bl
        __asm _emit 0x38
        __asm _emit 0x9E
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B80B: je 0x5897b816
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5897B80D: mov dword ptr [edi + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B814: jmp 0x5897b822
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5897B816: mov dword ptr [edi + 0x10], 2
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B81D: jmp 0x5897b822
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5897B81F: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x5897B822: mov dword ptr [edi + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x1C
        // 0x5897B825: mov dword ptr [edi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x14
        // 0x5897B828: cmp byte ptr [esi + 0xb2], bl
        __asm _emit 0x38
        __asm _emit 0x9E
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B82E: je 0x5897b83f
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5897B830: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B836: shl ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE1
        // 0x5897B838: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5897B83B: pop edi
        __asm _emit 0x5F
        // 0x5897B83C: pop esi
        __asm _emit 0x5E
        // 0x5897B83D: pop ebx
        __asm _emit 0x5B
        // 0x5897B83E: ret
        __asm _emit 0xC3
        // 0x5897B83F: mov edx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B845: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5897B848: pop edi
        __asm _emit 0x5F
        // 0x5897B849: pop esi
        __asm _emit 0x5E
        // 0x5897B84A: pop ebx
        __asm _emit 0x5B
        // 0x5897B84B: ret
        __asm _emit 0xC3
    }
}
