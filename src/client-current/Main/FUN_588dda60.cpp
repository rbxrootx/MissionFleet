// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DDA60 .. +0x185 bytes.
// Source symbol alias: FUN_588dda60.
extern "C" __declspec(naked) void FUN_588dda60() {
    __asm {
        // 0x588DDA60: push ecx
        __asm _emit 0x51
        // 0x588DDA61: push ebx
        __asm _emit 0x53
        // 0x588DDA62: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588DDA64: cmp word ptr [ebx + 0x164], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x588DDA6C: mov dword ptr [esp + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDA74: jne 0x588dda7d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588DDA76: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DDA78: pop ebx
        __asm _emit 0x5B
        // 0x588DDA79: pop ecx
        __asm _emit 0x59
        // 0x588DDA7A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DDA7D: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DDA82: push esi
        __asm _emit 0x56
        // 0x588DDA83: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x588DDA86: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588DDA88: je 0x588ddbdb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDA8E: push edi
        __asm _emit 0x57
        // 0x588DDA8F: nop
        __asm _emit 0x90
        // 0x588DDA90: cmp dword ptr [esi + 0x80], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DDA9A: jne 0x588ddbcf
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDAA0: mov cl, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDAA6: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DDAAA: cmp cl, byte ptr [edx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDAB0: jne 0x588ddbcf
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDAB6: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDABC: movzx ecx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588DDAC0: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588DDAC2: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588DDAC5: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588DDAC9: je 0x588ddaf6
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588DDACB: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588DDACF: je 0x588ddaf6
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588DDAD1: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588DDAD5: je 0x588ddaf6
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x588DDAD7: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588DDADB: je 0x588ddaf6
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588DDADD: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588DDAE1: je 0x588ddaf6
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588DDAE3: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588DDAE6: push ecx
        __asm _emit 0x51
        // 0x588DDAE7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588DDAE9: call 0x588d73a0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x98
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DDAEE: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588DDAF0: je 0x588ddbcf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDAF6: cmp word ptr [esi + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDAFE: jne 0x588ddb19
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x588DDB00: cmp dword ptr [esi + 0x438], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDB07: jne 0x588ddb19
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588DDB09: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDB0F: cmp dword ptr [ecx + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588DDB13: jg 0x588ddbcf
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDB19: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588DDB1C: sub eax, dword ptr [ebx + 8]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x588DDB1F: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588DDB22: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x588DDB25: sub ecx, dword ptr [ebx + 4]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x588DDB28: mov edi, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDB2E: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDB35: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588DDB37: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588DDB39: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588DDB3E: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588DDB40: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588DDB43: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588DDB45: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588DDB48: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588DDB4A: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588DDB4C: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588DDB4F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DDB51: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x588DDB54: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588DDB56: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588DDB58: jl 0x588ddbae
        __asm _emit 0x7C
        __asm _emit 0x54
        // 0x588DDB5A: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DDB60: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588DDB63: mov dword ptr [esp + 0xc], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDB6B: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588DDB6D: jne 0x588ddbcf
        __asm _emit 0x75
        __asm _emit 0x60
        // 0x588DDB6F: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588DDB71: je 0x588ddbcf
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x588DDB73: cmp dword ptr [eax + 0x63b0], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDB7A: jne 0x588ddbcf
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x588DDB7C: cmp dword ptr [ebx + 0x63ac], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xAC
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDB83: jne 0x588ddbcf
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x588DDB85: cmp dword ptr [ebx + 0x63b0], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDB8C: jne 0x588ddbcf
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x588DDB8E: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DDB94: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DDB96: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDB9B: push 0x1f
        __asm _emit 0x6A
        __asm _emit 0x1F
        // 0x588DDB9D: call 0x588ec100
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDBA2: mov dword ptr [ebx + 0x63ac], 1
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xAC
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDBAC: jmp 0x588ddbcf
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x588DDBAE: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DDBB3: cmp esi, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588DDBB6: jne 0x588ddbcf
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588DDBB8: mov dword ptr [ebx + 0x63ac], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xAC
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDBC2: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DDBC8: push 0x1f
        __asm _emit 0x6A
        __asm _emit 0x1F
        // 0x588DDBCA: call 0x588ec080
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDBCF: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x588DDBD2: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588DDBD4: jne 0x588dda90
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB6
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DDBDA: pop edi
        __asm _emit 0x5F
        // 0x588DDBDB: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588DDBDF: pop esi
        __asm _emit 0x5E
        // 0x588DDBE0: pop ebx
        __asm _emit 0x5B
        // 0x588DDBE1: pop ecx
        __asm _emit 0x59
        // 0x588DDBE2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
