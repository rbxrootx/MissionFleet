// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A3A80 .. +0x386 bytes.
// Source symbol alias: FUN_588a3a80.
extern "C" __declspec(naked) void FUN_588a3a80() {
    __asm {
        // 0x588A3A80: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588A3A82: push 0x589879ef
        __asm _emit 0x68
        __asm _emit 0xEF
        __asm _emit 0x79
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A3A87: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3A8D: push eax
        __asm _emit 0x50
        // 0x588A3A8E: push ecx
        __asm _emit 0x51
        // 0x588A3A8F: push ebx
        __asm _emit 0x53
        // 0x588A3A90: push ebp
        __asm _emit 0x55
        // 0x588A3A91: push esi
        __asm _emit 0x56
        // 0x588A3A92: push edi
        __asm _emit 0x57
        // 0x588A3A93: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588A3A98: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588A3A9A: push eax
        __asm _emit 0x50
        // 0x588A3A9B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588A3A9F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3AA5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A3AA7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588A3AAB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A3AAF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588A3AB3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588A3AB7: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A3ABB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A3ABF: push eax
        __asm _emit 0x50
        // 0x588A3AC0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A3AC4: push ecx
        __asm _emit 0x51
        // 0x588A3AC5: push edx
        __asm _emit 0x52
        // 0x588A3AC6: push edi
        __asm _emit 0x57
        // 0x588A3AC7: push ebx
        __asm _emit 0x53
        // 0x588A3AC8: push eax
        __asm _emit 0x50
        // 0x588A3AC9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A3ACB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xF6
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3AD0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A3AD6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588A3ADB: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588A3ADE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A3AE0: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588A3AE3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3AEA: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x588A3AED: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3AF2: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A3AF6: mov dword ptr [esi], 0x589a064c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A3AFC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x91
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A3B01: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A3B04: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A3B08: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588A3B0D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588A3B0F: je 0x588a3b22
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588A3B11: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A3B13: push edi
        __asm _emit 0x57
        // 0x588A3B14: push 0x589a0668
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A3B19: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A3B1B: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3B20: jmp 0x588a3b24
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A3B22: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A3B24: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A3B26: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A3B2B: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A3B2E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x91
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A3B33: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A3B36: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A3B3A: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588A3B3F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588A3B41: je 0x588a3b7a
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588A3B43: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A3B46: cmp dword ptr [ecx + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3B4C: jle 0x588a3b69
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588A3B4E: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3B54: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588A3B56: je 0x588a3b69
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588A3B58: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x588A3B5A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A3B5C: push edi
        __asm _emit 0x57
        // 0x588A3B5D: push edi
        __asm _emit 0x57
        // 0x588A3B5E: push ecx
        __asm _emit 0x51
        // 0x588A3B5F: push esi
        __asm _emit 0x56
        // 0x588A3B60: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A3B62: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xE0
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A3B67: jmp 0x588a3b7c
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588A3B69: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A3B6B: push edi
        __asm _emit 0x57
        // 0x588A3B6C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A3B6E: push edi
        __asm _emit 0x57
        // 0x588A3B6F: push ecx
        __asm _emit 0x51
        // 0x588A3B70: push esi
        __asm _emit 0x56
        // 0x588A3B71: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A3B73: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A3B78: jmp 0x588a3b7c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A3B7A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A3B7C: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3B81: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A3B83: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A3B88: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588A3B8B: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xF1
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3B90: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3B95: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588A3B99: mov dword ptr [esp + 0x3c], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3BA1: lea ebx, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x588A3BA4: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3BAC: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A3BAE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x90
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A3BB3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588A3BB5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A3BB8: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588A3BBC: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588A3BC1: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588A3BC3: je 0x588a3c35
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x588A3BC5: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A3BC8: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3BCE: jle 0x588a3be7
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588A3BD0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588A3BD2: jl 0x588a3be7
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588A3BD4: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3BDA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A3BDC: je 0x588a3be7
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588A3BDE: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A3BE2: mov ebp, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x588A3BE5: jmp 0x588a3be9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A3BE7: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588A3BE9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A3BEB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3BED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3BEF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3BF1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3BF3: push esi
        __asm _emit 0x56
        // 0x588A3BF4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588A3BF6: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xF5
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3BFB: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A3C01: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588A3C04: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588A3C06: je 0x588a3c2f
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588A3C08: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x588A3C0B: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x588A3C0E: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x588A3C11: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x588A3C14: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x588A3C17: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588A3C1A: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588A3C1D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588A3C20: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588A3C23: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588A3C26: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588A3C29: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588A3C2C: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588A3C2F: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588A3C33: jmp 0x588a3c37
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A3C35: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A3C37: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x588A3C3C: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x588A3C3E: inc ebp
        __asm _emit 0x45
        // 0x588A3C3F: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588A3C42: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x588A3C47: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588A3C4C: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588A3C50: jne 0x588a3bac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A3C56: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588A3C59: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A3C5E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3C63: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588A3C66: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3C6B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3C70: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3C75: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588A3C79: mov dword ptr [esp + 0x3c], 0xc
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3C81: lea ebx, [esi + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x588A3C84: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3C8C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A3C90: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A3C92: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A3C97: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588A3C99: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A3C9C: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588A3CA0: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588A3CA5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588A3CA7: je 0x588a3d19
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x588A3CA9: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A3CAC: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3CB2: jle 0x588a3ccb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588A3CB4: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588A3CB6: jl 0x588a3ccb
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588A3CB8: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3CBE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A3CC0: je 0x588a3ccb
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588A3CC2: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A3CC6: mov ebp, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x588A3CC9: jmp 0x588a3ccd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A3CCB: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588A3CCD: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A3CCF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3CD1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3CD3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3CD5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A3CD7: push esi
        __asm _emit 0x56
        // 0x588A3CD8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588A3CDA: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3CDF: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A3CE5: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588A3CE8: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588A3CEA: je 0x588a3d13
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588A3CEC: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x588A3CEF: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x588A3CF2: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x588A3CF5: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x588A3CF8: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x588A3CFB: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588A3CFE: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588A3D01: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588A3D04: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588A3D07: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588A3D0A: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588A3D0D: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588A3D10: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588A3D13: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588A3D17: jmp 0x588a3d1b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A3D19: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A3D1B: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x588A3D20: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x588A3D22: inc ebp
        __asm _emit 0x45
        // 0x588A3D23: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588A3D26: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x588A3D2B: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588A3D30: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588A3D34: jne 0x588a3c90
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A3D3A: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588A3D3D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A3D42: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xEF
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3D47: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588A3D4A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3D4F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xEF
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3D54: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3D59: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x8E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A3D5E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A3D61: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A3D65: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588A3D6A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A3D6C: je 0x588a3db7
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x588A3D6E: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A3D71: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3D78: jle 0x588a3d84
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x588A3D7A: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3D80: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588A3D82: jne 0x588a3d86
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588A3D84: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A3D86: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A3D8A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A3D8C: add edx, 0x1dc
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3D92: push edx
        __asm _emit 0x52
        // 0x588A3D93: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588A3D97: add edx, 0x23b
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x3B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3D9D: push edx
        __asm _emit 0x52
        // 0x588A3D9E: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A3DA4: push ecx
        __asm _emit 0x51
        // 0x588A3DA5: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A3DAB: push esi
        __asm _emit 0x56
        // 0x588A3DAC: push ecx
        __asm _emit 0x51
        // 0x588A3DAD: push edx
        __asm _emit 0x52
        // 0x588A3DAE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A3DB0: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x9F
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A3DB5: jmp 0x588a3db9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A3DB7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A3DB9: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3DBE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A3DC0: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A3DC5: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588A3DC8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xEF
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3DCD: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3DD2: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588A3DD6: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588A3DDA: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3DDF: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3DE4: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588A3DE7: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588A3DEA: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588A3DEE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588A3DF0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588A3DF4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3DFB: pop ecx
        __asm _emit 0x59
        // 0x588A3DFC: pop edi
        __asm _emit 0x5F
        // 0x588A3DFD: pop esi
        __asm _emit 0x5E
        // 0x588A3DFE: pop ebp
        __asm _emit 0x5D
        // 0x588A3DFF: pop ebx
        __asm _emit 0x5B
        // 0x588A3E00: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588A3E03: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
