// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1104 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cb9b0.

// Ghidra body range 0x587CB9B0..0x587CBE00; 1104 mapped bytes.
extern "C" __declspec(naked) void FUN_587cb9b0_segment_00() {
    __asm {
        // 0x587CB9B0: push ecx
        __asm _emit 0x51
        // 0x587CB9B1: push ebp
        __asm _emit 0x55
        // 0x587CB9B2: push esi
        __asm _emit 0x56
        // 0x587CB9B3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CB9B5: call 0x587cb3b0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CB9BA: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB9C0: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB9C6: cdq
        __asm _emit 0x99
        // 0x587CB9C7: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587CB9C9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CB9CB: mov ecx, dword ptr [eax*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587CB9D2: imul ecx, dword ptr [esi + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB9D9: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CB9DE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CB9E0: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CB9E3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB9E5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB9E8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CB9EA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CB9EC: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB9F2: mov ebp, 0x64
        __asm _emit 0xBD
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB9F7: call 0x587cb580
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CB9FC: mov eax, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587CBA05: je 0x587cba39
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x587CBA07: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA0D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CBA0F: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587CBA11: jle 0x587cba23
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587CBA13: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA19: cmp ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA1F: jle 0x587cba39
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587CBA21: jmp 0x587cba33
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587CBA23: jge 0x587cba39
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x587CBA25: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA2B: cmp ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA31: jge 0x587cba39
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587CBA33: mov dword ptr [esi + 0xcc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA39: push ebx
        __asm _emit 0x53
        // 0x587CBA3A: push edi
        __asm _emit 0x57
        // 0x587CBA3B: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587CBA3E: jne 0x587cba5e
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587CBA40: cmp dword ptr [esi + 0xb8], 0x1e
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        // 0x587CBA47: lea ebp, [eax + 0x77]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x77
        // 0x587CBA4A: jge 0x587cbc83
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA50: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587CBA52: mov eax, dword ptr [edx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x20
        // 0x587CBA55: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CBA57: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CBA59: jmp 0x587cbc83
        __asm _emit 0xE9
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA5E: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587CBA61: jne 0x587cbc73
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA67: cmp dword ptr [esi + 0x94], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA6D: jne 0x587cba82
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587CBA6F: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA75: push ecx
        __asm _emit 0x51
        // 0x587CBA76: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CBA78: call 0x587cb5e0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CBA7D: mov ebp, 0x96
        __asm _emit 0xBD
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA82: mov ebx, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA88: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587CBA8A: je 0x587cbc83
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA90: mov edx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x587CBA93: mov edi, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA99: mov dword ptr [esi + 0x1d4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBA9F: mov ecx, dword ptr [ebx + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBAA5: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587CBAAA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBAAC: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBAAF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBAB1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBAB4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBAB6: cmp edi, 0x32
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x32
        // 0x587CBAB9: mov dword ptr [esi + 0x1d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBABF: jle 0x587cbc3b
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBAC5: movzx eax, word ptr [esi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBACC: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBAD2: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x587CBAD4: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587CBAD6: jle 0x587cbc68
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBADC: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587CBADE: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587CBAE0: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587CBAE2: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587CBAE7: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBAE9: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587CBAEC: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587CBAEE: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587CBAF1: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587CBAF3: mov dword ptr [esi + 0x98], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBAF9: cmp dword ptr [esi + 0xb8], 0x50
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x50
        // 0x587CBB00: jl 0x587cbb13
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x587CBB02: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CBB04: jl 0x587cbc83
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBB0A: cmp edi, 0x32
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x32
        // 0x587CBB0D: jge 0x587cbc83
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBB13: cmp dword ptr [esi + 0x1f0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBB1A: jne 0x587cbc83
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBB20: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBB26: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587CBB2B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBB2D: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBB30: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587CBB32: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587CBB35: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587CBB37: mov dword ptr [esi + 0x90], 0xa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBB41: mov edx, dword ptr [ebx + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBB47: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587CBB4C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587CBB4E: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBB51: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBB53: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBB56: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBB58: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587CBB5A: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587CBB5D: imul ecx, ecx, 0xc8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBB63: sub edi, dword ptr [ebx + 4]
        __asm _emit 0x2B
        __asm _emit 0x7B
        __asm _emit 0x04
        // 0x587CBB66: mov ebx, dword ptr [ebx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBB6C: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587CBB71: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBB73: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587CBB76: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587CBB78: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587CBB7B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587CBB7D: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CBB82: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x587CBB84: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBB87: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBB89: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBB8C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBB8E: mov edx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBB94: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CBB98: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CBB9D: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587CBB9F: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBBA2: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBBA4: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBBA7: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBBA9: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587CBBAB: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CBBAF: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x587CBBB1: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587CBBB3: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587CBBB5: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587CBBB8: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x587CBBBB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBBBD: push eax
        __asm _emit 0x50
        // 0x587CBBBE: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CBBC2: call 0x5876bee0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587CBBC7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CBBC9: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CBBCE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBBD0: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBBD3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBBD5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBBD8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBBDA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CBBDC: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x587CBBDE: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587CBBE1: imul edi, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFB
        // 0x587CBBE4: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x587CBBE6: push ecx
        __asm _emit 0x51
        // 0x587CBBE7: call 0x5876bee0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587CBBEC: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587CBBEF: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CBBF3: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x10
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CBBF8: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x10
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CBBFD: mov edx, dword ptr [esi + 0x1f4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBC03: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CBC05: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587CBC08: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x587CBC0A: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CBC0E: mov dword ptr [esi + 0x1f0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBC14: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CBC18: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x10
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CBC1D: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x10
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CBC22: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x587CBC25: jge 0x587cbc83
        __asm _emit 0x7D
        __asm _emit 0x5C
        // 0x587CBC27: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBC2D: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBC33: push edx
        __asm _emit 0x52
        // 0x587CBC34: call 0x587cb390
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CBC39: jmp 0x587cbc83
        __asm _emit 0xEB
        __asm _emit 0x48
        // 0x587CBC3B: movzx ecx, word ptr [esi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBC42: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBC48: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587CBC4A: jge 0x587cbaf3
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xA3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CBC50: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x587CBC53: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587CBC55: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587CBC57: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587CBC5C: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBC5E: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587CBC61: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBC63: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBC66: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBC68: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBC6E: jmp 0x587cbaf9
        __asm _emit 0xE9
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CBC73: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587CBC76: jne 0x587cbc83
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587CBC78: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587CBC7A: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587CBC7D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CBC7F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587CBC81: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CBC83: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBC89: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x587CBC8C: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x587CBC91: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBC93: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587CBC95: sar edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x587CBC98: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBC9A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBC9D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBC9F: add dword ptr [esi + 0xd0], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBCA5: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBCAB: jns 0x587cbcb5
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587CBCAD: lea ebx, [eax + 0xe10]
        __asm _emit 0x8D
        __asm _emit 0x98
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBCB3: jmp 0x587cbcbf
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587CBCB5: cdq
        __asm _emit 0x99
        // 0x587CBCB6: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBCBB: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CBCBD: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587CBCBF: mov edi, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBCC5: mov dword ptr [esi + 0xd0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBCCB: mov ecx, dword ptr [ebx*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x9D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587CBCD2: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587CBCD5: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CBCDA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBCDC: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBCDF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBCE1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBCE4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBCE6: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBCEC: mov ecx, dword ptr [ebx*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x9D
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587CBCF3: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587CBCF6: mov edi, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBCFC: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CBD01: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBD03: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBD06: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587CBD08: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587CBD0B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587CBD0D: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587CBD0F: cdq
        __asm _emit 0x99
        // 0x587CBD10: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587CBD12: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CBD14: mov dword ptr [esi + 0xa4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD1A: mov ecx, dword ptr [eax*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587CBD21: imul ecx, dword ptr [esi + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD28: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587CBD2D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBD2F: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587CBD32: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBD34: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBD37: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBD39: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD3F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CBD41: jge 0x587cbd45
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587CBD43: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587CBD45: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD4B: mov ebp, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x78
        // 0x587CBD4E: add dword ptr [esi + 0x1dc], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD54: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD5A: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD60: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD66: add dword ptr [esi + 0xc8], ecx
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD6C: sub dword ptr [esi + 0x1e0], eax
        __asm _emit 0x29
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD72: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CBD74: cmp ebp, 1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x01
        // 0x587CBD77: je 0x587cbdac
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x587CBD79: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587CBD7E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CBD80: jl 0x587cbd98
        __asm _emit 0x7C
        __asm _emit 0x16
        // 0x587CBD82: lea ecx, [edi + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBD88: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBD8A: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x587CBD8D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CBD8F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CBD92: lea ecx, [edx + eax + 2]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x02
        // 0x587CBD96: jmp 0x587cbdac
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x587CBD98: lea ecx, [edi - 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CBD9E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CBDA0: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x587CBDA3: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587CBDA5: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587CBDA8: lea ecx, [edx + ecx + 2]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x02
        // 0x587CBDAC: lea edx, [ebx - 0x384]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x7C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CBDB2: pop edi
        __asm _emit 0x5F
        // 0x587CBDB3: pop ebx
        __asm _emit 0x5B
        // 0x587CBDB4: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CBDB6: jge 0x587cbdbe
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587CBDB8: add edx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBDBE: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587CBDC1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CBDC3: cdq
        __asm _emit 0x99
        // 0x587CBDC4: idiv dword ptr [esi + 0x80]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBDCA: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBDD0: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x587CBDD3: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587CBDD5: imul eax, dword ptr [esi + 0x74]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x587CBDD9: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBDDF: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587CBDE1: mov eax, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBDE7: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x587CBDEA: mov ecx, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBDF0: mov edx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CBDF6: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587CBDF9: pop esi
        __asm _emit 0x5E
        // 0x587CBDFA: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587CBDFD: pop ebp
        __asm _emit 0x5D
        // 0x587CBDFE: pop ecx
        __asm _emit 0x59
        // 0x587CBDFF: ret
        __asm _emit 0xC3
    }
}
