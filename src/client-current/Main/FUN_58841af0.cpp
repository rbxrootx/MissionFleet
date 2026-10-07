// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1025 bytes in 1 exact ranges.
// Source symbol alias: FUN_58841af0.

// Ghidra body range 0x58841AF0..0x58841EF1; 1025 mapped bytes.
extern "C" __declspec(naked) void FUN_58841af0_segment_00() {
    __asm {
        // 0x58841AF0: push ebp
        __asm _emit 0x55
        // 0x58841AF1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58841AF3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58841AF6: sub esp, 0x324
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841AFC: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58841B01: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58841B03: mov dword ptr [esp + 0x320], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B0A: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58841B0D: push ebx
        __asm _emit 0x53
        // 0x58841B0E: push esi
        __asm _emit 0x56
        // 0x58841B0F: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58841B11: mov ecx, dword ptr [ebx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B17: push edi
        __asm _emit 0x57
        // 0x58841B18: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58841B1C: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B24: call 0x58789db0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58841B29: lea esi, [ebx + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B2F: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B34: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58841B36: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x6C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841B3B: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58841B3E: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58841B41: jne 0x58841b34
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58841B43: lea esi, [ebx + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B49: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B4E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58841B50: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58841B52: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x6C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841B57: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58841B5A: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58841B5D: jne 0x58841b50
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58841B5F: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58841B62: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58841B64: jle 0x58841cc0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B6A: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58841B6E: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58841B72: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58841B76: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58841B7A: mov ecx, 0xc3
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B7F: lea edi, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58841B83: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58841B85: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58841B89: push edx
        __asm _emit 0x52
        // 0x58841B8A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58841B8C: mov byte ptr [esp + 0x2e1], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xE1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B94: call 0x5883eb90
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xCF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58841B99: sub esp, 0x30c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841B9F: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58841BA1: mov ecx, 0xc3
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841BA6: lea esi, [esp + 0x324]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841BAD: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58841BAF: mov ecx, dword ptr [ebx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841BB5: call 0x58789cd0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58841BBA: lea eax, [esp + 0x2b2]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841BC1: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58841BC6: push eax
        __asm _emit 0x50
        // 0x58841BC7: call 0x5897d124
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xB5
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58841BCC: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58841BCF: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841BD4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841BD6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58841BD8: jne 0x58841c23
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x58841BDA: lea ecx, [esp + 0x2f2]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xF2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841BE1: push ecx
        __asm _emit 0x51
        // 0x58841BE2: mov ecx, dword ptr [ebx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841BE8: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x6C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841BED: mov ecx, dword ptr [ebx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841BF3: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841BF8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841BFA: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58841BFE: push edx
        __asm _emit 0x52
        // 0x58841BFF: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x6C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841C04: mov ecx, dword ptr [ebx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C0A: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841C0F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841C11: lea eax, [esp + 0x2d2]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xD2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C18: push eax
        __asm _emit 0x50
        // 0x58841C19: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x6C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841C1E: jmp 0x58841cad
        __asm _emit 0xE9
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C23: lea ecx, [esp + 0x2ba]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C2A: push ecx
        __asm _emit 0x51
        // 0x58841C2B: mov ecx, dword ptr [ebx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C31: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x6C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841C36: mov ecx, dword ptr [ebx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C3C: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841C41: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841C43: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58841C47: push edx
        __asm _emit 0x52
        // 0x58841C48: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841C4D: mov ecx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C53: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841C58: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841C5A: lea eax, [esp + 0x2d2]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xD2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C61: push eax
        __asm _emit 0x50
        // 0x58841C62: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x6C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841C67: cmp byte ptr [esp + 0x322], 0x4e
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4E
        // 0x58841C6F: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58841C73: jne 0x58841ca8
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58841C75: mov ecx, dword ptr [ebx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C7B: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C80: push esi
        __asm _emit 0x56
        // 0x58841C81: call 0x589082b0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x66
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841C86: mov ecx, dword ptr [ebx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C8C: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C91: push esi
        __asm _emit 0x56
        // 0x58841C92: call 0x589082b0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x66
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841C97: mov ecx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841C9D: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841CA2: push esi
        __asm _emit 0x56
        // 0x58841CA3: call 0x589082b0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x66
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841CA8: inc esi
        __asm _emit 0x46
        // 0x58841CA9: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58841CAD: add dword ptr [esp + 0x10], 0x30c
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841CB5: sub dword ptr [esp + 0xc], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        // 0x58841CBA: jne 0x58841b76
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB6
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58841CC0: mov ecx, dword ptr [ebx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841CC6: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58841CCA: lea esi, [ebx + 0xac]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841CD0: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58841CD3: je 0x58841eda
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841CD9: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841CDE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58841CE0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58841CE2: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x6B
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841CE7: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58841CEA: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58841CED: jne 0x58841ce0
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58841CEF: mov ecx, dword ptr [ebx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841CF5: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x6A
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841CFA: cmp dword ptr [ebp + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58841CFD: je 0x58841eda
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D03: mov eax, dword ptr [ebx + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D09: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58841D0C: jne 0x58841e2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D12: mov eax, dword ptr [ebx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D18: mov eax, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D1E: lea edi, [ebx + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D24: dec eax
        __asm _emit 0x48
        // 0x58841D25: cmp dword ptr [ebx + 0x114], eax
        __asm _emit 0x39
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D2B: jle 0x58841d33
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x58841D2D: mov dword ptr [ebx + 0x114], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D33: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D39: push ecx
        __asm _emit 0x51
        // 0x58841D3A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58841D3C: call 0x5883eab0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58841D41: mov ecx, dword ptr [ebx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D47: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841D4C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58841D4E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841D50: lea edx, [esi + 0x29a]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x9A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D56: push edx
        __asm _emit 0x52
        // 0x58841D57: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x6B
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841D5C: mov ecx, dword ptr [ebx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D62: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841D67: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841D69: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58841D6C: push eax
        __asm _emit 0x50
        // 0x58841D6D: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x6B
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841D72: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841D77: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841D79: lea ecx, [esi + 0x2b2]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D7F: push ecx
        __asm _emit 0x51
        // 0x58841D80: mov ecx, dword ptr [ebx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D86: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x6B
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841D8B: lea edx, [esi + 0x9a]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841D91: push edx
        __asm _emit 0x52
        // 0x58841D92: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58841D94: call 0x5883f0e0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xD3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58841D99: cmp byte ptr [esi + 0x30a], 0x4e
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x0A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4E
        // 0x58841DA0: jne 0x58841df8
        __asm _emit 0x75
        __asm _emit 0x56
        // 0x58841DA2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58841DA4: mov byte ptr [esi + 0x30a], 0x59
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x0A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x58841DAB: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58841DB1: push eax
        __asm _emit 0x50
        // 0x58841DB2: call 0x587ba450
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x86
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58841DB7: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841DBD: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841DC2: push ecx
        __asm _emit 0x51
        // 0x58841DC3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58841DC5: call 0x589082b0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x64
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841DCA: mov edx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841DD0: mov ecx, dword ptr [ebx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841DD6: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841DDB: push edx
        __asm _emit 0x52
        // 0x58841DDC: call 0x589082b0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x64
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841DE1: mov eax, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841DE7: mov ecx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841DED: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841DF2: push eax
        __asm _emit 0x50
        // 0x58841DF3: call 0x589082b0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841DF8: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58841DFA: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841DFF: nop
        __asm _emit 0x90
        // 0x58841E00: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E06: push ecx
        __asm _emit 0x51
        // 0x58841E07: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58841E09: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x6A
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841E0E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58841E11: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58841E14: jne 0x58841e00
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58841E16: pop edi
        __asm _emit 0x5F
        // 0x58841E17: pop esi
        __asm _emit 0x5E
        // 0x58841E18: pop ebx
        __asm _emit 0x5B
        // 0x58841E19: mov ecx, dword ptr [esp + 0x320]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E20: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58841E22: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xAD
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58841E27: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58841E29: pop ebp
        __asm _emit 0x5D
        // 0x58841E2A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58841E2D: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58841E30: jne 0x58841eda
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E36: mov edx, dword ptr [ebx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E3C: mov eax, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E42: lea edi, [ebx + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E48: dec eax
        __asm _emit 0x48
        // 0x58841E49: cmp dword ptr [ebx + 0x114], eax
        __asm _emit 0x39
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E4F: jle 0x58841e57
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x58841E51: mov dword ptr [ebx + 0x114], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E57: mov eax, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E5D: push eax
        __asm _emit 0x50
        // 0x58841E5E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58841E60: call 0x5883eab0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58841E65: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841E6A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58841E6C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841E6E: lea ecx, [esi + 0x2d2]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xD2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E74: push ecx
        __asm _emit 0x51
        // 0x58841E75: mov ecx, dword ptr [ebx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E7B: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x6A
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841E80: mov ecx, dword ptr [ebx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E86: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841E8B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841E8D: lea edx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58841E90: push edx
        __asm _emit 0x52
        // 0x58841E91: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x6A
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841E96: mov ecx, dword ptr [ebx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841E9C: push 0x999999
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x00
        // 0x58841EA1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58841EA3: lea eax, [esi + 0x2b2]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841EA9: push eax
        __asm _emit 0x50
        // 0x58841EAA: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x6A
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841EAF: add esi, 0x9a
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841EB5: push esi
        __asm _emit 0x56
        // 0x58841EB6: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58841EB8: call 0x5883f0e0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xD2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58841EBD: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58841EBF: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841EC4: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841ECA: push ecx
        __asm _emit 0x51
        // 0x58841ECB: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58841ECD: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x69
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58841ED2: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58841ED5: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58841ED8: jne 0x58841ec4
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58841EDA: mov ecx, dword ptr [esp + 0x32c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58841EE1: pop edi
        __asm _emit 0x5F
        // 0x58841EE2: pop esi
        __asm _emit 0x5E
        // 0x58841EE3: pop ebx
        __asm _emit 0x5B
        // 0x58841EE4: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58841EE6: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xAC
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58841EEB: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58841EED: pop ebp
        __asm _emit 0x5D
        // 0x58841EEE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
