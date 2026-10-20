// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E8B0 .. +0x27C bytes.
extern "C" __declspec(naked) void FUN_5882e8b0_5882E8B0() {
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
        ; Exact mapped bytes 81 EC 78 02 00 00: sub esp, 0x278
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 0D B8 60 90 58: mov ecx, dword ptr [0x589060b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 73 08: mov esi, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x73
        __asm _emit 0x08
        ; Exact mapped bytes C1 E8 02: shr eax, 2
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes 89 B5 DC FE FF FF: mov dword ptr [ebp - 0x124], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7B 10: mov edi, dword ptr [ebx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7b
        __asm _emit 0x10
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 CD 01 00 00: je 0x5882eac4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 73 0C: mov esi, dword ptr [ebx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x73
        __asm _emit 0x0c
        ; Exact mapped bytes C1 E9 05: shr ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 80 E1 01: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 0F B6 C1: movzx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc1
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 73 14: push dword ptr [ebx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x73
        __asm _emit 0x14
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 A3 0C 00 00: call 0x5882f5b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 1F 01 00 00: jne 0x5882ea38
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 43 14: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 AD 09 00 00: call 0x5882f2d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D DC FE FF FF: mov ecx, dword ptr [ebp - 0x124]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C5 FE 6F C8: vmovdqu ymm1, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0xc8
        ; Exact mapped bytes C5 FE 7F 8D A0 FE FF FF: vmovdqu ymmword ptr [ebp - 0x160], ymm1
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 FE 08: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x08
        ; Exact mapped bytes 72 49: jb 0x5882e986
        __asm _emit 0x72
        __asm _emit 0x49
        ; Exact mapped bytes C5 FE 6F 1D 60 0E 8C 58: vmovdqu ymm3, ymmword ptr [0x588c0e60]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x1d
        __asm _emit 0x60
        __asm _emit 0x0e
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 66 66 0F 1F 84 00 00 00 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C4 E2 7D 31 54 31 F8: vpmovzxbd ymm2, qword ptr [ecx + esi - 8]
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0x31
        __asm _emit 0x54
        __asm _emit 0x31
        __asm _emit 0xf8
        ; Exact mapped bytes 83 EE 08: sub esi, 8
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x08
        ; Exact mapped bytes C5 FD 72 D2 05: vpsrld ymm0, ymm2, 5
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x72
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes C4 E2 7D 36 C9: vpermd ymm1, ymm0, ymm1
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0x36
        __asm _emit 0xc9
        ; Exact mapped bytes C5 ED DF C3: vpandn ymm0, ymm2, ymm3
        __asm _emit 0xc5
        __asm _emit 0xed
        __asm _emit 0xdf
        __asm _emit 0xc3
        ; Exact mapped bytes C4 E2 75 47 C0: vpsllvd ymm0, ymm1, ymm0
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x75
        __asm _emit 0x47
        __asm _emit 0xc0
        ; Exact mapped bytes C5 FC 50 C0: vmovmskps eax, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0x50
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x5882e9fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C5 FE 6F 8D A0 FE FF FF: vmovdqu ymm1, ymmword ptr [ebp - 0x160]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 FE 08: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x08
        ; Exact mapped bytes 73 CA: jae 0x5882e950
        __asm _emit 0x73
        __asm _emit 0xca
        ; Exact mapped bytes 83 E6 07: and esi, 7
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0x07
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x5882ea1d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes E8 F0 DE 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C4 E2 7D 31 95 D8 FE FF FF: vpmovzxbd ymm2, qword ptr [ebp - 0x128]
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0x31
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FD 72 D2 05: vpsrld ymm0, ymm2, 5
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x72
        __asm _emit 0xd2
        __asm _emit 0x05
        ; Exact mapped bytes C4 E2 7D 36 8D A0 FE FF FF: vpermd ymm1, ymm0, ymmword ptr [ebp - 0x160]
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0x36
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 ED DF 05 60 0E 8C 58: vpandn ymm0, ymm2, ymmword ptr [0x588c0e60]
        __asm _emit 0xc5
        __asm _emit 0xed
        __asm _emit 0xdf
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x0e
        __asm _emit 0x8c
        __asm _emit 0x58
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
        ; Exact mapped bytes C4 E2 75 47 C0: vpsllvd ymm0, ymm1, ymm0
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x75
        __asm _emit 0x47
        __asm _emit 0xc0
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
        ; Exact mapped bytes 74 44: je 0x5882ea1d
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes F3 0F BD C2: lzcnt eax, edx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0xbd
        __asm _emit 0xc2
        ; Exact mapped bytes BE 1F 00 00 00: mov esi, 0x1f
        __asm _emit 0xbe
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B F0: sub esi, eax
        __asm _emit 0x2b
        __asm _emit 0xf0
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 5B 26 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes F3 0F BD C0: lzcnt eax, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0xbd
        __asm _emit 0xc0
        ; Exact mapped bytes 2B F0: sub esi, eax
        __asm _emit 0x2b
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C6 1F: add esi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x1f
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 3A 26 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 83 CE FF: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes C5 F8 77: vzeroupper
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0x77
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 1F 26 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 5F: jne 0x5882ea9c
        __asm _emit 0x75
        __asm _emit 0x5f
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 E0 FE FF FF: lea eax, [ebp - 0x120]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C0 E3 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 E0 FE FF FF: lea eax, [ebp - 0x120]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 43 14: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 8F FD FF FF: call 0x5882e7f0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 1C: je 0x5882ea84
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 8D DC FE FF FF: mov ecx, dword ptr [ebp - 0x124]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        ; Exact mapped bytes 0F B6 44 31 FF: movzx eax, byte ptr [ecx + esi - 1]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0xff
        ; Exact mapped bytes 4E: dec esi
        __asm _emit 0x4e
        ; Exact mapped bytes 80 BC 05 E0 FE FF FF 00: cmp byte ptr [ebp + eax - 0x120], 0
        __asm _emit 0x80
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x5882ea87
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 EC: jne 0x5882ea70
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 83 CE FF: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 BB 25 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 43 14: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x14
        ; Exact mapped bytes 8B 8D DC FE FF FF: mov ecx, dword ptr [ebp - 0x124]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 52 02 00 00: call 0x5882ed00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 93 25 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 A0 FD FF FF: lea eax, [ebp - 0x260]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 39 E3 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4B 14: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x14
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 03 CF: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xcf
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 74 10: je 0x5882eaf3
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 0F B6 07: movzx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x07
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes C6 84 05 A0 FD FF FF 01: mov byte ptr [ebp + eax - 0x260], 1
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x01
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 75 F0: jne 0x5882eae3
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4B 0C: mov ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1A: je 0x5882eb14
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 44 0E FF: movzx eax, byte ptr [esi + ecx - 1]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0xff
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 80 BC 05 A0 FD FF FF 00: cmp byte ptr [ebp + eax - 0x260], 0
        __asm _emit 0x80
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x5882eb17
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 EC: jne 0x5882eb00
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 83 C9 FF: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes E8 2B 25 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
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
