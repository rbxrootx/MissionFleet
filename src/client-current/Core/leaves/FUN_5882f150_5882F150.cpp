// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882F150 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_5882f150_5882F150() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B DC: mov ebx, esp
        __asm _emit 0x8b
        __asm _emit 0xdc
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 83 E4 E0: and esp, 0xffffffe0
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xe0
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 6B 04: mov ebp, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x6b
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 04: mov dword ptr [esp + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 58: sub esp, 0x58
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x58
        ; Exact mapped bytes 8B 43 10: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 73 0C: mov esi, dword ptr [ebx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x73
        __asm _emit 0x0c
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 73 14: push dword ptr [ebx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x73
        __asm _emit 0x14
        ; Exact mapped bytes 8B 7B 08: mov edi, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x7b
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C3 02 00 00: call 0x5882f440
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C5 FE 6F C8: vmovdqu ymm1, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes C5 FE 7F 4D C0: vmovdqu ymmword ptr [ebp - 0x40], ymm1
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 83 FE 08: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x08
        ; Exact mapped bytes 72 57: jb 0x5882f1e5
        __asm _emit 0x72
        __asm _emit 0x57
        ; Exact mapped bytes C5 FE 6F 2D 80 0E 8C 58: vmovdqu ymm5, ymmword ptr [0x588c0e80]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0x0e
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes C5 FE 6F 35 60 0E 8C 58: vmovdqu ymm6, ymmword ptr [0x588c0e60]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x60
        __asm _emit 0x0e
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes C5 D9 EF E4: vpxor xmm4, xmm4, xmm4
        __asm _emit 0xc5
        __asm _emit 0xd9
        __asm _emit 0xef
        __asm _emit 0xe4
        ; Exact mapped bytes 8D 04 77: lea eax, [edi + esi*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x77
        ; Exact mapped bytes 8D 40 F0: lea eax, [eax - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0xf0
        ; Exact mapped bytes 83 EE 08: sub esi, 8
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x08
        ; Exact mapped bytes C4 E2 7D 33 18: vpmovzxwd ymm3, xmmword ptr [eax]
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0x33
        __asm _emit 0x18
        ; Exact mapped bytes C5 D5 DB C3: vpand ymm0, ymm5, ymm3
        __asm _emit 0xc5
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xc3
        ; Exact mapped bytes C5 FD 76 D4: vpcmpeqd ymm2, ymm0, ymm4
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x76
        __asm _emit 0xd4
        ; Exact mapped bytes C5 FD 72 D3 05: vpsrld ymm0, ymm3, 5
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x72
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes C4 E2 7D 36 C9: vpermd ymm1, ymm0, ymm1
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0x36
        __asm _emit 0xc9
        ; Exact mapped bytes C5 E5 DF C6: vpandn ymm0, ymm3, ymm6
        __asm _emit 0xc5
        __asm _emit 0xe5
        __asm _emit 0xdf
        __asm _emit 0xc6
        ; Exact mapped bytes C4 E2 75 47 C0: vpsllvd ymm0, ymm1, ymm0
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x75
        __asm _emit 0x47
        __asm _emit 0xc0
        ; Exact mapped bytes C5 FD DB C2: vpand ymm0, ymm0, ymm2
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xdb
        __asm _emit 0xc2
        ; Exact mapped bytes C5 FC 50 C8: vmovmskps ecx, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0x50
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x5882f261
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C5 FE 6F 4D C0: vmovdqu ymm1, ymmword ptr [ebp - 0x40]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 83 FE 08: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x08
        ; Exact mapped bytes 73 C0: jae 0x5882f1a5
        __asm _emit 0x73
        __asm _emit 0xc0
        ; Exact mapped bytes 83 E6 07: and esi, 7
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0x07
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5882f276
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 36: lea eax, [esi + esi]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x36
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 45 F0: lea eax, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes E8 91 D6 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C4 E2 7D 33 5D F0: vpmovzxwd ymm3, xmmword ptr [ebp - 0x10]
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0x33
        __asm _emit 0x5d
        __asm _emit 0xf0
        ; Exact mapped bytes C5 FE 6F 05 80 0E 8C 58: vmovdqu ymm0, ymmword ptr [0x588c0e80]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x0e
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes C5 FD DB C3: vpand ymm0, ymm0, ymm3
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xdb
        __asm _emit 0xc3
        ; Exact mapped bytes C5 F1 EF C9: vpxor xmm1, xmm1, xmm1
        __asm _emit 0xc5
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0xc9
        ; Exact mapped bytes C5 FD 76 D1: vpcmpeqd ymm2, ymm0, ymm1
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x76
        __asm _emit 0xd1
        ; Exact mapped bytes C5 FD 72 D3 05: vpsrld ymm0, ymm3, 5
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x72
        __asm _emit 0xd3
        __asm _emit 0x05
        ; Exact mapped bytes C4 E2 7D 36 4D C0: vpermd ymm1, ymm0, ymmword ptr [ebp - 0x40]
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0x36
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes C5 E5 DF 05 60 0E 8C 58: vpandn ymm0, ymm3, ymmword ptr [0x588c0e60]
        __asm _emit 0xc5
        __asm _emit 0xe5
        __asm _emit 0xdf
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x0e
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes C4 E2 75 47 C0: vpsllvd ymm0, ymm1, ymm0
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x75
        __asm _emit 0x47
        __asm _emit 0xc0
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes D3 E0: shl eax, cl
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C5 FD DB C2: vpand ymm0, ymm0, ymm2
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xdb
        __asm _emit 0xc2
        ; Exact mapped bytes C5 FC 50 D0: vmovmskps edx, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0x50
        __asm _emit 0xd0
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 23 D0: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 74 2C: je 0x5882f276
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes F3 0F BD CA: lzcnt ecx, edx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0xbd
        __asm _emit 0xca
        ; Exact mapped bytes B8 1F 00 00 00: mov eax, 0x1f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
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
        ; Exact mapped bytes 8B E3: mov esp, ebx
        __asm _emit 0x8b
        __asm _emit 0xe3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes F3 0F BD C1: lzcnt eax, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0xbd
        __asm _emit 0xc1
        ; Exact mapped bytes 2B F0: sub esi, eax
        __asm _emit 0x2b
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 46 1F: lea eax, [esi + 0x1f]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x1f
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 8B E3: mov esp, ebx
        __asm _emit 0x8b
        __asm _emit 0xe3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
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
        ; Exact mapped bytes 8B E3: mov esp, ebx
        __asm _emit 0x8b
        __asm _emit 0xe3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
