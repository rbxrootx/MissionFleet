// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 589 bytes in 4 exact ranges.
// Source symbol alias: FUN_58831c30.

// Ghidra body range 0x588319A0..0x588319B7; 23 mapped bytes.
extern "C" __declspec(naked) void FUN_58831c30_segment_00() {
    __asm {
        // 0x588319A0: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588319A5: push ebx
        __asm _emit 0x53
        // 0x588319A6: push esi
        __asm _emit 0x56
        // 0x588319A7: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x588319AA: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588319AC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588319AE: je 0x58831ada
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588319B4: push edi
        __asm _emit 0x57
        // 0x588319B5: jmp 0x588319c0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x588319C0..0x58831ADD; 285 mapped bytes.
extern "C" __declspec(naked) void FUN_58831c30_segment_01() {
    __asm {
        // 0x588319C0: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588319C6: cmp esi, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x588319C9: je 0x58831ace
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588319CF: movzx eax, word ptr [esi + 0x133c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588319D6: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588319DA: je 0x588319e2
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588319DC: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588319E0: jne 0x58831a50
        __asm _emit 0x75
        __asm _emit 0x6E
        // 0x588319E2: cmp word ptr [0x58a0b4a8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588319EA: jne 0x58831a50
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x588319EC: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588319F2: lea edi, [esi + 0x1334]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588319F8: push edi
        __asm _emit 0x57
        // 0x588319F9: call 0x58754080
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x26
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588319FE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58831A00: je 0x58831ac2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831A06: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58831A08: mov edx, dword ptr [esi + 0x1338]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831A0E: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831A14: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x58831A19: push eax
        __asm _emit 0x50
        // 0x58831A1A: push edx
        __asm _emit 0x52
        // 0x58831A1B: push eax
        __asm _emit 0x50
        // 0x58831A1C: call 0x58753980
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x1F
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831A21: mov ecx, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x6C
        // 0x58831A24: push eax
        __asm _emit 0x50
        // 0x58831A25: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x6E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831A2A: mov eax, dword ptr [esi + 0x1338]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831A30: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831A36: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x58831A3B: push eax
        __asm _emit 0x50
        // 0x58831A3C: push eax
        __asm _emit 0x50
        // 0x58831A3D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58831A3F: push eax
        __asm _emit 0x50
        // 0x58831A40: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x1E
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831A45: mov ecx, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x70
        // 0x58831A48: push eax
        __asm _emit 0x50
        // 0x58831A49: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x6E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831A4E: jmp 0x58831ace
        __asm _emit 0xEB
        __asm _emit 0x7E
        // 0x58831A50: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x58831A54: je 0x58831a5c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58831A56: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58831A5A: jne 0x58831ace
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x58831A5C: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831A62: lea edi, [esi + 0x1334]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831A68: push edi
        __asm _emit 0x57
        // 0x58831A69: call 0x58754080
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x26
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831A6E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58831A70: je 0x58831ac2
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x58831A72: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58831A74: mov ecx, dword ptr [esi + 0x1338]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831A7A: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x58831A7F: push eax
        __asm _emit 0x50
        // 0x58831A80: push ecx
        __asm _emit 0x51
        // 0x58831A81: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831A87: push eax
        __asm _emit 0x50
        // 0x58831A88: call 0x58753980
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x1E
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831A8D: mov ecx, dword ptr [ebx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831A93: push eax
        __asm _emit 0x50
        // 0x58831A94: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x6E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831A99: mov eax, dword ptr [esi + 0x1338]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831A9F: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58831AA1: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831AA7: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x58831AAC: push eax
        __asm _emit 0x50
        // 0x58831AAD: push eax
        __asm _emit 0x50
        // 0x58831AAE: push edx
        __asm _emit 0x52
        // 0x58831AAF: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x1D
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831AB4: mov ecx, dword ptr [ebx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831ABA: push eax
        __asm _emit 0x50
        // 0x58831ABB: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x6E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831AC0: jmp 0x58831ace
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58831AC2: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831AC8: push edi
        __asm _emit 0x57
        // 0x58831AC9: call 0x587b9270
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x77
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58831ACE: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58831AD1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58831AD3: jne 0x588319c0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58831AD9: pop edi
        __asm _emit 0x5F
        // 0x58831ADA: pop esi
        __asm _emit 0x5E
        // 0x58831ADB: pop ebx
        __asm _emit 0x5B
        // 0x58831ADC: ret
        __asm _emit 0xC3
    }
}

// Ghidra body range 0x58831C30..0x58831C6D; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_58831c30_segment_02() {
    __asm {
        // 0x58831C30: push edi
        __asm _emit 0x57
        // 0x58831C31: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58831C33: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58831C37: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831C3C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58831C3F: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831C44: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58831C47: je 0x58831c5e
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58831C49: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58831C4D: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58831C50: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831C55: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58831C58: jne 0x58831d4a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831C5E: push ebx
        __asm _emit 0x53
        // 0x58831C5F: push esi
        __asm _emit 0x56
        // 0x58831C60: lea esi, [edi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831C66: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831C6B: jmp 0x58831c70
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58831C70..0x58831D4C; 220 mapped bytes.
extern "C" __declspec(naked) void FUN_58831c30_segment_03() {
    __asm {
        // 0x58831C70: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58831C72: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x6B
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831C77: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58831C7A: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58831C7D: jne 0x58831c70
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58831C7F: lea esi, [edi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x6C
        // 0x58831C82: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831C87: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58831C89: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x6B
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831C8E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58831C91: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58831C94: jne 0x58831c87
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58831C96: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x58831C99: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xDC
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831C9E: mov ecx, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831CA4: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xDC
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831CA9: mov eax, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x7C
        // 0x58831CAC: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58831CAF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58831CB1: je 0x58831ce3
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58831CB3: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58831CB8: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831CBD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58831CC0: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58831CC6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58831CC8: je 0x58831cdb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58831CCA: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58831CCC: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58831CCE: je 0x58831cdb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58831CD0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58831CD2: inc eax
        __asm _emit 0x40
        // 0x58831CD3: inc edx
        __asm _emit 0x42
        // 0x58831CD4: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58831CD7: jne 0x58831cc0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58831CD9: jmp 0x58831cdf
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58831CDB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58831CDD: jne 0x58831ce0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58831CDF: dec eax
        __asm _emit 0x48
        // 0x58831CE0: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831CE3: mov eax, dword ptr [edi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831CE9: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58831CEC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58831CEE: je 0x58831d23
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58831CF0: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58831CF5: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831CFA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D00: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58831D06: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58831D08: je 0x58831d1b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58831D0A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58831D0C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58831D0E: je 0x58831d1b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58831D10: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58831D12: inc eax
        __asm _emit 0x40
        // 0x58831D13: inc edx
        __asm _emit 0x42
        // 0x58831D14: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58831D17: jne 0x58831d00
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58831D19: jmp 0x58831d1f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58831D1B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58831D1D: jne 0x58831d20
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58831D1F: dec eax
        __asm _emit 0x48
        // 0x58831D20: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D23: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x58831D27: mov eax, 0xe1ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D2C: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58831D2F: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D34: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x58831D37: pop esi
        __asm _emit 0x5E
        // 0x58831D38: mov word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x58831D3C: or word ptr [edi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x58831D41: pop ebx
        __asm _emit 0x5B
        // 0x58831D42: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58831D44: pop edi
        __asm _emit 0x5F
        // 0x58831D45: jmp 0x588319a0
        __asm _emit 0xE9
        __asm _emit 0x56
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58831D4A: pop edi
        __asm _emit 0x5F
        // 0x58831D4B: ret
        __asm _emit 0xC3
    }
}
