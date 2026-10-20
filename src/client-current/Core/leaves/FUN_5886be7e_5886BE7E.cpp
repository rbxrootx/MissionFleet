// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886BE7E .. +0x1A9 bytes.
extern "C" __declspec(naked) void FUN_5886be7e_5886BE7E() {
    __asm {
        ; Exact mapped bytes 66 0F C5 C0 03: pextrw eax, xmm0, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc0
        __asm _emit 0x03
        ; Exact mapped bytes 66 25 FF 7F: and ax, 0x7fff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 66 2D 30 30: sub ax, 0x3030
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0x30
        ; Exact mapped bytes 66 3D C5 10: cmp ax, 0x10c5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xc5
        __asm _emit 0x10
        ; Exact mapped bytes 0F 87 42 01 00 00: ja 0x5886bfd7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 12 0D 60 57 8C 58: movlpd xmm1, qword ptr [0x588c5760]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 C8: mulsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 12 15 68 57 8C 58: movlpd xmm2, qword ptr [0x588c5768]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2D D1: cvtsd2si edx, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2d
        __asm _emit 0xd1
        ; Exact mapped bytes F2 0F 58 CA: addsd xmm1, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 12 1D 80 57 8C 58: movlpd xmm3, qword ptr [0x588c5780]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0x80
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5C CA: subsd xmm1, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 28 15 70 57 8C 58: movapd xmm2, xmmword ptr [0x588c5770]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 D9: mulsd xmm3, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 14 C9: unpcklpd xmm1, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xc9
        add edx, 1c7600h
        ; Exact mapped bytes F2 0F 10 E0: movsd xmm4, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xe0
        and edx, 3fh
        ; Exact mapped bytes 66 0F 28 2D 50 57 8C 58: movapd xmm5, xmmword ptr [0x588c5750]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x2d
        __asm _emit 0x50
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 8D 05 90 C4 8C 58: lea eax, [0x588cc490]
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x8c
        __asm _emit 0x58
        shl edx, 5
        add eax, edx
        ; Exact mapped bytes 66 0F 59 D1: mulpd xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd1
        ; Exact mapped bytes F2 0F 5C C3: subsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc3
        ; Exact mapped bytes F2 0F 59 0D 88 57 8C 58: mulsd xmm1, qword ptr [0x588c5788]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5C E3: subsd xmm4, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe3
        ; Exact mapped bytes 66 0F 12 78 08: movlpd xmm7, qword ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 14 C0: unpcklpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 10 DC: movsd xmm3, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 5C E2: subsd xmm4, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0F 59 E8: mulpd xmm5, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe8
        ; Exact mapped bytes 66 0F 5C C2: subpd xmm0, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0F 28 35 30 57 8C 58: movapd xmm6, xmmword ptr [0x588c5730]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 FC: mulsd xmm7, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xfc
        ; Exact mapped bytes F2 0F 5C DC: subsd xmm3, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xdc
        ; Exact mapped bytes 66 0F 59 E8: mulpd xmm5, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe8
        ; Exact mapped bytes 66 0F 59 C0: mulpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 5C DA: subsd xmm3, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xda
        ; Exact mapped bytes 66 0F 28 10: movapd xmm2, xmmword ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x10
        ; Exact mapped bytes F2 0F 5C CB: subsd xmm1, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F 12 58 18: movlpd xmm3, qword ptr [eax + 0x18]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes F2 0F 58 D3: addsd xmm2, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xd3
        ; Exact mapped bytes F2 0F 5C FA: subsd xmm7, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xfa
        ; Exact mapped bytes F2 0F 59 D4: mulsd xmm2, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd4
        ; Exact mapped bytes 66 0F 59 F0: mulpd xmm6, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 59 DC: mulsd xmm3, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xdc
        ; Exact mapped bytes 66 0F 59 D0: mulpd xmm2, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F 59 C0: mulpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 58 2D 40 57 8C 58: addpd xmm5, xmmword ptr [0x588c5740]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 20: mulsd xmm4, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 58 35 20 57 8C 58: addpd xmm6, xmmword ptr [0x588c5720]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 E8: mulpd xmm5, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 10 C3: movsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xc3
        ; Exact mapped bytes F2 0F 58 58 08: addsd xmm3, qword ptr [eax + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 59 CF: mulsd xmm1, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xcf
        ; Exact mapped bytes F2 0F 10 FC: movsd xmm7, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xfc
        ; Exact mapped bytes F2 0F 58 E3: addsd xmm4, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xe3
        ; Exact mapped bytes 66 0F 58 F5: addpd xmm6, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf5
        ; Exact mapped bytes 66 0F 12 68 08: movlpd xmm5, qword ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x68
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 5C EB: subsd xmm5, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xeb
        ; Exact mapped bytes F2 0F 5C DC: subsd xmm3, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 58 48 10: addsd xmm1, qword ptr [eax + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 59 F2: mulpd xmm6, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf2
        ; Exact mapped bytes F2 0F 58 E8: addsd xmm5, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 58 DF: addsd xmm3, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xdf
        ; Exact mapped bytes F2 0F 58 CD: addsd xmm1, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xcd
        ; Exact mapped bytes F2 0F 58 CB: addsd xmm1, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xcb
        ; Exact mapped bytes F2 0F 58 CE: addsd xmm1, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xce
        ; Exact mapped bytes 66 0F 15 F6: unpckhpd xmm6, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x15
        __asm _emit 0xf6
        ; Exact mapped bytes F2 0F 58 CE: addsd xmm1, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xce
        sub esp, 10h
        ; Exact mapped bytes F2 0F 58 E1: addsd xmm4, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xe1
        ; Exact mapped bytes 66 0F 13 64 24 04: movlpd qword ptr [esp + 4], xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        add esp, 10h
        ret
        ; Exact mapped bytes 7F 49: jg 0x5886c022
        __asm _emit 0x7f
        __asm _emit 0x49
        sub esp, 10h
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 3D FD 0C: cmp ax, 0xcfd
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xfd
        __asm _emit 0x0c
        ; Exact mapped bytes 75 16: jne 0x5886bffc
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes F2 0F 59 05 A0 57 8C 58: mulsd xmm0, qword ptr [0x588c57a0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
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
        ; Exact mapped bytes 66 0F 12 1D 90 57 8C 58: movlpd xmm3, qword ptr [0x588c5790]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0x90
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 D8: mulsd xmm3, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 5C D8: subsd xmm3, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 59 1D 98 57 8C 58: mulsd xmm3, qword ptr [0x588c5798]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
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
        ; Exact mapped bytes E9 98 FD FF FF: jmp 0x5886bdbf
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
