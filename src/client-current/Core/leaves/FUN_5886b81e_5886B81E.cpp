// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B81E .. +0x2A9 bytes.
extern "C" __declspec(naked) void FUN_5886b81e_5886B81E() {
    __asm {
        ; Exact mapped bytes 66 0F 14 FF: unpcklpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 28 D7: movapd xmm2, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0F 54 15 10 55 8C 58: andpd xmm2, xmmword ptr [0x588c5510]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2E 15 38 56 8C 58: ucomisd xmm2, qword ptr [0x588c5638]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 8A 86 02 00 00: jp 0x5886bac2
        __asm _emit 0x0f
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 55 02 00 00: jae 0x5886ba97
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 2F 15 28 56 8C 58: comisd xmm2, xmmword ptr [0x588c5628]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 73 6E: jae 0x5886b8ba
        __asm _emit 0x73
        __asm _emit 0x6e
        ; Exact mapped bytes 66 0F 2F 15 30 56 8C 58: comisd xmm2, xmmword ptr [0x588c5630]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 82 F6 01 00 00: jb 0x5886ba50
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 28 CA: movapd xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 59 CA: mulpd xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 28 D9: movapd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 59 D9: mulpd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 28 2D E0 55 8C 58: movapd xmm5, xmmword ptr [0x588c55e0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x2d
        __asm _emit 0xe0
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D D0 55 8C 58: addpd xmm5, xmmword ptr [0x588c55d0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0xd0
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D C0 55 8C 58: addpd xmm5, xmmword ptr [0x588c55c0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0xc0
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D B0 55 8C 58: addpd xmm5, xmmword ptr [0x588c55b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 E9: mulsd xmm5, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe9
        ; Exact mapped bytes 66 0F 28 DD: movapd xmm3, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xdd
        ; Exact mapped bytes 66 0F C6 DB 01: shufpd xmm3, xmm3, 1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc6
        __asm _emit 0xdb
        __asm _emit 0x01
        ; Exact mapped bytes F2 0F 58 EB: addsd xmm5, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xeb
        ; Exact mapped bytes F2 0F 59 EF: mulsd xmm5, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xef
        ; Exact mapped bytes F2 0F 5C FD: subsd xmm7, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xfd
        ; Exact mapped bytes 66 0F D6 7C 24 04: movq qword ptr [esp + 4], xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
        ; Exact mapped bytes 66 0F 2F 15 20 56 8C 58: comisd xmm2, xmmword ptr [0x588c5620]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 83 90 00 00 00: jae 0x5886b958
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 28 CA: movapd xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 59 CA: mulpd xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 28 D9: movapd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 59 D9: mulpd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 28 2D A0 55 8C 58: movapd xmm5, xmmword ptr [0x588c55a0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D 90 55 8C 58: addpd xmm5, xmmword ptr [0x588c5590]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0x90
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D 80 55 8C 58: addpd xmm5, xmmword ptr [0x588c5580]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D 70 55 8C 58: addpd xmm5, xmmword ptr [0x588c5570]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0x70
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D 60 55 8C 58: addpd xmm5, xmmword ptr [0x588c5560]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0x60
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D 50 55 8C 58: addpd xmm5, xmmword ptr [0x588c5550]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0x50
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D 40 55 8C 58: addpd xmm5, xmmword ptr [0x588c5540]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D 30 55 8C 58: addpd xmm5, xmmword ptr [0x588c5530]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 E9: mulsd xmm5, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe9
        ; Exact mapped bytes 66 0F 28 DD: movapd xmm3, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xdd
        ; Exact mapped bytes 66 0F C6 DB 01: shufpd xmm3, xmm3, 1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc6
        __asm _emit 0xdb
        __asm _emit 0x01
        ; Exact mapped bytes F2 0F 58 EB: addsd xmm5, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xeb
        ; Exact mapped bytes F2 0F 59 EF: mulsd xmm5, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xef
        ; Exact mapped bytes F2 0F 5C FD: subsd xmm7, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xfd
        ; Exact mapped bytes 66 0F D6 7C 24 04: movq qword ptr [esp + 4], xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
        ; Exact mapped bytes F3 0F 7E F7: movq xmm6, xmm7
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xf7
        ; Exact mapped bytes 66 0F 57 F2: xorpd xmm6, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xf2
        ; Exact mapped bytes 66 0F 2F 15 18 56 8C 58: comisd xmm2, xmmword ptr [0x588c5618]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 73 4F: jae 0x5886b9b9
        __asm _emit 0x73
        __asm _emit 0x4f
        ; Exact mapped bytes F3 0F 7E 05 10 56 8C 58: movq xmm0, qword ptr [0x588c5610]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 7E 2D F0 55 8C 58: movq xmm5, qword ptr [0x588c55f0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x2d
        __asm _emit 0xf0
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 7E DA: movq xmm3, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xda
        ; Exact mapped bytes F2 0F 58 D8: addsd xmm3, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xd8
        ; Exact mapped bytes 66 0F 73 D3 2C: psrlq xmm3, 0x2c
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd3
        __asm _emit 0x2c
        ; Exact mapped bytes 66 0F FA DD: psubd xmm3, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xdd
        ; Exact mapped bytes 66 0F 7E D8: movd eax, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xd8
        lea eax, [eax + eax*2]
        ; Exact mapped bytes F3 0F 7E 2C C5 90 AC 8C 58: movq xmm5, qword ptr [eax*8 + 0x588cac90]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x2c
        __asm _emit 0xc5
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 7E DA: movq xmm3, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xda
        ; Exact mapped bytes F2 0F 5C D5: subsd xmm2, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd5
        ; Exact mapped bytes F2 0F 59 DD: mulsd xmm3, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xdd
        ; Exact mapped bytes F2 0F 58 1D 08 56 8C 58: addsd xmm3, qword ptr [0x588c5608]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E D3: divsd xmm2, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F 14 D2: unpcklpd xmm2, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xd2
        ; Exact mapped bytes EB 19: jmp 0x5886b9d2
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, 300h
        ; Exact mapped bytes F3 0F 7E C2: movq xmm0, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc2
        ; Exact mapped bytes F3 0F 7E 15 00 56 8C 58: movq xmm2, qword ptr [0x588c5600]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E D0: divsd xmm2, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F 14 D2: unpcklpd xmm2, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xd2
        ; Exact mapped bytes F3 0F 7E 04 C5 80 AC 8C 58: movq xmm0, qword ptr [eax*8 + 0x588cac80]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x80
        __asm _emit 0xac
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 7E 24 C5 88 AC 8C 58: movq xmm4, qword ptr [eax*8 + 0x588cac88]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x24
        __asm _emit 0xc5
        __asm _emit 0x88
        __asm _emit 0xac
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 CA: movapd xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 59 CA: mulpd xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 28 D9: movapd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 59 D9: mulpd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 28 2D E0 55 8C 58: movapd xmm5, xmmword ptr [0x588c55e0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x2d
        __asm _emit 0xe0
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D D0 55 8C 58: addpd xmm5, xmmword ptr [0x588c55d0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0xd0
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D C0 55 8C 58: addpd xmm5, xmmword ptr [0x588c55c0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0xc0
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 EB: mulpd xmm5, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F 58 2D B0 55 8C 58: addpd xmm5, xmmword ptr [0x588c55b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 E9: mulsd xmm5, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe9
        ; Exact mapped bytes 66 0F 28 DD: movapd xmm3, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xdd
        ; Exact mapped bytes 66 0F C6 DB 01: shufpd xmm3, xmm3, 1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc6
        __asm _emit 0xdb
        __asm _emit 0x01
        ; Exact mapped bytes F2 0F 58 EB: addsd xmm5, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xeb
        ; Exact mapped bytes F2 0F 59 EA: mulsd xmm5, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xea
        ; Exact mapped bytes F2 0F 5C EC: subsd xmm5, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xec
        ; Exact mapped bytes F2 0F 5C EA: subsd xmm5, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xea
        ; Exact mapped bytes F2 0F 5C C5: subsd xmm0, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc5
        ; Exact mapped bytes 66 0F 56 C6: orpd xmm0, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0F D6 44 24 04: movq qword ptr [esp + 4], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
        ; Exact mapped bytes 66 0F 2F 15 F8 55 8C 58: comisd xmm2, xmmword ptr [0x588c55f8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 75 05: jne 0x5886ba5f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
        ; Exact mapped bytes 66 0F 2F 15 40 56 8C 58: comisd xmm2, xmmword ptr [0x588c5640]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 73 1D: jae 0x5886ba86
        __asm _emit 0x73
        __asm _emit 0x1d
        ; Exact mapped bytes DD 05 48 56 8C 58: fld qword ptr [0x588c5648]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 48 56 8C 58: fmul qword ptr [0x588c5648]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes DD 04 24: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x24
        add esp, 8
        ; Exact mapped bytes DC 44 24 04: fadd qword ptr [esp + 4]
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
        ; Exact mapped bytes DD 05 48 56 8C 58: fld qword ptr [0x588c5648]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 48 56 8C 58: fmul qword ptr [0x588c5648]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes DC 44 24 04: fadd qword ptr [esp + 4]
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
        ; Exact mapped bytes F3 0F 7E C2: movq xmm0, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc2
        ; Exact mapped bytes F3 0F 7E 1D 00 55 8C 58: movq xmm3, qword ptr [0x588c5500]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 54 C3: andpd xmm0, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xc3
        ; Exact mapped bytes 66 0F 2E C3: ucomisd xmm0, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0xc3
        ; Exact mapped bytes 7A 15: jp 0x5886bac2
        __asm _emit 0x7a
        __asm _emit 0x15
        mov eax, dword ptr [esp + 8]
        shr eax, 1fh
        ; Exact mapped bytes DD 05 48 56 8C 58: fld qword ptr [0x588c5648]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes DC 04 C5 20 55 8C 58: fadd qword ptr [eax*8 + 0x588c5520]
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x20
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x58
        ret
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
    }
}
