// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1198 bytes in 1 exact ranges.
// Source symbol alias: FUN_587fb810.

// Ghidra body range 0x587FB810..0x587FBCBE; 1198 mapped bytes.
extern "C" __declspec(naked) void FUN_587fb810_segment_00() {
    __asm {
        // 0x587FB810: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587FB812: push 0x5898263b
        __asm _emit 0x68
        __asm _emit 0x3B
        __asm _emit 0x26
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587FB817: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB81D: push eax
        __asm _emit 0x50
        // 0x587FB81E: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587FB821: push ebx
        __asm _emit 0x53
        // 0x587FB822: push ebp
        __asm _emit 0x55
        // 0x587FB823: push esi
        __asm _emit 0x56
        // 0x587FB824: push edi
        __asm _emit 0x57
        // 0x587FB825: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587FB82A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587FB82C: push eax
        __asm _emit 0x50
        // 0x587FB82D: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587FB831: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB837: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587FB839: cmp dword ptr [ebx + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB840: jle 0x587fb85d
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x587FB842: mov eax, dword ptr [ebx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587FB848: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FB84A: je 0x587fb85d
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587FB84C: mov eax, dword ptr [eax + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB852: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FB854: je 0x587fb85d
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587FB856: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587FB858: call 0x587a8c50
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xD3
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587FB85D: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB862: cmp dword ptr [ebx + 0x10488], edi
        __asm _emit 0x39
        __asm _emit 0xBB
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587FB868: jne 0x587fb8b3
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x587FB86A: test byte ptr [ebx + 0x10490], 0xf
        __asm _emit 0xF6
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x587FB871: jne 0x587fb8b3
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x587FB873: mov ebp, 0xaaaaaaaa
        __asm _emit 0xBD
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587FB878: xor dword ptr [ebx + 0x1054c], ebp
        __asm _emit 0x31
        __asm _emit 0xAB
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587FB87E: xor dword ptr [ebx + 0x10550], ebp
        __asm _emit 0x31
        __asm _emit 0xAB
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587FB884: mov ecx, dword ptr [ebx + 0x1054c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587FB88A: mov eax, dword ptr [ebx + 0x10550]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587FB890: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587FB893: push eax
        __asm _emit 0x50
        // 0x587FB894: mov eax, dword ptr [ebx + 0x10548]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587FB89A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587FB89C: push eax
        __asm _emit 0x50
        // 0x587FB89D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587FB8A2: xor dword ptr [ebx + 0x1054c], ebp
        __asm _emit 0x31
        __asm _emit 0xAB
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587FB8A8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587FB8AB: xor dword ptr [ebx + 0x10550], ebp
        __asm _emit 0x31
        __asm _emit 0xAB
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587FB8B1: jmp 0x587fb8b8
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587FB8B3: mov ebp, 0xaaaaaaaa
        __asm _emit 0xBD
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587FB8B8: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FB8BD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FB8BF: je 0x587fbc9e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB8C5: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x587FB8C8: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587FB8CA: je 0x587fb915
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x587FB8CC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FB8CE: call 0x588d66d0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xAD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587FB8D3: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587FB8D8: jne 0x587fb90e
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x587FB8DA: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587FB8DC: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587FB8DF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FB8E1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587FB8E3: cmp dword ptr [esi + 0x606c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB8EA: jne 0x587fb90e
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x587FB8EC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FB8EE: call 0x588dc930
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587FB8F3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FB8F5: je 0x587fb90e
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587FB8F7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587FB8F9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587FB8FB: push esi
        __asm _emit 0x56
        // 0x587FB8FC: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FB8FE: call 0x587f21e0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FB903: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FB908: add dword ptr [eax + 0x20da8], edi
        __asm _emit 0x01
        __asm _emit 0xB8
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587FB90E: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x587FB911: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587FB913: jne 0x587fb8cc
        __asm _emit 0x75
        __asm _emit 0xB7
        // 0x587FB915: mov ecx, dword ptr [ebx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587FB91B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587FB91D: je 0x587fb926
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587FB91F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587FB921: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587FB924: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587FB926: cmp byte ptr [ebx + 0x20d64], 0
        __asm _emit 0x80
        __asm _emit 0xBB
        __asm _emit 0x64
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB92D: je 0x587fb936
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587FB92F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FB931: call 0x587f5470
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x9B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FB936: cmp dword ptr [ebx + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB93D: jg 0x587fb948
        __asm _emit 0x7F
        __asm _emit 0x09
        // 0x587FB93F: cmp dword ptr [ebx + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB946: je 0x587fb953
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587FB948: mov ecx, dword ptr [ebx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587FB94E: call 0x587779b0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xC0
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587FB953: call 0x58748be0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xD2
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FB958: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587FB95A: call 0x587481f0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xC8
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FB95F: test byte ptr [0x58a24510], 1
        __asm _emit 0xF6
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x587FB966: je 0x587fb970
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587FB968: push edi
        __asm _emit 0x57
        // 0x587FB969: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FB96B: call 0x587eac40
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xF2
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587FB970: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FB972: call 0x587e7c70
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xC2
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587FB977: cmp byte ptr [ebx + 0x74], 1
        __asm _emit 0x80
        __asm _emit 0x7B
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x587FB97B: jne 0x587fb98b
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587FB97D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FB97F: call 0x587ebda0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FB984: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FB986: call 0x587f58c0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x9F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FB98B: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FB991: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587FB993: je 0x587fbc9e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB999: cmp byte ptr [ecx + 0x2fc], 1
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587FB9A0: jne 0x587fb9af
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587FB9A2: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FB9A4: call 0x587ed280
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FB9A9: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FB9AF: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FB9B4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FB9B6: je 0x587fb9ec
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x587FB9B8: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587FB9BB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FB9BD: je 0x587fb9ec
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587FB9BF: cmp dword ptr [eax + 0x100c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB9C6: je 0x587fb9ec
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587FB9C8: mov eax, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB9CE: mov dl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587FB9D1: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587FB9D4: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587FB9D7: jne 0x587fb9ec
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587FB9D9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587FB9DB: je 0x587fb9ec
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587FB9DD: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FB9E3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587FB9E5: je 0x587fb9ec
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587FB9E7: call 0x58862e90
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587FB9EC: add dword ptr [ebx + 0x104f4], edi
        __asm _emit 0x01
        __asm _emit 0xBB
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587FB9F2: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FB9F7: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x587FB9FA: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBA02: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587FBA04: je 0x587fbc82
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBA0A: lea ecx, [ebx + 0x178]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBA10: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FBA14: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587FBA16: call 0x588d66d0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587FBA1B: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587FBA20: jne 0x587fbc77
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBA26: push edi
        __asm _emit 0x57
        // 0x587FBA27: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FBA29: call 0x587eaa20
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xEF
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587FBA2E: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587FBA31: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587FBA34: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FBA3A: mov esi, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBA40: push eax
        __asm _emit 0x50
        // 0x587FBA41: push ecx
        __asm _emit 0x51
        // 0x587FBA42: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587FBA44: call 0x588dcbf0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x11
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587FBA49: push eax
        __asm _emit 0x50
        // 0x587FBA4A: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587FBA4E: push eax
        __asm _emit 0x50
        // 0x587FBA4F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FBA51: call 0x588965c0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xAB
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587FBA56: movzx eax, word ptr [edi + 0x164]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBA5D: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBA62: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587FBA66: jb 0x587fba7f
        __asm _emit 0x72
        __asm _emit 0x17
        // 0x587FBA68: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FBA6E: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587FBA71: push eax
        __asm _emit 0x50
        // 0x587FBA72: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587FBA74: call 0x588dda60
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x1F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587FBA79: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FBA7B: jne 0x587fba7f
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x587FBA7D: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587FBA7F: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587FBA82: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587FBA85: push eax
        __asm _emit 0x50
        // 0x587FBA86: push ecx
        __asm _emit 0x51
        // 0x587FBA87: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FBA8D: call 0x587e5e10
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xA3
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587FBA92: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FBA94: je 0x587fbb2d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBA9A: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587FBA9D: jne 0x587fbb2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBAA3: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FBAA7: mov dword ptr [edi + 0x6080], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBAAD: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x587FBAB0: jne 0x587fbc6e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBAB6: push 0x68
        __asm _emit 0x6A
        __asm _emit 0x68
        // 0x587FBAB8: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x587FBABA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x11
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587FBABF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587FBAC2: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587FBAC6: mov dword ptr [esp + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBACE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FBAD0: je 0x587fbb17
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x587FBAD2: cmp dword ptr [ebx + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBAD9: jne 0x587fbae8
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587FBADB: cmp dword ptr [ebx + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBAE2: jne 0x587fbae8
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587FBAE4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FBAE6: jmp 0x587fbaea
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587FBAE8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587FBAEA: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBAEF: push 0x300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBAF4: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBAF9: push ebx
        __asm _emit 0x53
        // 0x587FBAFA: push edi
        __asm _emit 0x57
        // 0x587FBAFB: push ecx
        __asm _emit 0x51
        // 0x587FBAFC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587FBAFE: call 0x588f3930
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x7E
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587FBB03: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FBB07: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FBB0F: mov dword ptr [eax + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x587FBB12: jmp 0x587fbc6e
        __asm _emit 0xE9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB17: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FBB1B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587FBB1D: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FBB25: mov dword ptr [eax + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x587FBB28: jmp 0x587fbc6e
        __asm _emit 0xE9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB2D: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587FBB31: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB37: cmp word ptr [edi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587FBB3F: jb 0x587fbb4c
        __asm _emit 0x72
        __asm _emit 0x0B
        // 0x587FBB41: mov dword ptr [edi + 0x6080], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB47: jmp 0x587fbc6e
        __asm _emit 0xE9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB4C: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FBB52: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587FBB55: call 0x588d66d0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xAB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587FBB5A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FBB5C: jne 0x587fbb64
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587FBB5E: mov dword ptr [edi + 0x6080], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB64: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FBB6A: mov ebp, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587FBB6D: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587FBB6F: je 0x587fbc51
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB75: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FBB7A: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587FBB7D: mov dl, byte ptr [ebp + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB83: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB89: jne 0x587fbc46
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB8F: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587FBB91: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xAB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587FBB96: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587FBB98: je 0x587fbc46
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBB9E: cmp word ptr [ebp + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587FBBA6: mov eax, dword ptr [ebp + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBBAC: movzx eax, word ptr [eax + 0x380]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBBB3: jb 0x587fbbbc
        __asm _emit 0x72
        __asm _emit 0x07
        // 0x587FBBB5: movzx eax, word ptr [ebp + 0x174]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBBBC: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587FBBC2: cmp word ptr [ecx + 0x204], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x587FBBCA: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587FBBCD: jne 0x587fbbe9
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587FBBCF: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBBD6: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587FBBD8: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587FBBDD: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587FBBDF: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587FBBE2: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587FBBE4: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587FBBE7: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587FBBE9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587FBBEB: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587FBBEE: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587FBBF0: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587FBBF2: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587FBBF4: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587FBBF6: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587FBBFB: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587FBBFD: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x587FBC00: sub eax, dword ptr [edi + 8]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587FBC03: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587FBC06: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587FBC08: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587FBC0B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587FBC0D: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587FBC0F: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587FBC12: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587FBC14: mov esi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587FBC17: sub esi, dword ptr [edi + 4]
        __asm _emit 0x2B
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587FBC1A: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587FBC1C: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587FBC1E: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587FBC20: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587FBC25: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587FBC27: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587FBC2A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587FBC2C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587FBC2F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587FBC31: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587FBC33: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587FBC36: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587FBC38: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x587FBC3B: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587FBC3D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587FBC3F: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587FBC42: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587FBC44: jge 0x587fbcb2
        __asm _emit 0x7D
        __asm _emit 0x6C
        // 0x587FBC46: mov ebp, dword ptr [ebp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x78
        // 0x587FBC49: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587FBC4B: jne 0x587fbb75
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FBC51: mov ecx, dword ptr [edi + 0x6080]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBC57: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587FBC5D: je 0x587fbc69
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587FBC5F: mov dword ptr [edi + 0x6080], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587FBC69: mov ebp, 0xaaaaaaaa
        __asm _emit 0xBD
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587FBC6E: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FBC72: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x587FBC77: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x587FBC7A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587FBC7C: jne 0x587fba14
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FBC82: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587FBC84: call 0x58903070
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x73
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587FBC89: cmp word ptr [ebx + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587FBC91: jne 0x587fbc9e
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587FBC93: mov ecx, dword ptr [ebx + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587FBC99: call 0x587cdd60
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587FBC9E: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587FBCA2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FBCA9: pop ecx
        __asm _emit 0x59
        // 0x587FBCAA: pop edi
        __asm _emit 0x5F
        // 0x587FBCAB: pop esi
        __asm _emit 0x5E
        // 0x587FBCAC: pop ebp
        __asm _emit 0x5D
        // 0x587FBCAD: pop ebx
        __asm _emit 0x5B
        // 0x587FBCAE: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587FBCB1: ret
        __asm _emit 0xC3
        // 0x587FBCB2: mov dword ptr [edi + 0x6080], 0xaaaaaaab
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587FBCBC: jmp 0x587fbc69
        __asm _emit 0xEB
        __asm _emit 0xAB
    }
}
