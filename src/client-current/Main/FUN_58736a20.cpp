// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1013 bytes in 1 exact ranges.
// Source symbol alias: FUN_58736a20.

// Ghidra body range 0x58736A20..0x58736E15; 1013 mapped bytes.
extern "C" __declspec(naked) void FUN_58736a20_segment_00() {
    __asm {
        // 0x58736A20: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x58736A23: push ebx
        __asm _emit 0x53
        // 0x58736A24: push ebp
        __asm _emit 0x55
        // 0x58736A25: push esi
        __asm _emit 0x56
        // 0x58736A26: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58736A28: cmp dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58736A2C: push edi
        __asm _emit 0x57
        // 0x58736A2D: je 0x58736c72
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736A33: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58736A36: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58736A39: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58736A3C: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x58736A3F: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58736A42: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58736A45: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58736A49: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58736A4B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58736A4D: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736A51: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58736A54: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x58736A56: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736A5A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58736A5C: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x58736A5F: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58736A61: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736A65: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58736A69: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58736A6D: fild dword ptr [esp + 0x38]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736A71: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x62
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58736A76: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x62
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58736A7B: cmp eax, 0xc8
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736A80: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58736A84: jge 0x58736c53
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xC9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736A8A: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58736A8D: mov ecx, dword ptr [edx + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736A93: cmp ecx, 0x708
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736A99: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736A9E: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736AA2: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58736AA4: jge 0x58736aad
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x58736AA6: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x58736AA9: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736AAD: cmp ecx, 0x384
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736AB3: jle 0x58736ac0
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x58736AB5: cmp ecx, 0xa8c
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736ABB: jg 0x58736ac0
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58736ABD: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58736AC0: cmp ebx, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58736AC4: je 0x58736b4f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736ACA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736ACE: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x58736AD0: je 0x58736b5b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736AD6: fild dword ptr [esp + 0x3c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736ADA: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58736ADC: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58736ADE: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736AE2: fidiv dword ptr [esp + 0x3c]
        __asm _emit 0xDA
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736AE6: fstp dword ptr [esp + 0x3c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736AEA: fld dword ptr [esp + 0x3c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736AEE: fmul st(0), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC8
        // 0x58736AF0: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x58736AF2: fadd st(1), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC1
        // 0x58736AF4: fld qword ptr [0x5898caf0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xF0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58736AFA: fdivrp st(2)
        __asm _emit 0xDE
        __asm _emit 0xF2
        // 0x58736AFC: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x58736AFE: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58736B02: fld dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58736B06: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58736B0B: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58736B0F: fld dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58736B13: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58736B17: fild dword ptr [esp + 0x38]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736B1B: fstp dword ptr [esp + 0x38]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736B1F: fld dword ptr [esp + 0x38]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736B23: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x58736B25: fld dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58736B29: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x58736B2B: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x58736B2D: fild dword ptr [esp + 0x20]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58736B31: faddp st(2)
        __asm _emit 0xDE
        __asm _emit 0xC2
        // 0x58736B33: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x58736B35: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58736B3A: fmul dword ptr [esp + 0x3c]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736B3E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58736B40: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x58736B42: fiadd dword ptr [esp + 0x10]
        __asm _emit 0xDA
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58736B46: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58736B4B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58736B4D: jmp 0x58736b67
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x58736B4F: imul edi, edi, 0xc8
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736B55: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x58736B57: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58736B59: jmp 0x58736b67
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58736B5B: imul eax, eax, 0xc8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736B61: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58736B63: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x58736B65: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x58736B67: cmp dword ptr [esp + 0x34], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x58736B6C: jne 0x58736bc3
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x58736B6E: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58736B73: mov edx, dword ptr [eax + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58736B79: mov ecx, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58736B7F: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58736B81: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58736B83: lea eax, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x58736B86: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58736B8C: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58736B91: mov ebp, 0x28
        __asm _emit 0xBD
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736B96: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x58736B99: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58736B9B: div ebp
        __asm _emit 0xF7
        __asm _emit 0xF5
        // 0x58736B9D: lea eax, [ecx + esi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x31
        // 0x58736BA0: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58736BA6: lea edi, [edi + edx - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x17
        __asm _emit 0xEC
        // 0x58736BAA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58736BAC: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58736BB2: mov eax, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x91
        // 0x58736BB5: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58736BB7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58736BB9: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58736BBB: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58736BBF: lea esi, [esi + edx - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0xEC
        // 0x58736BC3: cmp dword ptr [esp + 0x24], 0x64
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58736BC8: jge 0x58736c40
        __asm _emit 0x7D
        __asm _emit 0x76
        // 0x58736BCA: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58736BCE: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736BD3: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58736BD7: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736BDB: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736BE0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58736BE2: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x58736BE4: jne 0x58736beb
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58736BE6: lea ecx, [eax + 2]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x02
        // 0x58736BE9: jmp 0x58736bf5
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58736BEB: jge 0x58736bf5
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58736BED: mov dword ptr [esp + 0x34], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736BF5: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736BF9: cmp ebp, edx
        __asm _emit 0x3B
        __asm _emit 0xEA
        // 0x58736BFB: jne 0x58736c04
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58736BFD: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736C02: jmp 0x58736c0e
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58736C04: jge 0x58736c0e
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58736C06: mov dword ptr [esp + 0x38], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736C0E: imul eax, dword ptr [esp + 0x34]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58736C13: imul ecx, dword ptr [esp + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736C18: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58736C1B: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x58736C1E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58736C20: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x58736C25: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58736C27: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58736C29: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58736C2C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58736C2E: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58736C30: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x58736C35: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58736C37: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58736C39: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58736C3C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58736C3E: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x58736C40: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58736C44: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58736C46: pop edi
        __asm _emit 0x5F
        // 0x58736C47: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x58736C4A: pop esi
        __asm _emit 0x5E
        // 0x58736C4B: pop ebp
        __asm _emit 0x5D
        // 0x58736C4C: pop ebx
        __asm _emit 0x5B
        // 0x58736C4D: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58736C50: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58736C53: mov edx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x58736C56: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58736C59: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58736C5D: pop edi
        __asm _emit 0x5F
        // 0x58736C5E: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58736C60: mov edx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x58736C63: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x58736C66: pop esi
        __asm _emit 0x5E
        // 0x58736C67: pop ebp
        __asm _emit 0x5D
        // 0x58736C68: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58736C6B: pop ebx
        __asm _emit 0x5B
        // 0x58736C6C: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58736C6F: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58736C72: cmp word ptr [esi + 0xf0], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736C7A: jne 0x58736e0b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736C80: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736C86: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58736C88: je 0x58736e0b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736C8E: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736C92: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x58736C95: jne 0x58736e0b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736C9B: cmp word ptr [esi + 0x28], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x28
        __asm _emit 0x04
        // 0x58736CA0: jae 0x58736e0b
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736CA6: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736CAA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58736CAC: cmp eax, dword ptr [esi + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58736CAF: ja 0x58736e0b
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736CB5: mov ebx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x58736CB8: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58736CBB: cmp dword ptr [eax + 0x6060], 0x708
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736CC5: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x58736CC8: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x58736CCB: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58736CCE: mov dword ptr [esp + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736CD2: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736CD7: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58736CDB: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58736CDF: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736CE3: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58736CE5: jge 0x58736cee
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x58736CE7: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x58736CEA: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736CEE: mov eax, dword ptr [eax + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736CF4: cmp eax, 0x384
        __asm _emit 0x3D
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736CF9: jle 0x58736d05
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x58736CFB: cmp eax, 0xa8c
        __asm _emit 0x3D
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736D00: jg 0x58736d05
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58736D02: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x58736D05: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58736D07: je 0x58736d96
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736D0D: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736D11: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58736D13: je 0x58736da2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736D19: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x58736D1B: mov dword ptr [esp + 0x3c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736D1F: fild dword ptr [esp + 0x3c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736D23: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58736D25: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736D29: fidiv dword ptr [esp + 0x3c]
        __asm _emit 0xDA
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736D2D: fstp dword ptr [esp + 0x3c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736D31: fld dword ptr [esp + 0x3c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736D35: fmul st(0), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC8
        // 0x58736D37: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x58736D39: fadd st(1), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC1
        // 0x58736D3B: fld qword ptr [0x5898cae8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58736D41: fdivrp st(2)
        __asm _emit 0xDE
        __asm _emit 0xF2
        // 0x58736D43: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x58736D45: fstp dword ptr [esp + 0x24]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58736D49: fld dword ptr [esp + 0x24]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58736D4D: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x5F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58736D52: fstp dword ptr [esp + 0x24]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58736D56: fld dword ptr [esp + 0x24]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58736D5A: fstp dword ptr [esp + 0x24]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58736D5E: fild dword ptr [esp + 0x38]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736D62: fstp dword ptr [esp + 0x38]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736D66: fld dword ptr [esp + 0x38]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58736D6A: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x58736D6C: fld dword ptr [esp + 0x24]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58736D70: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x58736D72: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x58736D74: fild dword ptr [esp + 0x20]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58736D78: faddp st(2)
        __asm _emit 0xDE
        __asm _emit 0xC2
        // 0x58736D7A: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x58736D7C: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x5F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58736D81: fmul dword ptr [esp + 0x3c]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58736D85: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58736D87: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x58736D89: fiadd dword ptr [esp + 0x1c]
        __asm _emit 0xDA
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58736D8D: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x5F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58736D92: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58736D94: jmp 0x58736dae
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x58736D96: imul edx, edx, 0x190
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736D9C: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x58736D9E: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58736DA0: jmp 0x58736dae
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58736DA2: imul edi, edi, 0x190
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736DA8: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x58736DAA: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58736DAC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58736DAE: cmp dword ptr [esp + 0x34], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x58736DB3: jne 0x58736e02
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x58736DB5: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58736DBB: mov edi, dword ptr [edx + 0x10910]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58736DC1: mov ebx, dword ptr [0x58a24914]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58736DC7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58736DC9: lea eax, [edi + esi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x37
        // 0x58736DCC: div ebx
        __asm _emit 0xF7
        __asm _emit 0xF3
        // 0x58736DCE: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58736DD3: mov ebp, 0x10a
        __asm _emit 0xBD
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736DD8: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x58736DDB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58736DDD: div ebp
        __asm _emit 0xF7
        __asm _emit 0xF5
        // 0x58736DDF: lea eax, [edi + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x58736DE2: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x58736DE4: lea esi, [esi + edx - 0x85]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x16
        __asm _emit 0x7B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736DEB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58736DED: div ebx
        __asm _emit 0xF7
        __asm _emit 0xF3
        // 0x58736DEF: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58736DF4: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x58736DF7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58736DF9: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x58736DFB: lea ecx, [ecx + edx - 0x85]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x11
        __asm _emit 0x7B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736E02: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58736E06: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58736E08: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58736E0B: pop edi
        __asm _emit 0x5F
        // 0x58736E0C: pop esi
        __asm _emit 0x5E
        // 0x58736E0D: pop ebp
        __asm _emit 0x5D
        // 0x58736E0E: pop ebx
        __asm _emit 0x5B
        // 0x58736E0F: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58736E12: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
