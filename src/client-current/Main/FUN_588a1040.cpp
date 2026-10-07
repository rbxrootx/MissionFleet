// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A1040 .. +0xC3 bytes.
// Source symbol alias: FUN_588a1040.
extern "C" __declspec(naked) void FUN_588a1040() {
    __asm {
        // 0x588A1040: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A1045: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588A1048: push esi
        __asm _emit 0x56
        // 0x588A1049: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A104B: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1051: sub eax, dword ptr [ecx + 4]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588A1054: cmp dword ptr [esp + 8], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588A1059: push edi
        __asm _emit 0x57
        // 0x588A105A: je 0x588a1061
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588A105C: cmp eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588A105F: jge 0x588a106f
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x588A1061: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A1063: mov dword ptr [esi + 0xf8], 0xfffff060
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x60
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A106D: jmp 0x588a10d6
        __asm _emit 0xEB
        __asm _emit 0x67
        // 0x588A106F: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x588A1072: jge 0x588a1085
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x588A1074: mov edi, 0x13
        __asm _emit 0xBF
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A1079: mov dword ptr [esi + 0xf8], 0xfffff380
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A1083: jmp 0x588a10d6
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588A1085: cmp eax, 0x33
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x33
        // 0x588A1088: jge 0x588a109b
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x588A108A: mov edi, 0x26
        __asm _emit 0xBF
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A108F: mov dword ptr [esi + 0xf8], 0xfffff6a0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A1099: jmp 0x588a10d6
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x588A109B: cmp eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x46
        // 0x588A109E: jge 0x588a10b1
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x588A10A0: mov edi, 0x39
        __asm _emit 0xBF
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A10A5: mov dword ptr [esi + 0xf8], 0xfffff9c0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A10AF: jmp 0x588a10d6
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x588A10B1: cmp eax, 0x59
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x59
        // 0x588A10B4: jge 0x588a10c7
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x588A10B6: mov edi, 0x4c
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A10BB: mov dword ptr [esi + 0xf8], 0xfffffce0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A10C5: jmp 0x588a10d6
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x588A10C7: mov edi, 0x5f
        __asm _emit 0xBF
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A10CC: mov dword ptr [esi + 0xf8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A10D6: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588A10D9: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x588A10DB: push ecx
        __asm _emit 0x51
        // 0x588A10DC: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A10E2: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A10E7: mov edx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A10ED: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A10F0: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A10F6: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588A10F8: push eax
        __asm _emit 0x50
        // 0x588A10F9: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A10FE: pop edi
        __asm _emit 0x5F
        // 0x588A10FF: pop esi
        __asm _emit 0x5E
        // 0x588A1100: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
