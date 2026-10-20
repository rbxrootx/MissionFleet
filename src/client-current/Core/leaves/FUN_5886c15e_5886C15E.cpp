// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886C15E .. +0x562 bytes.
extern "C" __declspec(naked) void FUN_5886c15e_5886C15E() {
    __asm {
        ; Exact mapped bytes 66 0F 12 25 70 58 8C 58: movlpd xmm4, qword ptr [0x588c5870]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x25
        __asm _emit 0x70
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 1D 80 58 8C 58: movlpd xmm3, qword ptr [0x588c5880]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0x80
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 57 ED: xorpd xmm5, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xed
        ; Exact mapped bytes 66 0F 12 15 78 58 8C 58: movlpd xmm2, qword ptr [0x588c5878]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 C8: movsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 73 D0 2C: psrlq xmm0, 0x2c
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd0
        __asm _emit 0x2c
        ; Exact mapped bytes 66 0F 7E C2: movd edx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc2
        ; Exact mapped bytes F2 0F 10 F9: movsd xmm7, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xf9
        mov ecx, 2000h
        ; Exact mapped bytes 66 0F C4 E9 02: pinsrw xmm5, ecx, 2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes F2 0F 10 C1: movsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xc1
        mov eax, 7ffffh
        and eax, edx
        sub eax, 3fb00h
        cmp eax, 3bbh
        ; Exact mapped bytes 0F 83 CE 00 00 00: jae 0x5886c27e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 59 C9: mulsd xmm1, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc9
        and edx, 0ffffh
        ; Exact mapped bytes F2 0F 5C D9: subsd xmm3, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd9
        ; Exact mapped bytes F2 0F 51 DB: sqrtsd xmm3, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x51
        __asm _emit 0xdb
        ; Exact mapped bytes 66 0F 54 D7: andpd xmm2, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xd7
        and edx, 0fffffffch
        sub edx, 0fb00h
        ; Exact mapped bytes 66 0F 12 0C 55 90 DB 8C 58: movlpd xmm1, qword ptr [edx*2 + 0x588cdb90]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x0c
        __asm _emit 0x55
        __asm _emit 0x90
        __asm _emit 0xdb
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 56 D5: orpd xmm2, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xd5
        ; Exact mapped bytes 66 0F 28 24 95 90 CC 8C 58: movapd xmm4, xmmword ptr [edx*4 + 0x588ccc90]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 F7: movsd xmm6, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xf7
        ; Exact mapped bytes F2 0F 58 FA: addsd xmm7, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfa
        ; Exact mapped bytes F2 0F 5C C2: subsd xmm0, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc2
        ; Exact mapped bytes F2 0F 59 C7: mulsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc7
        ; Exact mapped bytes F2 0F 59 F1: mulsd xmm6, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf1
        ; Exact mapped bytes F2 0F 59 DA: mulsd xmm3, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xda
        ; Exact mapped bytes F2 0F 10 CE: movsd xmm1, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xce
        ; Exact mapped bytes F2 0F 58 F3: addsd xmm6, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf3
        ; Exact mapped bytes F2 0F 5E C6: divsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0F 12 3D 28 58 8C 58: movlpd xmm7, qword ptr [0x588c5828]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 2D 18 58 8C 58: movlpd xmm5, qword ptr [0x588c5818]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x2d
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5C CB: subsd xmm1, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F 73 D2 3F: psrlq xmm2, 0x3f
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd2
        __asm _emit 0x3f
        ; Exact mapped bytes F2 0F 10 D9: movsd xmm3, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 73 F2 3F: psllq xmm2, 0x3f
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0x3f
        ; Exact mapped bytes F2 0F 59 C9: mulsd xmm1, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0F 70 D2 44: pshufd xmm2, xmm2, 0x44
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xd2
        __asm _emit 0x44
        ; Exact mapped bytes 66 0F 12 35 20 58 8C 58: movlpd xmm6, qword ptr [0x588c5820]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 D9: mulsd xmm3, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd9
        ; Exact mapped bytes F2 0F 59 F9: mulsd xmm7, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf9
        sub esp, 10h
        ; Exact mapped bytes 66 0F 57 E2: xorpd xmm4, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xe2
        ; Exact mapped bytes F2 0F 59 EB: mulsd xmm5, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xeb
        ; Exact mapped bytes F2 0F 59 D9: mulsd xmm3, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd9
        ; Exact mapped bytes F2 0F 58 F7: addsd xmm6, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf7
        ; Exact mapped bytes F2 0F 59 F3: mulsd xmm6, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf3
        ; Exact mapped bytes F2 0F 58 EC: addsd xmm5, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xec
        ; Exact mapped bytes 66 0F 70 E4 EE: pshufd xmm4, xmm4, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xe4
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 58 F5: addsd xmm6, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf5
        ; Exact mapped bytes F2 0F 58 C6: addsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc6
        ; Exact mapped bytes F2 0F 58 C4: addsd xmm0, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc4
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
        sub eax, 3bbh
        cmp eax, 43h
        ; Exact mapped bytes 0F 83 19 01 00 00: jae 0x5886c3a5
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 59 C9: mulsd xmm1, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc9
        ; Exact mapped bytes F2 0F 5C D9: subsd xmm3, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd9
        ; Exact mapped bytes F2 0F 51 DB: sqrtsd xmm3, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x51
        __asm _emit 0xdb
        ; Exact mapped bytes 66 0F D7 C7: pmovmskb eax, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc7
        ; Exact mapped bytes 66 0F 73 F0 01: psllq xmm0, 1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0x01
        ; Exact mapped bytes 66 0F 54 3D 10 58 8C 58: andpd xmm7, xmmword ptr [0x588c5810]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 73 D0 01: psrlq xmm0, 1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd0
        __asm _emit 0x01
        ; Exact mapped bytes F2 0F 10 C8: movsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 12 25 80 58 8C 58: movlpd xmm4, qword ptr [0x588c5880]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x25
        __asm _emit 0x80
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 F7: movsd xmm6, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xf7
        ; Exact mapped bytes F2 0F 5C CF: subsd xmm1, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xcf
        ; Exact mapped bytes F2 0F 59 FF: mulsd xmm7, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 58 C6: addsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc6
        ; Exact mapped bytes F2 0F 5C E7: subsd xmm4, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe7
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 10 FB: movsd xmm7, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xfb
        ; Exact mapped bytes 66 0F 54 D3: andpd xmm2, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F 73 F3 02: psllq xmm3, 2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0x02
        ; Exact mapped bytes 66 0F C5 D3 03: pextrw edx, xmm3, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xd3
        __asm _emit 0x03
        ; Exact mapped bytes 66 0F 56 D5: orpd xmm2, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xd5
        sub edx, 0fec0h
        add edx, edx
        ; Exact mapped bytes F2 0F 59 3C 95 90 DB 8C 58: mulsd xmm7, qword ptr [edx*4 + 0x588cdb90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x3c
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xdb
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 F2: mulsd xmm6, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf2
        ; Exact mapped bytes 66 0F 28 1D E0 57 8C 58: movapd xmm3, xmmword ptr [0x588c57e0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 CA: mulsd xmm1, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes F2 0F 59 D2: mulsd xmm2, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd2
        ; Exact mapped bytes F2 0F 5C F7: subsd xmm6, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xf7
        ; Exact mapped bytes F2 0F 58 F1: addsd xmm6, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf1
        ; Exact mapped bytes F2 0F 5C E2: subsd xmm4, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe2
        ; Exact mapped bytes F2 0F 58 FF: addsd xmm7, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 12 2D 18 58 8C 58: movlpd xmm5, qword ptr [0x588c5818]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x2d
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5C E0: subsd xmm4, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe0
        ; Exact mapped bytes F2 0F 58 FE: addsd xmm7, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfe
        ; Exact mapped bytes 66 0F 12 05 28 58 8C 58: movlpd xmm0, qword ptr [0x588c5828]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E E7: divsd xmm4, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xe7
        ; Exact mapped bytes 66 0F 12 15 20 58 8C 58: movlpd xmm2, qword ptr [0x588c5820]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 5C 1C D5 90 CC 8C 58: subpd xmm3, xmmword ptr [edx*8 + 0x588ccc90]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x1c
        __asm _emit 0xd5
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 CE: movsd xmm1, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xce
        ; Exact mapped bytes F2 0F 59 F6: mulsd xmm6, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf6
        and eax, 80h
        shl eax, 8
        ; Exact mapped bytes F2 0F 59 C6: mulsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc6
        ; Exact mapped bytes F2 0F 59 CE: mulsd xmm1, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xce
        sub esp, 10h
        ; Exact mapped bytes F2 0F 59 E9: mulsd xmm5, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe9
        ; Exact mapped bytes F2 0F 59 CE: mulsd xmm1, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xce
        ; Exact mapped bytes F2 0F 58 C2: addsd xmm0, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0F EF F6: pxor xmm6, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xef
        __asm _emit 0xf6
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 58 EB: addsd xmm5, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xeb
        ; Exact mapped bytes 66 0F C4 F0 03: pinsrw xmm6, eax, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0xf0
        __asm _emit 0x03
        ; Exact mapped bytes F2 0F 58 C5: addsd xmm0, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc5
        ; Exact mapped bytes 66 0F 70 DB EE: pshufd xmm3, xmm3, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 5C C4: subsd xmm0, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc4
        ; Exact mapped bytes F2 0F 58 C3: addsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc3
        ; Exact mapped bytes 66 0F 56 C6: orpd xmm0, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc6
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
        add eax, 3bbbh
        cmp eax, 3800h
        ; Exact mapped bytes 73 6A: jae 0x5886c41b
        __asm _emit 0x73
        __asm _emit 0x6a
        ; Exact mapped bytes 66 0F 14 FF: unpcklpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 28 35 30 58 8C 58: movapd xmm6, xmmword ptr [0x588c5830]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 14 CF: unpcklpd xmm1, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xcf
        ; Exact mapped bytes 66 0F 28 15 40 58 8C 58: movapd xmm2, xmmword ptr [0x588c5840]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 25 50 58 8C 58: movapd xmm4, xmmword ptr [0x588c5850]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x25
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 FF: mulpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xff
        sub esp, 10h
        ; Exact mapped bytes 66 0F 59 CF: mulpd xmm1, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xcf
        ; Exact mapped bytes 66 0F 59 F7: mulpd xmm6, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf7
        ; Exact mapped bytes 66 0F 59 FF: mulpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 D9: movsd xmm3, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xd9
        ; Exact mapped bytes F2 0F 59 C9: mulsd xmm1, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0F 58 F2: addpd xmm6, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf2
        ; Exact mapped bytes 66 0F 59 E7: mulpd xmm4, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe7
        ; Exact mapped bytes F2 0F 59 CB: mulsd xmm1, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F 58 F4: addpd xmm6, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf4
        ; Exact mapped bytes 66 0F 59 CE: mulpd xmm1, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xce
        ; Exact mapped bytes 66 0F 70 D1 EE: pshufd xmm2, xmm1, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xd1
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 58 CA: addsd xmm1, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xca
        ; Exact mapped bytes F2 0F 58 C1: addsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
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
        sub eax, 3bfeh
        cmp eax, 2
        ; Exact mapped bytes 0F 83 4F 01 00 00: jae 0x5886c578
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 59 C9: mulsd xmm1, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc9
        ; Exact mapped bytes F2 0F 5C D9: subsd xmm3, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd9
        ; Exact mapped bytes F2 0F 51 DB: sqrtsd xmm3, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x51
        __asm _emit 0xdb
        ; Exact mapped bytes 66 0F C5 C7 03: pextrw eax, xmm7, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc7
        __asm _emit 0x03
        ; Exact mapped bytes 66 0F 54 3D 00 58 8C 58: andpd xmm7, xmmword ptr [0x588c5800]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 70 EB 44: pshufd xmm5, xmm3, 0x44
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes 66 0F 54 1D 00 58 8C 58: andpd xmm3, xmmword ptr [0x588c5800]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 CF: movsd xmm1, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xcf
        ; Exact mapped bytes 66 0F 12 25 80 58 8C 58: movlpd xmm4, qword ptr [0x588c5880]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x25
        __asm _emit 0x80
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 F7: movsd xmm6, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xf7
        ; Exact mapped bytes F2 0F 5C C7: subsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc7
        ; Exact mapped bytes F2 0F 59 FF: mulsd xmm7, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 58 C9: addsd xmm1, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc9
        ; Exact mapped bytes F2 0F 59 C8: mulsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 5C E7: subsd xmm4, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe7
        ; Exact mapped bytes F2 0F 10 F3: movsd xmm6, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xf3
        ; Exact mapped bytes F2 0F 59 DB: mulsd xmm3, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xdb
        ; Exact mapped bytes F2 0F 59 C0: mulsd xmm0, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 5C E1: subsd xmm4, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe1
        ; Exact mapped bytes F2 0F 5C F5: subsd xmm6, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xf5
        ; Exact mapped bytes F2 0F 58 ED: addsd xmm5, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xed
        ; Exact mapped bytes F2 0F 5C E3: subsd xmm4, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe3
        ; Exact mapped bytes 66 0F 28 15 30 58 8C 58: movapd xmm2, xmmword ptr [0x588c5830]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 70 DD EE: pshufd xmm3, xmm5, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xdd
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 5C E0: subsd xmm4, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe0
        ; Exact mapped bytes F2 0F 58 EE: addsd xmm5, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xee
        ; Exact mapped bytes 66 0F 70 FB EE: pshufd xmm7, xmm3, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 58 DB: addsd xmm3, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xdb
        ; Exact mapped bytes F2 0F 59 EE: mulsd xmm5, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 58 E5: addsd xmm4, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xe5
        ; Exact mapped bytes 66 0F 70 F7 EE: pshufd xmm6, xmm7, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xf7
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 5E E3: divsd xmm4, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xe3
        ; Exact mapped bytes 66 0F 28 0D 60 58 8C 58: movapd xmm1, xmmword ptr [0x588c5860]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 2D 40 58 8C 58: movapd xmm5, xmmword ptr [0x588c5840]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 05 50 58 8C 58: movapd xmm0, xmmword ptr [0x588c5850]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 FF: mulpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 DE: movsd xmm3, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xde
        ; Exact mapped bytes 66 0F 59 D7: mulpd xmm2, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0F 59 F7: mulpd xmm6, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf7
        and eax, 8000h
        ; Exact mapped bytes F2 0F 59 CF: mulsd xmm1, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xcf
        ; Exact mapped bytes 66 0F 59 FF: mulpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 58 EA: addpd xmm5, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xea
        ; Exact mapped bytes 66 0F 28 D6: movapd xmm2, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd6
        ; Exact mapped bytes F2 0F 59 F6: mulsd xmm6, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf6
        ; Exact mapped bytes 66 0F 59 F8: mulpd xmm7, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf8
        ; Exact mapped bytes 66 0F 28 05 E0 57 8C 58: movapd xmm0, xmmword ptr [0x588c57e0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 D6: mulsd xmm2, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd6
        ; Exact mapped bytes 66 0F 58 FD: addpd xmm7, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfd
        ; Exact mapped bytes 66 0F 70 E9 EE: pshufd xmm5, xmm1, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xe9
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 59 F2: mulsd xmm6, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf2
        sub esp, 10h
        ; Exact mapped bytes 66 0F 59 FA: mulpd xmm7, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xfa
        ; Exact mapped bytes F2 0F 58 CD: addsd xmm1, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xcd
        ; Exact mapped bytes 66 0F 57 ED: xorpd xmm5, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xed
        ; Exact mapped bytes 66 0F 70 D7 EE: pshufd xmm2, xmm7, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xd7
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 59 CE: mulsd xmm1, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xce
        ; Exact mapped bytes 66 0F 70 F0 EE: pshufd xmm6, xmm0, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 58 FA: addsd xmm7, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfa
        ; Exact mapped bytes F2 0F 10 D3: movsd xmm2, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F C4 E8 03: pinsrw xmm5, eax, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes F2 0F 5C DE: subsd xmm3, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xde
        ; Exact mapped bytes F2 0F 58 C1: addsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 58 F3: addsd xmm6, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf3
        ; Exact mapped bytes F2 0F 58 FC: addsd xmm7, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfc
        ; Exact mapped bytes F2 0F 5C D6: subsd xmm2, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd6
        ; Exact mapped bytes F2 0F 5C C7: subsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc7
        ; Exact mapped bytes F2 0F 5C C2: subsd xmm0, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc2
        ; Exact mapped bytes F2 0F 5C C3: subsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc3
        ; Exact mapped bytes 66 0F 56 C5: orpd xmm0, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc5
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
        add eax, 3fefeh
        cmp eax, 3ff00h
        ; Exact mapped bytes 0F 82 F7 00 00 00: jb 0x5886c67f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 7E C1: movd ecx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 73 D0 20: psrlq xmm0, 0x20
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd0
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 7E C2: movd edx, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc2
        and edx, 7fffffffh
        mov eax, 3ff00000h
        sub eax, edx
        or eax, ecx
        cmp eax, 0
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x5886c632
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 12 54 24 04: movlpd xmm2, qword ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 7E D2: movd edx, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xd2
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
        and ecx, 7fffffffh
        sub edx, 1
        sbb ecx, 7ff00000h
        cmp ecx, 0
        ; Exact mapped bytes 0F 8D 8F 00 00 00: jge 0x5886c667
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 57 C9: xorpd xmm1, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0F 57 C0: xorpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov edx, 7ff0h
        ; Exact mapped bytes 66 0F C4 CA 03: pinsrw xmm1, edx, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0xca
        __asm _emit 0x03
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        mov edx, 3dh
        sub esp, 1ch
        ; Exact mapped bytes 66 0F 13 44 24 10: movlpd qword ptr [esp + 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 0ch], edx
        mov edx, esp
        add edx, 10h
        mov dword ptr [esp + 8], edx
        add edx, 10h
        mov dword ptr [esp + 4], edx
        mov dword ptr [esp], edx
        ; Exact mapped bytes E8 C8 64 00 00: call 0x58872ae0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 12 44 24 10: movlpd xmm0, qword ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        add esp, 1ch
        sub esp, 10h
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
        ; Exact mapped bytes 66 0F 12 0D 70 58 8C 58: movlpd xmm1, qword ptr [0x588c5870]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 15 E0 57 8C 58: movlpd xmm2, qword ptr [0x588c57e0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 05 E8 57 8C 58: movlpd xmm0, qword ptr [0x588c57e8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 C2: addsd xmm0, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0F 55 CF: andnpd xmm1, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xcf
        ; Exact mapped bytes 66 0F 56 C1: orpd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc1
        sub esp, 10h
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
        ; Exact mapped bytes 66 0F 57 F6: xorpd xmm6, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xf6
        ; Exact mapped bytes F2 0F 58 C6: addsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc6
        mov edx, 3f1h
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x5886c5f3
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 12 44 24 04: movlpd xmm0, qword ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 57 F6: xorpd xmm6, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xf6
        sub esp, 10h
        ; Exact mapped bytes F2 0F 10 F8: movsd xmm7, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xf8
        ; Exact mapped bytes 66 0F C5 D0 03: pextrw edx, xmm0, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xd0
        __asm _emit 0x03
        and edx, 7ff0h
        sub edx, 10h
        cmp edx, 7fe0h
        ; Exact mapped bytes 72 0C: jb 0x5886c6b2
        __asm _emit 0x72
        __asm _emit 0x0c
        ; Exact mapped bytes F2 0F 58 F0: addsd xmm6, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf0
        ; Exact mapped bytes 66 0F 56 C6: orpd xmm0, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc6
        ; Exact mapped bytes F2 0F 59 F8: mulsd xmm7, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf8
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
    }
}
