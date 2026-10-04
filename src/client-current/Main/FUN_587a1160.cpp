// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A1160 .. +0x1CE bytes.
// Source symbol alias: FUN_587a1160.
extern "C" __declspec(naked) void FUN_587a1160() {
    __asm {
        // 0x587A1160: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587A1163: push esi
        __asm _emit 0x56
        // 0x587A1164: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A1166: cmp dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587A116A: push edi
        __asm _emit 0x57
        // 0x587A116B: jne 0x587a118e
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587A116D: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A1171: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587A1174: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A1178: push eax
        __asm _emit 0x50
        // 0x587A1179: push ecx
        __asm _emit 0x51
        // 0x587A117A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A117C: push edi
        __asm _emit 0x57
        // 0x587A117D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A117F: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x56
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A1184: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587A1186: pop edi
        __asm _emit 0x5F
        // 0x587A1187: pop esi
        __asm _emit 0x5E
        // 0x587A1188: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587A118B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A118E: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A1192: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587A1195: mov edi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x3A
        // 0x587A1197: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A1199: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A119B: je 0x587a11a1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A119D: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587A119F: je 0x587a11aa
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587A11A1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xBA
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A11A6: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A11AA: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A11AE: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587A11B0: jne 0x587a11db
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x587A11B2: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A11B6: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587A11B8: cmp ecx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587A11BB: jge 0x587a1309
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A11C1: push edi
        __asm _emit 0x57
        // 0x587A11C2: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A11C6: push eax
        __asm _emit 0x50
        // 0x587A11C7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A11C9: push edi
        __asm _emit 0x57
        // 0x587A11CA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A11CC: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x56
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A11D1: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587A11D3: pop edi
        __asm _emit 0x5F
        // 0x587A11D4: pop esi
        __asm _emit 0x5E
        // 0x587A11D5: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587A11D8: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A11DB: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587A11DE: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587A11E0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A11E2: je 0x587a11e8
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A11E4: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587A11E6: je 0x587a11f5
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587A11E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xBA
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A11ED: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A11F1: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A11F5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587A11F7: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A11FB: jne 0x587a1228
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x587A11FD: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587A1200: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587A1203: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587A1206: cmp ecx, dword ptr [edi]
        __asm _emit 0x3B
        __asm _emit 0x0F
        // 0x587A1208: jge 0x587a1309
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A120E: push edi
        __asm _emit 0x57
        // 0x587A120F: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A1213: push eax
        __asm _emit 0x50
        // 0x587A1214: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A1216: push edi
        __asm _emit 0x57
        // 0x587A1217: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A1219: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x56
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A121E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587A1220: pop edi
        __asm _emit 0x5F
        // 0x587A1221: pop esi
        __asm _emit 0x5E
        // 0x587A1222: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587A1225: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A1228: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587A122A: cmp dword ptr [eax + 0xc], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587A122D: jle 0x587a1290
        __asm _emit 0x7E
        __asm _emit 0x61
        // 0x587A122F: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A1233: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A1237: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A123B: call 0x587a0950
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A1240: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587A1242: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A1246: cmp dword ptr [eax + 0xc], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587A1249: jge 0x587a1285
        __asm _emit 0x7D
        __asm _emit 0x3A
        // 0x587A124B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587A124E: cmp byte ptr [edx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A1252: push edi
        __asm _emit 0x57
        // 0x587A1253: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A1257: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A1259: je 0x587a126e
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587A125B: push eax
        __asm _emit 0x50
        // 0x587A125C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A125E: push edi
        __asm _emit 0x57
        // 0x587A125F: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x55
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A1264: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587A1266: pop edi
        __asm _emit 0x5F
        // 0x587A1267: pop esi
        __asm _emit 0x5E
        // 0x587A1268: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587A126B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A126E: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A1272: push eax
        __asm _emit 0x50
        // 0x587A1273: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A1275: push edi
        __asm _emit 0x57
        // 0x587A1276: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x55
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A127B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587A127D: pop edi
        __asm _emit 0x5F
        // 0x587A127E: pop esi
        __asm _emit 0x5E
        // 0x587A127F: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587A1282: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A1285: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A1289: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A128D: cmp dword ptr [eax + 0xc], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587A1290: jge 0x587a1309
        __asm _emit 0x7D
        __asm _emit 0x77
        // 0x587A1292: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587A1294: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A1298: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587A129B: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A129F: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A12A3: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A12A7: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A12AB: call 0x587a09e0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A12B0: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A12B4: push eax
        __asm _emit 0x50
        // 0x587A12B5: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A12B9: call 0x58743680
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x23
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587A12BE: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A12C2: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587A12C4: jne 0x587a12cd
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A12C6: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587A12C8: cmp edx, dword ptr [ecx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587A12CB: jge 0x587a1309
        __asm _emit 0x7D
        __asm _emit 0x3C
        // 0x587A12CD: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A12D1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587A12D4: cmp byte ptr [edx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A12D8: push edi
        __asm _emit 0x57
        // 0x587A12D9: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A12DD: je 0x587a12f4
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587A12DF: push eax
        __asm _emit 0x50
        // 0x587A12E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A12E2: push edi
        __asm _emit 0x57
        // 0x587A12E3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A12E5: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x55
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A12EA: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587A12EC: pop edi
        __asm _emit 0x5F
        // 0x587A12ED: pop esi
        __asm _emit 0x5E
        // 0x587A12EE: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587A12F1: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A12F4: push ecx
        __asm _emit 0x51
        // 0x587A12F5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A12F7: push edi
        __asm _emit 0x57
        // 0x587A12F8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A12FA: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x55
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A12FF: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587A1301: pop edi
        __asm _emit 0x5F
        // 0x587A1302: pop esi
        __asm _emit 0x5E
        // 0x587A1303: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587A1306: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A1309: push edi
        __asm _emit 0x57
        // 0x587A130A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A130E: push eax
        __asm _emit 0x50
        // 0x587A130F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A1311: call 0x587a0f90
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A1316: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587A1318: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A131C: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587A131E: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A1321: pop edi
        __asm _emit 0x5F
        // 0x587A1322: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A1325: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587A1327: pop esi
        __asm _emit 0x5E
        // 0x587A1328: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587A132B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
