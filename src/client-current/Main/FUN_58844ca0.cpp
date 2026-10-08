// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 566 bytes in 3 exact ranges.
// Source symbol alias: FUN_58844ca0.

// Ghidra body range 0x58844CA0..0x58844D3D; 157 mapped bytes.
extern "C" __declspec(naked) void FUN_58844ca0_segment_00() {
    __asm {
        // 0x58844CA0: push ebx
        __asm _emit 0x53
        // 0x58844CA1: push ebp
        __asm _emit 0x55
        // 0x58844CA2: push esi
        __asm _emit 0x56
        // 0x58844CA3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58844CA5: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58844CA9: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844CAE: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58844CB1: mov dword ptr [esi + 0x58], 0xd2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844CB8: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844CBD: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58844CC0: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58844CC4: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58844CC9: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844CCE: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6E
        __asm _emit 0x24
        // 0x58844CD2: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58844CD7: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58844CDA: push edi
        __asm _emit 0x57
        // 0x58844CDB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58844CDD: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58844CE2: mov word ptr [esi + 0x180], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844CE9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xE0
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58844CEE: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58844CF1: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58844CF6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xE0
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58844CFB: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58844CFE: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D03: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xE0
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58844D08: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D0E: lea ebx, [esi + 0xc4]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D14: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58844D19: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xE0
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58844D1E: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D24: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D29: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xDF
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58844D2E: mov dword ptr [esi + 0x64], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D35: lea edi, [esi + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D3B: jmp 0x58844d40
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58844D40..0x58844D89; 73 mapped bytes.
extern "C" __declspec(naked) void FUN_58844ca0_segment_01() {
    __asm {
        // 0x58844D40: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58844D42: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x3A
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58844D47: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58844D4A: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58844D4D: jne 0x58844d40
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58844D4F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58844D51: call 0x588424d0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58844D56: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D5C: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D61: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58844D65: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D6B: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D70: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844D74: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D7A: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58844D7C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58844D80: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58844D82: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844D87: jmp 0x58844d90
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58844D90..0x58844EE0; 336 mapped bytes.
extern "C" __declspec(naked) void FUN_58844ca0_segment_02() {
    __asm {
        // 0x58844D90: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58844D92: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58844D97: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58844D9A: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58844D9D: jne 0x58844d90
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58844D9F: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58844DA4: cmp eax, dword ptr [0x58a245a8]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58844DAA: jne 0x58844dd0
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x58844DAC: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58844DB2: mov edx, dword ptr [ecx + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844DB8: and edx, 0xf00000
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x00
        // 0x58844DBE: cmp edx, 0x100000
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58844DC4: jne 0x58844dd0
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58844DC6: push 0x220000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58844DCB: call 0x58893860
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xEA
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58844DD0: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58844DD5: cmp eax, dword ptr [0x58a2459c]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58844DDB: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844DE1: jne 0x58844dee
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58844DE3: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844DE8: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58844DEC: jmp 0x58844df3
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58844DEE: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58844DF3: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58844DF9: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x30
        // 0x58844DFC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58844DFE: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58844E01: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58844E03: push ebx
        __asm _emit 0x53
        // 0x58844E04: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58844E06: push esi
        __asm _emit 0x56
        // 0x58844E07: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58844E09: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58844E0E: cmp eax, dword ptr [0x58a245a0]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58844E14: jne 0x58844e38
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58844E16: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58844E1C: call 0x58888f10
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58844E21: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58844E26: mov ecx, dword ptr [eax + 0x784]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E2C: mov dword ptr [eax + 0x780], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E32: mov dword ptr [eax + 0x788], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E38: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E3E: mov dword ptr [esi + 0x184], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E44: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E49: mov word ptr [esi + 0x182], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E50: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844E54: mov eax, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E5A: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844E5E: mov eax, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E64: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844E68: mov eax, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E6E: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844E72: mov eax, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E78: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844E7C: mov eax, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E82: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844E86: mov eax, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E8C: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844E90: mov eax, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844E96: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844E9A: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844EA0: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844EA4: mov eax, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844EAA: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844EAE: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844EB4: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844EB8: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844EBE: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844EC3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58844EC7: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844ECD: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58844ED1: mov esi, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58844ED7: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x58844EDB: pop edi
        __asm _emit 0x5F
        // 0x58844EDC: pop esi
        __asm _emit 0x5E
        // 0x58844EDD: pop ebp
        __asm _emit 0x5D
        // 0x58844EDE: pop ebx
        __asm _emit 0x5B
        // 0x58844EDF: ret
        __asm _emit 0xC3
    }
}
