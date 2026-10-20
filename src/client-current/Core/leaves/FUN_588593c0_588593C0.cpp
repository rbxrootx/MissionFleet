// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588593C0 .. +0x1D5 bytes.
extern "C" __declspec(naked) void FUN_588593c0_588593C0() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 1C 67 96 58: mov eax, dword ptr [0x5896671c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 8C C8 00 00 00: jl 0x5885949d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 74 28: je 0x58859407
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 04 41: lea eax, [ecx + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x41
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 14: je 0x588593fd
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3A 00: cmp word ptr [edx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x588593fd
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 83 C2 02: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x02
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 F3: jne 0x588593f0
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes D1 FA: sar edx, 1
        __asm _emit 0xd1
        __asm _emit 0xfa
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes B8 20 00 00 00: mov eax, 0x20
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E7 1F: and edi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe7
        __asm _emit 0x1f
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes F7 DF: neg edi
        __asm _emit 0xf7
        __asm _emit 0xdf
        ; Exact mapped bytes 1B FF: sbb edi, edi
        __asm _emit 0x1b
        __asm _emit 0xff
        ; Exact mapped bytes 23 F8: and edi, eax
        __asm _emit 0x23
        __asm _emit 0xf8
        ; Exact mapped bytes D1 EF: shr edi, 1
        __asm _emit 0xd1
        __asm _emit 0xef
        ; Exact mapped bytes 39 7D 0C: cmp dword ptr [ebp + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 42 7D 0C: cmovb edi, dword ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 04 79: lea eax, [ecx + edi*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x79
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 14: je 0x5885943d
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3A 00: cmp word ptr [edx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x5885943d
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 83 C2 02: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x02
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 F3: jne 0x58859430
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes D1 FA: sar edx, 1
        __asm _emit 0xd1
        __asm _emit 0xfa
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 52: jne 0x58859497
        __asm _emit 0x75
        __asm _emit 0x52
        ; Exact mapped bytes 8D 34 51: lea esi, [ecx + edx*2]
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes 8B 7D 08: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 83 E0 1F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 8D 0C 4F: lea ecx, [edi + ecx*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x4f
        ; Exact mapped bytes 3B F1: cmp esi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 74 1A: je 0x5885947a
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes C5 F1 EF C9: vpxor xmm1, xmm1, xmm1
        __asm _emit 0xc5
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0xc9
        ; Exact mapped bytes C5 F5 75 06: vpcmpeqw ymm0, ymm1, ymmword ptr [esi]
        __asm _emit 0xc5
        __asm _emit 0xf5
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes C5 FD D7 C0: vpmovmskb eax, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes 75 07: jne 0x5885947a
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 83 C6 20: add esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x20
        ; Exact mapped bytes 3B F1: cmp esi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 75 E6: jne 0x58859460
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 04 47: lea eax, [edi + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x47
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 74 0D: je 0x58859491
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 83 3E 00: cmp word ptr [esi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x58859491
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 83 C6 02: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x02
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 75 F3: jne 0x58859484
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes D1 FA: sar edx, 1
        __asm _emit 0xd1
        __asm _emit 0xfa
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 8C C4 00 00 00: jl 0x5885956a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 74 2B: je 0x588594d9
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 14 41: lea edx, [ecx + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x41
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x58859562
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x58859562
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 EF: jne 0x588594c0
        __asm _emit 0x75
        __asm _emit 0xef
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes B8 10 00 00 00: mov eax, 0x10
        __asm _emit 0xb8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E7 0F: and edi, 0xf
        __asm _emit 0x83
        __asm _emit 0xe7
        __asm _emit 0x0f
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes F7 DF: neg edi
        __asm _emit 0xf7
        __asm _emit 0xdf
        ; Exact mapped bytes 1B FF: sbb edi, edi
        __asm _emit 0x1b
        __asm _emit 0xff
        ; Exact mapped bytes 23 F8: and edi, eax
        __asm _emit 0x23
        __asm _emit 0xf8
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes D1 EF: shr edi, 1
        __asm _emit 0xd1
        __asm _emit 0xef
        ; Exact mapped bytes 39 7D 0C: cmp dword ptr [ebp + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 42 7D 0C: cmovb edi, dword ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 14 79: lea edx, [ecx + edi*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x79
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 74 10: je 0x5885950d
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x5885950d
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 F3: jne 0x58859500
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 7C: jne 0x58859591
        __asm _emit 0x75
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 34 41: lea esi, [ecx + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0x41
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 0F 57 C9: xorps xmm1, xmm1
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc9
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 83 E1 0F: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 8D 14 51: lea edx, [ecx + edx*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x51
        ; Exact mapped bytes 3B F2: cmp esi, edx
        __asm _emit 0x3b
        __asm _emit 0xf2
        ; Exact mapped bytes 74 16: je 0x58859549
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 75 06: pcmpeqw xmm0, xmmword ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 0F D7 C0: pmovmskb eax, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 07: jne 0x58859549
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 83 C6 10: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x10
        ; Exact mapped bytes 3B F2: cmp esi, edx
        __asm _emit 0x3b
        __asm _emit 0xf2
        ; Exact mapped bytes 75 EA: jne 0x58859533
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 04 41: lea eax, [ecx + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x41
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 74 0D: je 0x58859560
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 83 3E 00: cmp word ptr [esi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x58859560
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 83 C6 02: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x02
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 75 F3: jne 0x58859553
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 0C 42: lea ecx, [edx + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x42
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 74 14: je 0x5885958d
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x5885958d
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 F3: jne 0x58859580
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
