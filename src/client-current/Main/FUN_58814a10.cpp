// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58814A10 .. +0x33E bytes.
// Source symbol alias: FUN_58814a10.
extern "C" __declspec(naked) void FUN_58814a10() {
    __asm {
        // 0x58814A10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58814A12: push 0x5898313f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x31
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58814A17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814A1D: push eax
        __asm _emit 0x50
        // 0x58814A1E: push ecx
        __asm _emit 0x51
        // 0x58814A1F: push ebx
        __asm _emit 0x53
        // 0x58814A20: push ebp
        __asm _emit 0x55
        // 0x58814A21: push esi
        __asm _emit 0x56
        // 0x58814A22: push edi
        __asm _emit 0x57
        // 0x58814A23: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58814A28: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58814A2A: push eax
        __asm _emit 0x50
        // 0x58814A2B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58814A2F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814A35: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58814A37: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58814A3B: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58814A3F: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58814A43: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58814A47: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58814A4B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58814A4F: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58814A53: push edi
        __asm _emit 0x57
        // 0x58814A54: push eax
        __asm _emit 0x50
        // 0x58814A55: push ecx
        __asm _emit 0x51
        // 0x58814A56: push ebp
        __asm _emit 0x55
        // 0x58814A57: push ebx
        __asm _emit 0x53
        // 0x58814A58: push edx
        __asm _emit 0x52
        // 0x58814A59: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58814A5B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xE7
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58814A60: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58814A66: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58814A6B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58814A6D: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58814A70: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x58814A73: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814A7A: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58814A7D: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58814A7F: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58814A83: mov dword ptr [esi], 0x5899d6f4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF4
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58814A89: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58814A8E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58814A91: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58814A95: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58814A9A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58814A9C: je 0x58814ae3
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58814A9E: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814AA4: cmp dword ptr [ecx + 0x164], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x58814AAB: jle 0x58814ad0
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58814AAD: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814AB4: je 0x58814ad0
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58814AB6: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814ABC: mov ecx, dword ptr [ecx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x2C
        // 0x58814ABF: lea edx, [edi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x58814AC2: push edx
        __asm _emit 0x52
        // 0x58814AC3: push ebp
        __asm _emit 0x55
        // 0x58814AC4: push ebx
        __asm _emit 0x53
        // 0x58814AC5: push ecx
        __asm _emit 0x51
        // 0x58814AC6: push esi
        __asm _emit 0x56
        // 0x58814AC7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58814AC9: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xD1
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58814ACE: jmp 0x58814ae5
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58814AD0: lea edx, [edi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x58814AD3: push edx
        __asm _emit 0x52
        // 0x58814AD4: push ebp
        __asm _emit 0x55
        // 0x58814AD5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58814AD7: push ebx
        __asm _emit 0x53
        // 0x58814AD8: push ecx
        __asm _emit 0x51
        // 0x58814AD9: push esi
        __asm _emit 0x56
        // 0x58814ADA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58814ADC: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xD1
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58814AE1: jmp 0x58814ae5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58814AE3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58814AE5: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58814AEA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58814AEC: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58814AF1: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58814AF4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xE2
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58814AF9: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58814AFB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58814B00: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58814B03: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58814B07: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58814B0C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58814B0E: je 0x58814b55
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58814B10: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814B16: cmp dword ptr [ecx + 0x164], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x58814B1D: jle 0x58814b42
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58814B1F: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814B26: je 0x58814b42
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58814B28: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814B2E: mov ecx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x28
        // 0x58814B31: add edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x64
        // 0x58814B34: push edi
        __asm _emit 0x57
        // 0x58814B35: push ebp
        __asm _emit 0x55
        // 0x58814B36: push ebx
        __asm _emit 0x53
        // 0x58814B37: push ecx
        __asm _emit 0x51
        // 0x58814B38: push esi
        __asm _emit 0x56
        // 0x58814B39: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58814B3B: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xD1
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58814B40: jmp 0x58814b57
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58814B42: add edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x64
        // 0x58814B45: push edi
        __asm _emit 0x57
        // 0x58814B46: push ebp
        __asm _emit 0x55
        // 0x58814B47: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58814B49: push ebx
        __asm _emit 0x53
        // 0x58814B4A: push ecx
        __asm _emit 0x51
        // 0x58814B4B: push esi
        __asm _emit 0x56
        // 0x58814B4C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58814B4E: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xD1
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58814B53: jmp 0x58814b57
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58814B55: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58814B57: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58814B5A: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814B5F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58814B63: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58814B66: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814B6B: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58814B70: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xE1
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58814B75: lea eax, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58814B78: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58814B7C: add ebp, 0x46
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x46
        // 0x58814B7F: mov dword ptr [esp + 0x34], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814B87: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58814B89: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58814B8E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58814B91: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58814B95: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58814B9A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58814B9C: je 0x58814bcf
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58814B9E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58814BA0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58814BA2: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58814BA7: lea ecx, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58814BAA: push ecx
        __asm _emit 0x51
        // 0x58814BAB: lea edx, [ebx + 0x258]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814BB1: push edx
        __asm _emit 0x52
        // 0x58814BB2: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814BB8: push ebp
        __asm _emit 0x55
        // 0x58814BB9: lea ecx, [ebx + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814BBF: push ecx
        __asm _emit 0x51
        // 0x58814BC0: push edx
        __asm _emit 0x52
        // 0x58814BC1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58814BC3: push esi
        __asm _emit 0x56
        // 0x58814BC4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58814BC6: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xE6
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58814BCB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58814BCD: jmp 0x58814bd1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58814BCF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58814BD1: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58814BD5: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58814BD7: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58814BDB: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58814BDE: add eax, 0x190
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814BE3: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58814BE8: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58814BEC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58814BEE: je 0x58814bf6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58814BF0: push edi
        __asm _emit 0x57
        // 0x58814BF1: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xE3
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58814BF6: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58814BF9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58814BFB: je 0x58814c03
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58814BFD: push edi
        __asm _emit 0x57
        // 0x58814BFE: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xE2
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58814C03: add dword ptr [esp + 0x38], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x04
        // 0x58814C08: add ebp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x14
        // 0x58814C0B: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x58814C10: jne 0x58814b87
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58814C16: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814C1B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58814C20: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58814C23: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58814C27: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58814C2C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58814C2E: je 0x58814c8b
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x58814C30: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814C36: cmp dword ptr [ecx + 0x160], 9
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x58814C3D: jle 0x58814c56
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58814C3F: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814C46: je 0x58814c56
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58814C48: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814C4E: add edx, 0x240
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814C54: jmp 0x58814c58
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58814C56: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58814C58: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58814C5C: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x58814C5F: push ecx
        __asm _emit 0x51
        // 0x58814C60: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58814C64: add ecx, 0xe2
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814C6A: push ecx
        __asm _emit 0x51
        // 0x58814C6B: lea ecx, [ebx + 0xaf]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814C71: push ecx
        __asm _emit 0x51
        // 0x58814C72: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814C78: push edx
        __asm _emit 0x52
        // 0x58814C79: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814C7F: push esi
        __asm _emit 0x56
        // 0x58814C80: push edx
        __asm _emit 0x52
        // 0x58814C81: push ecx
        __asm _emit 0x51
        // 0x58814C82: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58814C84: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x91
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58814C89: jmp 0x58814c8d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58814C8B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58814C8D: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814C92: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58814C97: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814C9D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x7F
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58814CA2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58814CA5: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58814CA9: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58814CAE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58814CB0: je 0x58814d0d
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x58814CB2: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814CB8: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x58814CBF: jle 0x58814cd8
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58814CC1: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814CC8: je 0x58814cd8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58814CCA: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814CD0: add edx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814CD6: jmp 0x58814cda
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58814CD8: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58814CDA: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58814CDE: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x58814CE1: push ecx
        __asm _emit 0x51
        // 0x58814CE2: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58814CE6: add ecx, 0xe2
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814CEC: push ecx
        __asm _emit 0x51
        // 0x58814CED: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814CF3: add ebx, 0x109
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814CF9: push ebx
        __asm _emit 0x53
        // 0x58814CFA: push edx
        __asm _emit 0x52
        // 0x58814CFB: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58814D01: push esi
        __asm _emit 0x56
        // 0x58814D02: push edx
        __asm _emit 0x52
        // 0x58814D03: push ecx
        __asm _emit 0x51
        // 0x58814D04: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58814D06: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58814D0B: jmp 0x58814d0f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58814D0D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58814D0F: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58814D13: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814D19: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814D1E: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58814D21: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814D26: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x58814D29: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58814D2D: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814D32: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58814D36: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58814D38: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58814D3C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814D43: pop ecx
        __asm _emit 0x59
        // 0x58814D44: pop edi
        __asm _emit 0x5F
        // 0x58814D45: pop esi
        __asm _emit 0x5E
        // 0x58814D46: pop ebp
        __asm _emit 0x5D
        // 0x58814D47: pop ebx
        __asm _emit 0x5B
        // 0x58814D48: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58814D4B: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
