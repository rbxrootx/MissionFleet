// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1035 bytes in 2 exact ranges.
// Source symbol alias: FUN_587779b0.

// Ghidra body range 0x587779B0..0x58777D1A; 874 mapped bytes.
extern "C" __declspec(naked) void FUN_587779b0_segment_00() {
    __asm {
        // 0x587779B0: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587779B3: push ebx
        __asm _emit 0x53
        // 0x587779B4: push ebp
        __asm _emit 0x55
        // 0x587779B5: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587779B7: mov eax, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x68
        // 0x587779BA: sub eax, dword ptr [ebp + 0x64]
        __asm _emit 0x2B
        __asm _emit 0x45
        __asm _emit 0x64
        // 0x587779BD: push esi
        __asm _emit 0x56
        // 0x587779BE: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587779C1: push edi
        __asm _emit 0x57
        // 0x587779C2: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587779C6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587779C8: jbe 0x58777a3f
        __asm _emit 0x76
        __asm _emit 0x75
        // 0x587779CA: call 0x58777650
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587779CF: mov edi, dword ptr [ebp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x64
        // 0x587779D2: cmp edi, dword ptr [ebp + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x68
        // 0x587779D5: jbe 0x587779dc
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587779D7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x52
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587779DC: mov esi, dword ptr [ebp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x587779DF: nop
        __asm _emit 0x90
        // 0x587779E0: mov ebx, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x68
        // 0x587779E3: cmp dword ptr [ebp + 0x64], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x64
        // 0x587779E6: jbe 0x587779ed
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587779E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587779ED: mov eax, dword ptr [ebp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x58
        // 0x587779F0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587779F2: je 0x587779f8
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587779F4: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587779F6: je 0x587779fd
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587779F8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x52
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587779FD: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587779FF: je 0x58777a3f
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58777A01: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58777A03: jne 0x58777a37
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58777A05: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x52
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777A0A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777A0C: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58777A0F: jb 0x58777a16
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777A11: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x52
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777A16: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58777A18: call 0x58735170
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xD7
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58777A1D: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58777A1F: jne 0x58777a3b
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58777A21: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x52
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777A26: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777A28: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58777A2B: jb 0x58777a32
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777A2D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777A32: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58777A35: jmp 0x587779e0
        __asm _emit 0xEB
        __asm _emit 0xA9
        // 0x58777A37: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58777A39: jmp 0x58777a0c
        __asm _emit 0xEB
        __asm _emit 0xD1
        // 0x58777A3B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58777A3D: jmp 0x58777a28
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58777A3F: mov eax, dword ptr [ebp + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777A45: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58777A47: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777A4C: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58777A4E: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58777A50: je 0x58777a59
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58777A52: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58777A54: call 0x587766a0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777A59: mov edx, dword ptr [ebp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x50
        // 0x58777A5C: cmp dword ptr [edx + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777A63: jbe 0x58777a7b
        __asm _emit 0x76
        __asm _emit 0x16
        // 0x58777A65: mov ecx, dword ptr [ebp + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777A6B: call 0x587aae60
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58777A70: mov ecx, dword ptr [ebp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777A76: call 0x587ab060
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58777A7B: mov eax, dword ptr [ebp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x50
        // 0x58777A7E: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777A83: add dword ptr [ebp + 0x94], edi
        __asm _emit 0x01
        __asm _emit 0xBD
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777A89: cmp dword ptr [eax + 0x50], 0xf4241
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58777A90: je 0x58777d6d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777A96: cmp dword ptr [eax + 0x134], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58777A9D: jne 0x58777cf1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777AA3: mov esi, dword ptr [ebp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x58777AA6: cmp esi, dword ptr [ebp + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x58777AA9: jbe 0x58777ab0
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777AAB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777AB0: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x58777AB2: mov edi, dword ptr [ebx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x58
        // 0x58777AB5: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58777AB9: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58777ABB: mov esi, dword ptr [ebx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x68
        // 0x58777ABE: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58777AC2: cmp dword ptr [ebx + 0x64], esi
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0x64
        // 0x58777AC5: jbe 0x58777acc
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777AC7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777ACC: mov eax, dword ptr [ebx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x58
        // 0x58777ACF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58777AD1: je 0x58777ad7
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58777AD3: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58777AD5: je 0x58777adc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58777AD7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777ADC: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x58777ADE: je 0x58777d5b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777AE4: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58777AE6: jne 0x58777c66
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777AEC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777AF1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777AF3: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58777AF6: jb 0x58777afd
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777AF8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777AFD: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58777B00: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58777B03: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58777B06: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58777B09: jbe 0x58777b10
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777B0B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777B10: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x58777B12: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58777B16: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777B1A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777B20: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58777B24: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58777B26: jne 0x58777c6d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777B2C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777B31: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777B33: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58777B36: jb 0x58777b3d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777B38: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777B3D: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58777B40: mov edi, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58777B43: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58777B46: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58777B49: jbe 0x58777b50
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777B4B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777B50: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58777B52: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777B54: je 0x58777b5a
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58777B56: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x58777B58: je 0x58777b5f
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58777B5A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777B5F: cmp dword ptr [esp + 0x18], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777B63: je 0x58777cc4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777B69: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777B6B: jne 0x58777c74
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777B71: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777B76: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777B78: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777B7C: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58777B7F: jb 0x58777b86
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777B81: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777B86: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777B8A: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x58777B8C: mov edi, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58777B8F: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58777B92: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58777B95: jbe 0x58777b9c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777B97: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777B9C: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x58777B9E: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x58777BA0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58777BA4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58777BA6: jne 0x58777c7b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777BAC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777BB1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777BB3: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777BB7: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58777BBA: jb 0x58777bc1
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777BBC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777BC1: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777BC5: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x58777BC7: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58777BCA: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58777BCD: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58777BD0: jbe 0x58777bd7
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58777BD2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777BD7: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58777BD9: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777BDB: je 0x58777be1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58777BDD: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x58777BDF: je 0x58777be6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58777BE1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777BE6: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x58777BE8: je 0x58777c91
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777BEE: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777BF0: jne 0x58777c82
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777BF6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777BFB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777BFD: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58777C00: jb 0x58777c07
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777C02: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777C07: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58777C0A: call 0x58735820
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xDC
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58777C0F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58777C11: je 0x58777c49
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58777C13: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777C15: jne 0x58777c89
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x58777C17: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777C1C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777C1E: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58777C21: jb 0x58777c28
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777C23: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777C28: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58777C2B: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58777C2E: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58777C34: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58777C37: mov cl, byte ptr [ecx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777C3D: cmp cl, byte ptr [eax + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777C43: jne 0x58777db9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777C49: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58777C4B: jne 0x58777c8d
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x58777C4D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777C52: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777C54: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58777C57: jb 0x58777c5e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777C59: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777C5E: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58777C61: jmp 0x58777ba0
        __asm _emit 0xE9
        __asm _emit 0x3A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777C66: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58777C68: jmp 0x58777af3
        __asm _emit 0xE9
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777C6D: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58777C6F: jmp 0x58777b33
        __asm _emit 0xE9
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777C74: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58777C76: jmp 0x58777b78
        __asm _emit 0xE9
        __asm _emit 0xFD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777C7B: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58777C7D: jmp 0x58777bb3
        __asm _emit 0xE9
        __asm _emit 0x31
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777C82: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58777C84: jmp 0x58777bfd
        __asm _emit 0xE9
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777C89: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58777C8B: jmp 0x58777c1e
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x58777C8D: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58777C8F: jmp 0x58777c54
        __asm _emit 0xEB
        __asm _emit 0xC3
        // 0x58777C91: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58777C95: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58777C97: jne 0x58777cc0
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x58777C99: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x4F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777C9E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777CA0: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58777CA4: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58777CA7: jb 0x58777cae
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777CA9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x4F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777CAE: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x58777CB3: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58777CB7: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58777CBB: jmp 0x58777b20
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777CC0: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58777CC2: jmp 0x58777ca0
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x58777CC4: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58777CC8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58777CCA: jne 0x58777ced
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58777CCC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x4F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777CD1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777CD3: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58777CD6: jb 0x58777cdd
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58777CD8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x4F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58777CDD: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58777CE1: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58777CE5: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58777CE8: jmp 0x58777abb
        __asm _emit 0xE9
        __asm _emit 0xCE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58777CED: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58777CEF: jmp 0x58777cd3
        __asm _emit 0xEB
        __asm _emit 0xE2
        // 0x58777CF1: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58777CF7: cmp byte ptr [ecx + 0x21f00], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777CFE: je 0x58777d0c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58777D00: pop edi
        __asm _emit 0x5F
        // 0x58777D01: pop esi
        __asm _emit 0x5E
        // 0x58777D02: pop ebp
        __asm _emit 0x5D
        // 0x58777D03: pop ebx
        __asm _emit 0x5B
        // 0x58777D04: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58777D07: jmp 0x587e5fb0
        __asm _emit 0xE9
        __asm _emit 0xA4
        __asm _emit 0xE2
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58777D0C: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58777D11: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x58777D14: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58777D16: je 0x58777d61
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x58777D18: jmp 0x58777d20
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58777D20..0x58777DC1; 161 mapped bytes.
extern "C" __declspec(naked) void FUN_587779b0_segment_01() {
    __asm {
        // 0x58777D20: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58777D26: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58777D29: mov al, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777D2F: cmp al, byte ptr [edx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777D35: jne 0x58777d50
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58777D37: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58777D39: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58777D3E: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58777D43: jne 0x58777d50
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58777D45: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777D4C: jne 0x58777d50
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x58777D4E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58777D50: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58777D53: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58777D55: jne 0x58777d20
        __asm _emit 0x75
        __asm _emit 0xC9
        // 0x58777D57: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58777D59: je 0x58777db9
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x58777D5B: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58777D61: pop edi
        __asm _emit 0x5F
        // 0x58777D62: pop esi
        __asm _emit 0x5E
        // 0x58777D63: pop ebp
        __asm _emit 0x5D
        // 0x58777D64: pop ebx
        __asm _emit 0x5B
        // 0x58777D65: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58777D68: jmp 0x587e5fb0
        __asm _emit 0xE9
        __asm _emit 0x43
        __asm _emit 0xE2
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58777D6D: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58777D73: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58777D76: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58777D78: je 0x58777d5b
        __asm _emit 0x74
        __asm _emit 0xE1
        // 0x58777D7A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777D80: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58777D86: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58777D89: mov cl, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777D8F: cmp cl, byte ptr [eax + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777D95: jne 0x58777db0
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58777D97: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58777D99: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58777D9E: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58777DA3: jne 0x58777db0
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58777DA5: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777DAC: jne 0x58777db0
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x58777DAE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58777DB0: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58777DB3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58777DB5: jne 0x58777d80
        __asm _emit 0x75
        __asm _emit 0xC9
        // 0x58777DB7: jmp 0x58777d57
        __asm _emit 0xEB
        __asm _emit 0x9E
        // 0x58777DB9: pop edi
        __asm _emit 0x5F
        // 0x58777DBA: pop esi
        __asm _emit 0x5E
        // 0x58777DBB: pop ebp
        __asm _emit 0x5D
        // 0x58777DBC: pop ebx
        __asm _emit 0x5B
        // 0x58777DBD: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58777DC0: ret
        __asm _emit 0xC3
    }
}
