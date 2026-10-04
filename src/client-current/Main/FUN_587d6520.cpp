// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D6520 .. +0x10C bytes.
// Source symbol alias: FUN_587d6520.
extern "C" __declspec(naked) void FUN_587d6520() {
    __asm {
        // 0x587D6520: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587D6522: push 0x58981e0e
        __asm _emit 0x68
        __asm _emit 0x0E
        __asm _emit 0x1E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D6527: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D652D: push eax
        __asm _emit 0x50
        // 0x587D652E: sub esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6534: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D6539: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587D653B: mov dword ptr [esp + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6542: push esi
        __asm _emit 0x56
        // 0x587D6543: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D6548: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587D654A: push eax
        __asm _emit 0x50
        // 0x587D654B: lea eax, [esp + 0x110]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6552: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6558: mov esi, dword ptr [esp + 0x120]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D655F: cmp dword ptr [esi*4 + 0x58a238c8], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB5
        __asm _emit 0xC8
        __asm _emit 0x38
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587D6567: jne 0x587d6600
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D656D: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587D6572: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587D6574: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587D6577: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587D6579: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587D657C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587D657E: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587D6583: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587D6585: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587D6588: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587D658A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587D658D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587D658F: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x587D6592: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587D6594: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587D6596: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587D6598: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D659A: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x587D659D: push edx
        __asm _emit 0x52
        // 0x587D659E: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587D65A0: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587D65A2: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587D65A7: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587D65A9: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587D65AC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587D65AE: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587D65B1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587D65B3: push eax
        __asm _emit 0x50
        // 0x587D65B4: push ecx
        __asm _emit 0x51
        // 0x587D65B5: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D65B9: push 0x5899b55c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0xB5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D65BE: push ecx
        __asm _emit 0x51
        // 0x587D65BF: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D65C5: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D65CA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x66
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D65CF: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587D65D2: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D65D6: mov dword ptr [esp + 0x118], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D65E1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D65E3: je 0x587d65f7
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587D65E5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D65E7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D65E9: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D65ED: push edx
        __asm _emit 0x52
        // 0x587D65EE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D65F0: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xD7
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587D65F5: jmp 0x587d65f9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D65F7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D65F9: mov dword ptr [esi*4 + 0x58a238c8], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xB5
        __asm _emit 0xC8
        __asm _emit 0x38
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D6600: mov eax, dword ptr [esi*4 + 0x58a238c8]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB5
        __asm _emit 0xC8
        __asm _emit 0x38
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D6607: mov ecx, dword ptr [esp + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D660E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6615: pop ecx
        __asm _emit 0x59
        // 0x587D6616: pop esi
        __asm _emit 0x5E
        // 0x587D6617: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D661E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587D6620: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x65
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D6625: add esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D662B: ret
        __asm _emit 0xC3
    }
}
