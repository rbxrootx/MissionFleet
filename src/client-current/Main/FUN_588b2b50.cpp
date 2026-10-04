// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588B2B50 .. +0x4C9 bytes.
// Source symbol alias: FUN_588b2b50.
extern "C" __declspec(naked) void FUN_588b2b50() {
    __asm {
        // 0x588B2B50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588B2B52: push 0x589881b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B2B57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2B5D: push eax
        __asm _emit 0x50
        // 0x588B2B5E: push ecx
        __asm _emit 0x51
        // 0x588B2B5F: push ebx
        __asm _emit 0x53
        // 0x588B2B60: push ebp
        __asm _emit 0x55
        // 0x588B2B61: push esi
        __asm _emit 0x56
        // 0x588B2B62: push edi
        __asm _emit 0x57
        // 0x588B2B63: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588B2B68: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588B2B6A: push eax
        __asm _emit 0x50
        // 0x588B2B6B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B2B6F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2B75: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B2B77: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B2B7B: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B2B7F: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B2B83: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B2B87: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B2B8B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B2B8F: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B2B93: push edi
        __asm _emit 0x57
        // 0x588B2B94: push eax
        __asm _emit 0x50
        // 0x588B2B95: push ecx
        __asm _emit 0x51
        // 0x588B2B96: push ebp
        __asm _emit 0x55
        // 0x588B2B97: push ebx
        __asm _emit 0x53
        // 0x588B2B98: push edx
        __asm _emit 0x52
        // 0x588B2B99: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B2B9B: call 0x587b62b0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x37
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588B2BA0: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2BA5: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B2BA9: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B2BAD: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2BB2: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588B2BB5: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2BBA: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588B2BBD: mov dword ptr [esi], 0x589a08c0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B2BC3: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B2BC5: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2BCD: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B2BD1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xA0
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2BD6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2BD9: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B2BDD: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588B2BE2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B2BE4: je 0x588b2c2e
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x588B2BE6: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2BEC: cmp dword ptr [ecx + 0x164], 0x77
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x77
        // 0x588B2BF3: jle 0x588b2c1b
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x588B2BF5: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2BFC: je 0x588b2c1b
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588B2BFE: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2C04: mov ecx, dword ptr [ecx + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2C0A: lea edx, [edi + 5]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x05
        // 0x588B2C0D: push edx
        __asm _emit 0x52
        // 0x588B2C0E: push ebp
        __asm _emit 0x55
        // 0x588B2C0F: push ebx
        __asm _emit 0x53
        // 0x588B2C10: push ecx
        __asm _emit 0x51
        // 0x588B2C11: push esi
        __asm _emit 0x56
        // 0x588B2C12: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2C14: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xF0
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B2C19: jmp 0x588b2c30
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588B2C1B: lea edx, [edi + 5]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x05
        // 0x588B2C1E: push edx
        __asm _emit 0x52
        // 0x588B2C1F: push ebp
        __asm _emit 0x55
        // 0x588B2C20: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B2C22: push ebx
        __asm _emit 0x53
        // 0x588B2C23: push ecx
        __asm _emit 0x51
        // 0x588B2C24: push esi
        __asm _emit 0x56
        // 0x588B2C25: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2C27: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xF0
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B2C2C: jmp 0x588b2c30
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2C2E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2C30: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2C35: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2C37: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588B2C3C: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2C42: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B2C47: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2C4D: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2C52: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B2C56: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B2C58: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x9F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2C5D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2C60: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B2C64: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588B2C69: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B2C6B: je 0x588b2cb5
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x588B2C6D: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2C73: cmp dword ptr [ecx + 0x164], 0x79
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x79
        // 0x588B2C7A: jle 0x588b2ca2
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x588B2C7C: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2C83: je 0x588b2ca2
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588B2C85: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2C8B: mov ecx, dword ptr [edx + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2C91: lea edx, [edi + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x0A
        // 0x588B2C94: push edx
        __asm _emit 0x52
        // 0x588B2C95: push ebp
        __asm _emit 0x55
        // 0x588B2C96: push ebx
        __asm _emit 0x53
        // 0x588B2C97: push ecx
        __asm _emit 0x51
        // 0x588B2C98: push esi
        __asm _emit 0x56
        // 0x588B2C99: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2C9B: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xEF
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B2CA0: jmp 0x588b2cb7
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588B2CA2: lea edx, [edi + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x0A
        // 0x588B2CA5: push edx
        __asm _emit 0x52
        // 0x588B2CA6: push ebp
        __asm _emit 0x55
        // 0x588B2CA7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B2CA9: push ebx
        __asm _emit 0x53
        // 0x588B2CAA: push ecx
        __asm _emit 0x51
        // 0x588B2CAB: push esi
        __asm _emit 0x56
        // 0x588B2CAC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2CAE: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xEF
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B2CB3: jmp 0x588b2cb7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2CB5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2CB7: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B2CB9: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588B2CBE: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2CC4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x9F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2CC9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2CCC: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B2CD0: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588B2CD5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B2CD7: je 0x588b2d1b
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588B2CD9: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2CDF: cmp dword ptr [ecx + 0x164], 0x78
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x78
        // 0x588B2CE6: jle 0x588b2d0b
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588B2CE8: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2CEF: je 0x588b2d0b
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588B2CF1: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2CF7: mov ecx, dword ptr [ecx + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2CFD: push edi
        __asm _emit 0x57
        // 0x588B2CFE: push ebp
        __asm _emit 0x55
        // 0x588B2CFF: push ebx
        __asm _emit 0x53
        // 0x588B2D00: push ecx
        __asm _emit 0x51
        // 0x588B2D01: push esi
        __asm _emit 0x56
        // 0x588B2D02: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2D04: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xEF
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B2D09: jmp 0x588b2d1d
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588B2D0B: push edi
        __asm _emit 0x57
        // 0x588B2D0C: push ebp
        __asm _emit 0x55
        // 0x588B2D0D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B2D0F: push ebx
        __asm _emit 0x53
        // 0x588B2D10: push ecx
        __asm _emit 0x51
        // 0x588B2D11: push esi
        __asm _emit 0x56
        // 0x588B2D12: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2D14: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xEF
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B2D19: jmp 0x588b2d1d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2D1B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2D1D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B2D22: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2D24: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588B2D29: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2D2F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B2D34: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2D3A: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2D3F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B2D43: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2D48: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x9F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2D4D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2D50: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B2D54: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588B2D59: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B2D5B: je 0x588b2d8f
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588B2D5D: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2D62: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x588B2D66: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x588B2D69: push edx
        __asm _emit 0x52
        // 0x588B2D6A: lea ecx, [ebp + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x41
        // 0x588B2D6D: push ecx
        __asm _emit 0x51
        // 0x588B2D6E: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2D74: lea edx, [ebx + 0xed]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2D7A: push edx
        __asm _emit 0x52
        // 0x588B2D7B: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2D81: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B2D83: push esi
        __asm _emit 0x56
        // 0x588B2D84: push ecx
        __asm _emit 0x51
        // 0x588B2D85: push edx
        __asm _emit 0x52
        // 0x588B2D86: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2D88: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xB0
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B2D8D: jmp 0x588b2d91
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2D8F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2D91: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2D96: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2D98: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588B2D9D: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2DA3: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B2DA8: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2DAE: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2DB3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B2DB7: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2DBC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2DC1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2DC4: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B2DC8: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588B2DCD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B2DCF: je 0x588b2e2a
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x588B2DD1: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2DD7: cmp dword ptr [ecx + 0x160], 0x19
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588B2DDE: jle 0x588b2df7
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588B2DE0: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2DE7: je 0x588b2df7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B2DE9: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2DEF: add ecx, 0x640
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2DF5: jmp 0x588b2df9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2DF7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B2DF9: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2DFE: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B2E02: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x588B2E05: push edx
        __asm _emit 0x52
        // 0x588B2E06: lea edx, [ebp + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x41
        // 0x588B2E09: push edx
        __asm _emit 0x52
        // 0x588B2E0A: lea edx, [ebx + 0x89]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2E10: push edx
        __asm _emit 0x52
        // 0x588B2E11: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2E17: push ecx
        __asm _emit 0x51
        // 0x588B2E18: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2E1E: push esi
        __asm _emit 0x56
        // 0x588B2E1F: push ecx
        __asm _emit 0x51
        // 0x588B2E20: push edx
        __asm _emit 0x52
        // 0x588B2E21: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2E23: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xAF
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B2E28: jmp 0x588b2e2c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2E2A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2E2C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2E31: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588B2E36: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2E3C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x9E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2E41: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2E44: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B2E48: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588B2E4D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B2E4F: je 0x588b2eaa
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x588B2E51: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2E57: cmp dword ptr [ecx + 0x160], 0x1a
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1A
        // 0x588B2E5E: jle 0x588b2e77
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588B2E60: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2E67: je 0x588b2e77
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B2E69: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2E6F: add edx, 0x680
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2E75: jmp 0x588b2e79
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2E77: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B2E79: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2E7E: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x588B2E82: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588B2E85: push ecx
        __asm _emit 0x51
        // 0x588B2E86: lea ecx, [ebp + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x41
        // 0x588B2E89: push ecx
        __asm _emit 0x51
        // 0x588B2E8A: lea ecx, [ebx + 0xb9]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2E90: push ecx
        __asm _emit 0x51
        // 0x588B2E91: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2E97: push edx
        __asm _emit 0x52
        // 0x588B2E98: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2E9E: push esi
        __asm _emit 0x56
        // 0x588B2E9F: push edx
        __asm _emit 0x52
        // 0x588B2EA0: push ecx
        __asm _emit 0x51
        // 0x588B2EA1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2EA3: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xAE
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B2EA8: jmp 0x588b2eac
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2EAA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2EAC: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2EB2: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2EB7: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588B2EBC: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2EC2: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xFE
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B2EC7: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2ECD: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2ED2: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B2ED6: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2EDC: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2EE1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xFE
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B2EE6: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2EEC: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2EF1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B2EF5: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B2EF7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x9D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2EFC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2EFF: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B2F03: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588B2F08: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B2F0A: je 0x588b2f4e
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588B2F0C: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2F12: cmp dword ptr [ecx + 0x164], 0x7a
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7A
        // 0x588B2F19: jle 0x588b2f32
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588B2F1B: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2F22: je 0x588b2f32
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B2F24: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2F2A: mov ecx, dword ptr [edx + 0x1e8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2F30: jmp 0x588b2f34
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2F32: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B2F34: mov edx, 0x3e9
        __asm _emit 0xBA
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2F39: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B2F3D: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x588B2F40: push edx
        __asm _emit 0x52
        // 0x588B2F41: push ebp
        __asm _emit 0x55
        // 0x588B2F42: push ebx
        __asm _emit 0x53
        // 0x588B2F43: push ecx
        __asm _emit 0x51
        // 0x588B2F44: push esi
        __asm _emit 0x56
        // 0x588B2F45: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2F47: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xED
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B2F4C: jmp 0x588b2f50
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2F4E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2F50: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2F55: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2F57: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588B2F5C: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2F62: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B2F67: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2F6D: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2F72: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B2F76: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B2F78: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B2F7D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B2F80: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B2F84: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588B2F89: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B2F8B: je 0x588b2fcf
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588B2F8D: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B2F93: cmp dword ptr [ecx + 0x164], 0x7b
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7B
        // 0x588B2F9A: jle 0x588b2fb3
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588B2F9C: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2FA3: je 0x588b2fb3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B2FA5: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2FAB: mov ecx, dword ptr [edx + 0x1ec]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2FB1: jmp 0x588b2fb5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2FB3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B2FB5: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2FBA: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B2FBE: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x588B2FC1: push edx
        __asm _emit 0x52
        // 0x588B2FC2: push ebp
        __asm _emit 0x55
        // 0x588B2FC3: push ebx
        __asm _emit 0x53
        // 0x588B2FC4: push ecx
        __asm _emit 0x51
        // 0x588B2FC5: push esi
        __asm _emit 0x56
        // 0x588B2FC6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2FC8: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xEC
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B2FCD: jmp 0x588b2fd1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B2FCF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B2FD1: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B2FD6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B2FD8: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588B2FDD: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2FE3: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xFD
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B2FE8: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2FEE: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B2FF3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B2FF7: mov dword ptr [esi + 0xa4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3001: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588B3003: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B3007: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B300E: pop ecx
        __asm _emit 0x59
        // 0x588B300F: pop edi
        __asm _emit 0x5F
        // 0x588B3010: pop esi
        __asm _emit 0x5E
        // 0x588B3011: pop ebp
        __asm _emit 0x5D
        // 0x588B3012: pop ebx
        __asm _emit 0x5B
        // 0x588B3013: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588B3016: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
