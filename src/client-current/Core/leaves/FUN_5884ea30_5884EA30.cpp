// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884EA30 .. +0x26B bytes.
extern "C" __declspec(naked) void FUN_5884ea30_5884EA30() {
    __asm {
        ; Exact mapped bytes 8B 4C 24 08: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 0F 82 D2 01 00 00: jb 0x5884ec1a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 01 01 00 00: ja 0x5884eb4f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 11: movzx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x11
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes C1 E2 08: shl edx, 8
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x08
        ; Exact mapped bytes 0B D3: or edx, ebx
        __asm _emit 0x0b
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x5884eb4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 6E DA: movd xmm3, edx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xda
        ; Exact mapped bytes F2 0F 70 DB 00: pshuflw xmm3, xmm3, 0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0x00
        ; Exact mapped bytes 0F 16 DB: movlhps xmm3, xmm3
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0xdb
        ; Exact mapped bytes 66 0F EF C0: pxor xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xef
        __asm _emit 0xc0
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 83 CF FF: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 19: movzx ebx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x19
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 1D: je 0x5884ea9a
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes F7 C1 0F 00 00 00: test ecx, 0xf
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 EE: jne 0x5884ea73
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes 66 0F 6F 11: movdqa xmm2, xmmword ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x11
        ; Exact mapped bytes 66 0F 74 D0: pcmpeqb xmm2, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F D7 DA: pmovmskb ebx, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xda
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 05: jne 0x5884ea9a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes BF 0F 00 00 00: mov edi, 0xf
        __asm _emit 0xbf
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 7E DA: movd edx, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xda
        ; Exact mapped bytes BB FF 0F 00 00: mov ebx, 0xfff
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 D8: and ebx, eax
        __asm _emit 0x23
        __asm _emit 0xd8
        ; Exact mapped bytes 81 FB F0 0F 00 00: cmp ebx, 0xff0
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 27: ja 0x5884ead4
        __asm _emit 0x77
        __asm _emit 0x27
        ; Exact mapped bytes F3 0F 6F 08: movdqu xmm1, xmmword ptr [eax]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F EF D2: pxor xmm2, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xef
        __asm _emit 0xd2
        ; Exact mapped bytes 66 0F 74 D1: pcmpeqb xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F 74 CB: pcmpeqb xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F EB CA: por xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F D7 D9: pmovmskb ebx, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xd9
        ; Exact mapped bytes 83 C0 10: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x10
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 D2: je 0x5884ea9e
        __asm _emit 0x74
        __asm _emit 0xd2
        ; Exact mapped bytes 0F BC DB: bsf ebx, ebx
        __asm _emit 0x0f
        __asm _emit 0xbc
        __asm _emit 0xdb
        ; Exact mapped bytes 83 E8 10: sub eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x10
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 0F B6 18: movzx ebx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x18
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 6A 00 00 00: je 0x5884eb49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 75 B8: jne 0x5884ea9e
        __asm _emit 0x75
        __asm _emit 0xb8
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8D 4E 01: lea ecx, [esi + 1]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x01
        ; Exact mapped bytes BB FF 0F 00 00: mov ebx, 0xfff
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 CF: test edi, ecx
        __asm _emit 0x85
        __asm _emit 0xcf
        ; Exact mapped bytes 75 39: jne 0x5884eb2d
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 23 DA: and ebx, edx
        __asm _emit 0x23
        __asm _emit 0xda
        ; Exact mapped bytes 81 FB F0 0F 00 00: cmp ebx, 0xff0
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 2F: ja 0x5884eb2d
        __asm _emit 0x77
        __asm _emit 0x2f
        ; Exact mapped bytes F3 0F 6F 0A: movdqu xmm1, xmmword ptr [edx]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0a
        ; Exact mapped bytes 66 0F 6F 11: movdqa xmm2, xmmword ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x11
        ; Exact mapped bytes 66 0F 74 CA: pcmpeqb xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 74 D0: pcmpeqb xmm2, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F 74 C8: pcmpeqb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F EB D1: por xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F D7 DA: pmovmskb ebx, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xda
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 08: jne 0x5884eb26
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 83 C2 10: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes EB C5: jmp 0x5884eaeb
        __asm _emit 0xeb
        __asm _emit 0xc5
        ; Exact mapped bytes 0F BC DB: bsf ebx, ebx
        __asm _emit 0x0f
        __asm _emit 0xbc
        __asm _emit 0xdb
        ; Exact mapped bytes 03 D3: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xd3
        ; Exact mapped bytes 03 CB: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xcb
        ; Exact mapped bytes 0F B6 19: movzx ebx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x19
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 10: je 0x5884eb44
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 3A 1A: cmp bl, byte ptr [edx]
        __asm _emit 0x3a
        __asm _emit 0x1a
        ; Exact mapped bytes 0F 85 5E FF FF FF: jne 0x5884ea9a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes EB A7: jmp 0x5884eaeb
        __asm _emit 0xeb
        __asm _emit 0xa7
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 80 39 00: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 F7: je 0x5884eb4b
        __asm _emit 0x74
        __asm _emit 0xf7
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes BB FF 0F 00 00: mov ebx, 0xfff
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 D9: and ebx, ecx
        __asm _emit 0x23
        __asm _emit 0xd9
        ; Exact mapped bytes 81 FB F0 0F 00 00: cmp ebx, 0xff0
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 06: ja 0x5884eb6b
        __asm _emit 0x77
        __asm _emit 0x06
        ; Exact mapped bytes F3 0F 6F 01: movdqu xmm0, xmmword ptr [ecx]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x01
        ; Exact mapped bytes EB 22: jmp 0x5884eb8d
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes BB 0F 00 00 00: mov ebx, 0xf
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 31: movzx esi, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x31
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 0F 3A 20 C6 0F: pinsrb xmm0, esi, 0xf
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x20
        __asm _emit 0xc6
        __asm _emit 0x0f
        ; Exact mapped bytes 66 0F 73 D8 01: psrldq xmm0, 1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd8
        __asm _emit 0x01
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 74 09: je 0x5884eb8d
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 EE: je 0x5884eb76
        __asm _emit 0x74
        __asm _emit 0xee
        ; Exact mapped bytes EB E6: jmp 0x5884eb70
        __asm _emit 0xeb
        __asm _emit 0xe6
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 66 0F 7E C2: movd edx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc2
        ; Exact mapped bytes BB FF 0F 00 00: mov ebx, 0xfff
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 D8: and ebx, eax
        __asm _emit 0x23
        __asm _emit 0xd8
        ; Exact mapped bytes 81 FB F0 0F 00 00: cmp ebx, 0xff0
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 10: jbe 0x5884ebb0
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes 0F B6 18: movzx ebx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x18
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 A2: je 0x5884eb49
        __asm _emit 0x74
        __asm _emit 0xa2
        ; Exact mapped bytes 3A D3: cmp dl, bl
        __asm _emit 0x3a
        __asm _emit 0xd3
        ; Exact mapped bytes 74 18: je 0x5884ebc3
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes EB E1: jmp 0x5884eb91
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact mapped bytes 83 C0 10: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 3A 63 40 F0 0C: pcmpistri xmm0, xmmword ptr [eax - 0x10], 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x63
        __asm _emit 0x40
        __asm _emit 0xf0
        __asm _emit 0x0c
        ; Exact mapped bytes 77 D5: ja 0x5884eb91
        __asm _emit 0x77
        __asm _emit 0xd5
        ; Exact mapped bytes 73 8B: jae 0x5884eb49
        __asm _emit 0x73
        __asm _emit 0x8b
        ; Exact mapped bytes 83 E8 10: sub eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x10
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes BB FF 0F 00 00: mov ebx, 0xfff
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 DE: and ebx, esi
        __asm _emit 0x23
        __asm _emit 0xde
        ; Exact mapped bytes 81 FB F0 0F 00 00: cmp ebx, 0xff0
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 29: ja 0x5884ebff
        __asm _emit 0x77
        __asm _emit 0x29
        ; Exact mapped bytes BB FF 0F 00 00: mov ebx, 0xfff
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 DA: and ebx, edx
        __asm _emit 0x23
        __asm _emit 0xda
        ; Exact mapped bytes 81 FB F0 0F 00 00: cmp ebx, 0xff0
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 1A: ja 0x5884ebff
        __asm _emit 0x77
        __asm _emit 0x1a
        ; Exact mapped bytes F3 0F 6F 0A: movdqu xmm1, xmmword ptr [edx]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0a
        ; Exact mapped bytes 83 C6 10: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x10
        ; Exact mapped bytes 83 C2 10: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 3A 63 4E F0 0C: pcmpistri xmm1, xmmword ptr [esi - 0x10], 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x63
        __asm _emit 0x4e
        __asm _emit 0xf0
        __asm _emit 0x0c
        ; Exact mapped bytes 71 92: jno 0x5884eb8a
        __asm _emit 0x71
        __asm _emit 0x92
        ; Exact mapped bytes 79 CD: jns 0x5884ebc7
        __asm _emit 0x79
        __asm _emit 0xcd
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x5884eb4b
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 1A: movzx ebx, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x1a
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 41 FF FF FF: je 0x5884eb4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3A 1E: cmp bl, byte ptr [esi]
        __asm _emit 0x3a
        __asm _emit 0x1e
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x5884eb8a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C6 01: add esi, 1
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x01
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes EB AD: jmp 0x5884ebc7
        __asm _emit 0xeb
        __asm _emit 0xad
        ; Exact mapped bytes 8A 11: mov dl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x11
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 6F 00 00 00: je 0x5884ec95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 71 01: mov dh, byte ptr [ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x71
        __asm _emit 0x01
        ; Exact mapped bytes 84 F6: test dh, dh
        __asm _emit 0x84
        __asm _emit 0xf6
        ; Exact mapped bytes 74 55: je 0x5884ec82
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B F7: mov esi, edi
        __asm _emit 0x8b
        __asm _emit 0xf7
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8A 07: mov al, byte ptr [edi]
        __asm _emit 0x8a
        __asm _emit 0x07
        ; Exact mapped bytes 83 C6 01: add esi, 1
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x01
        ; Exact mapped bytes 3A C2: cmp al, dl
        __asm _emit 0x3a
        __asm _emit 0xc2
        ; Exact mapped bytes 74 17: je 0x5884ec53
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0D: je 0x5884ec4d
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes 83 C6 01: add esi, 1
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x01
        ; Exact mapped bytes 3A C2: cmp al, dl
        __asm _emit 0x3a
        __asm _emit 0xc2
        ; Exact mapped bytes 74 0A: je 0x5884ec53
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 F3: jne 0x5884ec40
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes 83 C6 01: add esi, 1
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x01
        ; Exact mapped bytes 3A C6: cmp al, dh
        __asm _emit 0x3a
        __asm _emit 0xc6
        ; Exact mapped bytes 75 E9: jne 0x5884ec45
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 8D 7E FF: lea edi, [esi - 1]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0xff
        ; Exact mapped bytes 8A 61 02: mov ah, byte ptr [ecx + 2]
        __asm _emit 0x8a
        __asm _emit 0x61
        __asm _emit 0x02
        ; Exact mapped bytes 84 E4: test ah, ah
        __asm _emit 0x84
        __asm _emit 0xe4
        ; Exact mapped bytes 74 28: je 0x5884ec8e
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes 83 C6 02: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x02
        ; Exact mapped bytes 3A C4: cmp al, ah
        __asm _emit 0x3a
        __asm _emit 0xc4
        ; Exact mapped bytes 75 BE: jne 0x5884ec2d
        __asm _emit 0x75
        __asm _emit 0xbe
        ; Exact mapped bytes 8A 41 03: mov al, byte ptr [ecx + 3]
        __asm _emit 0x8a
        __asm _emit 0x41
        __asm _emit 0x03
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 18: je 0x5884ec8e
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8A 66 FF: mov ah, byte ptr [esi - 1]
        __asm _emit 0x8a
        __asm _emit 0x66
        __asm _emit 0xff
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 3A C4: cmp al, ah
        __asm _emit 0x3a
        __asm _emit 0xc4
        ; Exact mapped bytes 74 DF: je 0x5884ec5f
        __asm _emit 0x74
        __asm _emit 0xdf
        ; Exact mapped bytes EB AB: jmp 0x5884ec2d
        __asm _emit 0xeb
        __asm _emit 0xab
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 8A C2: mov al, dl
        __asm _emit 0x8a
        __asm _emit 0xc2
        ; Exact mapped bytes E9 A0 04 00 00: jmp 0x5884f12e
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 47 FF: lea eax, [edi - 1]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
