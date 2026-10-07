// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874CA60 .. +0xEB bytes.
// Source symbol alias: FUN_5874ca60.
extern "C" __declspec(naked) void FUN_5874ca60() {
    __asm {
        // 0x5874CA60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5874CA62: push 0x5897e4d3
        __asm _emit 0x68
        __asm _emit 0xD3
        __asm _emit 0xE4
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5874CA67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874CA6D: push eax
        __asm _emit 0x50
        // 0x5874CA6E: push ecx
        __asm _emit 0x51
        // 0x5874CA6F: push esi
        __asm _emit 0x56
        // 0x5874CA70: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874CA75: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874CA77: push eax
        __asm _emit 0x50
        // 0x5874CA78: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874CA7C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874CA82: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874CA84: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5874CA88: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5874CA8C: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874CA90: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874CA94: push eax
        __asm _emit 0x50
        // 0x5874CA95: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874CA99: push ecx
        __asm _emit 0x51
        // 0x5874CA9A: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874CA9E: push edx
        __asm _emit 0x52
        // 0x5874CA9F: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874CAA3: push eax
        __asm _emit 0x50
        // 0x5874CAA4: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874CAA8: push ecx
        __asm _emit 0x51
        // 0x5874CAA9: push edx
        __asm _emit 0x52
        // 0x5874CAAA: push eax
        __asm _emit 0x50
        // 0x5874CAAB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874CAAD: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874CAB2: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874CAB7: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874CABF: mov dword ptr [esi], 0x5898d154
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x54
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874CAC5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874CACA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874CACD: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5874CAD1: mov byte ptr [esp + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x5874CAD6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874CAD8: je 0x5874cb1d
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5874CADA: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874CAE0: cmp dword ptr [ecx + 0x160], 0x2e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2E
        // 0x5874CAE7: jle 0x5874cb00
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5874CAE9: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874CAF0: je 0x5874cb00
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874CAF2: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874CAF8: add edx, 0xb80
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874CAFE: jmp 0x5874cb02
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874CB00: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5874CB02: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5874CB05: sub ecx, 0x17
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x17
        // 0x5874CB08: push ecx
        __asm _emit 0x51
        // 0x5874CB09: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874CB0C: sub ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x20
        // 0x5874CB0F: push ecx
        __asm _emit 0x51
        // 0x5874CB10: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5874CB12: push edx
        __asm _emit 0x52
        // 0x5874CB13: push esi
        __asm _emit 0x56
        // 0x5874CB14: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874CB16: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xA5
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874CB1B: jmp 0x5874cb1f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874CB1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874CB1F: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874CB24: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874CB26: mov byte ptr [esp + 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5874CB2B: mov dword ptr [esi + 0x1e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874CB31: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x61
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874CB36: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874CB38: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874CB3C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874CB43: pop ecx
        __asm _emit 0x59
        // 0x5874CB44: pop esi
        __asm _emit 0x5E
        // 0x5874CB45: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5874CB48: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
