// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 390 bytes in 2 exact ranges.
// Source symbol alias: FUN_58899840.

// Ghidra body range 0x58899840..0x58899982; 322 mapped bytes.
extern "C" __declspec(naked) void FUN_58899840_segment_00() {
    __asm {
        // 0x58899840: push esi
        __asm _emit 0x56
        // 0x58899841: push edi
        __asm _emit 0x57
        // 0x58899842: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58899846: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58899848: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5889984A: je 0x588999c2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899850: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58899853: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58899856: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58899858: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x5889985D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5889985F: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58899861: push ebp
        __asm _emit 0x55
        // 0x58899862: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58899865: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x58899867: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x5889986A: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x5889986C: jne 0x5889987d
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5889986E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58899870: call 0x58899800
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58899875: pop ebp
        __asm _emit 0x5D
        // 0x58899876: pop edi
        __asm _emit 0x5F
        // 0x58899877: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58899879: pop esi
        __asm _emit 0x5E
        // 0x5889987A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889987D: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58899880: push ebx
        __asm _emit 0x53
        // 0x58899881: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58899884: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58899886: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x5889988B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5889988D: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5889988F: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58899892: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58899894: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58899897: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58899899: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x5889989B: ja 0x58899909
        __asm _emit 0x77
        __asm _emit 0x6C
        // 0x5889989D: mov byte ptr [esp + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588998A2: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588998A6: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588998AA: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588998AE: push eax
        __asm _emit 0x50
        // 0x588998AF: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x588998B2: push ecx
        __asm _emit 0x51
        // 0x588998B3: push edx
        __asm _emit 0x52
        // 0x588998B4: push ebx
        __asm _emit 0x53
        // 0x588998B5: push eax
        __asm _emit 0x50
        // 0x588998B6: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x588998B9: push eax
        __asm _emit 0x50
        // 0x588998BA: call 0x58899580
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588998BF: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588998C3: push ecx
        __asm _emit 0x51
        // 0x588998C4: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588998C7: lea edx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588998CA: push edx
        __asm _emit 0x52
        // 0x588998CB: push ecx
        __asm _emit 0x51
        // 0x588998CC: push eax
        __asm _emit 0x50
        // 0x588998CD: call 0x58902180
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588998D2: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588998D5: sub ecx, dword ptr [edi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588998D8: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x588998DD: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588998DF: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588998E1: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588998E4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588998E6: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588998E9: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588998EB: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x588998EE: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588998F5: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588998F7: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588998FA: pop ebx
        __asm _emit 0x5B
        // 0x588998FB: pop ebp
        __asm _emit 0x5D
        // 0x588998FC: lea ecx, [eax + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x588998FF: pop edi
        __asm _emit 0x5F
        // 0x58899900: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58899903: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58899905: pop esi
        __asm _emit 0x5E
        // 0x58899906: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58899909: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5889990B: jne 0x58899911
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5889990D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889990F: jmp 0x5889992f
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58899911: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x58899914: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x58899916: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889991A: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x5889991F: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58899921: add edx, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58899925: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58899928: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5889992A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5889992D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889992F: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58899931: ja 0x58899969
        __asm _emit 0x77
        __asm _emit 0x36
        // 0x58899933: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58899936: lea edx, [ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889993D: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5889993F: lea ebp, [eax + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x90
        // 0x58899942: push ebx
        __asm _emit 0x53
        // 0x58899943: push ebp
        __asm _emit 0x55
        // 0x58899944: push eax
        __asm _emit 0x50
        // 0x58899945: call 0x588996a0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889994A: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5889994D: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58899950: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58899953: push eax
        __asm _emit 0x50
        // 0x58899954: push ecx
        __asm _emit 0x51
        // 0x58899955: push ebp
        __asm _emit 0x55
        // 0x58899956: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58899958: call 0x588996d0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889995D: pop ebx
        __asm _emit 0x5B
        // 0x5889995E: pop ebp
        __asm _emit 0x5D
        // 0x5889995F: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58899962: pop edi
        __asm _emit 0x5F
        // 0x58899963: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58899965: pop esi
        __asm _emit 0x5E
        // 0x58899966: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58899969: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5889996B: je 0x58899985
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5889996D: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58899970: push eax
        __asm _emit 0x50
        // 0x58899971: push ebx
        __asm _emit 0x53
        // 0x58899972: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58899974: call 0x58902260
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58899979: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5889997C: push edx
        __asm _emit 0x52
        // 0x5889997D: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x32
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58899985..0x588999C9; 68 mapped bytes.
extern "C" __declspec(naked) void FUN_58899840_segment_01() {
    __asm {
        // 0x58899985: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58899988: sub ecx, dword ptr [edi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5889998B: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58899990: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58899992: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58899994: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58899997: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58899999: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5889999C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889999E: push eax
        __asm _emit 0x50
        // 0x5889999F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588999A1: call 0x58791ed0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x85
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588999A6: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588999A8: je 0x588999c0
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588999AA: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588999AD: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588999B0: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x588999B3: push eax
        __asm _emit 0x50
        // 0x588999B4: push ecx
        __asm _emit 0x51
        // 0x588999B5: push edx
        __asm _emit 0x52
        // 0x588999B6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588999B8: call 0x588996d0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588999BD: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588999C0: pop ebx
        __asm _emit 0x5B
        // 0x588999C1: pop ebp
        __asm _emit 0x5D
        // 0x588999C2: pop edi
        __asm _emit 0x5F
        // 0x588999C3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588999C5: pop esi
        __asm _emit 0x5E
        // 0x588999C6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
