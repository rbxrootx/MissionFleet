// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 802 bytes in 1 exact ranges.
// Source symbol alias: FUN_58745070.

// Ghidra body range 0x58745070..0x58745392; 802 mapped bytes.
extern "C" __declspec(naked) void FUN_58745070_segment_00() {
    __asm {
        // 0x58745070: sub esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x38
        // 0x58745073: push ebx
        __asm _emit 0x53
        // 0x58745074: push ebp
        __asm _emit 0x55
        // 0x58745075: push esi
        __asm _emit 0x56
        // 0x58745076: push edi
        __asm _emit 0x57
        // 0x58745077: mov eax, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5874507B: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745082: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58745084: lea eax, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD1
        // 0x58745087: mov dword ptr [esp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5874508B: mov ebp, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x30
        // 0x5874508E: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58745092: mov ecx, dword ptr [eax*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58745099: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x5874509C: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587450A1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587450A3: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587450A7: mov ecx, dword ptr [ecx*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587450AE: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x587450B1: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587450B4: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587450B6: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x587450B9: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587450BB: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587450C0: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587450C2: mov ecx, dword ptr [0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587450C8: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587450CB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587450CD: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587450D0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587450D2: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587450D5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587450DA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587450DC: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587450DF: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587450E1: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587450E3: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587450E6: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587450E8: mov edx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587450EC: mov eax, dword ptr [edx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x40
        // 0x587450EF: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587450F3: mov edi, 0xc8
        __asm _emit 0xBF
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587450F8: lea ebp, [esi + esi]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x36
        // 0x587450FB: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587450FF: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745103: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58745108: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x5874510A: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x5874510D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5874510F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58745112: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58745114: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x58745117: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874511B: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58745120: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58745122: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x58745125: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58745127: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5874512A: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5874512C: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745131: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x58745133: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x58745136: inc dword ptr [esp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874513A: mov eax, 0x447a7a9
        __asm _emit 0xB8
        __asm _emit 0xA9
        __asm _emit 0xA7
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5874513F: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58745141: sar edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x58745144: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58745146: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58745149: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5874514B: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5874514D: cmp esi, 0x2710
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745153: jle 0x5874515a
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x58745155: mov esi, 0x2710
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874515A: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5874515C: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5874515F: mov eax, 0x68db8bad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x8B
        __asm _emit 0xDB
        __asm _emit 0x68
        // 0x58745164: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58745166: sar edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x58745169: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5874516B: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5874516E: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58745170: add ebp, dword ptr [0x58a244c0]
        __asm _emit 0x03
        __asm _emit 0x2D
        __asm _emit 0xC0
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58745176: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874517A: mov dword ptr [esp + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874517E: js 0x587451ad
        __asm _emit 0x78
        __asm _emit 0x2D
        // 0x58745180: mov edx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58745184: cmp word ptr [edx + 0x18], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x18
        __asm _emit 0x02
        // 0x58745189: jne 0x587451ad
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x5874518B: add esi, 0xffffec78
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x78
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745191: imul esi, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF5
        // 0x58745194: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58745196: mov eax, 0x68db8bad
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x8B
        __asm _emit 0xDB
        __asm _emit 0x68
        // 0x5874519B: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x5874519D: sar edx, 0xc
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0C
        // 0x587451A0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587451A2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587451A5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587451A7: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587451A9: mov dword ptr [esp + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587451AD: cmp edi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587451B3: jle 0x587451dd
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x587451B5: lea eax, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2F
        // 0x587451B8: cmp eax, 0xfa0
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587451BD: jle 0x587451dd
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x587451BF: cmp ebp, 0xfffff448
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x48
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587451C5: jg 0x587451d6
        __asm _emit 0x7F
        __asm _emit 0x0F
        // 0x587451C7: mov edx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587451CB: cmp word ptr [edx + 0x18], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x18
        __asm _emit 0x02
        // 0x587451D0: je 0x5874533d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587451D6: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587451D8: jmp 0x5874531d
        __asm _emit 0xE9
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587451DD: lea esi, [edi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x2F
        // 0x587451E0: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587451E4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587451E6: jge 0x58745211
        __asm _emit 0x7D
        __asm _emit 0x29
        // 0x587451E8: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587451EA: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x587451ED: cdq
        __asm _emit 0x99
        // 0x587451EE: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587451F0: cdq
        __asm _emit 0x99
        // 0x587451F1: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587451F3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587451F5: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587451F8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587451FA: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587451FF: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58745201: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58745204: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58745206: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58745209: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5874520B: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x5874520D: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5874520F: jmp 0x58745248
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x58745211: cmp esi, 0xfa0
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745217: jle 0x58745246
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x58745219: mov eax, 0xfa0
        __asm _emit 0xB8
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874521E: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58745220: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58745223: cdq
        __asm _emit 0x99
        // 0x58745224: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58745226: mov esi, 0xfa0
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874522B: cdq
        __asm _emit 0x99
        // 0x5874522C: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5874522E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58745230: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58745233: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58745235: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5874523A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5874523C: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5874523F: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58745241: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58745244: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58745246: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x58745248: mov ebp, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874524E: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58745250: imul edx, edx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x75
        // 0x58745253: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58745255: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58745257: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5874525B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874525D: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5874525F: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58745263: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58745268: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5874526A: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5874526D: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5874526F: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58745272: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x58745274: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58745276: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x58745279: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5874527E: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58745280: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58745284: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58745287: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x58745289: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x5874528C: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x5874528E: cdq
        __asm _emit 0x99
        // 0x5874528F: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58745291: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58745293: cdq
        __asm _emit 0x99
        // 0x58745294: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58745296: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874529A: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5874529C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874529E: cdq
        __asm _emit 0x99
        // 0x5874529F: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587452A1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587452A3: cdq
        __asm _emit 0x99
        // 0x587452A4: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587452A6: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587452A8: jle 0x587452b5
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x587452AA: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587452AE: cdq
        __asm _emit 0x99
        // 0x587452AF: idiv dword ptr [esp + 0x1c]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587452B3: jmp 0x587452ba
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587452B5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587452B7: cdq
        __asm _emit 0x99
        // 0x587452B8: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587452BA: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587452BE: cdq
        __asm _emit 0x99
        // 0x587452BF: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587452C1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587452C3: cdq
        __asm _emit 0x99
        // 0x587452C4: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587452C6: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587452C8: sar ebp, 1
        __asm _emit 0xD1
        __asm _emit 0xFD
        // 0x587452CA: inc ebp
        __asm _emit 0x45
        // 0x587452CB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587452CD: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587452CF: jle 0x5874530d
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x587452D1: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587452D5: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587452D9: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587452DD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587452E0: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587452E4: cdq
        __asm _emit 0x99
        // 0x587452E5: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587452E7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587452E9: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587452ED: cdq
        __asm _emit 0x99
        // 0x587452EE: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587452F0: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587452F4: add dword ptr [esp + 0x14], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587452F8: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x587452FA: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587452FC: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58745300: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58745304: add esi, edi
        __asm _emit 0x03
        __asm _emit 0xF7
        // 0x58745306: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5874530B: jne 0x587452e0
        __asm _emit 0x75
        __asm _emit 0xD3
        // 0x5874530D: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5874530F: jle 0x58745368
        __asm _emit 0x7E
        __asm _emit 0x57
        // 0x58745311: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58745315: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58745319: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874531D: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x5874531F: cmp dword ptr [esp + 0x18], 0x3e8
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745327: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874532B: jl 0x58745103
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xD2
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745331: pop edi
        __asm _emit 0x5F
        // 0x58745332: pop esi
        __asm _emit 0x5E
        // 0x58745333: pop ebp
        __asm _emit 0x5D
        // 0x58745334: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745336: pop ebx
        __asm _emit 0x5B
        // 0x58745337: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x5874533A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5874533D: mov eax, dword ptr [0x58a244bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58745342: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58745345: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58745347: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5874534C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5874534E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58745351: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58745353: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x58745356: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58745358: lea eax, [ecx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x19
        // 0x5874535B: cdq
        __asm _emit 0x99
        // 0x5874535C: pop edi
        __asm _emit 0x5F
        // 0x5874535D: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5874535F: pop esi
        __asm _emit 0x5E
        // 0x58745360: pop ebp
        __asm _emit 0x5D
        // 0x58745361: pop ebx
        __asm _emit 0x5B
        // 0x58745362: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x58745365: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58745368: mov eax, dword ptr [0x58a244bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874536D: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58745370: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58745372: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58745377: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58745379: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5874537C: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5874537E: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x58745381: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58745383: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58745385: cdq
        __asm _emit 0x99
        // 0x58745386: pop edi
        __asm _emit 0x5F
        // 0x58745387: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x58745389: pop esi
        __asm _emit 0x5E
        // 0x5874538A: pop ebp
        __asm _emit 0x5D
        // 0x5874538B: pop ebx
        __asm _emit 0x5B
        // 0x5874538C: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x5874538F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
