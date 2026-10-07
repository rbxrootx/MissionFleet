// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 273 bytes in 1 exact ranges.
// Source symbol alias: FUN_58747c50.

// Ghidra body range 0x58747C50..0x58747D61; 273 mapped bytes.
extern "C" __declspec(naked) void FUN_58747c50_segment_00() {
    __asm {
        // 0x58747C50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58747C52: push 0x5897e249
        __asm _emit 0x68
        __asm _emit 0x49
        __asm _emit 0xE2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58747C57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747C5D: push eax
        __asm _emit 0x50
        // 0x58747C5E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58747C61: push ebx
        __asm _emit 0x53
        // 0x58747C62: push esi
        __asm _emit 0x56
        // 0x58747C63: push edi
        __asm _emit 0x57
        // 0x58747C64: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58747C69: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58747C6B: push eax
        __asm _emit 0x50
        // 0x58747C6C: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58747C70: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747C76: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747C7E: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58747C82: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58747C84: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747C8C: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x81
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58747C91: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58747C96: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x58747C99: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747CA1: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747CA9: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58747CAD: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58747CAF: je 0x58747d4c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747CB5: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58747CB9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747CC0: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x58747CC2: je 0x58747d2a
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x58747CC4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747CC6: call 0x588d66d0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xEA
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58747CCB: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58747CD0: jne 0x58747d2a
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x58747CD2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58747CD4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747CD6: call 0x588dd1b0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58747CDB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58747CDD: je 0x58747ced
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58747CDF: mov cl, byte ptr [ebx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747CE5: cmp cl, byte ptr [esi + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747CEB: jne 0x58747d2a
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x58747CED: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747CEF: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xE9
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58747CF4: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58747CF9: jne 0x58747d2a
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58747CFB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58747CFD: cmp dword ptr [esi + 0x63b4], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747D03: je 0x58747d0a
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58747D05: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747D0A: push esi
        __asm _emit 0x56
        // 0x58747D0B: push ebx
        __asm _emit 0x53
        // 0x58747D0C: call 0x587477f0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747D11: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58747D14: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58747D16: jg 0x58747d1c
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x58747D18: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58747D1A: je 0x58747d2a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58747D1C: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58747D20: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58747D24: push edx
        __asm _emit 0x52
        // 0x58747D25: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xD7
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58747D2A: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58747D2D: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58747D31: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58747D33: jne 0x58747cc0
        __asm _emit 0x75
        __asm _emit 0x8B
        // 0x58747D35: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58747D39: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58747D3D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747D44: pop ecx
        __asm _emit 0x59
        // 0x58747D45: pop edi
        __asm _emit 0x5F
        // 0x58747D46: pop esi
        __asm _emit 0x5E
        // 0x58747D47: pop ebx
        __asm _emit 0x5B
        // 0x58747D48: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58747D4B: ret
        __asm _emit 0xC3
        // 0x58747D4C: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58747D4E: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58747D52: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747D59: pop ecx
        __asm _emit 0x59
        // 0x58747D5A: pop edi
        __asm _emit 0x5F
        // 0x58747D5B: pop esi
        __asm _emit 0x5E
        // 0x58747D5C: pop ebx
        __asm _emit 0x5B
        // 0x58747D5D: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58747D60: ret
        __asm _emit 0xC3
    }
}
