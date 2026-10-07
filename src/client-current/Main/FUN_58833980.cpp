// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 998 bytes in 2 exact ranges.
// Source symbol alias: FUN_58833980.

// Ghidra body range 0x58833980..0x58833A1D; 157 mapped bytes.
extern "C" __declspec(naked) void FUN_58833980_segment_00() {
    __asm {
        // 0x58833980: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58833982: push 0x58984165
        __asm _emit 0x68
        __asm _emit 0x65
        __asm _emit 0x41
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58833987: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883398D: push eax
        __asm _emit 0x50
        // 0x5883398E: push ecx
        __asm _emit 0x51
        // 0x5883398F: push ebx
        __asm _emit 0x53
        // 0x58833990: push ebp
        __asm _emit 0x55
        // 0x58833991: push esi
        __asm _emit 0x56
        // 0x58833992: push edi
        __asm _emit 0x57
        // 0x58833993: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58833998: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5883399A: push eax
        __asm _emit 0x50
        // 0x5883399B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883399F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588339A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588339A7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588339AB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588339AF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588339B3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588339B7: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588339BB: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588339BF: push eax
        __asm _emit 0x50
        // 0x588339C0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588339C4: push ecx
        __asm _emit 0x51
        // 0x588339C5: push edx
        __asm _emit 0x52
        // 0x588339C6: push ebx
        __asm _emit 0x53
        // 0x588339C7: push ebp
        __asm _emit 0x55
        // 0x588339C8: push eax
        __asm _emit 0x50
        // 0x588339C9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588339CB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xF7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588339D0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588339D6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588339DB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588339DD: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588339E0: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x588339E3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588339EA: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588339ED: mov dword ptr [esi], 0x5899e184
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x84
        __asm _emit 0xE1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588339F3: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588339F9: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588339FD: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58833A00: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58833A03: mov dword ptr [esp + 0x38], 0x73
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833A0B: mov dword ptr [esp + 0x3c], 0x1cc
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833A13: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833A1B: jmp 0x58833a20
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58833A20..0x58833D69; 841 mapped bytes.
extern "C" __declspec(naked) void FUN_58833980_segment_01() {
    __asm {
        // 0x58833A20: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58833A22: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58833A27: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58833A29: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58833A2C: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58833A30: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58833A35: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58833A37: je 0x58833aae
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x58833A39: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58833A3C: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58833A40: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833A46: jle 0x58833a5f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58833A48: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58833A4A: jl 0x58833a5f
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x58833A4C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833A52: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833A54: je 0x58833a5f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58833A56: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58833A5A: mov ebp, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x02
        // 0x58833A5D: jmp 0x58833a61
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58833A5F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58833A61: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58833A65: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58833A67: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833A69: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833A6B: push ebx
        __asm _emit 0x53
        // 0x58833A6C: push eax
        __asm _emit 0x50
        // 0x58833A6D: push esi
        __asm _emit 0x56
        // 0x58833A6E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58833A70: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xF7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58833A75: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58833A7B: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58833A7E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58833A80: je 0x58833aa8
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58833A82: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x58833A85: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58833A88: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58833A8B: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58833A8E: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58833A91: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58833A93: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58833A96: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58833A99: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58833A9C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58833A9F: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58833AA2: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58833AA5: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58833AA8: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58833AAC: jmp 0x58833ab0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58833AAE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58833AB0: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58833AB4: mov dword ptr [esi + eax - 0x168], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x06
        __asm _emit 0x98
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58833ABB: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58833ABE: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58833AC2: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833AC7: add dword ptr [esp + 0x38], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58833ACB: sub dword ptr [esp + 0x34], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58833ACF: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58833AD4: jne 0x58833a20
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58833ADA: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58833ADD: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58833AE2: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xF2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58833AE7: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58833AEA: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833AEF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xF2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58833AF4: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58833AF6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58833AFB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58833AFE: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58833B02: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58833B07: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833B09: je 0x58833b43
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58833B0B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833B0D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833B0F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58833B14: lea ecx, [ebx + 0xa7]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833B1A: push ecx
        __asm _emit 0x51
        // 0x58833B1B: lea edx, [ebp + 0x20d]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833B21: push edx
        __asm _emit 0x52
        // 0x58833B22: lea ecx, [ebx + 0x9a]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833B28: push ecx
        __asm _emit 0x51
        // 0x58833B29: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833B2F: lea edx, [ebp + 0x182]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833B35: push edx
        __asm _emit 0x52
        // 0x58833B36: push ecx
        __asm _emit 0x51
        // 0x58833B37: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833B39: push esi
        __asm _emit 0x56
        // 0x58833B3A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58833B3C: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xF7
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833B41: jmp 0x58833b45
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58833B43: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58833B45: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58833B47: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58833B4C: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58833B4F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58833B54: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58833B57: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58833B5B: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58833B60: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833B62: je 0x58833b9c
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58833B64: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833B66: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833B68: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58833B6D: lea edx, [ebx + 0xbb]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833B73: push edx
        __asm _emit 0x52
        // 0x58833B74: lea ecx, [ebp + 0x20d]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833B7A: push ecx
        __asm _emit 0x51
        // 0x58833B7B: lea edx, [ebx + 0xae]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833B81: push edx
        __asm _emit 0x52
        // 0x58833B82: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833B88: lea ecx, [ebp + 0x182]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833B8E: push ecx
        __asm _emit 0x51
        // 0x58833B8F: push edx
        __asm _emit 0x52
        // 0x58833B90: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833B92: push esi
        __asm _emit 0x56
        // 0x58833B93: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58833B95: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xF6
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833B9A: jmp 0x58833b9e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58833B9C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58833B9E: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58833BA0: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58833BA5: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58833BA8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58833BAD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58833BB0: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58833BB4: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58833BB9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833BBB: je 0x58833bf5
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58833BBD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833BBF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833BC1: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58833BC6: lea ecx, [ebx + 0xe9]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833BCC: push ecx
        __asm _emit 0x51
        // 0x58833BCD: lea edx, [ebp + 0x20d]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833BD3: push edx
        __asm _emit 0x52
        // 0x58833BD4: lea ecx, [ebx + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833BDA: push ecx
        __asm _emit 0x51
        // 0x58833BDB: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833BE1: lea edx, [ebp + 0x182]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833BE7: push edx
        __asm _emit 0x52
        // 0x58833BE8: push ecx
        __asm _emit 0x51
        // 0x58833BE9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833BEB: push esi
        __asm _emit 0x56
        // 0x58833BEC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58833BEE: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xF6
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833BF3: jmp 0x58833bf7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58833BF5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58833BF7: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58833BF9: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58833BFE: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58833C01: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58833C06: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58833C09: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58833C0D: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58833C12: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833C14: je 0x58833c4e
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58833C16: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833C18: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833C1A: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58833C1F: lea edx, [ebx + 0xfd]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833C25: push edx
        __asm _emit 0x52
        // 0x58833C26: lea ecx, [ebp + 0x20d]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833C2C: push ecx
        __asm _emit 0x51
        // 0x58833C2D: lea edx, [ebx + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833C33: push edx
        __asm _emit 0x52
        // 0x58833C34: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833C3A: lea ecx, [ebp + 0x182]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833C40: push ecx
        __asm _emit 0x51
        // 0x58833C41: push edx
        __asm _emit 0x52
        // 0x58833C42: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833C44: push esi
        __asm _emit 0x56
        // 0x58833C45: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58833C47: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xF6
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833C4C: jmp 0x58833c50
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58833C4E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58833C50: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833C55: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58833C5A: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58833C5D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x8F
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58833C62: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58833C65: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58833C69: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x58833C6E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833C70: je 0x58833cbb
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x58833C72: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58833C75: cmp dword ptr [ecx + 0x160], 0x15
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x58833C7C: jle 0x58833c90
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58833C7E: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833C84: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58833C86: je 0x58833c90
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58833C88: add ecx, 0x540
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833C8E: jmp 0x58833c92
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58833C90: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58833C92: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58833C94: lea edx, [ebx + 0x157]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833C9A: push edx
        __asm _emit 0x52
        // 0x58833C9B: lea edx, [ebp + 0x1ce]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xCE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833CA1: push edx
        __asm _emit 0x52
        // 0x58833CA2: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833CA8: push ecx
        __asm _emit 0x51
        // 0x58833CA9: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833CAF: push esi
        __asm _emit 0x56
        // 0x58833CB0: push ecx
        __asm _emit 0x51
        // 0x58833CB1: push edx
        __asm _emit 0x52
        // 0x58833CB2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58833CB4: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xA0
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58833CB9: jmp 0x58833cbd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58833CBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58833CBD: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833CC2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58833CC7: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58833CCA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x8F
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58833CCF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58833CD2: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58833CD6: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x58833CDB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833CDD: je 0x58833d28
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x58833CDF: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58833CE2: cmp dword ptr [ecx + 0x160], 0x16
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x58833CE9: jle 0x58833cfd
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58833CEB: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833CF1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58833CF3: je 0x58833cfd
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58833CF5: add ecx, 0x580
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833CFB: jmp 0x58833cff
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58833CFD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58833CFF: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833D05: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58833D07: add ebx, 0x157
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D0D: push ebx
        __asm _emit 0x53
        // 0x58833D0E: add ebp, 0x1ff
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D14: push ebp
        __asm _emit 0x55
        // 0x58833D15: push ecx
        __asm _emit 0x51
        // 0x58833D16: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833D1C: push esi
        __asm _emit 0x56
        // 0x58833D1D: push ecx
        __asm _emit 0x51
        // 0x58833D1E: push edx
        __asm _emit 0x52
        // 0x58833D1F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58833D21: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xA0
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58833D26: jmp 0x58833d2a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58833D28: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58833D2A: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D30: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58833D34: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D39: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58833D3C: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D41: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58833D44: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58833D48: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D4D: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58833D51: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58833D53: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58833D57: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D5E: pop ecx
        __asm _emit 0x59
        // 0x58833D5F: pop edi
        __asm _emit 0x5F
        // 0x58833D60: pop esi
        __asm _emit 0x5E
        // 0x58833D61: pop ebp
        __asm _emit 0x5D
        // 0x58833D62: pop ebx
        __asm _emit 0x5B
        // 0x58833D63: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58833D66: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
