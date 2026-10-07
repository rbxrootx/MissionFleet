// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 161 bytes in 1 exact ranges.
// Source symbol alias: FUN_5881e670.

// Ghidra body range 0x5881E670..0x5881E711; 161 mapped bytes.
extern "C" __declspec(naked) void FUN_5881e670_segment_00() {
    __asm {
        // 0x5881E670: push esi
        __asm _emit 0x56
        // 0x5881E671: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881E673: cmp dword ptr [esi + 0xcc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E67A: je 0x5881e70f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E680: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881E682: cmp dword ptr [esi + 0xd1c], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E688: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881E68A: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5881E68D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881E68F: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5881E694: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881E696: mov dword ptr [esi + 0xd1c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E69C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881E69E: je 0x5881e6d7
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x5881E6A0: push 0x5899dab4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xDA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881E6A5: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881E6AB: mov ecx, dword ptr [esi + 0xd14]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E6B1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881E6B4: push eax
        __asm _emit 0x50
        // 0x5881E6B5: call 0x58751bf0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x35
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5881E6BA: lea ecx, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5881E6BD: mov edx, 3
        __asm _emit 0xBA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E6C2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881E6C4: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E6C9: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x5881E6CD: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5881E6D0: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5881E6D3: jne 0x5881e6c2
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x5881E6D5: pop esi
        __asm _emit 0x5E
        // 0x5881E6D6: ret
        __asm _emit 0xC3
        // 0x5881E6D7: push 0x5899da8c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xDA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881E6DC: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881E6E2: mov ecx, dword ptr [esi + 0xd14]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E6E8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881E6EB: push eax
        __asm _emit 0x50
        // 0x5881E6EC: call 0x58751bf0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x34
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5881E6F1: lea ecx, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5881E6F4: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E6F9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E700: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881E702: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5881E707: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5881E70A: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5881E70D: jne 0x5881e700
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5881E70F: pop esi
        __asm _emit 0x5E
        // 0x5881E710: ret
        __asm _emit 0xC3
    }
}
