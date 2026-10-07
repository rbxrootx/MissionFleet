// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 518 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b1090.

// Ghidra body range 0x587B1090..0x587B1296; 518 mapped bytes.
extern "C" __declspec(naked) void FUN_587b1090_segment_00() {
    __asm {
        // 0x587B1090: mov edx, dword ptr [ecx + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1096: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B109A: push ebx
        __asm _emit 0x53
        // 0x587B109B: push ebp
        __asm _emit 0x55
        // 0x587B109C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B109E: push esi
        __asm _emit 0x56
        // 0x587B109F: add eax, 0xfffffc7c
        __asm _emit 0x05
        __asm _emit 0x7C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B10A4: push edi
        __asm _emit 0x57
        // 0x587B10A5: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B10A9: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B10AB: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587B10AD: mov dword ptr [ecx + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B10B3: mov dword ptr [ecx + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B10B9: jge 0x587b10dc
        __asm _emit 0x7D
        __asm _emit 0x21
        // 0x587B10BB: add eax, 0xe10
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B10C0: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587B10C2: mov dword ptr [ecx + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B10C8: jge 0x587b10dc
        __asm _emit 0x7D
        __asm _emit 0x12
        // 0x587B10CA: cmp eax, 0xfffffc7c
        __asm _emit 0x3D
        __asm _emit 0x7C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B10CF: jle 0x587b10dc
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x587B10D1: add eax, 0xe10
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B10D6: mov dword ptr [ecx + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B10DC: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B10E2: lea esi, [edx + eax + 0x32]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x32
        // 0x587B10E6: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x587B10EB: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587B10ED: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x587B10EF: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587B10F2: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B10F4: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B10F7: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B10F9: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B10FF: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x587B1101: jns 0x587b1109
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587B1103: add esi, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1109: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B110E: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587B1110: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587B1113: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B1115: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B1118: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B111A: push edi
        __asm _emit 0x57
        // 0x587B111B: mov dword ptr [ecx + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1121: call 0x587b0680
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1126: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B112C: mov esi, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1132: mov edi, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1138: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B113D: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587B1140: ja 0x587b11bf
        __asm _emit 0x77
        __asm _emit 0x7D
        // 0x587B1142: jmp dword ptr [eax*4 + 0x587b1298]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x12
        __asm _emit 0x7B
        __asm _emit 0x58
        // 0x587B1149: mov dword ptr [ecx + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B114F: cmp dword ptr [ecx + 0xc8], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1155: je 0x587b1189
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x587B1157: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B115D: cmp dword ptr [ecx + 0xc4], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1163: jle 0x587b11f3
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1169: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587B116B: jge 0x587b11bf
        __asm _emit 0x7D
        __asm _emit 0x52
        // 0x587B116D: push ebx
        __asm _emit 0x53
        // 0x587B116E: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587B1170: push edx
        __asm _emit 0x52
        // 0x587B1171: mov dword ptr [ecx + 0xa8], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1177: mov dword ptr [ecx + 0x108], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B117D: call 0x587b0930
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1182: pop edi
        __asm _emit 0x5F
        // 0x587B1183: pop esi
        __asm _emit 0x5E
        // 0x587B1184: pop ebp
        __asm _emit 0x5D
        // 0x587B1185: pop ebx
        __asm _emit 0x5B
        // 0x587B1186: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B1189: mov eax, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B118F: add eax, 0x708
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1194: cdq
        __asm _emit 0x99
        // 0x587B1195: mov ebp, 0xe10
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B119A: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587B119C: mov ebx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B11A2: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587B11A4: jle 0x587b11d3
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x587B11A6: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587B11A8: jle 0x587b11ba
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587B11AA: mov dword ptr [ecx + 0xa8], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B11B0: mov dword ptr [ecx + 0x108], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B11BA: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B11BF: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B11C5: push ebx
        __asm _emit 0x53
        // 0x587B11C6: push edx
        __asm _emit 0x52
        // 0x587B11C7: call 0x587b0930
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B11CC: pop edi
        __asm _emit 0x5F
        // 0x587B11CD: pop esi
        __asm _emit 0x5E
        // 0x587B11CE: pop ebp
        __asm _emit 0x5D
        // 0x587B11CF: pop ebx
        __asm _emit 0x5B
        // 0x587B11D0: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B11D3: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x587B11D5: jge 0x587b11ba
        __asm _emit 0x7D
        __asm _emit 0xE3
        // 0x587B11D7: mov dword ptr [ecx + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B11DD: jmp 0x587b11b0
        __asm _emit 0xEB
        __asm _emit 0xD1
        // 0x587B11DF: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B11E5: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587B11E7: mov dword ptr [ecx + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B11ED: jl 0x587b116d
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x7A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B11F3: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B11F5: jle 0x587b11bf
        __asm _emit 0x7E
        __asm _emit 0xC8
        // 0x587B11F7: push ebx
        __asm _emit 0x53
        // 0x587B11F8: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587B11FA: push edx
        __asm _emit 0x52
        // 0x587B11FB: mov dword ptr [ecx + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1201: mov dword ptr [ecx + 0x108], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1207: call 0x587b0930
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B120C: pop edi
        __asm _emit 0x5F
        // 0x587B120D: pop esi
        __asm _emit 0x5E
        // 0x587B120E: pop ebp
        __asm _emit 0x5D
        // 0x587B120F: pop ebx
        __asm _emit 0x5B
        // 0x587B1210: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B1213: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1219: mov edx, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B121F: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B1221: mov dword ptr [ecx + 0xf4], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1227: jl 0x587b1237
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x587B1229: cmp eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B122F: jg 0x587b1237
        __asm _emit 0x7F
        __asm _emit 0x06
        // 0x587B1231: mov dword ptr [ecx + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1237: mov esi, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B123D: mov edi, 0xe10
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1242: sub edi, esi
        __asm _emit 0x2B
        __asm _emit 0xFE
        // 0x587B1244: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B1246: jl 0x587b1259
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x587B1248: mov edi, 0xe10
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B124D: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x587B124F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B1251: jg 0x587b1259
        __asm _emit 0x7F
        __asm _emit 0x06
        // 0x587B1253: mov dword ptr [ecx + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1259: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x587B125B: jge 0x587b11bf
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1261: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B1263: jl 0x587b126c
        __asm _emit 0x7C
        __asm _emit 0x07
        // 0x587B1265: cmp eax, 0xe10
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B126A: jle 0x587b127c
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587B126C: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587B126E: jl 0x587b11bf
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1274: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587B1276: jg 0x587b11bf
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x43
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B127C: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1282: push ebx
        __asm _emit 0x53
        // 0x587B1283: push edx
        __asm _emit 0x52
        // 0x587B1284: mov dword ptr [ecx + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B128A: call 0x587b0930
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B128F: pop edi
        __asm _emit 0x5F
        // 0x587B1290: pop esi
        __asm _emit 0x5E
        // 0x587B1291: pop ebp
        __asm _emit 0x5D
        // 0x587B1292: pop ebx
        __asm _emit 0x5B
        // 0x587B1293: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
