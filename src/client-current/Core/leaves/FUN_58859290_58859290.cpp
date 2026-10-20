// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859290 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_58859290_58859290() {
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
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 7C 7A: jl 0x5885931a
        __asm _emit 0x7c
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes F6 C2 01: test dl, 1
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 74 11: je 0x588592bb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 39 00: cmp word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 5B: je 0x58859311
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes EB F5: jmp 0x588592b0
        __asm _emit 0xeb
        __asm _emit 0xf5
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes B8 20 00 00 00: mov eax, 0x20
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E6 1F: and esi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0x1f
        ; Exact mapped bytes 2B C6: sub eax, esi
        __asm _emit 0x2b
        __asm _emit 0xc6
        ; Exact mapped bytes F7 DE: neg esi
        __asm _emit 0xf7
        __asm _emit 0xde
        ; Exact mapped bytes 1B F6: sbb esi, esi
        __asm _emit 0x1b
        __asm _emit 0xf6
        ; Exact mapped bytes 23 F0: and esi, eax
        __asm _emit 0x23
        __asm _emit 0xf0
        ; Exact mapped bytes D1 EE: shr esi, 1
        __asm _emit 0xd1
        __asm _emit 0xee
        ; Exact mapped bytes 8D 04 72: lea eax, [edx + esi*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x72
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 74 0D: je 0x588592e3
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 83 39 00: cmp word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x588592e3
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 F3: jne 0x588592d6
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes D1 F9: sar ecx, 1
        __asm _emit 0xd1
        __asm _emit 0xf9
        ; Exact mapped bytes 3B CE: cmp ecx, esi
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 75 2A: jne 0x58859315
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 8D 0C 4A: lea ecx, [edx + ecx*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x4a
        ; Exact mapped bytes C5 F1 EF C9: vpxor xmm1, xmm1, xmm1
        __asm _emit 0xc5
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0xc9
        ; Exact mapped bytes C5 F5 75 01: vpcmpeqw ymm0, ymm1, ymmword ptr [ecx]
        __asm _emit 0xc5
        __asm _emit 0xf5
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes C5 FD D7 C0: vpmovmskb eax, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 05: jne 0x58859303
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 83 C1 20: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes EB EF: jmp 0x588592f2
        __asm _emit 0xeb
        __asm _emit 0xef
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes 66 83 39 00: cmp word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x58859311
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes EB F5: jmp 0x58859306
        __asm _emit 0xeb
        __asm _emit 0xf5
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes D1 F9: sar ecx, 1
        __asm _emit 0xd1
        __asm _emit 0xf9
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
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
        ; Exact mapped bytes 7C 7A: jl 0x58859399
        __asm _emit 0x7c
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes F6 C2 01: test dl, 1
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 74 14: je 0x5885933b
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
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
        ; Exact mapped bytes 74 5C: je 0x58859392
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes EB F5: jmp 0x58859330
        __asm _emit 0xeb
        __asm _emit 0xf5
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes B8 10 00 00 00: mov eax, 0x10
        __asm _emit 0xb8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E1 0F: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes F7 D9: neg ecx
        __asm _emit 0xf7
        __asm _emit 0xd9
        ; Exact mapped bytes 1B C9: sbb ecx, ecx
        __asm _emit 0x1b
        __asm _emit 0xc9
        ; Exact mapped bytes 23 C8: and ecx, eax
        __asm _emit 0x23
        __asm _emit 0xc8
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 E9: shr ecx, 1
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 8D 34 4A: lea esi, [edx + ecx*2]
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0x4a
        ; Exact mapped bytes 3B D6: cmp edx, esi
        __asm _emit 0x3b
        __asm _emit 0xd6
        ; Exact mapped bytes 74 0D: je 0x58859365
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x58859365
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 75 F3: jne 0x58859358
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 42: jne 0x588593af
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 8D 04 42: lea eax, [edx + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x42
        ; Exact mapped bytes 0F 57 C9: xorps xmm1, xmm1
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 75 00: pcmpeqw xmm0, xmmword ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F D7 C8: pmovmskb ecx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 05: jne 0x58859387
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 83 C0 10: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x10
        ; Exact mapped bytes EB EC: jmp 0x58859373
        __asm _emit 0xeb
        __asm _emit 0xec
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x58859392
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes EB F5: jmp 0x58859387
        __asm _emit 0xeb
        __asm _emit 0xf5
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x588593ab
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes EB F5: jmp 0x588593a0
        __asm _emit 0xeb
        __asm _emit 0xf5
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
