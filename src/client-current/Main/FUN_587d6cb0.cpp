// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 251 bytes in 1 exact ranges.
// Source symbol alias: FUN_587d6cb0.

// Ghidra body range 0x587D6CB0..0x587D6DAB; 251 mapped bytes.
extern "C" __declspec(naked) void FUN_587d6cb0_segment_00() {
    __asm {
        // 0x587D6CB0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587D6CB2: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D6CB7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6CBD: push eax
        __asm _emit 0x50
        // 0x587D6CBE: push ecx
        __asm _emit 0x51
        // 0x587D6CBF: push esi
        __asm _emit 0x56
        // 0x587D6CC0: push edi
        __asm _emit 0x57
        // 0x587D6CC1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D6CC6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587D6CC8: push eax
        __asm _emit 0x50
        // 0x587D6CC9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D6CCD: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6CD3: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587D6CD5: mov ecx, dword ptr [edi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6CDB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D6CDD: je 0x587d6cf1
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587D6CDF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D6CE1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587D6CE3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D6CE5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D6CE7: mov dword ptr [edi + 0xdb4], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6CF1: push 0x1a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6CF6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x5F
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D6CFB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D6CFE: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587D6D02: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6D0A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D6D0C: je 0x587d6d2a
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587D6D0E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587D6D10: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D6D12: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D6D14: push 0x225
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6D19: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6D1E: push edi
        __asm _emit 0x57
        // 0x587D6D1F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D6D21: call 0x58872030
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xB3
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587D6D26: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587D6D28: jmp 0x587d6d2c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D6D2A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587D6D2C: mov dword ptr [edi + 0xdb4], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6D32: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587D6D35: mov eax, 0x428
        __asm _emit 0xB8
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6D3A: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D6D42: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x587D6D46: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D6D48: je 0x587d6d50
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D6D4A: push esi
        __asm _emit 0x56
        // 0x587D6D4B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xC2
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D6D50: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587D6D53: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D6D55: je 0x587d6d5d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D6D57: push esi
        __asm _emit 0x56
        // 0x587D6D58: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D6D5D: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D6D62: cmp dword ptr [eax + 0x170], 0xc
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x587D6D69: jle 0x587d6d7f
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587D6D6B: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6D72: je 0x587d6d7f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D6D74: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6D7A: mov eax, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x587D6D7D: jmp 0x587d6d81
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D6D7F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D6D81: mov ecx, dword ptr [edi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6D87: push eax
        __asm _emit 0x50
        // 0x587D6D88: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D6D8A: call 0x587b6070
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xF2
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587D6D8F: mov dword ptr [edi + 0xd78], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6D99: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D6D9D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6DA4: pop ecx
        __asm _emit 0x59
        // 0x587D6DA5: pop edi
        __asm _emit 0x5F
        // 0x587D6DA6: pop esi
        __asm _emit 0x5E
        // 0x587D6DA7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D6DAA: ret
        __asm _emit 0xC3
    }
}
