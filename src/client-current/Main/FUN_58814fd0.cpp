// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58814FD0 .. +0x186 bytes.
// Source symbol alias: FUN_58814fd0.
extern "C" __declspec(naked) void FUN_58814fd0() {
    __asm {
        // 0x58814FD0: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58814FD3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58814FD8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58814FDA: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58814FDE: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58814FE2: push esi
        __asm _emit 0x56
        // 0x58814FE3: push edi
        __asm _emit 0x57
        // 0x58814FE4: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58814FE8: push edi
        __asm _emit 0x57
        // 0x58814FE9: push eax
        __asm _emit 0x50
        // 0x58814FEA: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58814FEE: push eax
        __asm _emit 0x50
        // 0x58814FEF: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58814FF1: call dword ptr [0x5898c194]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58814FF7: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58814FFB: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58814FFE: jne 0x58815064
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x58815000: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58815002: push edi
        __asm _emit 0x57
        // 0x58815003: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58815007: push ecx
        __asm _emit 0x51
        // 0x58815008: push 0x1c5
        __asm _emit 0x68
        __asm _emit 0xC5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881500D: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x6A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58815012: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58815014: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xFD
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58815019: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881501E: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815024: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58815028: push edx
        __asm _emit 0x52
        // 0x58815029: call 0x588490f0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5881502E: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58815034: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58815038: push ecx
        __asm _emit 0x51
        // 0x58815039: mov ecx, dword ptr [edx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881503F: call 0x58842dc0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xDD
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58815044: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58815047: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58815049: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5881504C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881504E: push 0xf230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815053: push esi
        __asm _emit 0x56
        // 0x58815054: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58815056: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58815058: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5881505B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5881505D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5881505F: jmp 0x5881513b
        __asm _emit 0xE9
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815064: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58815066: jne 0x5881513b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881506C: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58815070: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815075: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58815078: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881507D: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58815080: je 0x588150df
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x58815082: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58815086: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58815089: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881508E: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58815091: je 0x588150df
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x58815093: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58815097: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58815099: je 0x5881511a
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x5881509B: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5881509E: jne 0x588150b1
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x588150A0: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588150A5: push eax
        __asm _emit 0x50
        // 0x588150A6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588150A8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588150AA: push 0x1c6
        __asm _emit 0x68
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588150AF: jmp 0x5881512f
        __asm _emit 0xEB
        __asm _emit 0x7E
        // 0x588150B1: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588150B4: jne 0x588150c8
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588150B6: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588150BC: push ecx
        __asm _emit 0x51
        // 0x588150BD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588150BF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588150C1: push 0x1c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588150C6: jmp 0x5881512f
        __asm _emit 0xEB
        __asm _emit 0x67
        // 0x588150C8: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588150CB: jne 0x5881511a
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x588150CD: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588150D3: push edx
        __asm _emit 0x52
        // 0x588150D4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588150D6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588150D8: push 0x1c7
        __asm _emit 0x68
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588150DD: jmp 0x5881512f
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x588150DF: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588150E3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588150E5: je 0x5881511a
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x588150E7: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588150EA: jne 0x588150f8
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588150EC: push esi
        __asm _emit 0x56
        // 0x588150ED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588150EF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588150F1: push 0x1c6
        __asm _emit 0x68
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588150F6: jmp 0x5881512f
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x588150F8: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588150FB: jne 0x58815109
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588150FD: push esi
        __asm _emit 0x56
        // 0x588150FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58815100: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58815102: push 0x1c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815107: jmp 0x5881512f
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x58815109: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5881510C: jne 0x5881511a
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5881510E: push esi
        __asm _emit 0x56
        // 0x5881510F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58815111: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58815113: push 0x1c7
        __asm _emit 0x68
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815118: jmp 0x5881512f
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5881511A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881511C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881511E: push 0x5899d784
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58815123: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58815129: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881512C: push eax
        __asm _emit 0x50
        // 0x5881512D: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x5881512F: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x69
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58815134: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58815136: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xFB
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881513B: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5881513E: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xA7
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58815143: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58815147: pop edi
        __asm _emit 0x5F
        // 0x58815148: pop esi
        __asm _emit 0x5E
        // 0x58815149: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5881514B: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x7A
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58815150: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58815153: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
