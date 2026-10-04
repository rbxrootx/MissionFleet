// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A1A10 .. +0x3C6 bytes.
// Source symbol alias: FUN_587a1a10.
extern "C" __declspec(naked) void FUN_587a1a10() {
    __asm {
        // 0x587A1A10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A1A12: push 0x589808d5
        __asm _emit 0x68
        __asm _emit 0xD5
        __asm _emit 0x08
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A1A17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1A1D: push eax
        __asm _emit 0x50
        // 0x587A1A1E: push ecx
        __asm _emit 0x51
        // 0x587A1A1F: push ebx
        __asm _emit 0x53
        // 0x587A1A20: push ebp
        __asm _emit 0x55
        // 0x587A1A21: push esi
        __asm _emit 0x56
        // 0x587A1A22: push edi
        __asm _emit 0x57
        // 0x587A1A23: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A1A28: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A1A2A: push eax
        __asm _emit 0x50
        // 0x587A1A2B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A1A2F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1A35: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A1A37: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A1A3B: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A1A3F: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A1A43: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A1A47: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A1A49: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A1A4B: push edi
        __asm _emit 0x57
        // 0x587A1A4C: push edi
        __asm _emit 0x57
        // 0x587A1A4D: push ebp
        __asm _emit 0x55
        // 0x587A1A4E: push ebx
        __asm _emit 0x53
        // 0x587A1A4F: push eax
        __asm _emit 0x50
        // 0x587A1A50: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x17
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A1A55: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A1A5B: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A1A60: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x587A1A63: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x587A1A66: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1A6D: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x587A1A70: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587A1A72: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A1A76: mov dword ptr [esi], 0x58998558
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x58
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A1A7C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xB1
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A1A81: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A1A84: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A1A88: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587A1A8D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587A1A8F: je 0x587a1ad1
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587A1A91: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1A97: cmp dword ptr [ecx + 0x164], 8
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x587A1A9E: jle 0x587a1ac0
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x587A1AA0: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1AA6: je 0x587a1ac0
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587A1AA8: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1AAE: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x20
        // 0x587A1AB1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A1AB3: push ebp
        __asm _emit 0x55
        // 0x587A1AB4: push ebx
        __asm _emit 0x53
        // 0x587A1AB5: push ecx
        __asm _emit 0x51
        // 0x587A1AB6: push esi
        __asm _emit 0x56
        // 0x587A1AB7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1AB9: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x01
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587A1ABE: jmp 0x587a1ad3
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587A1AC0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A1AC2: push ebp
        __asm _emit 0x55
        // 0x587A1AC3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A1AC5: push ebx
        __asm _emit 0x53
        // 0x587A1AC6: push ecx
        __asm _emit 0x51
        // 0x587A1AC7: push esi
        __asm _emit 0x56
        // 0x587A1AC8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1ACA: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587A1ACF: jmp 0x587a1ad3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A1AD1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A1AD3: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587A1AD5: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587A1ADA: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587A1ADD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xB1
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A1AE2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A1AE5: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A1AE9: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587A1AEE: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587A1AF0: je 0x587a1b32
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587A1AF2: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1AF8: cmp dword ptr [ecx + 0x164], 9
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x587A1AFF: jle 0x587a1b21
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x587A1B01: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1B07: je 0x587a1b21
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587A1B09: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1B0F: mov ecx, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x24
        // 0x587A1B12: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A1B14: push ebp
        __asm _emit 0x55
        // 0x587A1B15: push ebx
        __asm _emit 0x53
        // 0x587A1B16: push ecx
        __asm _emit 0x51
        // 0x587A1B17: push esi
        __asm _emit 0x56
        // 0x587A1B18: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1B1A: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587A1B1F: jmp 0x587a1b34
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587A1B21: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A1B23: push ebp
        __asm _emit 0x55
        // 0x587A1B24: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A1B26: push ebx
        __asm _emit 0x53
        // 0x587A1B27: push ecx
        __asm _emit 0x51
        // 0x587A1B28: push esi
        __asm _emit 0x56
        // 0x587A1B29: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1B2B: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587A1B30: jmp 0x587a1b34
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A1B32: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A1B34: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A1B39: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1B3B: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587A1B40: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587A1B43: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x11
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A1B48: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587A1B4B: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1B50: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587A1B54: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587A1B56: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xB0
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A1B5B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587A1B5D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A1B60: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A1B64: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x587A1B69: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A1B6B: je 0x587a1b8c
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587A1B6D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A1B6F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A1B71: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A1B73: push ebp
        __asm _emit 0x55
        // 0x587A1B74: push ebx
        __asm _emit 0x53
        // 0x587A1B75: push esi
        __asm _emit 0x56
        // 0x587A1B76: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A1B78: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x16
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A1B7D: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A1B83: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1B8A: jmp 0x587a1b8e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A1B8C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A1B8E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1B93: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A1B95: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587A1B9A: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x587A1B9D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x11
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A1BA2: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587A1BA5: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1BAA: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587A1BAE: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1BB3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A1BB8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A1BBB: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A1BBF: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x587A1BC4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A1BC6: je 0x587a1bfd
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x587A1BC8: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x587A1BCD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A1BCF: push 0xdcdcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0x00
        // 0x587A1BD4: lea ecx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1BDA: push ecx
        __asm _emit 0x51
        // 0x587A1BDB: lea edx, [ebx + 0x15e]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1BE1: push edx
        __asm _emit 0x52
        // 0x587A1BE2: lea ecx, [ebp + 0x42]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x42
        // 0x587A1BE5: push ecx
        __asm _emit 0x51
        // 0x587A1BE6: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1BEC: lea edx, [ebx + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x3C
        // 0x587A1BEF: push edx
        __asm _emit 0x52
        // 0x587A1BF0: push ecx
        __asm _emit 0x51
        // 0x587A1BF1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A1BF3: push esi
        __asm _emit 0x56
        // 0x587A1BF4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1BF6: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xD8
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587A1BFB: jmp 0x587a1bff
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A1BFD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A1BFF: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587A1C02: mov dword ptr [eax + 0x5c], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x5C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1C09: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587A1C0C: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1C11: mov dword ptr [eax + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x68
        // 0x587A1C14: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1C19: cmp dword ptr [eax + 0x170], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1C20: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587A1C25: jle 0x587a1c3a
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x587A1C27: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1C2E: je 0x587a1c3a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587A1C30: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1C36: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587A1C38: jmp 0x587a1c3c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A1C3A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A1C3C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587A1C3F: push eax
        __asm _emit 0x50
        // 0x587A1C40: call 0x5875f0e0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587A1C45: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1C4A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xAF
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A1C4F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A1C52: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A1C56: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x587A1C5B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A1C5D: je 0x587a1c94
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x587A1C5F: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x587A1C64: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A1C66: push 0xdcdcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0x00
        // 0x587A1C6B: lea ecx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1C71: push ecx
        __asm _emit 0x51
        // 0x587A1C72: lea edx, [ebx + 0x15e]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1C78: push edx
        __asm _emit 0x52
        // 0x587A1C79: lea ecx, [ebp + 0x5a]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x5A
        // 0x587A1C7C: push ecx
        __asm _emit 0x51
        // 0x587A1C7D: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1C83: lea edx, [ebx + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x3C
        // 0x587A1C86: push edx
        __asm _emit 0x52
        // 0x587A1C87: push ecx
        __asm _emit 0x51
        // 0x587A1C88: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A1C8A: push esi
        __asm _emit 0x56
        // 0x587A1C8B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1C8D: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xD7
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587A1C92: jmp 0x587a1c96
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A1C94: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A1C96: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587A1C99: mov dword ptr [eax + 0x5c], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x5C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1CA0: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587A1CA3: mov dword ptr [eax + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x68
        // 0x587A1CA6: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1CAB: cmp dword ptr [eax + 0x170], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1CB2: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587A1CB7: jle 0x587a1ccc
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x587A1CB9: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1CC0: je 0x587a1ccc
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587A1CC2: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1CC8: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587A1CCA: jmp 0x587a1cce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A1CCC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A1CCE: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587A1CD1: push eax
        __asm _emit 0x50
        // 0x587A1CD2: call 0x5875f0e0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587A1CD7: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1CDC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xAF
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A1CE1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A1CE4: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A1CE8: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x587A1CED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A1CEF: je 0x587a1d1b
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587A1CF1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A1CF3: lea ecx, [ebp + 0x82]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1CF9: push ecx
        __asm _emit 0x51
        // 0x587A1CFA: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1D00: lea edx, [ebx + 0xb6]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1D06: push edx
        __asm _emit 0x52
        // 0x587A1D07: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1D0D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A1D0F: push esi
        __asm _emit 0x56
        // 0x587A1D10: push ecx
        __asm _emit 0x51
        // 0x587A1D11: push edx
        __asm _emit 0x52
        // 0x587A1D12: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1D14: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587A1D19: jmp 0x587a1d1d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A1D1B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A1D1D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1D22: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1D24: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587A1D29: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x587A1D2C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x0F
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A1D31: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1D36: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xAF
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A1D3B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A1D3E: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A1D42: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x587A1D47: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A1D49: je 0x587a1d75
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587A1D4B: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1D51: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A1D57: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A1D59: add ebp, 0x82
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1D5F: push ebp
        __asm _emit 0x55
        // 0x587A1D60: add ebx, 0x106
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1D66: push ebx
        __asm _emit 0x53
        // 0x587A1D67: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A1D69: push esi
        __asm _emit 0x56
        // 0x587A1D6A: push ecx
        __asm _emit 0x51
        // 0x587A1D6B: push edx
        __asm _emit 0x52
        // 0x587A1D6C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1D6E: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xC0
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587A1D73: jmp 0x587a1d77
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A1D75: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A1D77: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1D7C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1D7E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587A1D83: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587A1D86: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x0F
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A1D8B: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1D90: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587A1D94: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1D99: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587A1D9D: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1DA2: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587A1DA6: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587A1DAA: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1DAF: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587A1DB2: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1DB7: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587A1DBA: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587A1DBE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A1DC0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A1DC4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1DCB: pop ecx
        __asm _emit 0x59
        // 0x587A1DCC: pop edi
        __asm _emit 0x5F
        // 0x587A1DCD: pop esi
        __asm _emit 0x5E
        // 0x587A1DCE: pop ebp
        __asm _emit 0x5D
        // 0x587A1DCF: pop ebx
        __asm _emit 0x5B
        // 0x587A1DD0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A1DD3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
