// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58823950 .. +0x39E bytes.
// Source symbol alias: FUN_58823950.
extern "C" __declspec(naked) void FUN_58823950() {
    __asm {
        // 0x58823950: push ebp
        __asm _emit 0x55
        // 0x58823951: push esi
        __asm _emit 0x56
        // 0x58823952: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58823954: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58823958: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5882395A: je 0x58823ce6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823960: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58823963: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58823967: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823969: je 0x5882398f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5882396B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5882396E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823970: je 0x58823988
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58823972: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58823974: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58823976: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58823979: push ebp
        __asm _emit 0x55
        // 0x5882397A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5882397C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5882397F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58823982: je 0x5882398f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58823984: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823986: jne 0x58823972
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58823988: pop esi
        __asm _emit 0x5E
        // 0x58823989: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882398B: pop ebp
        __asm _emit 0x5D
        // 0x5882398C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882398F: push ebx
        __asm _emit 0x53
        // 0x58823990: push edi
        __asm _emit 0x57
        // 0x58823991: mov edi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x58823994: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58823996: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882399B: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588239A0: ja 0x58823b3a
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588239A6: je 0x588239ea
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588239A8: cmp eax, 0x102
        __asm _emit 0x3D
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588239AD: jne 0x58823cd8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588239B3: cmp dword ptr [esi + 0x84], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588239B9: jne 0x58823cde
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588239BF: mov ebp, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x08
        // 0x588239C2: cmp ebp, 0xd
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0D
        // 0x588239C5: jne 0x588239d3
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588239C7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588239C9: call 0x58823110
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588239CE: jmp 0x58823cd8
        __asm _emit 0xE9
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588239D3: cmp ebp, 0x1b
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x1B
        // 0x588239D6: jne 0x58823cd8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588239DC: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588239DE: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588239E1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588239E3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588239E5: jmp 0x58823cd8
        __asm _emit 0xE9
        __asm _emit 0xEE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588239EA: cmp dword ptr [esi + 0x8c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588239F0: jne 0x58823a1e
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x588239F2: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588239F8: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588239FB: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x588239FE: sub ecx, dword ptr [esi + 0x94]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823A04: sub eax, dword ptr [esi + 0x90]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823A0A: push ecx
        __asm _emit 0x51
        // 0x58823A0B: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58823A0E: push eax
        __asm _emit 0x50
        // 0x58823A0F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58823A11: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58823A14: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xF8
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58823A19: jmp 0x58823cd8
        __asm _emit 0xE9
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823A1E: mov edi, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823A24: cmp dword ptr [edi + 0x50], 3
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58823A28: jne 0x58823b19
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823A2E: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58823A31: mov ebp, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823A37: sub ebp, 7
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x07
        // 0x58823A3A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58823A3C: jle 0x58823cd8
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823A42: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823A48: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58823A4B: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58823A4E: add eax, -5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFB
        // 0x58823A51: lea edx, [ecx + 0x25]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x25
        // 0x58823A54: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58823A56: jge 0x58823a5b
        __asm _emit 0x7D
        __asm _emit 0x03
        // 0x58823A58: push edx
        __asm _emit 0x52
        // 0x58823A59: jmp 0x58823a66
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58823A5B: add ecx, 0x6b
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x6B
        // 0x58823A5E: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58823A60: jle 0x58823a65
        __asm _emit 0x7E
        __asm _emit 0x03
        // 0x58823A62: push ecx
        __asm _emit 0x51
        // 0x58823A63: jmp 0x58823a66
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58823A65: push eax
        __asm _emit 0x50
        // 0x58823A66: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58823A68: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xF8
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58823A6D: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823A73: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58823A76: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58823A79: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58823A7E: sub ecx, 0x25
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x25
        // 0x58823A81: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x58823A84: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58823A86: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58823A88: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58823A8B: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58823A8E: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58823A90: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58823A93: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58823A95: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x46
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823A9A: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58823A9C: jle 0x58823acf
        __asm _emit 0x7E
        __asm _emit 0x31
        // 0x58823A9E: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58823AA1: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58823AA3: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823AA8: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58823AAA: cdq
        __asm _emit 0x99
        // 0x58823AAB: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58823AAD: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58823AAF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823AB1: jle 0x58823acf
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58823AB3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58823AB5: call 0x588231a0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823ABA: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58823ABD: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xEB
        // 0x58823ABF: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x46
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823AC4: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58823AC6: cdq
        __asm _emit 0x99
        // 0x58823AC7: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58823AC9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58823ACB: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58823ACD: jl 0x58823ab3
        __asm _emit 0x7C
        __asm _emit 0xE4
        // 0x58823ACF: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58823AD2: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x46
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823AD7: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58823AD9: jge 0x58823cd8
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xF9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823ADF: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58823AE2: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58823AE4: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x46
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823AE9: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58823AEB: cdq
        __asm _emit 0x99
        // 0x58823AEC: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58823AEE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58823AF0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823AF2: jle 0x58823cd8
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823AF8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58823AFA: call 0x588231d0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823AFF: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58823B02: add ebp, ebx
        __asm _emit 0x03
        __asm _emit 0xEB
        // 0x58823B04: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x46
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823B09: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58823B0B: cdq
        __asm _emit 0x99
        // 0x58823B0C: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58823B0E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58823B10: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58823B12: jl 0x58823af8
        __asm _emit 0x7C
        __asm _emit 0xE4
        // 0x58823B14: jmp 0x58823cd8
        __asm _emit 0xE9
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823B19: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823B1F: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58823B22: push ecx
        __asm _emit 0x51
        // 0x58823B23: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58823B25: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xDA
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58823B2A: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58823B2C: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58823B2E: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58823B30: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58823B32: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x58823B35: jmp 0x58823cd8
        __asm _emit 0xE9
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823B3A: sub eax, 0x201
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823B3F: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58823B42: ja 0x58823cd8
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823B48: movzx edx, byte ptr [eax + 0x58823d00]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x82
        __asm _emit 0x58
        // 0x58823B4F: jmp dword ptr [edx*4 + 0x58823cf0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xF0
        __asm _emit 0x3C
        __asm _emit 0x82
        __asm _emit 0x58
        // 0x58823B56: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823B5B: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58823B5E: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58823B61: push eax
        __asm _emit 0x50
        // 0x58823B62: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xD9
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58823B67: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823B69: je 0x58823c53
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823B6F: cmp edi, 0x201
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823B75: jne 0x58823c53
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823B7B: cmp dword ptr [esi + 0x84], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823B81: je 0x58823b9e
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58823B83: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823B89: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x58823B8C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58823B8E: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58823B91: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58823B93: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58823B95: push esi
        __asm _emit 0x56
        // 0x58823B96: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58823B98: mov dword ptr [esi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823B9E: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823BA4: mov ebp, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x70
        // 0x58823BA7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58823BAA: push edi
        __asm _emit 0x57
        // 0x58823BAB: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58823BAD: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xD9
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58823BB2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823BB4: je 0x58823c04
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x58823BB6: mov cx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x58823BBA: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x58823BBC: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xCB
        // 0x58823BBE: jne 0x58823cd8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823BC4: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58823BCB: je 0x58823cd8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823BD1: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x58823BD9: jne 0x58823cd8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823BDF: cmp dword ptr [esi + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823BE6: jne 0x58823bf6
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58823BE8: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58823BEB: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823BF1: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xBD
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58823BF6: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58823BF9: push ebx
        __asm _emit 0x53
        // 0x58823BFA: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xDA
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58823BFF: jmp 0x58823cd8
        __asm _emit 0xE9
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C04: mov ebp, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C0A: push edi
        __asm _emit 0x57
        // 0x58823C0B: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58823C0D: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xD9
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58823C12: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823C14: je 0x58823c2c
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58823C16: cmp dword ptr [ebp + 0x50], 2
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x50
        __asm _emit 0x02
        // 0x58823C1A: jne 0x58823cd8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C20: mov dword ptr [ebp + 0x50], 3
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C27: jmp 0x58823cd8
        __asm _emit 0xE9
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C2C: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58823C2E: sub edx, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58823C31: mov dword ptr [esi + 0x90], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C37: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823C3C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58823C3F: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58823C42: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C48: mov dword ptr [esi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C4E: jmp 0x58823cd8
        __asm _emit 0xE9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C53: cmp dword ptr [esi + 0x84], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C59: jne 0x58823cde
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C5F: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823C64: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58823C67: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58823C69: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58823C6B: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58823C6D: push eax
        __asm _emit 0x50
        // 0x58823C6E: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58823C71: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58823C73: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58823C76: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58823C78: mov dword ptr [esi + 0x84], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C82: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xD9
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58823C87: jmp 0x58823cd8
        __asm _emit 0xEB
        __asm _emit 0x4F
        // 0x58823C89: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C8F: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x58823C92: mov dword ptr [esi + 0x8c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823C9C: jmp 0x58823cd8
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x58823C9E: cmp dword ptr [esi + 0x84], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823CA4: jne 0x58823cde
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x58823CA6: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823CAC: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58823CAF: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x58823CB2: push edx
        __asm _emit 0x52
        // 0x58823CB3: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xD8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58823CB8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823CBA: je 0x58823cd8
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58823CBC: cmp word ptr [ebp + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58823CC1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58823CC3: jle 0x58823ccc
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x58823CC5: call 0x588231a0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823CCA: jmp 0x58823cd1
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58823CCC: call 0x588231d0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823CD1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58823CD3: call 0x58823210
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823CD8: cmp dword ptr [esi + 0x84], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823CDE: pop edi
        __asm _emit 0x5F
        // 0x58823CDF: pop ebx
        __asm _emit 0x5B
        // 0x58823CE0: je 0x58823988
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823CE6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58823CE9: pop esi
        __asm _emit 0x5E
        // 0x58823CEA: pop ebp
        __asm _emit 0x5D
        // 0x58823CEB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
