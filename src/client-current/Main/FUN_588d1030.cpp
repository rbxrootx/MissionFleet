// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 638 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d1030.

// Ghidra body range 0x588D1030..0x588D12AE; 638 mapped bytes.
extern "C" __declspec(naked) void FUN_588d1030_segment_00() {
    __asm {
        // 0x588D1030: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D1032: push 0x589891be
        __asm _emit 0x68
        __asm _emit 0xBE
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D1037: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D103D: push eax
        __asm _emit 0x50
        // 0x588D103E: push ecx
        __asm _emit 0x51
        // 0x588D103F: push ebx
        __asm _emit 0x53
        // 0x588D1040: push ebp
        __asm _emit 0x55
        // 0x588D1041: push esi
        __asm _emit 0x56
        // 0x588D1042: push edi
        __asm _emit 0x57
        // 0x588D1043: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D1048: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D104A: push eax
        __asm _emit 0x50
        // 0x588D104B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D104F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1055: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588D1057: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D105B: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D105F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D1063: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D1067: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D106B: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D106F: push eax
        __asm _emit 0x50
        // 0x588D1070: push ecx
        __asm _emit 0x51
        // 0x588D1071: push esi
        __asm _emit 0x56
        // 0x588D1072: push edi
        __asm _emit 0x57
        // 0x588D1073: push edx
        __asm _emit 0x52
        // 0x588D1074: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588D1076: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D107B: mov dword ptr [ebp], 0x589a0e98
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x98
        __asm _emit 0x0E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D1082: mov eax, dword ptr [0x58a2474c]
        __asm _emit 0xA1
        __asm _emit 0x4C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D1087: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D108E: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1096: jle 0x588d10ab
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588D1098: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D109F: je 0x588d10ab
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588D10A1: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D10A7: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588D10A9: jmp 0x588d10ad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D10AB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D10AD: mov ecx, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x60
        // 0x588D10B0: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588D10B3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D10B5: je 0x588d10df
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588D10B7: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588D10BA: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588D10BD: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588D10C0: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588D10C3: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588D10C6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D10C8: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588D10CB: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588D10CD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D10D0: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D10D3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D10D6: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588D10D9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D10DC: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588D10DF: mov eax, dword ptr [0x58a2474c]
        __asm _emit 0xA1
        __asm _emit 0x4C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D10E4: cmp dword ptr [eax + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588D10EB: jle 0x588d1101
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588D10ED: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D10F4: je 0x588d1101
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D10F6: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D10FC: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588D10FF: jmp 0x588d1103
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D1101: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D1103: mov ecx, dword ptr [ebp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x64
        // 0x588D1106: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588D1109: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D110B: je 0x588d1135
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588D110D: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588D1110: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588D1113: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588D1116: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588D1119: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588D111C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D111E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588D1121: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588D1123: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D1126: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D1129: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D112C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588D112F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D1132: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588D1135: mov eax, dword ptr [0x58a2474c]
        __asm _emit 0xA1
        __asm _emit 0x4C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D113A: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1141: jle 0x588d1156
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588D1143: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D114A: je 0x588d1156
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588D114C: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1152: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588D1154: jmp 0x588d1158
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D1156: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D1158: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588D115B: mov ecx, dword ptr [ebp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x5C
        // 0x588D115E: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1163: mov dword ptr [ecx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x588D1166: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xBA
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D116B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D116E: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D1172: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588D1177: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D1179: je 0x588d11cc
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x588D117B: mov ecx, dword ptr [0x58a2474c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x4C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D1181: cmp dword ptr [ecx + 0x160], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x588D1188: jle 0x588d11a1
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588D118A: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1191: je 0x588d11a1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D1193: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1199: add ecx, 0x280
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D119F: jmp 0x588d11a3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D11A1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D11A3: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D11A5: add esi, 0x9b
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D11AB: push esi
        __asm _emit 0x56
        // 0x588D11AC: lea edx, [edi + 0x1c4]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D11B2: push edx
        __asm _emit 0x52
        // 0x588D11B3: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D11B9: push ecx
        __asm _emit 0x51
        // 0x588D11BA: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D11C0: push ebp
        __asm _emit 0x55
        // 0x588D11C1: push ecx
        __asm _emit 0x51
        // 0x588D11C2: push edx
        __asm _emit 0x52
        // 0x588D11C3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D11C5: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xCB
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588D11CA: jmp 0x588d11ce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D11CC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D11CE: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D11D3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D11D5: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D11DA: mov dword ptr [ebp + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D11E0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x1B
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D11E5: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D11EA: mov dword ptr [esp + 0x38], 0x140
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D11F2: lea esi, [ebp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x70
        // 0x588D11F5: add edi, 0x1c4
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D11FB: mov dword ptr [esp + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D11FF: nop
        __asm _emit 0x90
        // 0x588D1200: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1205: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xBA
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D120A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D120D: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D1211: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588D1216: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D1218: je 0x588d126a
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x588D121A: mov ecx, dword ptr [0x58a2474c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x4C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D1220: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1226: jle 0x588d1241
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x588D1228: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588D122A: jl 0x588d1241
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x588D122C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1233: je 0x588d1241
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D1235: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D123B: add edx, dword ptr [esp + 0x38]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D123F: jmp 0x588d1243
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D1241: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D1243: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D1247: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588D1249: add ecx, 0x82
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D124F: push ecx
        __asm _emit 0x51
        // 0x588D1250: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D1256: push edi
        __asm _emit 0x57
        // 0x588D1257: push edx
        __asm _emit 0x52
        // 0x588D1258: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D125E: push ebp
        __asm _emit 0x55
        // 0x588D125F: push edx
        __asm _emit 0x52
        // 0x588D1260: push ecx
        __asm _emit 0x51
        // 0x588D1261: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D1263: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588D1268: jmp 0x588d126c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D126A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D126C: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D1271: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D1273: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D1278: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588D127A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x1A
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D127F: add dword ptr [esp + 0x38], 0x40
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x40
        // 0x588D1284: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D1287: inc ebx
        __asm _emit 0x43
        // 0x588D1288: add edi, 0x30
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x30
        // 0x588D128B: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x588D1290: jne 0x588d1200
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D1296: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x588D1298: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D129C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D12A3: pop ecx
        __asm _emit 0x59
        // 0x588D12A4: pop edi
        __asm _emit 0x5F
        // 0x588D12A5: pop esi
        __asm _emit 0x5E
        // 0x588D12A6: pop ebp
        __asm _emit 0x5D
        // 0x588D12A7: pop ebx
        __asm _emit 0x5B
        // 0x588D12A8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588D12AB: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
