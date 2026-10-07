// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 791 bytes in 1 exact ranges.
// Source symbol alias: FUN_58735950.

// Ghidra body range 0x58735950..0x58735C67; 791 mapped bytes.
extern "C" __declspec(naked) void FUN_58735950_segment_00() {
    __asm {
        // 0x58735950: sub esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x38
        // 0x58735953: push ebx
        __asm _emit 0x53
        // 0x58735954: push ebp
        __asm _emit 0x55
        // 0x58735955: push esi
        __asm _emit 0x56
        // 0x58735956: push edi
        __asm _emit 0x57
        // 0x58735957: mov eax, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5873595B: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735962: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58735964: lea eax, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD1
        // 0x58735967: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873596B: mov ebp, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x74
        // 0x5873596E: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58735972: mov ecx, dword ptr [eax*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58735979: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x5873597C: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58735981: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58735983: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58735987: mov ecx, dword ptr [ecx*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873598E: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x58735991: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58735994: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58735996: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x58735999: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x5873599B: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587359A0: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587359A2: mov ecx, dword ptr [0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587359A8: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587359AB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587359AD: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587359B0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587359B2: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587359B5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587359BA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587359BC: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587359BF: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587359C1: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587359C3: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587359C6: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587359C8: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587359CC: mov eax, dword ptr [edx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587359D2: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587359D6: mov edi, 0xc8
        __asm _emit 0xBF
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587359DB: lea ebp, [esi + esi]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x36
        // 0x587359DE: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587359E2: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587359E6: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587359EB: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587359ED: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x587359F0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587359F2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587359F5: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587359F7: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587359FA: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587359FE: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58735A03: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58735A05: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x58735A08: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58735A0A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58735A0D: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58735A0F: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735A14: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x58735A16: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x58735A19: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58735A1D: mov eax, 0x447a7a9
        __asm _emit 0xB8
        __asm _emit 0xA9
        __asm _emit 0xA7
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58735A22: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58735A24: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x58735A27: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58735A29: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58735A2C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58735A2E: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x58735A30: cmp esi, 0x2710
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735A36: jle 0x58735a3d
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x58735A38: mov esi, 0x2710
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735A3D: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x58735A3F: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58735A42: mov eax, 0x68db8bad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x8B
        __asm _emit 0xDB
        __asm _emit 0x68
        // 0x58735A47: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58735A49: sar edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x58735A4C: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58735A4E: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58735A51: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58735A53: add ebp, dword ptr [0x58a244c0]
        __asm _emit 0x03
        __asm _emit 0x2D
        __asm _emit 0xC0
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58735A59: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58735A5D: mov dword ptr [esp + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58735A61: js 0x58735a85
        __asm _emit 0x78
        __asm _emit 0x22
        // 0x58735A63: lea edx, [esi - 0x1388]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58735A69: imul edx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD5
        // 0x58735A6C: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58735A6E: mov eax, 0x68db8bad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x8B
        __asm _emit 0xDB
        __asm _emit 0x68
        // 0x58735A73: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58735A75: sar edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x58735A78: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58735A7A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58735A7D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58735A7F: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58735A81: mov dword ptr [esp + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58735A85: cmp edi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735A8B: jle 0x58735ab5
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x58735A8D: lea eax, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2F
        // 0x58735A90: cmp eax, 0xfa0
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735A95: jle 0x58735ab5
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58735A97: cmp ebp, 0xfffff448
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x48
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58735A9D: jg 0x58735aae
        __asm _emit 0x7F
        __asm _emit 0x0F
        // 0x58735A9F: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58735AA3: cmp word ptr [edx + 0x5c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x5C
        __asm _emit 0x02
        // 0x58735AA8: je 0x58735c12
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735AAE: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58735AB0: jmp 0x58735bf2
        __asm _emit 0xE9
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735AB5: lea esi, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x2F
        // 0x58735AB8: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58735ABC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58735ABE: jge 0x58735ae9
        __asm _emit 0x7D
        __asm _emit 0x29
        // 0x58735AC0: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58735AC2: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58735AC5: cdq
        __asm _emit 0x99
        // 0x58735AC6: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58735AC8: cdq
        __asm _emit 0x99
        // 0x58735AC9: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58735ACB: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58735ACD: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58735AD0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58735AD2: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58735AD7: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58735AD9: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58735ADC: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58735ADE: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58735AE1: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58735AE3: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x58735AE5: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58735AE7: jmp 0x58735b20
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x58735AE9: cmp esi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735AEF: jle 0x58735b1e
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x58735AF1: mov eax, 0xfa0
        __asm _emit 0xB8
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735AF6: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58735AF8: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58735AFB: cdq
        __asm _emit 0x99
        // 0x58735AFC: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58735AFE: mov esi, 0xfa0
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735B03: cdq
        __asm _emit 0x99
        // 0x58735B04: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58735B06: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58735B08: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58735B0B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58735B0D: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58735B12: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58735B14: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58735B17: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58735B19: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58735B1C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58735B1E: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x58735B20: mov ebp, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58735B26: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58735B28: imul edx, edx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x75
        // 0x58735B2B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58735B2D: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58735B2F: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58735B33: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58735B35: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58735B37: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58735B3B: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58735B40: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58735B42: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58735B45: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x58735B47: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58735B4A: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x58735B4C: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58735B4E: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x58735B51: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58735B56: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58735B58: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58735B5C: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58735B5F: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x58735B61: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x58735B64: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x58735B66: cdq
        __asm _emit 0x99
        // 0x58735B67: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58735B69: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58735B6B: cdq
        __asm _emit 0x99
        // 0x58735B6C: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58735B6E: mov dword ptr [esp + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58735B72: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58735B74: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735B76: cdq
        __asm _emit 0x99
        // 0x58735B77: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58735B79: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58735B7B: cdq
        __asm _emit 0x99
        // 0x58735B7C: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58735B7E: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58735B80: jle 0x58735b8d
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x58735B82: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58735B86: cdq
        __asm _emit 0x99
        // 0x58735B87: idiv dword ptr [esp + 0x54]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58735B8B: jmp 0x58735b92
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58735B8D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735B8F: cdq
        __asm _emit 0x99
        // 0x58735B90: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58735B92: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58735B96: cdq
        __asm _emit 0x99
        // 0x58735B97: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58735B99: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58735B9B: cdq
        __asm _emit 0x99
        // 0x58735B9C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58735B9E: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58735BA0: sar ebp, 1
        __asm _emit 0xD1
        __asm _emit 0xFD
        // 0x58735BA2: inc ebp
        __asm _emit 0x45
        // 0x58735BA3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735BA5: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58735BA7: jle 0x58735be2
        __asm _emit 0x7E
        __asm _emit 0x39
        // 0x58735BA9: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58735BAD: mov dword ptr [esp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58735BB1: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58735BB5: mov eax, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58735BB9: cdq
        __asm _emit 0x99
        // 0x58735BBA: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58735BBC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58735BBE: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58735BC2: cdq
        __asm _emit 0x99
        // 0x58735BC3: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58735BC5: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58735BC9: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58735BCD: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x58735BCF: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58735BD1: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58735BD5: add dword ptr [esp + 0x54], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58735BD9: add esi, edi
        __asm _emit 0x03
        __asm _emit 0xF7
        // 0x58735BDB: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x58735BE0: jne 0x58735bb5
        __asm _emit 0x75
        __asm _emit 0xD3
        // 0x58735BE2: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58735BE4: jle 0x58735c3d
        __asm _emit 0x7E
        __asm _emit 0x57
        // 0x58735BE6: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58735BEA: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58735BEE: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58735BF2: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x58735BF4: cmp dword ptr [esp + 0x14], 0x3e8
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735BFC: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58735C00: jl 0x587359e6
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xE0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58735C06: pop edi
        __asm _emit 0x5F
        // 0x58735C07: pop esi
        __asm _emit 0x5E
        // 0x58735C08: pop ebp
        __asm _emit 0x5D
        // 0x58735C09: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58735C0B: pop ebx
        __asm _emit 0x5B
        // 0x58735C0C: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x58735C0F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58735C12: mov eax, dword ptr [0x58a244bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58735C17: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58735C1A: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58735C1C: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58735C21: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58735C23: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58735C26: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58735C28: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x58735C2B: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58735C2D: lea eax, [ecx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x19
        // 0x58735C30: cdq
        __asm _emit 0x99
        // 0x58735C31: pop edi
        __asm _emit 0x5F
        // 0x58735C32: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x58735C34: pop esi
        __asm _emit 0x5E
        // 0x58735C35: pop ebp
        __asm _emit 0x5D
        // 0x58735C36: pop ebx
        __asm _emit 0x5B
        // 0x58735C37: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x58735C3A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58735C3D: mov eax, dword ptr [0x58a244bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58735C42: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58735C45: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58735C47: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58735C4C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58735C4E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58735C51: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58735C53: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x58735C56: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58735C58: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58735C5A: cdq
        __asm _emit 0x99
        // 0x58735C5B: pop edi
        __asm _emit 0x5F
        // 0x58735C5C: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x58735C5E: pop esi
        __asm _emit 0x5E
        // 0x58735C5F: pop ebp
        __asm _emit 0x5D
        // 0x58735C60: pop ebx
        __asm _emit 0x5B
        // 0x58735C61: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x58735C64: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
