// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859130 .. +0x160 bytes.
extern "C" __declspec(naked) void FUN_58859130_58859130() {
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
        ; Exact mapped bytes 0F 8C 93 00 00 00: jl 0x588591d8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes B8 20 00 00 00: mov eax, 0x20
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
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
        ; Exact mapped bytes 39 7D 0C: cmp dword ptr [ebp + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 42 7D 0C: cmovb edi, dword ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 04 0F: lea eax, [edi + ecx]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x0f
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 10: je 0x5885917a
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3E 00: cmp byte ptr [esi], 0
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x5885917a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 75 F6: jne 0x58859170
        __asm _emit 0x75
        __asm _emit 0xf6
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 50: jne 0x588591d2
        __asm _emit 0x75
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes 8B FE: mov edi, esi
        __asm _emit 0x8b
        __asm _emit 0xfe
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 83 E0 1F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 3B F7: cmp esi, edi
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 74 22: je 0x588591ba
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C5 F1 EF C9: vpxor xmm1, xmm1, xmm1
        __asm _emit 0xc5
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0xc9
        ; Exact mapped bytes C5 F5 74 02: vpcmpeqb ymm0, ymm1, ymmword ptr [edx]
        __asm _emit 0xc5
        __asm _emit 0xf5
        __asm _emit 0x74
        __asm _emit 0x02
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
        ; Exact mapped bytes 75 07: jne 0x588591ba
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 83 C2 20: add edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x20
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 E6: jne 0x588591a0
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 74 0A: je 0x588591d0
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 80 3A 00: cmp byte ptr [edx], 0
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x588591d0
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 F6: jne 0x588591c6
        __asm _emit 0x75
        __asm _emit 0xf6
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
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
        ; Exact mapped bytes 0F 8C 8C 00 00 00: jl 0x5885926d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes B8 10 00 00 00: mov eax, 0x10
        __asm _emit 0xb8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
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
        ; Exact mapped bytes 39 7D 0C: cmp dword ptr [ebp + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 42 7D 0C: cmovb edi, dword ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 04 0F: lea eax, [edi + ecx]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x0f
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 0A: je 0x58859210
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 80 3E 00: cmp byte ptr [esi], 0
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x58859210
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 75 F6: jne 0x58859206
        __asm _emit 0x75
        __asm _emit 0xf6
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 BA: jne 0x588591d2
        __asm _emit 0x75
        __asm _emit 0xba
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 57 C9: xorps xmm1, xmm1
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc9
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B FE: mov edi, esi
        __asm _emit 0x8b
        __asm _emit 0xfe
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 3B F7: cmp esi, edi
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 74 16: je 0x58859247
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 74 02: pcmpeqb xmm0, xmmword ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes 66 0F D7 C0: pmovmskb eax, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 07: jne 0x58859247
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 83 C2 10: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x10
        ; Exact mapped bytes 3B D7: cmp edx, edi
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 EA: jne 0x58859231
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 84 79 FF FF FF: je 0x588591d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 3A 00: cmp byte ptr [edx], 0
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 70 FF FF FF: je 0x588591d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 F2: jne 0x58859257
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
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
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 74 0F: je 0x5885928a
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 38 00: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x5885928a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 F6: jne 0x58859280
        __asm _emit 0x75
        __asm _emit 0xf6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
