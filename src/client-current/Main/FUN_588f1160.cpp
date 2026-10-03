// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F1160 .. +0x22F bytes.
extern "C" __declspec(naked) void FUN_588f1160() {
    __asm {
        // 0x588F1160: push ebx
        __asm _emit 0x53
        // 0x588F1161: push ebp
        __asm _emit 0x55
        // 0x588F1162: push esi
        __asm _emit 0x56
        // 0x588F1163: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F1165: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588F1169: push edi
        __asm _emit 0x57
        // 0x588F116A: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588F116C: je 0x588f1385
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1172: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588F1175: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F1179: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F117B: je 0x588f11a3
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588F117D: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588F1180: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F1182: je 0x588f119a
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588F1184: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F1186: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F1188: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588F118B: push edi
        __asm _emit 0x57
        // 0x588F118C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F118E: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588F1191: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588F1194: je 0x588f11a3
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588F1196: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F1198: jne 0x588f1184
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588F119A: pop edi
        __asm _emit 0x5F
        // 0x588F119B: pop esi
        __asm _emit 0x5E
        // 0x588F119C: pop ebp
        __asm _emit 0x5D
        // 0x588F119D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F119F: pop ebx
        __asm _emit 0x5B
        // 0x588F11A0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F11A3: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588F11A6: add eax, 0xfffffe00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F11AB: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588F11AE: ja 0x588f1385
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xD1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F11B4: movzx edx, byte ptr [eax + 0x588f13a4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0xA4
        __asm _emit 0x13
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588F11BB: jmp dword ptr [edx*4 + 0x588f1390]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588F11C2: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F11C8: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588F11CB: push edi
        __asm _emit 0x57
        // 0x588F11CC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F11CE: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x03
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F11D3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F11D5: je 0x588f1385
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F11DB: cmp dword ptr [edi], 0x302
        __asm _emit 0x81
        __asm _emit 0x3F
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F11E1: jle 0x588f1385
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F11E7: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F11ED: cmp dword ptr [eax + 0x50], 2
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x02
        // 0x588F11F1: jne 0x588f1385
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F11F7: pop edi
        __asm _emit 0x5F
        // 0x588F11F8: mov dword ptr [eax + 0x50], 3
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F11FF: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588F1202: pop esi
        __asm _emit 0x5E
        // 0x588F1203: pop ebp
        __asm _emit 0x5D
        // 0x588F1204: pop ebx
        __asm _emit 0x5B
        // 0x588F1205: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F1208: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F120E: pop edi
        __asm _emit 0x5F
        // 0x588F120F: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1216: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588F1219: pop esi
        __asm _emit 0x5E
        // 0x588F121A: pop ebp
        __asm _emit 0x5D
        // 0x588F121B: pop ebx
        __asm _emit 0x5B
        // 0x588F121C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F121F: mov ebp, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1225: cmp dword ptr [ebp + 0x50], 3
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588F1229: jne 0x588f1328
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F122F: mov ebx, dword ptr [esi + 0x3ec]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1235: sub ebx, 8
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588F1238: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588F123A: jle 0x588f1385
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1240: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588F1243: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F1249: lea edi, [eax + 0x46]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x46
        // 0x588F124C: lea ecx, [eax + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1252: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588F1255: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F1257: jg 0x588f125c
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x588F1259: push edi
        __asm _emit 0x57
        // 0x588F125A: jmp 0x588f1264
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588F125C: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588F125E: jl 0x588f1263
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x588F1260: push ecx
        __asm _emit 0x51
        // 0x588F1261: jmp 0x588f1264
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588F1263: push eax
        __asm _emit 0x50
        // 0x588F1264: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588F1266: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F126B: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1271: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588F1274: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x588F1276: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x588F1279: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x588F127E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588F1280: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588F1282: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1288: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588F128B: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588F128D: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x588F1290: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x588F1292: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x6E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F1297: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F1299: jle 0x588f12d1
        __asm _emit 0x7E
        __asm _emit 0x36
        // 0x588F129B: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F12A1: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F12A3: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x6E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F12A8: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588F12AA: cdq
        __asm _emit 0x99
        // 0x588F12AB: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588F12AD: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F12AF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F12B1: jle 0x588f12d1
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x588F12B3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F12B5: call 0x588eff30
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F12BA: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F12C0: inc ebx
        __asm _emit 0x43
        // 0x588F12C1: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x6E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F12C6: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588F12C8: cdq
        __asm _emit 0x99
        // 0x588F12C9: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588F12CB: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F12CD: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x588F12CF: jl 0x588f12b3
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x588F12D1: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F12D7: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x6E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F12DC: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588F12DE: jge 0x588f1385
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F12E4: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F12EA: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F12EC: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x6E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F12F1: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588F12F3: cdq
        __asm _emit 0x99
        // 0x588F12F4: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588F12F6: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F12F8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F12FA: jle 0x588f1385
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1300: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F1302: call 0x588f0150
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F1307: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F130D: inc ebx
        __asm _emit 0x43
        // 0x588F130E: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x6E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F1313: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588F1315: cdq
        __asm _emit 0x99
        // 0x588F1316: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588F1318: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F131A: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x588F131C: jl 0x588f1300
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x588F131E: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588F1321: pop edi
        __asm _emit 0x5F
        // 0x588F1322: pop esi
        __asm _emit 0x5E
        // 0x588F1323: pop ebp
        __asm _emit 0x5D
        // 0x588F1324: pop ebx
        __asm _emit 0x5B
        // 0x588F1325: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F1328: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F132E: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588F1331: push ecx
        __asm _emit 0x51
        // 0x588F1332: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588F1334: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F1339: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588F133B: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x588F133D: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588F133F: inc eax
        __asm _emit 0x40
        // 0x588F1340: pop edi
        __asm _emit 0x5F
        // 0x588F1341: mov dword ptr [ebp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x50
        // 0x588F1344: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588F1347: pop esi
        __asm _emit 0x5E
        // 0x588F1348: pop ebp
        __asm _emit 0x5D
        // 0x588F1349: pop ebx
        __asm _emit 0x5B
        // 0x588F134A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F134D: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F1353: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588F1356: push edx
        __asm _emit 0x52
        // 0x588F1357: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F1359: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F135E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F1360: je 0x588f1385
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588F1362: movzx eax, word ptr [edi + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x0A
        // 0x588F1366: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F1369: jle 0x588f137c
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588F136B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F136D: call 0x588eff30
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F1372: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588F1375: pop edi
        __asm _emit 0x5F
        // 0x588F1376: pop esi
        __asm _emit 0x5E
        // 0x588F1377: pop ebp
        __asm _emit 0x5D
        // 0x588F1378: pop ebx
        __asm _emit 0x5B
        // 0x588F1379: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F137C: jge 0x588f1385
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x588F137E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F1380: call 0x588f0150
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F1385: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588F1388: pop edi
        __asm _emit 0x5F
        // 0x588F1389: pop esi
        __asm _emit 0x5E
        // 0x588F138A: pop ebp
        __asm _emit 0x5D
        // 0x588F138B: pop ebx
        __asm _emit 0x5B
        // 0x588F138C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
