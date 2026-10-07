// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 845 bytes in 1 exact ranges.
// Source symbol alias: FUN_587929d0.

// Ghidra body range 0x587929D0..0x58792D1D; 845 mapped bytes.
extern "C" __declspec(naked) void FUN_587929d0_segment_00() {
    __asm {
        // 0x587929D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587929D2: push 0x58981adb
        __asm _emit 0x68
        __asm _emit 0xDB
        __asm _emit 0x1A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587929D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587929DD: push eax
        __asm _emit 0x50
        // 0x587929DE: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587929E1: push ebx
        __asm _emit 0x53
        // 0x587929E2: push ebp
        __asm _emit 0x55
        // 0x587929E3: push esi
        __asm _emit 0x56
        // 0x587929E4: push edi
        __asm _emit 0x57
        // 0x587929E5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587929EA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587929EC: push eax
        __asm _emit 0x50
        // 0x587929ED: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587929F1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587929F7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587929F9: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587929FF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58792A01: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58792A04: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58792A06: mov ecx, dword ptr [0x58a245f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792A0C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58792A0E: je 0x58792a17
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58792A10: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58792A12: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58792A15: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58792A17: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792A1D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58792A1F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58792A22: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58792A24: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792A2A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58792A2C: je 0x58792a35
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58792A2E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58792A30: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58792A33: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58792A35: mov eax, dword ptr [0x58a245bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792A3A: mov eax, dword ptr [eax + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792A40: lea ebp, [esi + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792A46: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792A4D: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x58792A4F: mov dword ptr [esp + 0x14], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792A57: cmp dword ptr [ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x58792A5A: jne 0x58792aaf
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x58792A5C: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58792A5E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xA1
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792A63: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58792A65: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58792A68: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58792A6C: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792A74: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58792A76: je 0x58792aa3
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58792A78: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x58792A7C: sub cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x58792A80: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x58792A83: push eax
        __asm _emit 0x50
        // 0x58792A84: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58792A86: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58792A88: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58792A8A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58792A8C: push esi
        __asm _emit 0x56
        // 0x58792A8D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58792A8F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58792A94: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58792A9A: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792AA1: jmp 0x58792aa5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58792AA3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58792AA5: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792AAD: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x58792AAF: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58792AB1: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792AB6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58792ABB: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58792ABD: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792AC2: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58792AC6: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58792AC9: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58792ACE: jne 0x58792a57
        __asm _emit 0x75
        __asm _emit 0x87
        // 0x58792AD0: mov ecx, dword ptr [esi + 0x121a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58792AD6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58792AD8: push edi
        __asm _emit 0x57
        // 0x58792AD9: push edi
        __asm _emit 0x57
        // 0x58792ADA: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58792ADF: mov ecx, dword ptr [esi + 0x121a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58792AE5: push edi
        __asm _emit 0x57
        // 0x58792AE6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58792AEB: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58792AEE: push 0x69
        __asm _emit 0x6A
        __asm _emit 0x69
        // 0x58792AF0: push 0xa5
        __asm _emit 0x68
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792AF5: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58792AFA: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792B00: push 0x69
        __asm _emit 0x6A
        __asm _emit 0x69
        // 0x58792B02: push 0xa5
        __asm _emit 0x68
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792B07: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58792B0C: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58792B0F: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792B14: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58792B19: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792B1F: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792B24: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x01
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58792B29: push edi
        __asm _emit 0x57
        // 0x58792B2A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58792B2C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x01
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58792B31: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792B36: push edi
        __asm _emit 0x57
        // 0x58792B37: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58792B3C: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792B42: mov dword ptr [esi + 0x94], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58792B4C: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x58792B4F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xA0
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792B54: push 0x1e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792B59: push edi
        __asm _emit 0x57
        // 0x58792B5A: push 0x58a0b200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xB2
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58792B5F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xA0
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792B64: push 0x3c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792B69: push edi
        __asm _emit 0x57
        // 0x58792B6A: push 0x58a0add0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58792B6F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xA0
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792B74: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x58792B77: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58792B79: mov dword ptr [0x58a0b1e4], eax
        __asm _emit 0xA3
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58792B7E: mov dword ptr [0x58a0b1e8], eax
        __asm _emit 0xA3
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58792B83: mov dword ptr [0x58a0b1ec], eax
        __asm _emit 0xA3
        __asm _emit 0xEC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58792B88: mov dword ptr [0x58a0b1f0], eax
        __asm _emit 0xA3
        __asm _emit 0xF0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58792B8D: mov dword ptr [0x58a0b1f4], eax
        __asm _emit 0xA3
        __asm _emit 0xF4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58792B92: mov dword ptr [0x58a0b1f8], eax
        __asm _emit 0xA3
        __asm _emit 0xF8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58792B97: mov dword ptr [0x58a0b1fc], eax
        __asm _emit 0xA3
        __asm _emit 0xFC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58792B9C: mov edi, 0x58a24860
        __asm _emit 0xBF
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792BA1: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58792BA3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58792BA5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58792BA7: je 0x58792bb4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58792BA9: push eax
        __asm _emit 0x50
        // 0x58792BAA: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xA2
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58792BAF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58792BB2: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58792BB4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58792BB7: cmp edi, 0x58a248c4
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792BBD: jl 0x58792ba1
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x58792BBF: mov ecx, dword ptr [esi + 0x12124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58792BC5: mov eax, 0xffffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58792BCA: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x58792BCD: mov edx, dword ptr [esi + 0x12128]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58792BD3: mov dword ptr [edx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x60
        // 0x58792BD6: mov ecx, dword ptr [esi + 0x12124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58792BDC: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xCD
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58792BE1: mov ecx, dword ptr [esi + 0x12128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58792BE7: call 0x5890a8e0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x7C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58792BEC: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792BF2: call 0x588f46c0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x1A
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58792BF7: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792BFD: call 0x587866c0
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x3A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792C02: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C07: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792C0D: call 0x58871f70
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xF3
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58792C12: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C17: cmp dword ptr [eax + 0xcc], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792C1D: je 0x58792c7f
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x58792C1F: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792C25: call 0x58848680
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x5A
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58792C2A: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C30: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792C36: call 0x58848610
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x59
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58792C3B: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C41: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792C47: call 0x58842ef0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58792C4C: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C51: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792C57: call 0x58843190
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58792C5C: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C62: call 0x58752290
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xF6
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58792C67: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C6D: call 0x5881f250
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xC5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58792C72: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C78: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58792C7A: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58792C7D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58792C7F: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C85: call 0x587d6cb0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58792C8A: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C90: call 0x587cf580
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58792C95: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792C9B: call 0x587af690
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xC9
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58792CA0: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792CA6: call 0x587b7930
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58792CAB: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792CB1: mov dword ptr [ecx + 0x19c], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792CB7: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792CBD: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792CC2: mov dword ptr [edx + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792CC8: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792CCD: push 0x589977d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x77
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58792CD2: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792CD8: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58792CDE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58792CE1: push eax
        __asm _emit 0x50
        // 0x58792CE2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58792CE4: call 0x58792730
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58792CE9: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58792CEF: call 0x58886c50
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x3F
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58792CF4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58792CF6: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58792CF9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58792CFB: mov dword ptr [esi + 0x12190], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58792D01: mov dword ptr [esi + 0x12138], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58792D07: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58792D09: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58792D0D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792D14: pop ecx
        __asm _emit 0x59
        // 0x58792D15: pop edi
        __asm _emit 0x5F
        // 0x58792D16: pop esi
        __asm _emit 0x5E
        // 0x58792D17: pop ebp
        __asm _emit 0x5D
        // 0x58792D18: pop ebx
        __asm _emit 0x5B
        // 0x58792D19: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58792D1C: ret
        __asm _emit 0xC3
    }
}
