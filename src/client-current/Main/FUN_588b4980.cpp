// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 997 bytes in 6 exact ranges.
// Source symbol alias: FUN_588b4980.

// Ghidra body range 0x588B4980..0x588B49CA; 74 mapped bytes.
extern "C" __declspec(naked) void FUN_588b4980_segment_00() {
    __asm {
        // 0x588B4980: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588B4982: push 0x58988286
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B4987: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B498D: push eax
        __asm _emit 0x50
        // 0x588B498E: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x588B4991: push ebx
        __asm _emit 0x53
        // 0x588B4992: push ebp
        __asm _emit 0x55
        // 0x588B4993: push esi
        __asm _emit 0x56
        // 0x588B4994: push edi
        __asm _emit 0x57
        // 0x588B4995: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588B499A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588B499C: push eax
        __asm _emit 0x50
        // 0x588B499D: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B49A1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B49A7: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588B49A9: movzx eax, word ptr [ebp + 0x17e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B49B0: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B49B2: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B49B6: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B49BA: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588B49BD: je 0x588b4a25
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x588B49BF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B49C1: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588B49C3: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588B49C6: jae 0x588b4a03
        __asm _emit 0x73
        __asm _emit 0x3B
        // 0x588B49C8: jmp 0x588b49d0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588B49D0..0x588B4A13; 67 mapped bytes.
extern "C" __declspec(naked) void FUN_588b4980_segment_01() {
    __asm {
        // 0x588B49D0: mov edx, dword ptr [ebp + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B49D6: cmp dword ptr [edx + esi*4], edi
        __asm _emit 0x39
        __asm _emit 0x3C
        __asm _emit 0xB2
        // 0x588B49D9: lea eax, [edx + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB2
        // 0x588B49DC: je 0x588b49f7
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588B49DE: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588B49E0: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588B49E2: je 0x588b49ee
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588B49E4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B49E6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B49E8: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588B49EA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B49EC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B49EE: mov ecx, dword ptr [ebp + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B49F4: mov dword ptr [ecx + esi*4], edi
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0xB1
        // 0x588B49F7: movzx edx, word ptr [ebp + 0x17e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B49FE: inc esi
        __asm _emit 0x46
        // 0x588B49FF: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x588B4A01: jl 0x588b49d0
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x588B4A03: mov eax, dword ptr [ebp + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4A09: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588B4A0B: je 0x588b4a1c
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588B4A0D: push eax
        __asm _emit 0x50
        // 0x588B4A0E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588B4A1C..0x588B4A83; 103 mapped bytes.
extern "C" __declspec(naked) void FUN_588b4980_segment_02() {
    __asm {
        // 0x588B4A1C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B4A1E: mov word ptr [ebp + 0x17e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4A25: movzx eax, word ptr [ebp + 0x180]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4A2C: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588B4A2F: je 0x588b4a95
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x588B4A31: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B4A33: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588B4A35: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588B4A38: jae 0x588b4a73
        __asm _emit 0x73
        __asm _emit 0x39
        // 0x588B4A3A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4A40: mov edx, dword ptr [ebp + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4A46: cmp dword ptr [edx + esi*4], edi
        __asm _emit 0x39
        __asm _emit 0x3C
        __asm _emit 0xB2
        // 0x588B4A49: lea eax, [edx + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB2
        // 0x588B4A4C: je 0x588b4a67
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588B4A4E: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588B4A50: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588B4A52: je 0x588b4a5e
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588B4A54: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B4A56: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B4A58: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588B4A5A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B4A5C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B4A5E: mov ecx, dword ptr [ebp + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4A64: mov dword ptr [ecx + esi*4], edi
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0xB1
        // 0x588B4A67: movzx edx, word ptr [ebp + 0x180]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4A6E: inc esi
        __asm _emit 0x46
        // 0x588B4A6F: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x588B4A71: jl 0x588b4a40
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x588B4A73: mov eax, dword ptr [ebp + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4A79: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588B4A7B: je 0x588b4a8c
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588B4A7D: push eax
        __asm _emit 0x50
        // 0x588B4A7E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588B4A8C..0x588B4AF9; 109 mapped bytes.
extern "C" __declspec(naked) void FUN_588b4980_segment_03() {
    __asm {
        // 0x588B4A8C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B4A8E: mov word ptr [ebp + 0x180], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4A95: mov edi, 6
        __asm _emit 0xBF
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4A9A: cmp dword ptr [esp + 0x3c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B4A9E: jbe 0x588b4bfd
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4AA4: mov esi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B4AA8: mov bx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x588B4AAB: mov cx, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x02
        // 0x588B4AAF: mov word ptr [esp + 0x14], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B4AB4: mov word ptr [esp + 0x3c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B4AB9: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588B4ABC: jbe 0x588b4ade
        __asm _emit 0x76
        __asm _emit 0x20
        // 0x588B4ABE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B4AC0: movzx eax, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC3
        // 0x588B4AC3: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4AC8: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588B4ACA: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588B4ACD: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588B4ACF: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588B4AD1: push ecx
        __asm _emit 0x51
        // 0x588B4AD2: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xCA
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588B4AD7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B4ADA: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B4ADE: movzx ebx, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDB
        // 0x588B4AE1: lea eax, [esi + 6]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x06
        // 0x588B4AE4: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588B4AE6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588B4AE8: jle 0x588b4b55
        __asm _emit 0x7E
        __asm _emit 0x6B
        // 0x588B4AEA: lea edi, [ebx + ebx*2]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x5B
        // 0x588B4AED: shl edi, 7
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x07
        // 0x588B4AF0: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B4AF4: add edi, 6
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x06
        // 0x588B4AF7: jmp 0x588b4b00
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588B4B00..0x588B4C19; 281 mapped bytes.
extern "C" __declspec(naked) void FUN_588b4980_segment_04() {
    __asm {
        // 0x588B4B00: push 0x27c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4B05: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B4B0A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B4B0D: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B4B11: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4B19: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B4B1B: je 0x588b4b2b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588B4B1D: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B4B21: push ecx
        __asm _emit 0x51
        // 0x588B4B22: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B4B24: call 0x5877cc30
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588B4B29: jmp 0x588b4b2d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B4B2B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B4B2D: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B4B31: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4B36: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B4B38: mov dword ptr [esp + 0x34], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B4B40: mov dword ptr [edx + esi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xB2
        // 0x588B4B43: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xE1
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B4B48: add dword ptr [esp + 0x20], 0x180
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4B50: inc esi
        __asm _emit 0x46
        // 0x588B4B51: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588B4B53: jl 0x588b4b00
        __asm _emit 0x7C
        __asm _emit 0xAB
        // 0x588B4B55: mov bx, word ptr [esp + 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B4B5A: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588B4B5D: jbe 0x588b4b7f
        __asm _emit 0x76
        __asm _emit 0x20
        // 0x588B4B5F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B4B61: movzx eax, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC3
        // 0x588B4B64: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4B69: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588B4B6B: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588B4B6E: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588B4B70: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588B4B72: push ecx
        __asm _emit 0x51
        // 0x588B4B73: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xC9
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588B4B78: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B4B7B: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B4B7F: movzx eax, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC3
        // 0x588B4B82: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4B8A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B4B8C: jle 0x588b4c02
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x588B4B8E: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B4B92: mov esi, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x07
        // 0x588B4B95: lea ebx, [edi + eax]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x07
        // 0x588B4B98: shr esi, 1
        __asm _emit 0xD1
        __asm _emit 0xEE
        // 0x588B4B9A: push 0xf0c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4B9F: and esi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE6
        __asm _emit 0x1F
        // 0x588B4BA2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B4BA7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B4BAA: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B4BAE: mov dword ptr [esp + 0x30], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4BB6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B4BB8: je 0x588b4bd0
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588B4BBA: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B4BBE: lea ecx, [ecx + edi + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4BC5: push ecx
        __asm _emit 0x51
        // 0x588B4BC6: push ebx
        __asm _emit 0x53
        // 0x588B4BC7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B4BC9: call 0x588e9f60
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588B4BCE: jmp 0x588b4bd2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B4BD0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B4BD2: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B4BD6: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B4BDA: mov dword ptr [edx + ecx*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x8A
        // 0x588B4BDD: lea eax, [esi + esi*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x76
        // 0x588B4BE0: lea edi, [edi + eax*8 + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0xC7
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4BE7: movzx eax, word ptr [esp + 0x3c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B4BEC: inc ecx
        __asm _emit 0x41
        // 0x588B4BED: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588B4BEF: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B4BF7: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B4BFB: jl 0x588b4b8e
        __asm _emit 0x7C
        __asm _emit 0x91
        // 0x588B4BFD: mov bx, word ptr [esp + 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B4C02: movzx eax, word ptr [ebp + 0x178]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4C09: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B4C0C: jbe 0x588b4c44
        __asm _emit 0x76
        __asm _emit 0x36
        // 0x588B4C0E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B4C10: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588B4C12: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588B4C15: jae 0x588b4c44
        __asm _emit 0x73
        __asm _emit 0x2D
        // 0x588B4C17: jmp 0x588b4c20
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588B4C20..0x588B4D8B; 363 mapped bytes.
extern "C" __declspec(naked) void FUN_588b4980_segment_05() {
    __asm {
        // 0x588B4C20: mov ecx, dword ptr [ebp + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4C26: push esi
        __asm _emit 0x56
        // 0x588B4C27: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B4C2C: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B4C32: push eax
        __asm _emit 0x50
        // 0x588B4C33: call 0x588f4500
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588B4C38: movzx edx, word ptr [ebp + 0x178]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4C3F: inc esi
        __asm _emit 0x46
        // 0x588B4C40: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x588B4C42: jl 0x588b4c20
        __asm _emit 0x7C
        __asm _emit 0xDC
        // 0x588B4C44: movzx eax, word ptr [ebp + 0x17a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4C4B: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B4C4E: jbe 0x588b4d03
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4C54: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B4C56: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B4C58: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588B4C5B: jae 0x588b4d03
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4C61: movzx edx, word ptr [ebp + 0x178]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4C68: mov ecx, dword ptr [ebp + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4C6E: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x588B4C70: push edx
        __asm _emit 0x52
        // 0x588B4C71: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B4C76: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B4C7C: push eax
        __asm _emit 0x50
        // 0x588B4C7D: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xF3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588B4C82: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588B4C84: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588B4C86: je 0x588b4cf3
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x588B4C88: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B4C8E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B4C90: push esi
        __asm _emit 0x56
        // 0x588B4C91: call 0x587d8ff0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x43
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588B4C96: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B4C9C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B4C9E: je 0x588b4ca7
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588B4CA0: call 0x587dad80
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x60
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588B4CA5: jmp 0x588b4cbe
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x588B4CA7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B4CA9: push esi
        __asm _emit 0x56
        // 0x588B4CAA: call 0x587d8f90
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x42
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588B4CAF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B4CB1: je 0x588b4cbe
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588B4CB3: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B4CB9: call 0x587dac20
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x5F
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588B4CBE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B4CC0: call 0x588e9880
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x4B
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588B4CC5: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B4CCB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B4CCD: call 0x587df580
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xA8
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588B4CD2: movzx eax, word ptr [ebp + 0x178]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4CD9: mov ecx, dword ptr [ebp + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4CDF: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588B4CE1: push eax
        __asm _emit 0x50
        // 0x588B4CE2: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B4CE7: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B4CED: push eax
        __asm _emit 0x50
        // 0x588B4CEE: call 0x588f41e0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xF4
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588B4CF3: movzx ecx, word ptr [ebp + 0x17a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4CFA: inc edi
        __asm _emit 0x47
        // 0x588B4CFB: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588B4CFD: jl 0x588b4c61
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B4D03: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588B4D08: je 0x588b4d2d
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588B4D0A: movzx edi, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B4D0F: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588B4D11: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588B4D13: jle 0x588b4d2d
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588B4D15: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B4D19: mov eax, dword ptr [edx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB2
        // 0x588B4D1C: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B4D22: push eax
        __asm _emit 0x50
        // 0x588B4D23: call 0x588f44d0
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xF7
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588B4D28: inc esi
        __asm _emit 0x46
        // 0x588B4D29: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x588B4D2B: jl 0x588b4d15
        __asm _emit 0x7C
        __asm _emit 0xE8
        // 0x588B4D2D: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x588B4D32: je 0x588b4d55
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588B4D34: movzx edi, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xFB
        // 0x588B4D37: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588B4D39: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588B4D3B: jle 0x588b4d55
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588B4D3D: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B4D41: mov edx, dword ptr [ecx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB1
        // 0x588B4D44: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B4D4A: push edx
        __asm _emit 0x52
        // 0x588B4D4B: call 0x588f3f20
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588B4D50: inc esi
        __asm _emit 0x46
        // 0x588B4D51: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x588B4D53: jl 0x588b4d3d
        __asm _emit 0x7C
        __asm _emit 0xE8
        // 0x588B4D55: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x588B4D58: mov eax, 0xb
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4D5D: mov word ptr [ebp + 0x19c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4D64: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588B4D67: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588B4D69: mov dword ptr [ebp + 0x1cc], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4D73: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B4D75: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B4D79: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B4D80: pop ecx
        __asm _emit 0x59
        // 0x588B4D81: pop edi
        __asm _emit 0x5F
        // 0x588B4D82: pop esi
        __asm _emit 0x5E
        // 0x588B4D83: pop ebp
        __asm _emit 0x5D
        // 0x588B4D84: pop ebx
        __asm _emit 0x5B
        // 0x588B4D85: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x588B4D88: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
