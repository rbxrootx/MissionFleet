// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58750FC0 .. +0x14F bytes.
// Source symbol alias: FUN_58750fc0.
extern "C" __declspec(naked) void FUN_58750fc0() {
    __asm {
        // 0x58750FC0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58750FC2: push 0x5897e6ee
        __asm _emit 0x68
        __asm _emit 0xEE
        __asm _emit 0xE6
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58750FC7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750FCD: push eax
        __asm _emit 0x50
        // 0x58750FCE: push ecx
        __asm _emit 0x51
        // 0x58750FCF: push ebx
        __asm _emit 0x53
        // 0x58750FD0: push ebp
        __asm _emit 0x55
        // 0x58750FD1: push esi
        __asm _emit 0x56
        // 0x58750FD2: push edi
        __asm _emit 0x57
        // 0x58750FD3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58750FD8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58750FDA: push eax
        __asm _emit 0x50
        // 0x58750FDB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58750FDF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750FE5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58750FE7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58750FEB: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58750FEF: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58750FF3: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58750FF7: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58750FF9: lea eax, [edi + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x1E
        // 0x58750FFC: push eax
        __asm _emit 0x50
        // 0x58750FFD: lea ecx, [ebp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x64
        // 0x58751000: push ecx
        __asm _emit 0x51
        // 0x58751001: push edi
        __asm _emit 0x57
        // 0x58751002: push ebp
        __asm _emit 0x55
        // 0x58751003: push edx
        __asm _emit 0x52
        // 0x58751004: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58751006: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5875100B: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751010: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58751014: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58751016: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58751018: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875101C: mov dword ptr [esi], 0x5898d5e4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE4
        __asm _emit 0xD5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58751022: mov dword ptr [esi + 0x60], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751029: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xBC
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875102E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58751031: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58751035: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5875103A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5875103C: je 0x5875106a
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5875103E: push ebx
        __asm _emit 0x53
        // 0x5875103F: push ebx
        __asm _emit 0x53
        // 0x58751040: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58751045: lea ecx, [edi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58751048: push ecx
        __asm _emit 0x51
        // 0x58751049: lea edx, [ebp + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875104F: push edx
        __asm _emit 0x52
        // 0x58751050: lea ecx, [edi + 6]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x06
        // 0x58751053: push ecx
        __asm _emit 0x51
        // 0x58751054: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875105A: lea edx, [ebp + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x0A
        // 0x5875105D: push edx
        __asm _emit 0x52
        // 0x5875105E: push ecx
        __asm _emit 0x51
        // 0x5875105F: push ebx
        __asm _emit 0x53
        // 0x58751060: push esi
        __asm _emit 0x56
        // 0x58751061: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58751063: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58751068: jmp 0x5875106c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875106A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875106C: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5875106F: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751074: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58751078: mov dword ptr [eax + 0x60], 0xffffff
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5875107F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xBB
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58751084: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58751087: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875108B: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58751090: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58751092: je 0x587510d0
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x58751094: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875109A: cmp dword ptr [ecx + 0x160], 0x29
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x29
        // 0x587510A1: jle 0x587510b9
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587510A3: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587510A9: je 0x587510b9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587510AB: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587510B1: add ecx, 0xa40
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587510B7: jmp 0x587510bb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587510B9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587510BB: add edi, 5
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x05
        // 0x587510BE: push edi
        __asm _emit 0x57
        // 0x587510BF: add ebp, -0x12
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0xEE
        // 0x587510C2: push ebp
        __asm _emit 0x55
        // 0x587510C3: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587510C5: push ecx
        __asm _emit 0x51
        // 0x587510C6: push esi
        __asm _emit 0x56
        // 0x587510C7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587510C9: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x60
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587510CE: jmp 0x587510d2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587510D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587510D2: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587510D7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587510D9: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587510DD: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587510E0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x1C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587510E5: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587510E8: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587510ED: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587510F1: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x587510F4: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x587510F7: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587510F9: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587510FD: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58751104: pop ecx
        __asm _emit 0x59
        // 0x58751105: pop edi
        __asm _emit 0x5F
        // 0x58751106: pop esi
        __asm _emit 0x5E
        // 0x58751107: pop ebp
        __asm _emit 0x5D
        // 0x58751108: pop ebx
        __asm _emit 0x5B
        // 0x58751109: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5875110C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
