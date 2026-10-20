// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882FC00 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_5882fc00_5882FC00() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 15 B8 60 90 58: mov edx, dword ptr [0x589060b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7D 0C: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F7: mov esi, edi
        __asm _emit 0x8b
        __asm _emit 0xf7
        ; Exact mapped bytes 2B F0: sub esi, eax
        __asm _emit 0x2b
        __asm _emit 0xf0
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 83 E1 E0: and ecx, 0xffffffe0
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0xe0
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x5882fcc5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 05: shr ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5882fcc5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4D 10: movsx ecx, word ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes C5 F9 6E C1: vmovd xmm0, ecx
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact mapped bytes C5 F9 61 C0: vpunpcklwd xmm0, xmm0, xmm0
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes C5 F9 70 C0 00: vpshufd xmm0, xmm0, 0
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x00
        ; Exact mapped bytes C4 E3 7D 18 D0 01: vinsertf128 ymm2, ymm0, xmm0, 1
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0xd0
        __asm _emit 0x01
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        ; Exact mapped bytes C5 ED 75 00: vpcmpeqw ymm0, ymm2, ymmword ptr [eax]
        __asm _emit 0xc5
        __asm _emit 0xed
        __asm _emit 0x75
        __asm _emit 0x00
        ; Exact mapped bytes C5 FD D7 C8: vpmovmskb ecx, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 58: jne 0x5882fcb4
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 ED: jne 0x5882fc50
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 83 E6 1C: and esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0x1c
        ; Exact mapped bytes 74 27: je 0x5882fc8f
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
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
        ; Exact mapped bytes C5 FD 75 C2: vpcmpeqw ymm0, ymm0, ymm2
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x75
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
        ; Exact mapped bytes 75 27: jne 0x5882fcb4
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes 66 8B 55 10: mov dx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 12: je 0x5882fcac
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 07: je 0x5882fcac
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 F4: jne 0x5882fca0
        __asm _emit 0x75
        __asm _emit 0xf4
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
        ; Exact mapped bytes F3 0F BC C9: tzcnt ecx, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0xbc
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
        ; Exact mapped bytes 83 E6 F0: and esi, 0xfffffff0
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0xf0
        ; Exact mapped bytes 74 C8: je 0x5882fc92
        __asm _emit 0x74
        __asm _emit 0xc8
        ; Exact mapped bytes C1 EA 02: shr edx, 2
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x02
        ; Exact mapped bytes F6 C2 01: test dl, 1
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 8B 55 10: mov dx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 74 C0: je 0x5882fc96
        __asm _emit 0x74
        __asm _emit 0xc0
        ; Exact mapped bytes 0F BF CA: movsx ecx, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xca
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes 66 0F 6E C1: movd xmm0, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 61 C0: punpcklwd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 70 C8 00: pshufd xmm1, xmm0, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 00: movups xmm0, xmmword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 75 C1: pcmpeqw xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F D7 C8: pmovmskb ecx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 09: jne 0x5882fd08
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 83 C0 10: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x10
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 75 EA: jne 0x5882fcf0
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes EB 8E: jmp 0x5882fc96
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes 0F BC C9: bsf ecx, ecx
        __asm _emit 0x0f
        __asm _emit 0xbc
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
