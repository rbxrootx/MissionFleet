// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 284 bytes in 2 exact ranges.
// Source symbol alias: FUN_587ffaa0.

// Ghidra body range 0x587FFAA0..0x587FFB75; 213 mapped bytes.
extern "C" __declspec(naked) void FUN_587ffaa0_segment_00() {
    __asm {
        // 0x587FFAA0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587FFAA2: push 0x589826d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x26
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587FFAA7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FFAAD: push eax
        __asm _emit 0x50
        // 0x587FFAAE: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x587FFAB1: push ebx
        __asm _emit 0x53
        // 0x587FFAB2: push ebp
        __asm _emit 0x55
        // 0x587FFAB3: push esi
        __asm _emit 0x56
        // 0x587FFAB4: push edi
        __asm _emit 0x57
        // 0x587FFAB5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587FFABA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587FFABC: push eax
        __asm _emit 0x50
        // 0x587FFABD: lea eax, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587FFAC1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FFAC7: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587FFAC9: mov ebx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587FFACD: push ebx
        __asm _emit 0x53
        // 0x587FFACE: call 0x587ff2b0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FFAD3: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587FFAD5: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587FFAD7: jne 0x587ffade
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587FFAD9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xD1
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587FFADE: mov edi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x587FFAE1: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587FFAE4: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FFAE8: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587FFAEA: je 0x587ffaf0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587FFAEC: cmp edi, edi
        __asm _emit 0x3B
        __asm _emit 0xFF
        // 0x587FFAEE: je 0x587ffaf5
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587FFAF0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xD1
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587FFAF5: cmp esi, dword ptr [esp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FFAF9: je 0x587ffb1f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587FFAFB: cmp dword ptr [esi + 0x24], 0x10
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587FFAFF: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x587FFB02: jb 0x587ffb09
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587FFB04: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587FFB07: jmp 0x587ffb0c
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587FFB09: lea eax, [esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587FFB0C: push ecx
        __asm _emit 0x51
        // 0x587FFB0D: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x587FFB10: push eax
        __asm _emit 0x50
        // 0x587FFB11: push ecx
        __asm _emit 0x51
        // 0x587FFB12: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587FFB14: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FFB16: call 0x58748110
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FFB1B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FFB1D: jge 0x587ffb8b
        __asm _emit 0x7D
        __asm _emit 0x6C
        // 0x587FFB1F: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587FFB21: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587FFB23: push ebx
        __asm _emit 0x53
        // 0x587FFB24: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587FFB28: mov dword ptr [esp + 0x40], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FFB30: mov dword ptr [esp + 0x3c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FFB38: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587FFB3D: call 0x58734f20
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x53
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x587FFB42: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587FFB44: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587FFB48: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587FFB4C: push edx
        __asm _emit 0x52
        // 0x587FFB4D: push esi
        __asm _emit 0x56
        // 0x587FFB4E: push edi
        __asm _emit 0x57
        // 0x587FFB4F: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587FFB53: push eax
        __asm _emit 0x50
        // 0x587FFB54: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587FFB56: mov dword ptr [esp + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587FFB5A: call 0x587ff870
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FFB5F: cmp dword ptr [esp + 0x34], 0x10
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x10
        // 0x587FFB64: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x587FFB66: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587FFB69: jb 0x587ffb78
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x587FFB6B: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587FFB6F: push ecx
        __asm _emit 0x51
        // 0x587FFB70: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xD0
        __asm _emit 0x17
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587FFB78..0x587FFBBF; 71 mapped bytes.
extern "C" __declspec(naked) void FUN_587ffaa0_segment_01() {
    __asm {
        // 0x587FFB78: mov dword ptr [esp + 0x34], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FFB80: mov dword ptr [esp + 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587FFB84: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587FFB89: jmp 0x587ffb8d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587FFB8B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587FFB8D: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587FFB8F: jne 0x587ffbbb
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x587FFB91: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xD0
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587FFB96: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587FFB98: cmp esi, dword ptr [edi + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x18
        // 0x587FFB9B: jne 0x587ffba2
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587FFB9D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xD0
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587FFBA2: lea eax, [esi + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x587FFBA5: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587FFBA9: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FFBB0: pop ecx
        __asm _emit 0x59
        // 0x587FFBB1: pop edi
        __asm _emit 0x5F
        // 0x587FFBB2: pop esi
        __asm _emit 0x5E
        // 0x587FFBB3: pop ebp
        __asm _emit 0x5D
        // 0x587FFBB4: pop ebx
        __asm _emit 0x5B
        // 0x587FFBB5: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x587FFBB8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587FFBBB: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587FFBBD: jmp 0x587ffb98
        __asm _emit 0xEB
        __asm _emit 0xD9
    }
}
