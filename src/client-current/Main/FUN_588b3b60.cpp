// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588B3B60 .. +0x4AE bytes.
// Source symbol alias: FUN_588b3b60.
extern "C" __declspec(naked) void FUN_588b3b60() {
    __asm {
        // 0x588B3B60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588B3B62: push 0x58988246
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B3B67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3B6D: push eax
        __asm _emit 0x50
        // 0x588B3B6E: push ecx
        __asm _emit 0x51
        // 0x588B3B6F: push ebx
        __asm _emit 0x53
        // 0x588B3B70: push ebp
        __asm _emit 0x55
        // 0x588B3B71: push esi
        __asm _emit 0x56
        // 0x588B3B72: push edi
        __asm _emit 0x57
        // 0x588B3B73: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588B3B78: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588B3B7A: push eax
        __asm _emit 0x50
        // 0x588B3B7B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B3B7F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3B85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B3B87: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B3B8B: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3B8F: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B3B93: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B3B97: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B3B9B: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B3B9F: push eax
        __asm _emit 0x50
        // 0x588B3BA0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B3BA4: push ecx
        __asm _emit 0x51
        // 0x588B3BA5: push edx
        __asm _emit 0x52
        // 0x588B3BA6: push edi
        __asm _emit 0x57
        // 0x588B3BA7: push ebp
        __asm _emit 0x55
        // 0x588B3BA8: push eax
        __asm _emit 0x50
        // 0x588B3BA9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B3BAB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xF5
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B3BB0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B3BB6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B3BBB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B3BBD: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588B3BC0: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588B3BC3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3BCA: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588B3BCD: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3BD2: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B3BD6: mov dword ptr [esi], 0x589a0920
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B3BDC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B3BE1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B3BE4: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3BE8: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588B3BED: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B3BEF: je 0x588b3c02
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588B3BF1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B3BF3: push ebx
        __asm _emit 0x53
        // 0x588B3BF4: push 0x589a093c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B3BF9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3BFB: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B3C00: jmp 0x588b3c04
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3C02: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3C04: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B3C06: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B3C0A: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588B3C0D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B3C12: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B3C15: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3C19: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588B3C1E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B3C20: je 0x588b3c5b
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588B3C22: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B3C25: cmp dword ptr [ecx + 0x164], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x588B3C2C: jle 0x588b3c4a
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x588B3C2E: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3C34: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B3C36: je 0x588b3c4a
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588B3C38: mov ecx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x28
        // 0x588B3C3B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B3C3D: push edi
        __asm _emit 0x57
        // 0x588B3C3E: push ebp
        __asm _emit 0x55
        // 0x588B3C3F: push ecx
        __asm _emit 0x51
        // 0x588B3C40: push esi
        __asm _emit 0x56
        // 0x588B3C41: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3C43: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xE0
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B3C48: jmp 0x588b3c5d
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588B3C4A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B3C4C: push edi
        __asm _emit 0x57
        // 0x588B3C4D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B3C4F: push ebp
        __asm _emit 0x55
        // 0x588B3C50: push ecx
        __asm _emit 0x51
        // 0x588B3C51: push esi
        __asm _emit 0x56
        // 0x588B3C52: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3C54: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xE0
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B3C59: jmp 0x588b3c5d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3C5B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3C5D: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B3C5F: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B3C63: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588B3C66: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B3C6B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B3C6E: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3C72: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588B3C77: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B3C79: je 0x588b3cb4
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588B3C7B: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B3C7E: cmp dword ptr [ecx + 0x164], 9
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x588B3C85: jle 0x588b3ca3
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x588B3C87: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3C8D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B3C8F: je 0x588b3ca3
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588B3C91: mov ecx, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x588B3C94: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B3C96: push edi
        __asm _emit 0x57
        // 0x588B3C97: push ebp
        __asm _emit 0x55
        // 0x588B3C98: push ecx
        __asm _emit 0x51
        // 0x588B3C99: push esi
        __asm _emit 0x56
        // 0x588B3C9A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3C9C: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xDF
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B3CA1: jmp 0x588b3cb6
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588B3CA3: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B3CA5: push edi
        __asm _emit 0x57
        // 0x588B3CA6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B3CA8: push ebp
        __asm _emit 0x55
        // 0x588B3CA9: push ecx
        __asm _emit 0x51
        // 0x588B3CAA: push esi
        __asm _emit 0x56
        // 0x588B3CAB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3CAD: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xDF
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B3CB2: jmp 0x588b3cb6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3CB4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3CB6: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B3CB8: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B3CBC: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588B3CBF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B3CC4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B3CC7: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3CCB: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588B3CD0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B3CD2: je 0x588b3d0d
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588B3CD4: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B3CD7: cmp dword ptr [ecx + 0x164], 8
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x588B3CDE: jle 0x588b3cfc
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x588B3CE0: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3CE6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B3CE8: je 0x588b3cfc
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588B3CEA: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x20
        // 0x588B3CED: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B3CEF: push edi
        __asm _emit 0x57
        // 0x588B3CF0: push ebp
        __asm _emit 0x55
        // 0x588B3CF1: push ecx
        __asm _emit 0x51
        // 0x588B3CF2: push esi
        __asm _emit 0x56
        // 0x588B3CF3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3CF5: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xDF
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B3CFA: jmp 0x588b3d0f
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588B3CFC: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B3CFE: push edi
        __asm _emit 0x57
        // 0x588B3CFF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B3D01: push ebp
        __asm _emit 0x55
        // 0x588B3D02: push ecx
        __asm _emit 0x51
        // 0x588B3D03: push esi
        __asm _emit 0x56
        // 0x588B3D04: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3D06: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xDF
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B3D0B: jmp 0x588b3d0f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3D0D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3D0F: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588B3D11: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B3D15: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588B3D18: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B3D1D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B3D20: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3D24: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588B3D29: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B3D2B: je 0x588b3d64
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588B3D2D: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B3D30: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3D36: jle 0x588b3d53
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588B3D38: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3D3E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B3D40: je 0x588b3d53
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588B3D42: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B3D44: push edi
        __asm _emit 0x57
        // 0x588B3D45: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588B3D47: push ebp
        __asm _emit 0x55
        // 0x588B3D48: push edx
        __asm _emit 0x52
        // 0x588B3D49: push esi
        __asm _emit 0x56
        // 0x588B3D4A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3D4C: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588B3D51: jmp 0x588b3d66
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588B3D53: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588B3D55: push edi
        __asm _emit 0x57
        // 0x588B3D56: push ebp
        __asm _emit 0x55
        // 0x588B3D57: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B3D59: push edx
        __asm _emit 0x52
        // 0x588B3D5A: push esi
        __asm _emit 0x56
        // 0x588B3D5B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3D5D: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x0C
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588B3D62: jmp 0x588b3d66
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3D64: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3D66: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3D6B: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588B3D6E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B3D72: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3D77: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B3D7B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B3D80: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B3D83: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3D87: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588B3D8C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B3D8E: je 0x588b3dcc
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588B3D90: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B3D96: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x588B3D9D: jle 0x588b3db5
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B3D9F: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3DA5: je 0x588b3db5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B3DA7: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3DAD: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3DB3: jmp 0x588b3db7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3DB5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B3DB7: lea ecx, [edi + 0x72]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x72
        // 0x588B3DBA: push ecx
        __asm _emit 0x51
        // 0x588B3DBB: lea ecx, [ebp + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x1E
        // 0x588B3DBE: push ecx
        __asm _emit 0x51
        // 0x588B3DBF: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588B3DC1: push edx
        __asm _emit 0x52
        // 0x588B3DC2: push esi
        __asm _emit 0x56
        // 0x588B3DC3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3DC5: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B3DCA: jmp 0x588b3dce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3DCC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3DCE: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3DD3: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B3DD7: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588B3DDA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B3DDF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B3DE2: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3DE6: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588B3DEB: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B3DED: je 0x588b3e2b
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588B3DEF: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B3DF5: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x588B3DFC: jle 0x588b3e14
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B3DFE: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3E04: je 0x588b3e14
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B3E06: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3E0C: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3E12: jmp 0x588b3e16
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3E14: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B3E16: lea ecx, [edi + 0x72]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x72
        // 0x588B3E19: push ecx
        __asm _emit 0x51
        // 0x588B3E1A: add ebp, 0x3b
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x3B
        // 0x588B3E1D: push ebp
        __asm _emit 0x55
        // 0x588B3E1E: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588B3E20: push edx
        __asm _emit 0x52
        // 0x588B3E21: push esi
        __asm _emit 0x56
        // 0x588B3E22: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3E24: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B3E29: jmp 0x588b3e2d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3E2B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3E2D: lea edx, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3E33: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B3E37: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588B3E3A: lea ebp, [esi + 0xe8]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3E40: add edi, 0x1d
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1D
        // 0x588B3E43: mov dword ptr [esp + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3E47: mov dword ptr [esp + 0x3c], 7
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3E4F: nop
        __asm _emit 0x90
        // 0x588B3E50: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3E55: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B3E5A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B3E5D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B3E61: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588B3E66: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B3E68: je 0x588b3ea7
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588B3E6A: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B3E70: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x588B3E77: jle 0x588b3e8f
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B3E79: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3E7F: je 0x588b3e8f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B3E81: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3E87: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3E8D: jmp 0x588b3e91
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3E8F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B3E91: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B3E95: push edi
        __asm _emit 0x57
        // 0x588B3E96: add ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x1E
        // 0x588B3E99: push ecx
        __asm _emit 0x51
        // 0x588B3E9A: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588B3E9C: push edx
        __asm _emit 0x52
        // 0x588B3E9D: push esi
        __asm _emit 0x56
        // 0x588B3E9E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3EA0: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B3EA5: jmp 0x588b3ea9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3EA7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3EA9: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3EAD: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3EB2: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B3EB6: mov dword ptr [edx - 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0xFC
        // 0x588B3EB9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B3EBE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B3EC1: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B3EC5: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588B3ECA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B3ECC: je 0x588b3f0b
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588B3ECE: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B3ED4: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x588B3EDB: jle 0x588b3ef3
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B3EDD: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3EE3: je 0x588b3ef3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B3EE5: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3EEB: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3EF1: jmp 0x588b3ef5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3EF3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B3EF5: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B3EF9: push edi
        __asm _emit 0x57
        // 0x588B3EFA: add ecx, 0x3b
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x3B
        // 0x588B3EFD: push ecx
        __asm _emit 0x51
        // 0x588B3EFE: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588B3F00: push edx
        __asm _emit 0x52
        // 0x588B3F01: push esi
        __asm _emit 0x56
        // 0x588B3F02: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3F04: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B3F09: jmp 0x588b3f0d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3F0B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3F0D: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B3F11: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3F16: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B3F1A: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x588B3F1C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B3F21: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B3F24: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B3F28: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588B3F2D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B3F2F: je 0x588b3f6e
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588B3F31: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B3F37: cmp dword ptr [ecx + 0x160], 0x2d
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2D
        // 0x588B3F3E: jle 0x588b3f56
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588B3F40: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3F46: je 0x588b3f56
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B3F48: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3F4E: add edx, 0xb40
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3F54: jmp 0x588b3f58
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3F56: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588B3F58: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B3F5C: push edi
        __asm _emit 0x57
        // 0x588B3F5D: add ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x1E
        // 0x588B3F60: push ecx
        __asm _emit 0x51
        // 0x588B3F61: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588B3F63: push edx
        __asm _emit 0x52
        // 0x588B3F64: push esi
        __asm _emit 0x56
        // 0x588B3F65: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B3F67: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B3F6C: jmp 0x588b3f70
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B3F6E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3F70: add dword ptr [esp + 0x40], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588B3F75: mov dword ptr [ebp - 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xCC
        // 0x588B3F78: mov dword ptr [ebp], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x588B3F7B: mov dword ptr [ebp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x1C
        // 0x588B3F7E: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588B3F81: add edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x0C
        // 0x588B3F84: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588B3F89: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B3F8D: jne 0x588b3e50
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B3F93: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3F98: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588B3F9C: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B3FA0: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FA5: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588B3FA8: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B3FAC: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FB1: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588B3FB4: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B3FB8: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FBD: push ecx
        __asm _emit 0x51
        // 0x588B3FBE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B3FC0: mov dword ptr [esi + 0xd0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FC6: mov dword ptr [esi + 0xd4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FCC: mov dword ptr [esi + 0xd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FD2: mov dword ptr [esi + 0xe4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FD8: mov word ptr [esi + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FDF: mov dword ptr [esi + 0x120], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FE5: mov dword ptr [esi + 0x124], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FEB: mov dword ptr [esi + 0x128], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3FF1: call 0x588b3460
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B3FF6: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588B3FF8: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B3FFC: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4003: pop ecx
        __asm _emit 0x59
        // 0x588B4004: pop edi
        __asm _emit 0x5F
        // 0x588B4005: pop esi
        __asm _emit 0x5E
        // 0x588B4006: pop ebp
        __asm _emit 0x5D
        // 0x588B4007: pop ebx
        __asm _emit 0x5B
        // 0x588B4008: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588B400B: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
