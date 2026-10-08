// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 335 bytes in 1 exact ranges.
// Source symbol alias: FUN_58858f20.

// Ghidra body range 0x58858F20..0x5885906F; 335 mapped bytes.
extern "C" __declspec(naked) void FUN_58858f20_segment_00() {
    __asm {
        // 0x58858F20: push esi
        __asm _emit 0x56
        // 0x58858F21: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58858F23: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F29: mov eax, dword ptr [esi + eax*4 + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F30: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58858F33: je 0x5885906b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F39: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58858F3C: je 0x5885906b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F42: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F48: mov edx, dword ptr [esi + ecx*4 + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F4F: lea eax, [esi + ecx*4 + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F56: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58858F5C: push edx
        __asm _emit 0x52
        // 0x58858F5D: push eax
        __asm _emit 0x50
        // 0x58858F5E: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58858F63: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F69: cmp dword ptr [esi + eax*4 + 0xf8], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F71: jne 0x5885906b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F77: cmp dword ptr [esi + eax*4 + 0x9a0], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F7F: jne 0x5885906b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F85: mov eax, dword ptr [esi + eax*4 + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F8C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58858F8E: je 0x5885906b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F94: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58858F97: je 0x5885906b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858F9D: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858FA3: xor dword ptr [esi + eax*8 + 0x19c], 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0xC6
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x58858FAE: lea eax, [esi + eax*8 + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858FB5: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58858FB9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58858FBB: jne 0x58858ffa
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x58858FBD: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858FC3: cmp dword ptr [esi + ecx*4 + 0x90c], eax
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858FCA: jne 0x58859033
        __asm _emit 0x75
        __asm _emit 0x67
        // 0x58858FCC: cmp dword ptr [esi + 0x908], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858FD2: jne 0x58859033
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x58858FD4: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58858FD6: inc dword ptr [esi + edx*8 + 0x15c]
        __asm _emit 0xFF
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858FDD: lea eax, [esi + edx*8 + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858FE4: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858FEA: inc dword ptr [esi + eax*8 + 0x19c]
        __asm _emit 0xFF
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858FF1: lea eax, [esi + eax*8 + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858FF8: jmp 0x58859033
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x58858FFA: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58858FFD: jne 0x58859033
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x58858FFF: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859005: cmp dword ptr [esi + ecx*8 + 0x15c], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0xCE
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885900D: je 0x58859033
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5885900F: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58859011: dec dword ptr [esi + edx*8 + 0x15c]
        __asm _emit 0xFF
        __asm _emit 0x8C
        __asm _emit 0xD6
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859018: lea eax, [esi + edx*8 + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885901F: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859025: dec dword ptr [esi + eax*8 + 0x19c]
        __asm _emit 0xFF
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885902C: lea eax, [esi + eax*8 + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859033: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859039: xor dword ptr [esi + ecx*8 + 0x19c], 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0xCE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x58859044: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885904A: lea eax, [esi + ecx*8 + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859051: mov eax, dword ptr [esi + edx*8 + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859058: mov ecx, dword ptr [esi + 0xa48]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885905E: push eax
        __asm _emit 0x50
        // 0x5885905F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xE2
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58859064: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58859066: call 0x58858ab0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885906B: pop esi
        __asm _emit 0x5E
        // 0x5885906C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
