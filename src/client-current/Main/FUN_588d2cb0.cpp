// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 252 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d2cb0.

// Ghidra body range 0x588D2CB0..0x588D2DAC; 252 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2cb0_segment_00() {
    __asm {
        // 0x588D2CB0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D2CB2: push 0x5898924b
        __asm _emit 0x68
        __asm _emit 0x4B
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D2CB7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2CBD: push eax
        __asm _emit 0x50
        // 0x588D2CBE: push ebx
        __asm _emit 0x53
        // 0x588D2CBF: push ebp
        __asm _emit 0x55
        // 0x588D2CC0: push esi
        __asm _emit 0x56
        // 0x588D2CC1: push edi
        __asm _emit 0x57
        // 0x588D2CC2: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D2CC7: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D2CC9: push eax
        __asm _emit 0x50
        // 0x588D2CCA: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D2CCE: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2CD4: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x9F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2CD9: cdq
        __asm _emit 0x99
        // 0x588D2CDA: idiv dword ptr [esp + 0x30]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D2CDE: add edx, dword ptr [esp + 0x2c]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D2CE2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D2CE4: jle 0x588d2d96
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2CEA: mov ebp, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D2CEE: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D2CF2: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2CF7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x9F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2CFC: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588D2CFE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D2D01: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D2D05: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588D2D07: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D2D0B: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x588D2D0D: je 0x588d2d83
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x588D2D0F: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x9F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2D14: cdq
        __asm _emit 0x99
        // 0x588D2D15: idiv dword ptr [esp + 0x38]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D2D19: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2D1E: add edx, dword ptr [esp + 0x34]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D2D22: cmp dword ptr [eax + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2D28: jle 0x588d2d41
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588D2D2A: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x588D2D2C: jl 0x588d2d41
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588D2D2E: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2D34: je 0x588d2d41
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D2D36: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x588D2D39: add edx, dword ptr [eax + 0x190]
        __asm _emit 0x03
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2D3F: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588D2D41: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588D2D45: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2D4A: mov esi, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D2D50: push ecx
        __asm _emit 0x51
        // 0x588D2D51: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x9E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2D56: cdq
        __asm _emit 0x99
        // 0x588D2D57: mov ecx, 0x14
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2D5C: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D2D5E: lea edx, [edx + ebp - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x2A
        __asm _emit 0xF6
        // 0x588D2D62: push edx
        __asm _emit 0x52
        // 0x588D2D63: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x9E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2D68: cdq
        __asm _emit 0x99
        // 0x588D2D69: mov ecx, 0x14
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2D6E: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D2D70: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D2D74: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588D2D76: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588D2D78: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x588D2D7B: push eax
        __asm _emit 0x50
        // 0x588D2D7C: push edi
        __asm _emit 0x57
        // 0x588D2D7D: push esi
        __asm _emit 0x56
        // 0x588D2D7E: call 0x5876be10
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588D2D83: sub dword ptr [esp + 0x30], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        // 0x588D2D88: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D2D90: jne 0x588d2cf2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D2D96: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D2D9A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2DA1: pop ecx
        __asm _emit 0x59
        // 0x588D2DA2: pop edi
        __asm _emit 0x5F
        // 0x588D2DA3: pop esi
        __asm _emit 0x5E
        // 0x588D2DA4: pop ebp
        __asm _emit 0x5D
        // 0x588D2DA5: pop ebx
        __asm _emit 0x5B
        // 0x588D2DA6: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588D2DA9: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
