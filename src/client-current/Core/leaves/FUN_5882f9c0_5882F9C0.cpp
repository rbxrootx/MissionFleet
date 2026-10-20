// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882F9C0 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_5882f9c0_5882F9C0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7D 08: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 89 75 FC: mov dword ptr [ebp - 4], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xfc
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 83 E1 E0: and ecx, 0xffffffe0
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0xe0
        ; Exact mapped bytes 89 4D F8: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 0D B8 60 90 58: mov ecx, dword ptr [0x589060b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x5882fa9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E9 05: shr ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5882fa97
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 4D 10: movsx ecx, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 2B 75 F8: sub esi, dword ptr [ebp - 8]
        __asm _emit 0x2b
        __asm _emit 0x75
        __asm _emit 0xf8
        ; Exact mapped bytes C5 F9 EF C0: vpxor xmm0, xmm0, xmm0
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0xef
        __asm _emit 0xc0
        ; Exact mapped bytes C5 F9 6E C9: vmovd xmm1, ecx
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0x6e
        __asm _emit 0xc9
        ; Exact mapped bytes C4 E2 71 00 C0: vpshufb xmm0, xmm1, xmm0
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0xc0
        ; Exact mapped bytes C4 E3 7D 18 D0 01: vinsertf128 ymm2, ymm0, xmm0, 1
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0xd0
        __asm _emit 0x01
        ; Exact mapped bytes C5 ED 74 40 E0: vpcmpeqb ymm0, ymm2, ymmword ptr [eax - 0x20]
        __asm _emit 0xc5
        __asm _emit 0xed
        __asm _emit 0x74
        __asm _emit 0x40
        __asm _emit 0xe0
        ; Exact mapped bytes 83 E8 20: sub eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x20
        ; Exact mapped bytes C5 FD D7 C8: vpmovmskb ecx, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 62: jne 0x5882fa83
        __asm _emit 0x75
        __asm _emit 0x62
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 75 EC: jne 0x5882fa11
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 83 E2 1C: and edx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1c
        ; Exact mapped bytes 74 39: je 0x5882fa63
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes B9 08 0E 8C 58: mov ecx, 0x588c0e08
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 83 E2 FC: and edx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0xfc
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes C5 FE 6F 09: vmovdqu ymm1, ymmword ptr [ecx]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x09
        ; Exact mapped bytes C4 E2 75 8C 00: vpmaskmovd ymm0, ymm1, ymmword ptr [eax]
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x75
        __asm _emit 0x8c
        __asm _emit 0x00
        ; Exact mapped bytes C5 FD 74 C2: vpcmpeqb ymm0, ymm0, ymm2
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x74
        __asm _emit 0xc2
        ; Exact mapped bytes C5 FD DB C1: vpand ymm0, ymm0, ymm1
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xdb
        __asm _emit 0xc1
        ; Exact mapped bytes C5 FD D7 C8: vpmovmskb ecx, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 14: je 0x5882fa63
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes F3 0F BD C9: lzcnt ecx, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0xbd
        __asm _emit 0xc9
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 83 C0 1F: add eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x1f
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes 8B 75 FC: mov esi, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0xfc
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 0C: je 0x5882fa79
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8A 4D 10: mov cl, byte ptr [ebp + 0x10]
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 38 08: cmp byte ptr [eax], cl
        __asm _emit 0x38
        __asm _emit 0x08
        ; Exact mapped bytes 74 06: je 0x5882fa7b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 F7: jne 0x5882fa70
        __asm _emit 0x75
        __asm _emit 0xf7
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes F3 0F BD C9: lzcnt ecx, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0xbd
        __asm _emit 0xc9
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 83 C0 1F: add eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x1f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B8 60 90 58: mov ecx, dword ptr [0x589060b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 E2 F0: and edx, 0xfffffff0
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0xf0
        ; Exact mapped bytes 74 C7: je 0x5882fa69
        __asm _emit 0x74
        __asm _emit 0xc7
        ; Exact mapped bytes C1 E9 02: shr ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 74 BF: je 0x5882fa69
        __asm _emit 0x74
        __asm _emit 0xbf
        ; Exact mapped bytes 0F B6 4D 10: movzx ecx, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 2B F2: sub esi, edx
        __asm _emit 0x2b
        __asm _emit 0xf2
        ; Exact mapped bytes 66 0F 6E C9: movd xmm1, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0F 38 00 C8: pshufb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 40 F0: movups xmm0, xmmword ptr [eax - 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0xf0
        ; Exact mapped bytes 83 E8 10: sub eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 74 C1: pcmpeqb xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F D7 C8: pmovmskb ecx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 06: jne 0x5882fad9
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 75 E9: jne 0x5882fac0
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 8D: jmp 0x5882fa66
        __asm _emit 0xeb
        __asm _emit 0x8d
        ; Exact mapped bytes 0F BD C9: bsr ecx, ecx
        __asm _emit 0x0f
        __asm _emit 0xbd
        __asm _emit 0xc9
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
