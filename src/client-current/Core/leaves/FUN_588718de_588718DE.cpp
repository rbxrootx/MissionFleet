// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588718DE .. +0x266 bytes.
extern "C" __declspec(naked) void FUN_588718de_588718DE() {
    __asm {
        mov edx, 0
        ; Exact mapped bytes 66 0F 28 E8: movapd xmm5, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xe8
        ; Exact mapped bytes 66 0F 14 C0: unpcklpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 73 D5 34: psrlq xmm5, 0x34
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd5
        __asm _emit 0x34
        ; Exact mapped bytes 66 0F C5 CD 00: pextrw ecx, xmm5, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xcd
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 28 0D 30 62 8C 58: movapd xmm1, xmmword ptr [0x588c6230]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 15 40 62 8C 58: movapd xmm2, xmmword ptr [0x588c6240]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 1D A0 62 8C 58: movapd xmm3, xmmword ptr [0x588c62a0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x1d
        __asm _emit 0xa0
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 25 50 62 8C 58: movapd xmm4, xmmword ptr [0x588c6250]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x25
        __asm _emit 0x50
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 35 60 62 8C 58: movapd xmm6, xmmword ptr [0x588c6260]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x35
        __asm _emit 0x60
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 54 C1: andpd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 56 C3: orpd xmm0, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc3
        ; Exact mapped bytes 66 0F 58 E0: addpd xmm4, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F C5 C4 00: pextrw eax, xmm4, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc4
        __asm _emit 0x00
        and eax, 7f0h
        ; Exact mapped bytes 66 0F 28 A0 20 0C 8D 58: movapd xmm4, xmmword ptr [eax + 0x588d0c20]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xa0
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 B8 10 08 8D 58: movapd xmm7, xmmword ptr [eax + 0x588d0810]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xb8
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 54 F0: andpd xmm6, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xf0
        ; Exact mapped bytes 66 0F 5C C6: subpd xmm0, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0F 59 F4: mulpd xmm6, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf4
        ; Exact mapped bytes 66 0F 5C F2: subpd xmm6, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xf2
        ; Exact mapped bytes F2 0F 58 FE: addsd xmm7, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfe
        ; Exact mapped bytes 66 0F 59 C4: mulpd xmm0, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc4
        ; Exact mapped bytes 66 0F 28 E0: movapd xmm4, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F 58 C6: addpd xmm0, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc6
        and ecx, 0fffh
        sub ecx, 1
        cmp ecx, 7fdh
        ; Exact mapped bytes 0F 87 BE 00 00 00: ja 0x58871a36
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 3feh
        add ecx, edx
        ; Exact mapped bytes F2 0F 2A F1: cvtsi2sd xmm6, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xf1
        ; Exact mapped bytes 66 0F 14 F6: unpcklpd xmm6, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xf6
        shl ecx, 0ah
        add eax, ecx
        mov ecx, 10h
        mov edx, 0
        cmp eax, 0
        cmove edx, ecx
        ; Exact mapped bytes 66 0F 28 0D F0 62 8C 58: movapd xmm1, xmmword ptr [0x588c62f0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 D8: movapd xmm3, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd8
        ; Exact mapped bytes 66 0F 28 15 00 63 8C 58: movapd xmm2, xmmword ptr [0x588c6300]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x63
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 C8: mulpd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 59 DB: mulpd xmm3, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xdb
        ; Exact mapped bytes 66 0F 58 CA: addpd xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 28 15 10 63 8C 58: movapd xmm2, xmmword ptr [0x588c6310]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 DB: mulsd xmm3, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xdb
        ; Exact mapped bytes 66 0F 28 2D 70 62 8C 58: movapd xmm5, xmmword ptr [0x588c6270]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x2d
        __asm _emit 0x70
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 F5: mulpd xmm6, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf5
        ; Exact mapped bytes 66 0F 28 AA 80 62 8C 58: movapd xmm5, xmmword ptr [edx + 0x588c6280]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xaa
        __asm _emit 0x80
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 54 E5: andpd xmm4, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xe5
        ; Exact mapped bytes 66 0F 58 FE: addpd xmm7, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfe
        ; Exact mapped bytes 66 0F 58 FC: addpd xmm7, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfc
        ; Exact mapped bytes 66 0F 59 C8: mulpd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 59 D8: mulsd xmm3, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd8
        ; Exact mapped bytes 66 0F 58 CA: addpd xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 28 15 20 63 8C 58: movapd xmm2, xmmword ptr [0x588c6320]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x63
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 D0: mulpd xmm2, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F 28 F7: movapd xmm6, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xf7
        ; Exact mapped bytes 66 0F 15 F6: unpckhpd xmm6, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x15
        __asm _emit 0xf6
        ; Exact mapped bytes 66 0F 59 CB: mulpd xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xcb
        sub esp, 10h
        ; Exact mapped bytes 66 0F 28 C1: movapd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 58 CA: addpd xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 15 C0: unpckhpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x15
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 58 C1: addsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 58 C6: addsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc6
        ; Exact mapped bytes F2 0F 58 C7: addsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc7
        ; Exact mapped bytes 66 0F 13 44 24 04: movlpd qword ptr [esp + 4], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 44 24 04: movlpd xmm0, qword ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 28 0D B0 62 8C 58: movapd xmm1, xmmword ptr [0x588c62b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F C2 C8 00: cmpeqsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F C5 C1 00: pextrw eax, xmm1, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc1
        __asm _emit 0x00
        cmp eax, 0
        ; Exact mapped bytes 77 48: ja 0x58871a9b
        __asm _emit 0x77
        __asm _emit 0x48
        cmp ecx, -1
        ; Exact mapped bytes 74 5E: je 0x58871ab6
        __asm _emit 0x74
        __asm _emit 0x5e
        cmp ecx, 7feh
        ; Exact mapped bytes 77 6C: ja 0x58871acc
        __asm _emit 0x77
        __asm _emit 0x6c
        ; Exact mapped bytes 66 0F 12 44 24 04: movlpd xmm0, qword ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 28 0D 30 62 8C 58: movapd xmm1, xmmword ptr [0x588c6230]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 15 A0 62 8C 58: movapd xmm2, xmmword ptr [0x588c62a0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 54 C1: andpd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 56 C2: orpd xmm0, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc2
        ; Exact mapped bytes F2 0F C2 D0 00: cmpeqsd xmm2, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0xc2
        __asm _emit 0xd0
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F C5 C2 00: pextrw eax, xmm2, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc2
        __asm _emit 0x00
        cmp eax, 0
        ; Exact mapped bytes 74 07: je 0x58871a94
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes DD 05 D8 62 8C 58: fld qword ptr [0x588c62d8]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ret
        mov edx, 3e9h
        ; Exact mapped bytes EB 4F: jmp 0x58871aea
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes 66 0F 12 15 A0 62 8C 58: movlpd xmm2, qword ptr [0x588c62a0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E D0: divsd xmm2, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F 12 0D D0 62 8C 58: movlpd xmm1, qword ptr [0x588c62d0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        mov edx, 8
        ; Exact mapped bytes EB 34: jmp 0x58871aea
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes 66 0F 12 0D C0 62 8C 58: movlpd xmm1, qword ptr [0x588c62c0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        mov edx, 0ffffffcch
        ; Exact mapped bytes E9 17 FE FF FF: jmp 0x588718e3
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, 1
        and ecx, 7ffh
        cmp ecx, 7ffh
        ; Exact mapped bytes 73 3A: jae 0x58871b17
        __asm _emit 0x73
        __asm _emit 0x3a
        ; Exact mapped bytes 66 0F 57 C9: xorpd xmm1, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc9
        ; Exact mapped bytes F2 0F 5E C9: divsd xmm1, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc9
        mov edx, 9
        sub esp, 1ch
        ; Exact mapped bytes 66 0F 13 4C 24 10: movlpd qword ptr [esp + 0x10], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 0ch], edx
        mov edx, esp
        add edx, 10h
        mov dword ptr [esp + 8], edx
        add edx, 10h
        mov dword ptr [esp + 4], edx
        mov dword ptr [esp], edx
        ; Exact mapped bytes E8 D1 0F 00 00: call 0x58872ae0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 10: fld qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        add esp, 1ch
        ret
        ; Exact mapped bytes 66 0F 12 54 24 04: movlpd xmm2, qword ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 12 44 24 04: movlpd xmm0, qword ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 7E D0: movd eax, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F 73 D2 20: psrlq xmm2, 0x20
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd2
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 7E D1: movd ecx, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xd1
        and ecx, 0fffffh
        or eax, ecx
        cmp eax, 0
        ; Exact mapped bytes 74 A0: je 0x58871add
        __asm _emit 0x74
        __asm _emit 0xa0
        mov edx, 3e9h
        ; Exact mapped bytes EB A6: jmp 0x58871aea
        __asm _emit 0xeb
        __asm _emit 0xa6
    }
}
