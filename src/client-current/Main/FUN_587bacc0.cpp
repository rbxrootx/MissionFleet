// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 636 bytes in 1 exact ranges.
// Source symbol alias: FUN_587bacc0.

// Ghidra body range 0x587BACC0..0x587BAF3C; 636 mapped bytes.
extern "C" __declspec(naked) void FUN_587bacc0_segment_00() {
    __asm {
        // 0x587BACC0: sub esp, 0x15c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BACC6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587BACCB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587BACCD: mov dword ptr [esp + 0x158], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BACD4: push ebx
        __asm _emit 0x53
        // 0x587BACD5: push ebp
        __asm _emit 0x55
        // 0x587BACD6: push esi
        __asm _emit 0x56
        // 0x587BACD7: push edi
        __asm _emit 0x57
        // 0x587BACD8: mov edi, dword ptr [esp + 0x170]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BACDF: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587BACE1: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587BACE5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BACE7: push eax
        __asm _emit 0x50
        // 0x587BACE8: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587BACEC: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587BACF0: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x1F
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587BACF5: lea ebx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587BACF9: mov eax, 0x880
        __asm _emit 0xB8
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BACFE: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587BAD00: mov edx, 0x3c3
        __asm _emit 0xBA
        __asm _emit 0xC3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAD05: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x587BAD07: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587BAD0A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587BAD0C: lea ecx, [edi + 0x2c0]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAD12: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x587BAD14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587BAD18: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587BAD1C: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587BAD20: jmp 0x587bad26
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587BAD22: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587BAD26: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587BAD28: mov eax, dword ptr [eax + edi + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAD2F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587BAD31: je 0x587bad38
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587BAD33: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x587BAD36: jmp 0x587bad3a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587BAD38: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587BAD3A: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587BAD3D: sub eax, 5
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x587BAD40: je 0x587bade0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAD46: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587BAD49: je 0x587bada5
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x587BAD4B: sub eax, 7
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x07
        // 0x587BAD4E: jne 0x587bae88
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAD54: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587BAD56: add ecx, 0xb4c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x4C
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAD5C: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587BAD60: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587BAD64: mov al, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x01
        // 0x587BAD66: mov ecx, dword ptr [edi + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAD6C: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x587BAD6E: mov byte ptr [ebx + esi], al
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x33
        // 0x587BAD71: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x587BAD73: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x587BAD77: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587BAD79: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x587BAD7C: push eax
        __asm _emit 0x50
        // 0x587BAD7D: push esi
        __asm _emit 0x56
        // 0x587BAD7E: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x587BAD81: push ebp
        __asm _emit 0x55
        // 0x587BAD82: push ecx
        __asm _emit 0x51
        // 0x587BAD83: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BAD89: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x92
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587BAD8E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587BAD90: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xE7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587BAD95: add dword ptr [esp + 0x10], 2
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        // 0x587BAD9A: inc esi
        __asm _emit 0x46
        // 0x587BAD9B: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587BAD9E: jl 0x587bad60
        __asm _emit 0x7C
        __asm _emit 0xC0
        // 0x587BADA0: jmp 0x587bae88
        __asm _emit 0xE9
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BADA5: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587BADA7: call 0x587b4470
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x96
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587BADAC: mov ecx, dword ptr [edi + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BADB2: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x587BADB4: mov byte ptr [ebx], al
        __asm _emit 0x88
        __asm _emit 0x03
        // 0x587BADB6: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x587BADB8: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x587BADBC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587BADBE: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x587BADC1: push eax
        __asm _emit 0x50
        // 0x587BADC2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BADC4: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x587BADC7: push ebp
        __asm _emit 0x55
        // 0x587BADC8: push ecx
        __asm _emit 0x51
        // 0x587BADC9: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BADCF: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x92
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587BADD4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587BADD6: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xE7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587BADDB: jmp 0x587bae88
        __asm _emit 0xE9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BADE0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587BADE2: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587BADE6: lea eax, [edx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1A
        // 0x587BADE9: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587BADEB: mov ecx, dword ptr [edi + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x87
        // 0x587BADEE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587BADF0: je 0x587bae50
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x587BADF2: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587BADF6: mov eax, dword ptr [eax - 0x80]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x80
        // 0x587BADF9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587BADFB: jne 0x587bae05
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587BADFD: mov eax, dword ptr [eax + 0x31c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAE03: jmp 0x587bae0b
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587BAE05: mov eax, dword ptr [eax + 0x3d0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAE0B: movzx ecx, word ptr [ecx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAE12: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587BAE17: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587BAE19: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAE1F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587BAE21: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x587BAE23: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x587BAE26: push edx
        __asm _emit 0x52
        // 0x587BAE27: push ecx
        __asm _emit 0x51
        // 0x587BAE28: push edi
        __asm _emit 0x57
        // 0x587BAE29: push esi
        __asm _emit 0x56
        // 0x587BAE2A: push ebp
        __asm _emit 0x55
        // 0x587BAE2B: mov byte ptr [ebx + esi], al
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x33
        // 0x587BAE2E: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x587BAE32: push 0x5899a3d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xA3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587BAE37: push eax
        __asm _emit 0x50
        // 0x587BAE38: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BAE3E: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587BAE41: lea ecx, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587BAE45: push ecx
        __asm _emit 0x51
        // 0x587BAE46: call dword ptr [0x5898c178]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BAE4C: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BAE50: mov dl, byte ptr [ebx + esi]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x33
        // 0x587BAE53: xor dl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF2
        __asm _emit 0xAA
        // 0x587BAE56: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587BAE5A: mov edx, dword ptr [edi + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAE60: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587BAE62: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x587BAE65: push ecx
        __asm _emit 0x51
        // 0x587BAE66: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BAE6C: push esi
        __asm _emit 0x56
        // 0x587BAE6D: push ebp
        __asm _emit 0x55
        // 0x587BAE6E: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x587BAE71: push edx
        __asm _emit 0x52
        // 0x587BAE72: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x91
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587BAE77: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587BAE79: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xE7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587BAE7E: inc esi
        __asm _emit 0x46
        // 0x587BAE7F: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587BAE82: jl 0x587bade2
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x5A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587BAE88: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587BAE8C: inc ebp
        __asm _emit 0x45
        // 0x587BAE8D: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587BAE90: add ebx, 2
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x02
        // 0x587BAE93: cmp ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x20
        // 0x587BAE96: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587BAE9A: jl 0x587bad22
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x82
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587BAEA0: mov ebp, dword ptr [0x5898c178]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x78
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BAEA6: push 0x5899a370
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xA3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587BAEAB: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587BAEAD: push 0x5899a330
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xA3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587BAEB2: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587BAEB4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587BAEB6: lea ebx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587BAEBA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAEC0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587BAEC2: movzx eax, byte ptr [ebx + esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x04
        __asm _emit 0x33
        // 0x587BAEC6: push eax
        __asm _emit 0x50
        // 0x587BAEC7: push esi
        __asm _emit 0x56
        // 0x587BAEC8: push edi
        __asm _emit 0x57
        // 0x587BAEC9: lea ecx, [esp + 0xf4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAED0: push 0x5899a310
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xA3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587BAED5: push ecx
        __asm _emit 0x51
        // 0x587BAED6: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BAEDC: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587BAEDF: lea edx, [esp + 0xe8]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAEE6: push edx
        __asm _emit 0x52
        // 0x587BAEE7: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587BAEE9: inc esi
        __asm _emit 0x46
        // 0x587BAEEA: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587BAEED: jl 0x587baec2
        __asm _emit 0x7C
        __asm _emit 0xD3
        // 0x587BAEEF: push 0x589963b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587BAEF4: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587BAEF6: inc edi
        __asm _emit 0x47
        // 0x587BAEF7: add ebx, 2
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x02
        // 0x587BAEFA: cmp edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x20
        // 0x587BAEFD: jl 0x587baec0
        __asm _emit 0x7C
        __asm _emit 0xC1
        // 0x587BAEFF: push 0x5899a370
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xA3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587BAF04: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587BAF06: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587BAF0A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAF0C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587BAF0E: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587BAF12: push eax
        __asm _emit 0x50
        // 0x587BAF13: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAF15: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAF17: push 0x8002f007
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587BAF1C: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x5D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BAF21: mov ecx, dword ptr [esp + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAF28: pop edi
        __asm _emit 0x5F
        // 0x587BAF29: pop esi
        __asm _emit 0x5E
        // 0x587BAF2A: pop ebp
        __asm _emit 0x5D
        // 0x587BAF2B: pop ebx
        __asm _emit 0x5B
        // 0x587BAF2C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587BAF2E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x1C
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587BAF33: add esp, 0x15c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAF39: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
