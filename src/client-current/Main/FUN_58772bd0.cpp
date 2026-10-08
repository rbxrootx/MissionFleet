// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 214 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772bd0.

// Ghidra body range 0x58772BD0..0x58772CA6; 214 mapped bytes.
extern "C" __declspec(naked) void FUN_58772bd0_segment_00() {
    __asm {
        // 0x58772BD0: sub esp, 0x94
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772BD6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58772BDB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58772BDD: mov dword ptr [esp + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772BE4: push esi
        __asm _emit 0x56
        // 0x58772BE5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58772BE7: cmp byte ptr [esi + 0x16], 1
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x16
        __asm _emit 0x01
        // 0x58772BEB: jne 0x58772bf2
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58772BED: call 0x58772980
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772BF2: sub dword ptr [0x589cfc9c], 1
        __asm _emit 0x83
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x58772BF9: jne 0x58772c8e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772BFF: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58772C03: push eax
        __asm _emit 0x50
        // 0x58772C04: call dword ptr [0x5898c158]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772C0A: movzx ecx, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772C0F: movzx edx, word ptr [esp + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58772C14: movzx eax, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58772C19: push ecx
        __asm _emit 0x51
        // 0x58772C1A: movzx ecx, word ptr [esp + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58772C1F: push edx
        __asm _emit 0x52
        // 0x58772C20: movzx edx, word ptr [esp + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58772C25: push eax
        __asm _emit 0x50
        // 0x58772C26: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772C2B: push ecx
        __asm _emit 0x51
        // 0x58772C2C: push edx
        __asm _emit 0x52
        // 0x58772C2D: push eax
        __asm _emit 0x50
        // 0x58772C2E: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58772C32: push 0x58996318
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58772C37: push ecx
        __asm _emit 0x51
        // 0x58772C38: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772C3E: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x58772C41: sub ecx, dword ptr [esi + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58772C44: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58772C49: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58772C4B: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58772C4E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58772C50: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58772C53: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58772C56: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58772C58: je 0x58772c63
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58772C5A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772C5C: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772C60: push ecx
        __asm _emit 0x51
        // 0x58772C61: jmp 0x58772c6a
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58772C63: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58772C65: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772C69: push edx
        __asm _emit 0x52
        // 0x58772C6A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58772C6C: call 0x58772210
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772C71: mov ecx, dword ptr [0x589cfc98]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58772C77: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58772C79: je 0x58772c8e
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58772C7B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58772C7D: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58772C80: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58772C82: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58772C84: mov dword ptr [0x589cfc98], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772C8E: mov ecx, dword ptr [esp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772C95: pop esi
        __asm _emit 0x5E
        // 0x58772C96: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58772C98: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58772C9A: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x9F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772C9F: add esp, 0x94
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772CA5: ret
        __asm _emit 0xC3
    }
}
