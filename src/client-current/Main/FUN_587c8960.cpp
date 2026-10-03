// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C8960 .. +0x90F bytes.
extern "C" __declspec(naked) void FUN_587c8960() {
    __asm {
        // 0x587C8960: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587C8962: push 0x58981704
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x17
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C8967: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C896D: push eax
        __asm _emit 0x50
        // 0x587C896E: push ecx
        __asm _emit 0x51
        // 0x587C896F: push ebx
        __asm _emit 0x53
        // 0x587C8970: push ebp
        __asm _emit 0x55
        // 0x587C8971: push esi
        __asm _emit 0x56
        // 0x587C8972: push edi
        __asm _emit 0x57
        // 0x587C8973: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587C8978: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587C897A: push eax
        __asm _emit 0x50
        // 0x587C897B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C897F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8985: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C8987: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C898B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C898F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C8993: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587C8997: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587C899B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587C899F: push eax
        __asm _emit 0x50
        // 0x587C89A0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587C89A4: push ecx
        __asm _emit 0x51
        // 0x587C89A5: push edx
        __asm _emit 0x52
        // 0x587C89A6: push ebp
        __asm _emit 0x55
        // 0x587C89A7: push ebx
        __asm _emit 0x53
        // 0x587C89A8: push eax
        __asm _emit 0x50
        // 0x587C89A9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C89AB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xA7
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C89B0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C89B6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587C89BB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587C89BD: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x587C89C0: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x587C89C3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C89CA: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x587C89CD: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C89D2: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587C89D6: mov dword ptr [esi], 0x5899afc4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC4
        __asm _emit 0xAF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C89DC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x42
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C89E1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C89E4: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C89E8: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587C89ED: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C89EF: je 0x587c8a02
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587C89F1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C89F3: push edi
        __asm _emit 0x57
        // 0x587C89F4: push 0x5898c964
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C89F9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C89FB: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xB3
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587C8A00: jmp 0x587c8a04
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8A02: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8A04: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587C8A06: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8A0B: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587C8A0E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x42
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8A13: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8A16: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8A1A: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587C8A1F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8A21: je 0x587c8a50
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587C8A23: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8A26: cmp dword ptr [ecx + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8A2C: jle 0x587c8a3c
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x587C8A2E: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8A34: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8A36: je 0x587c8a3c
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587C8A38: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587C8A3A: jmp 0x587c8a3e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8A3C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8A3E: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8A43: push ebp
        __asm _emit 0x55
        // 0x587C8A44: push ebx
        __asm _emit 0x53
        // 0x587C8A45: push ecx
        __asm _emit 0x51
        // 0x587C8A46: push esi
        __asm _emit 0x56
        // 0x587C8A47: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8A49: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x92
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587C8A4E: jmp 0x587c8a52
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8A50: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8A52: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C8A57: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8A59: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8A5E: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587C8A61: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xA2
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C8A66: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587C8A68: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x41
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8A6D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8A70: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8A74: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x587C8A79: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8A7B: je 0x587c8aac
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587C8A7D: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8A80: cmp dword ptr [ecx + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587C8A87: jle 0x587c8a98
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587C8A89: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8A8F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8A91: je 0x587c8a98
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587C8A93: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587C8A96: jmp 0x587c8a9a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8A98: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8A9A: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8A9F: push ebp
        __asm _emit 0x55
        // 0x587C8AA0: push ebx
        __asm _emit 0x53
        // 0x587C8AA1: push ecx
        __asm _emit 0x51
        // 0x587C8AA2: push esi
        __asm _emit 0x56
        // 0x587C8AA3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8AA5: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587C8AAA: jmp 0x587c8aae
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8AAC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8AAE: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587C8AB0: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8AB5: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587C8AB8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x41
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8ABD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8AC0: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8AC4: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x587C8AC9: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8ACB: je 0x587c8afc
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587C8ACD: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8AD0: cmp dword ptr [ecx + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587C8AD7: jle 0x587c8ae8
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587C8AD9: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8ADF: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8AE1: je 0x587c8ae8
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587C8AE3: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x587C8AE6: jmp 0x587c8aea
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8AE8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8AEA: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8AEF: push ebp
        __asm _emit 0x55
        // 0x587C8AF0: push ebx
        __asm _emit 0x53
        // 0x587C8AF1: push ecx
        __asm _emit 0x51
        // 0x587C8AF2: push esi
        __asm _emit 0x56
        // 0x587C8AF3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8AF5: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x91
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587C8AFA: jmp 0x587c8afe
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8AFC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8AFE: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C8B03: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8B05: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8B0A: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587C8B0D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xA2
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C8B12: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587C8B14: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x41
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8B19: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8B1C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8B20: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x587C8B25: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8B27: je 0x587c8b58
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587C8B29: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8B2C: cmp dword ptr [ecx + 0x164], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587C8B33: jle 0x587c8b44
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587C8B35: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8B3B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8B3D: je 0x587c8b44
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587C8B3F: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x587C8B42: jmp 0x587c8b46
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8B44: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8B46: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8B4B: push ebp
        __asm _emit 0x55
        // 0x587C8B4C: push ebx
        __asm _emit 0x53
        // 0x587C8B4D: push ecx
        __asm _emit 0x51
        // 0x587C8B4E: push esi
        __asm _emit 0x56
        // 0x587C8B4F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8B51: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x91
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587C8B56: jmp 0x587c8b5a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8B58: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8B5A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8B5F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8B61: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8B66: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587C8B69: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xA1
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C8B6E: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x587C8B70: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x40
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8B75: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8B78: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8B7C: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x587C8B81: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8B83: je 0x587c8bb3
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x587C8B85: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C8B87: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C8B89: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587C8B8E: lea ecx, [ebp + 0x1a]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x1A
        // 0x587C8B91: push ecx
        __asm _emit 0x51
        // 0x587C8B92: lea edx, [ebx + 0x6d]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x6D
        // 0x587C8B95: push edx
        __asm _emit 0x52
        // 0x587C8B96: lea ecx, [ebp + 0xd]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0D
        // 0x587C8B99: push ecx
        __asm _emit 0x51
        // 0x587C8B9A: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8BA0: lea edx, [ebx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x10
        // 0x587C8BA3: push edx
        __asm _emit 0x52
        // 0x587C8BA4: push ecx
        __asm _emit 0x51
        // 0x587C8BA5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C8BA7: push esi
        __asm _emit 0x56
        // 0x587C8BA8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8BAA: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xA6
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587C8BAF: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587C8BB1: jmp 0x587c8bb5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8BB3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587C8BB5: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x587C8BB8: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587C8BBB: mov edx, 0x7530
        __asm _emit 0xBA
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8BC0: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587C8BC5: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x587C8BC9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587C8BCB: je 0x587c8bd3
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587C8BCD: push edi
        __asm _emit 0x57
        // 0x587C8BCE: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xA3
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C8BD3: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587C8BD6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587C8BD8: je 0x587c8be0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587C8BDA: push edi
        __asm _emit 0x57
        // 0x587C8BDB: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xA3
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C8BE0: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x587C8BE3: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8BE8: mov dword ptr [eax + 0x54], 6
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8BEF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x40
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8BF4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8BF7: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8BFB: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x587C8C00: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C8C02: je 0x587c8c69
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x587C8C04: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8C0A: cmp dword ptr [ecx + 0x164], 0x9d9
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8C14: jle 0x587c8c2d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587C8C16: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8C1D: je 0x587c8c2d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C8C1F: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8C25: mov edx, dword ptr [edx + 0x2764]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8C2B: jmp 0x587c8c2f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8C2D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587C8C2F: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x587C8C36: jle 0x587c8c4f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587C8C38: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8C3F: je 0x587c8c4f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587C8C41: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8C47: add ecx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8C4D: jmp 0x587c8c51
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8C4F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8C51: lea edi, [ebp + 0x22]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x22
        // 0x587C8C54: push edi
        __asm _emit 0x57
        // 0x587C8C55: lea edi, [ebx + 0x15]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x15
        // 0x587C8C58: push edi
        __asm _emit 0x57
        // 0x587C8C59: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587C8C5B: push edx
        __asm _emit 0x52
        // 0x587C8C5C: push ecx
        __asm _emit 0x51
        // 0x587C8C5D: push esi
        __asm _emit 0x56
        // 0x587C8C5E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8C60: call 0x587c9a20
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8C65: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587C8C67: jmp 0x587c8c6b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8C69: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587C8C6B: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x587C8C6E: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587C8C71: mov eax, 0x7530
        __asm _emit 0xB8
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8C76: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587C8C7B: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x587C8C7F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587C8C81: je 0x587c8c89
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587C8C83: push edi
        __asm _emit 0x57
        // 0x587C8C84: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xA2
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C8C89: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587C8C8C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587C8C8E: je 0x587c8c96
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587C8C90: push edi
        __asm _emit 0x57
        // 0x587C8C91: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C8C96: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x587C8C99: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587C8C9B: push edi
        __asm _emit 0x57
        // 0x587C8C9C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xE6
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C8CA1: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587C8CA4: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8CA9: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x587C8CAC: mov dword ptr [eax + 0x54], 0xbebc200
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0xC2
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587C8CB3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x3F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8CB8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8CBB: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8CBF: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x587C8CC4: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8CC6: je 0x587c8d05
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x587C8CC8: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8CCB: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8CD1: jle 0x587c8cdd
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x587C8CD3: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8CD9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8CDB: jne 0x587c8cdf
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x587C8CDD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8CDF: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8CE4: lea edx, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x78
        // 0x587C8CE7: push edx
        __asm _emit 0x52
        // 0x587C8CE8: lea edx, [ebx + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x13
        // 0x587C8CEB: push edx
        __asm _emit 0x52
        // 0x587C8CEC: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8CF2: push ecx
        __asm _emit 0x51
        // 0x587C8CF3: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8CF9: push esi
        __asm _emit 0x56
        // 0x587C8CFA: push ecx
        __asm _emit 0x51
        // 0x587C8CFB: push edx
        __asm _emit 0x52
        // 0x587C8CFC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8CFE: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x50
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C8D03: jmp 0x587c8d07
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8D05: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8D07: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8D0C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8D11: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587C8D14: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x3F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8D19: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8D1C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8D20: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x587C8D25: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8D27: je 0x587c8d6c
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x587C8D29: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8D2C: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587C8D33: jle 0x587c8d44
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587C8D35: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8D3B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8D3D: je 0x587c8d44
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587C8D3F: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x587C8D42: jmp 0x587c8d46
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8D44: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8D46: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8D4B: lea edx, [ebp + 0x62]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x62
        // 0x587C8D4E: push edx
        __asm _emit 0x52
        // 0x587C8D4F: lea edx, [ebx + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x13
        // 0x587C8D52: push edx
        __asm _emit 0x52
        // 0x587C8D53: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8D59: push ecx
        __asm _emit 0x51
        // 0x587C8D5A: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8D60: push esi
        __asm _emit 0x56
        // 0x587C8D61: push ecx
        __asm _emit 0x51
        // 0x587C8D62: push edx
        __asm _emit 0x52
        // 0x587C8D63: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8D65: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x50
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C8D6A: jmp 0x587c8d6e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8D6C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8D6E: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8D73: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8D78: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8D7E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x3E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8D83: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8D86: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8D8A: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x587C8D8F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8D91: je 0x587c8dd6
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x587C8D93: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8D96: cmp dword ptr [ecx + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587C8D9D: jle 0x587c8dae
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587C8D9F: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8DA5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8DA7: je 0x587c8dae
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587C8DA9: sub ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x80
        // 0x587C8DAC: jmp 0x587c8db0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8DAE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8DB0: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8DB5: lea edx, [ebp + 0x62]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x62
        // 0x587C8DB8: push edx
        __asm _emit 0x52
        // 0x587C8DB9: lea edx, [ebx + 0x29]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x29
        // 0x587C8DBC: push edx
        __asm _emit 0x52
        // 0x587C8DBD: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8DC3: push ecx
        __asm _emit 0x51
        // 0x587C8DC4: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8DCA: push esi
        __asm _emit 0x56
        // 0x587C8DCB: push ecx
        __asm _emit 0x51
        // 0x587C8DCC: push edx
        __asm _emit 0x52
        // 0x587C8DCD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8DCF: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x4F
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C8DD4: jmp 0x587c8dd8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8DD6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8DD8: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8DDD: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8DE2: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8DE8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x3E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8DED: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8DF0: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8DF4: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x587C8DF9: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8DFB: je 0x587c8e43
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587C8DFD: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8E00: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587C8E07: jle 0x587c8e1b
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587C8E09: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8E0F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8E11: je 0x587c8e1b
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587C8E13: add ecx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8E19: jmp 0x587c8e1d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8E1B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8E1D: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8E22: lea edx, [ebp + 0x62]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x62
        // 0x587C8E25: push edx
        __asm _emit 0x52
        // 0x587C8E26: lea edx, [ebx + 0x3f]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x3F
        // 0x587C8E29: push edx
        __asm _emit 0x52
        // 0x587C8E2A: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8E30: push ecx
        __asm _emit 0x51
        // 0x587C8E31: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8E37: push esi
        __asm _emit 0x56
        // 0x587C8E38: push ecx
        __asm _emit 0x51
        // 0x587C8E39: push edx
        __asm _emit 0x52
        // 0x587C8E3A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8E3C: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x4F
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C8E41: jmp 0x587c8e45
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8E43: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8E45: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8E4A: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8E4F: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8E55: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x3D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8E5A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8E5D: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8E61: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x587C8E66: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8E68: je 0x587c8eb0
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587C8E6A: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8E6D: cmp dword ptr [ecx + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x587C8E74: jle 0x587c8e88
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587C8E76: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8E7C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8E7E: je 0x587c8e88
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587C8E80: add ecx, 0x100
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8E86: jmp 0x587c8e8a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8E88: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8E8A: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8E8F: lea edx, [ebp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x4C
        // 0x587C8E92: push edx
        __asm _emit 0x52
        // 0x587C8E93: lea edx, [ebx + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x13
        // 0x587C8E96: push edx
        __asm _emit 0x52
        // 0x587C8E97: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8E9D: push ecx
        __asm _emit 0x51
        // 0x587C8E9E: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8EA4: push esi
        __asm _emit 0x56
        // 0x587C8EA5: push ecx
        __asm _emit 0x51
        // 0x587C8EA6: push edx
        __asm _emit 0x52
        // 0x587C8EA7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8EA9: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x4E
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C8EAE: jmp 0x587c8eb2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8EB0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8EB2: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8EB7: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8EBC: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8EC2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x3D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8EC7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8ECA: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8ECE: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x587C8ED3: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8ED5: je 0x587c8f1d
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587C8ED7: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8EDA: cmp dword ptr [ecx + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x587C8EE1: jle 0x587c8ef5
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587C8EE3: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8EE9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8EEB: je 0x587c8ef5
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587C8EED: add ecx, 0x140
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8EF3: jmp 0x587c8ef7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8EF5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8EF7: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8EFC: lea edx, [ebp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x4C
        // 0x587C8EFF: push edx
        __asm _emit 0x52
        // 0x587C8F00: lea edx, [ebx + 0x29]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x29
        // 0x587C8F03: push edx
        __asm _emit 0x52
        // 0x587C8F04: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8F0A: push ecx
        __asm _emit 0x51
        // 0x587C8F0B: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8F11: push esi
        __asm _emit 0x56
        // 0x587C8F12: push ecx
        __asm _emit 0x51
        // 0x587C8F13: push edx
        __asm _emit 0x52
        // 0x587C8F14: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8F16: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x4E
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C8F1B: jmp 0x587c8f1f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8F1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8F1F: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8F24: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8F29: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8F2F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x3D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8F34: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8F37: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8F3B: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0E
        // 0x587C8F40: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8F42: je 0x587c8f8a
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587C8F44: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8F47: cmp dword ptr [ecx + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x587C8F4E: jle 0x587c8f62
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587C8F50: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8F56: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8F58: je 0x587c8f62
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587C8F5A: add ecx, 0x180
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8F60: jmp 0x587c8f64
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8F62: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8F64: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8F69: lea edx, [ebp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x4C
        // 0x587C8F6C: push edx
        __asm _emit 0x52
        // 0x587C8F6D: lea edx, [ebx + 0x3f]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x3F
        // 0x587C8F70: push edx
        __asm _emit 0x52
        // 0x587C8F71: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8F77: push ecx
        __asm _emit 0x51
        // 0x587C8F78: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8F7E: push esi
        __asm _emit 0x56
        // 0x587C8F7F: push ecx
        __asm _emit 0x51
        // 0x587C8F80: push edx
        __asm _emit 0x52
        // 0x587C8F81: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8F83: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x4E
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C8F88: jmp 0x587c8f8c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8F8A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8F8C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8F91: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C8F96: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8F9C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x3C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C8FA1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C8FA4: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C8FA8: mov byte ptr [esp + 0x20], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0F
        // 0x587C8FAD: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C8FAF: je 0x587c8ff7
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587C8FB1: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C8FB4: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587C8FBB: jle 0x587c8fcf
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587C8FBD: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8FC3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C8FC5: je 0x587c8fcf
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587C8FC7: add ecx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8FCD: jmp 0x587c8fd1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8FCF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C8FD1: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8FD6: lea edx, [ebp + 0x36]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x36
        // 0x587C8FD9: push edx
        __asm _emit 0x52
        // 0x587C8FDA: lea edx, [ebx + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x13
        // 0x587C8FDD: push edx
        __asm _emit 0x52
        // 0x587C8FDE: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8FE4: push ecx
        __asm _emit 0x51
        // 0x587C8FE5: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C8FEB: push esi
        __asm _emit 0x56
        // 0x587C8FEC: push ecx
        __asm _emit 0x51
        // 0x587C8FED: push edx
        __asm _emit 0x52
        // 0x587C8FEE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C8FF0: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x4D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C8FF5: jmp 0x587c8ff9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C8FF7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C8FF9: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8FFE: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C9003: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9009: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x3C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C900E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C9011: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C9015: mov byte ptr [esp + 0x20], 0x10
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x10
        // 0x587C901A: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C901C: je 0x587c9064
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587C901E: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C9021: cmp dword ptr [ecx + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x587C9028: jle 0x587c903c
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587C902A: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9030: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C9032: je 0x587c903c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587C9034: add ecx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C903A: jmp 0x587c903e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C903C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C903E: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9043: lea edx, [ebp + 0x36]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x36
        // 0x587C9046: push edx
        __asm _emit 0x52
        // 0x587C9047: lea edx, [ebx + 0x29]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x29
        // 0x587C904A: push edx
        __asm _emit 0x52
        // 0x587C904B: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C9051: push ecx
        __asm _emit 0x51
        // 0x587C9052: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C9058: push esi
        __asm _emit 0x56
        // 0x587C9059: push ecx
        __asm _emit 0x51
        // 0x587C905A: push edx
        __asm _emit 0x52
        // 0x587C905B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C905D: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x4D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C9062: jmp 0x587c9066
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C9064: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C9066: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C906B: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C9070: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9076: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x3B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C907B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C907E: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C9082: mov byte ptr [esp + 0x20], 0x11
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x11
        // 0x587C9087: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C9089: je 0x587c90d1
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587C908B: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C908E: cmp dword ptr [ecx + 0x160], 9
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x587C9095: jle 0x587c90a9
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587C9097: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C909D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C909F: je 0x587c90a9
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587C90A1: add ecx, 0x240
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C90A7: jmp 0x587c90ab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C90A9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C90AB: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C90B0: lea edx, [ebp + 0x36]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x36
        // 0x587C90B3: push edx
        __asm _emit 0x52
        // 0x587C90B4: lea edx, [ebx + 0x3f]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x3F
        // 0x587C90B7: push edx
        __asm _emit 0x52
        // 0x587C90B8: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C90BE: push ecx
        __asm _emit 0x51
        // 0x587C90BF: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C90C5: push esi
        __asm _emit 0x56
        // 0x587C90C6: push ecx
        __asm _emit 0x51
        // 0x587C90C7: push edx
        __asm _emit 0x52
        // 0x587C90C8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C90CA: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x4C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C90CF: jmp 0x587c90d3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C90D1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C90D3: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C90D8: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C90DD: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C90E3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C90E8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C90EB: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C90EF: mov byte ptr [esp + 0x20], 0x12
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x12
        // 0x587C90F4: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C90F6: je 0x587c913e
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587C90F8: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C90FB: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x587C9102: jle 0x587c9116
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587C9104: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C910A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C910C: je 0x587c9116
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587C910E: add ecx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9114: jmp 0x587c9118
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C9116: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C9118: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C911D: lea edx, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x78
        // 0x587C9120: push edx
        __asm _emit 0x52
        // 0x587C9121: lea edx, [ebx + 0x3f]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x3F
        // 0x587C9124: push edx
        __asm _emit 0x52
        // 0x587C9125: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C912B: push ecx
        __asm _emit 0x51
        // 0x587C912C: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C9132: push esi
        __asm _emit 0x56
        // 0x587C9133: push ecx
        __asm _emit 0x51
        // 0x587C9134: push edx
        __asm _emit 0x52
        // 0x587C9135: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C9137: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x4C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C913C: jmp 0x587c9140
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C913E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C9140: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9145: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C914A: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9150: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x3A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C9155: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C9158: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C915C: mov byte ptr [esp + 0x20], 0x13
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x13
        // 0x587C9161: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C9163: je 0x587c91ab
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587C9165: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C9168: cmp dword ptr [ecx + 0x160], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x587C916F: jle 0x587c9183
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587C9171: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9177: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C9179: je 0x587c9183
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587C917B: add ecx, 0x280
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9181: jmp 0x587c9185
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C9183: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C9185: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C918A: lea edx, [ebp + 0x36]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x36
        // 0x587C918D: push edx
        __asm _emit 0x52
        // 0x587C918E: lea edx, [ebx + 0x55]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x55
        // 0x587C9191: push edx
        __asm _emit 0x52
        // 0x587C9192: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C9198: push ecx
        __asm _emit 0x51
        // 0x587C9199: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C919F: push esi
        __asm _emit 0x56
        // 0x587C91A0: push ecx
        __asm _emit 0x51
        // 0x587C91A1: push edx
        __asm _emit 0x52
        // 0x587C91A2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C91A4: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x4B
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C91A9: jmp 0x587c91ad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C91AB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C91AD: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C91B2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C91B7: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C91BD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x3A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C91C2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C91C5: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C91C9: mov byte ptr [esp + 0x20], 0x14
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x14
        // 0x587C91CE: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587C91D0: je 0x587c9218
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587C91D2: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587C91D5: cmp dword ptr [ecx + 0x160], 0xc
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x587C91DC: jle 0x587c91f0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587C91DE: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C91E4: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587C91E6: je 0x587c91f0
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587C91E8: add ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C91EE: jmp 0x587c91f2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C91F0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C91F2: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C91F8: push 0x7530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C91FD: add ebp, 0x62
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x62
        // 0x587C9200: push ebp
        __asm _emit 0x55
        // 0x587C9201: add ebx, 0x55
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x55
        // 0x587C9204: push ebx
        __asm _emit 0x53
        // 0x587C9205: push ecx
        __asm _emit 0x51
        // 0x587C9206: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C920C: push esi
        __asm _emit 0x56
        // 0x587C920D: push ecx
        __asm _emit 0x51
        // 0x587C920E: push edx
        __asm _emit 0x52
        // 0x587C920F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587C9211: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x4B
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C9216: jmp 0x587c921a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C9218: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C921A: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9220: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9225: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587C9229: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587C922D: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9232: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9237: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587C923A: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587C923D: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9243: mov dword ptr [esi + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9249: mov dword ptr [esi + 0xb8], 0xbebc200
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC2
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587C9253: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587C9257: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587C9259: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C925D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9264: pop ecx
        __asm _emit 0x59
        // 0x587C9265: pop edi
        __asm _emit 0x5F
        // 0x587C9266: pop esi
        __asm _emit 0x5E
        // 0x587C9267: pop ebp
        __asm _emit 0x5D
        // 0x587C9268: pop ebx
        __asm _emit 0x5B
        // 0x587C9269: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587C926C: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
