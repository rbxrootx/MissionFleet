// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 645 bytes in 1 exact ranges.
// Source symbol alias: FUN_58828270.

// Ghidra body range 0x58828270..0x588284F5; 645 mapped bytes.
extern "C" __declspec(naked) void FUN_58828270_segment_00() {
    __asm {
        // 0x58828270: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58828274: push esi
        __asm _emit 0x56
        // 0x58828275: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58828277: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5882827A: jne 0x5882842d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828280: mov eax, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828286: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5882828A: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5882828C: jne 0x588282c5
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x5882828E: mov dword ptr [esi + 0x278], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828294: mov esi, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882829A: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588282A0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588282A2: je 0x588282a9
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588282A4: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588282A7: jmp 0x588282ab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588282A9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588282AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588282AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588282AF: push eax
        __asm _emit 0x50
        // 0x588282B0: push 0x13e
        __asm _emit 0x68
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588282B5: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x38
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588282BA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588282BC: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x22
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588282C1: pop esi
        __asm _emit 0x5E
        // 0x588282C2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588282C5: mov eax, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588282CB: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588282CD: jne 0x58828306
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x588282CF: mov dword ptr [esi + 0x278], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588282D5: mov esi, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588282DB: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588282E1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588282E3: je 0x588282ea
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588282E5: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588282E8: jmp 0x588282ec
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588282EA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588282EC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588282EE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588282F0: push eax
        __asm _emit 0x50
        // 0x588282F1: push 0x13f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588282F6: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x37
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588282FB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588282FD: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x22
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58828302: pop esi
        __asm _emit 0x5E
        // 0x58828303: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58828306: cmp edx, dword ptr [esi + 0x180]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882830C: jne 0x5882832c
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5882830E: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828314: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58828316: jle 0x588284f1
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882831C: dec eax
        __asm _emit 0x48
        // 0x5882831D: mov dword ptr [esi + 0x1fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828323: call 0x588281a0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828328: pop esi
        __asm _emit 0x5E
        // 0x58828329: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882832C: cmp edx, dword ptr [esi + 0x184]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828332: jne 0x5882833d
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58828334: call 0x58828250
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828339: pop esi
        __asm _emit 0x5E
        // 0x5882833A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882833D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882833F: lea ecx, [esi + 0x1d0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828345: cmp edx, dword ptr [ecx - 0xc]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0xF4
        // 0x58828348: je 0x58828369
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x5882834A: cmp edx, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x11
        // 0x5882834C: je 0x5882839a
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x5882834E: cmp edx, dword ptr [ecx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58828351: je 0x588283cb
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x58828353: cmp edx, dword ptr [ecx + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x58828356: je 0x588283fc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882835C: inc eax
        __asm _emit 0x40
        // 0x5882835D: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58828360: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58828363: jl 0x58828345
        __asm _emit 0x7C
        __asm _emit 0xE0
        // 0x58828365: pop esi
        __asm _emit 0x5E
        // 0x58828366: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58828369: mov ecx, dword ptr [esi + eax*4 + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828370: mov dword ptr [esi + 0x278], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828376: mov edx, dword ptr [esi + eax*4 + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882837D: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x58828380: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828382: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828384: push eax
        __asm _emit 0x50
        // 0x58828385: push 0x13a
        __asm _emit 0x68
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882838A: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x37
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882838F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58828391: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x21
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58828396: pop esi
        __asm _emit 0x5E
        // 0x58828397: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882839A: mov ecx, dword ptr [esi + eax*4 + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588283A1: mov dword ptr [esi + 0x278], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588283A7: mov edx, dword ptr [esi + eax*4 + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588283AE: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x588283B1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588283B3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588283B5: push eax
        __asm _emit 0x50
        // 0x588283B6: push 0x13b
        __asm _emit 0x68
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588283BB: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x37
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588283C0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588283C2: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x21
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588283C7: pop esi
        __asm _emit 0x5E
        // 0x588283C8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588283CB: mov ecx, dword ptr [esi + eax*4 + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588283D2: mov dword ptr [esi + 0x278], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588283D8: mov edx, dword ptr [esi + eax*4 + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588283DF: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x588283E2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588283E4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588283E6: push eax
        __asm _emit 0x50
        // 0x588283E7: push 0x13c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588283EC: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x36
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588283F1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588283F3: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x21
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588283F8: pop esi
        __asm _emit 0x5E
        // 0x588283F9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588283FC: mov ecx, dword ptr [esi + eax*4 + 0x1e8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828403: mov dword ptr [esi + 0x278], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828409: mov edx, dword ptr [esi + eax*4 + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828410: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x58828413: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828415: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828417: push eax
        __asm _emit 0x50
        // 0x58828418: push 0x13d
        __asm _emit 0x68
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882841D: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x36
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58828422: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58828424: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x21
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58828429: pop esi
        __asm _emit 0x5E
        // 0x5882842A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882842D: cmp eax, 0xf230
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828432: jne 0x588284f1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828438: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5882843C: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828442: cmp eax, dword ptr [ecx + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828448: jne 0x588284f1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882844E: mov eax, dword ptr [esi + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828454: push ebx
        __asm _emit 0x53
        // 0x58828455: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58828459: push ebp
        __asm _emit 0x55
        // 0x5882845A: push edi
        __asm _emit 0x57
        // 0x5882845B: cmp eax, dword ptr [esi + 0x178]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828461: jne 0x58828485
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58828463: mov eax, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828469: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882846F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58828471: je 0x5882847c
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58828473: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58828476: push ebx
        __asm _emit 0x53
        // 0x58828477: push eax
        __asm _emit 0x50
        // 0x58828478: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882847A: jmp 0x5882849c
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x5882847C: push ebx
        __asm _emit 0x53
        // 0x5882847D: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58828480: push eax
        __asm _emit 0x50
        // 0x58828481: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828483: jmp 0x5882849c
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x58828485: cmp eax, dword ptr [esi + 0x17c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882848B: jne 0x588284a7
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5882848D: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828493: push ebx
        __asm _emit 0x53
        // 0x58828494: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x19
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58828499: push eax
        __asm _emit 0x50
        // 0x5882849A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882849C: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588284A2: call 0x587b9d50
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x18
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588284A7: lea edi, [esi + 0x1dc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588284AD: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588284B2: mov eax, dword ptr [esi + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588284B8: cmp eax, dword ptr [edi - 0x18]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0xE8
        // 0x588284BB: je 0x588284d4
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588284BD: cmp eax, dword ptr [edi]
        __asm _emit 0x3B
        __asm _emit 0x07
        // 0x588284BF: je 0x588284d4
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588284C1: cmp eax, dword ptr [edi - 0xc]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0xF4
        // 0x588284C4: je 0x588284cb
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588284C6: cmp eax, dword ptr [edi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x588284C9: jne 0x588284e6
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588284CB: mov edx, dword ptr [edi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x2C
        // 0x588284CE: push ebx
        __asm _emit 0x53
        // 0x588284CF: push edx
        __asm _emit 0x52
        // 0x588284D0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588284D2: jmp 0x588284db
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x588284D4: mov eax, dword ptr [edi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x2C
        // 0x588284D7: push ebx
        __asm _emit 0x53
        // 0x588284D8: push eax
        __asm _emit 0x50
        // 0x588284D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588284DB: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588284E1: call 0x587b9d80
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x18
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588284E6: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588284E9: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588284EC: jne 0x588284b2
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x588284EE: pop edi
        __asm _emit 0x5F
        // 0x588284EF: pop ebp
        __asm _emit 0x5D
        // 0x588284F0: pop ebx
        __asm _emit 0x5B
        // 0x588284F1: pop esi
        __asm _emit 0x5E
        // 0x588284F2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
