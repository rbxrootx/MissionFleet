// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58862760 .. +0xB47 bytes.
extern "C" __declspec(naked) void FUN_58862760_58862760() {
    __asm {
        sub esp, 10h
        ; Exact mapped bytes 0F AE 5C 24 04: stmxcsr dword ptr [esp + 4]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        mov eax, dword ptr [esp + 4]
        and eax, 7f80h
        cmp eax, 1f80h
        ; Exact mapped bytes 0F 85 0F 0B 00 00: jne 0x5886328b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 3C 24: fnstcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 04 24: mov ax, word ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        ; Exact mapped bytes 66 83 F8 7F: cmp ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x7f
        ; Exact mapped bytes 0F 85 FA 0A 00 00: jne 0x5886328b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 13 04 24: movlpd qword ptr [esp], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes 66 0F 13 4C 24 08: movlpd qword ptr [esp + 8], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 12 3D F0 40 8C 58: movlpd xmm7, qword ptr [0x588c40f0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 15 00 41 8C 58: movlpd xmm2, qword ptr [0x588c4100]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 54 F8: andpd xmm7, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 10 E0: movsd xmm4, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F 73 D0 2C: psrlq xmm0, 0x2c
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd0
        __asm _emit 0x2c
        ; Exact mapped bytes 66 0F C5 C0 00: pextrw eax, xmm0, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc0
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 56 FA: orpd xmm7, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xfa
        ; Exact mapped bytes 66 0F C5 CC 03: pextrw ecx, xmm4, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xcc
        __asm _emit 0x03
        and eax, 0ffh
        add eax, 1
        and eax, 1feh
        ; Exact mapped bytes F2 0F 59 3C 85 50 65 8C 58: mulsd xmm7, qword ptr [eax*4 + 0x588c6550]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x3c
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x65
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 2C 85 50 65 8C 58: movlpd xmm5, qword ptr [eax*4 + 0x588c6550]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x2c
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x65
        __asm _emit 0x8c
        __asm _emit 0x58
        add eax, eax
        ; Exact mapped bytes 66 0F 28 34 85 60 69 8C 58: movapd xmm6, xmmword ptr [eax*4 + 0x588c6960]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x69
        __asm _emit 0x8c
        __asm _emit 0x58
        mov edx, 7fefh
        sub edx, ecx
        sub ecx, 10h
        or ecx, edx
        cmp ecx, 80000000h
        ; Exact mapped bytes 0F 83 CE 02 00 00: jae 0x58862ad7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0
        mov edx, 3fe7fh
        ; Exact mapped bytes 66 0F 6E CA: movd xmm1, edx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F FB C1: psubq xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfb
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 73 D0 08: psrlq xmm0, 8
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F E6 C0: cvtdq2pd xmm0, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0xe6
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 12 0D 48 41 8C 58: movlpd xmm1, qword ptr [0x588c4148]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 DF: movsd xmm3, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xdf
        ; Exact mapped bytes 66 0F 73 D7 26: psrlq xmm7, 0x26
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd7
        __asm _emit 0x26
        ; Exact mapped bytes 66 0F C5 C7 00: pextrw eax, xmm7, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc7
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 54 25 F0 40 8C 58: andpd xmm4, xmmword ptr [0x588c40f0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x25
        __asm _emit 0xf0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        and eax, 0ffh
        add eax, 1
        and eax, 1feh
        ; Exact mapped bytes F2 0F 59 1C 85 70 71 8C 58: mulsd xmm3, qword ptr [eax*4 + 0x588c7170]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x71
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 2C 85 70 71 8C 58: mulsd xmm5, qword ptr [eax*4 + 0x588c7170]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x2c
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x71
        __asm _emit 0x8c
        __asm _emit 0x58
        add eax, eax
        ; Exact mapped bytes 66 0F 58 34 85 80 75 8C 58: addpd xmm6, xmmword ptr [eax*4 + 0x588c7580]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 56 25 00 41 8C 58: orpd xmm4, xmmword ptr [0x588c4100]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 F0: addsd xmm6, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf0
        ; Exact mapped bytes 66 0F 54 CC: andpd xmm1, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xcc
        ; Exact mapped bytes F2 0F 10 D3: movsd xmm2, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F 73 D3 1F: psrlq xmm3, 0x1f
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd3
        __asm _emit 0x1f
        ; Exact mapped bytes 66 0F C5 C3 00: pextrw eax, xmm3, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc3
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 12 05 48 41 8C 58: movlpd xmm0, qword ptr [0x588c4148]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5C E1: subsd xmm4, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe1
        ; Exact mapped bytes 66 0F 12 3D 50 41 8C 58: movlpd xmm7, qword ptr [0x588c4150]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        and eax, 1ffh
        add eax, 1
        and eax, 3feh
        ; Exact mapped bytes F2 0F 59 2C 85 90 7D 8C 58: mulsd xmm5, qword ptr [eax*4 + 0x588c7d90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x2c
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x7d
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 14 85 90 7D 8C 58: mulsd xmm2, qword ptr [eax*4 + 0x588c7d90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x7d
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 58 34 C5 A0 85 8C 58: addpd xmm6, xmmword ptr [eax*8 + 0x588c85a0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x34
        __asm _emit 0xc5
        __asm _emit 0xa0
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 54 C5: andpd xmm0, xmm5
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xc5
        ; Exact mapped bytes F2 0F 5C E8: subsd xmm5, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 58 FA: addsd xmm7, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfa
        ; Exact mapped bytes F2 0F 10 D8: movsd xmm3, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 59 CD: mulsd xmm1, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xcd
        ; Exact mapped bytes F2 0F 59 DC: mulsd xmm3, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 5C D0: subsd xmm2, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd0
        ; Exact mapped bytes F2 0F 59 E5: mulsd xmm4, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe5
        ; Exact mapped bytes F2 0F 10 C6: movsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xc6
        ; Exact mapped bytes F2 0F 5C D1: subsd xmm2, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd1
        ; Exact mapped bytes F2 0F 58 F7: addsd xmm6, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xf7
        ; Exact mapped bytes 66 0F 12 4C 24 08: movlpd xmm1, qword ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F C5 C1 03: pextrw eax, xmm1, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc1
        __asm _emit 0x03
        ; Exact mapped bytes F2 0F 5C D3: subsd xmm2, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd3
        ; Exact mapped bytes F2 0F 5C C6: subsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0F 12 1D 48 41 8C 58: movlpd xmm3, qword ptr [0x588c4148]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0x48
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F C5 D6 03: pextrw edx, xmm6, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xd6
        __asm _emit 0x03
        ; Exact mapped bytes F2 0F 5C D4: subsd xmm2, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd4
        ; Exact mapped bytes F2 0F 10 E6: movsd xmm4, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xe6
        ; Exact mapped bytes F2 0F 58 C7: addsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc7
        ; Exact mapped bytes F2 0F 5C FA: subsd xmm7, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xfa
        ; Exact mapped bytes F2 0F 5C F2: subsd xmm6, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xf2
        ; Exact mapped bytes 66 0F 14 FF: unpcklpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xff
        and eax, 7ff0h
        cmp eax, 7ff0h
        ; Exact mapped bytes 0F 83 1A 05 00 00: jae 0x58862e58
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 7ff0h
        sub eax, 3ff0h
        add eax, edx
        mov edx, 40a0h
        sub edx, eax
        sub eax, 3c70h
        or edx, eax
        cmp edx, 80000000h
        ; Exact mapped bytes 0F 83 AF 08 00 00: jae 0x58863214
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xaf
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 5C E6: subsd xmm4, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xe6
        ; Exact mapped bytes F2 0F 5C D4: subsd xmm2, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd4
        ; Exact mapped bytes 66 0F 12 25 48 41 8C 58: movlpd xmm4, qword ptr [0x588c4148]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x25
        __asm _emit 0x48
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 54 D9: andpd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 54 E6: andpd xmm4, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xe6
        ; Exact mapped bytes F2 0F 5C C2: subsd xmm0, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0F 57 D2: xorpd xmm2, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xd2
        mov edx, 4060h
        ; Exact mapped bytes 66 0F C4 D2 03: pinsrw xmm2, edx, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0xd2
        __asm _emit 0x03
        ; Exact mapped bytes F2 0F 10 EB: movsd xmm5, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xeb
        ; Exact mapped bytes F2 0F 59 DC: mulsd xmm3, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 5C F4: subsd xmm6, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xf4
        ; Exact mapped bytes F2 0F 5C CD: subsd xmm1, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xcd
        ; Exact mapped bytes F2 0F 59 DA: mulsd xmm3, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xda
        ; Exact mapped bytes F2 0F 59 EE: mulsd xmm5, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xee
        ; Exact mapped bytes 66 0F 28 15 B0 95 8C 58: movapd xmm2, xmmword ptr [0x588c95b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 E1: mulsd xmm4, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe1
        ; Exact mapped bytes F2 0F 2D C3: cvtsd2si eax, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2d
        __asm _emit 0xc3
        ; Exact mapped bytes F2 0F 59 F1: mulsd xmm6, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf1
        ; Exact mapped bytes 66 0F 28 0D C0 95 8C 58: movapd xmm1, xmmword ptr [0x588c95c0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 EC: addsd xmm5, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xec
        ; Exact mapped bytes 66 0F 70 E6 EE: pshufd xmm4, xmm6, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xe6
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 58 EE: addsd xmm5, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xee
        mov edx, 1ff7fh
        sub edx, eax
        add eax, 1e1ffh
        or edx, eax
        sub eax, 1e1ffh
        cmp edx, 0
        ; Exact mapped bytes 0F 8E C6 05 00 00: jle 0x58862fb2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, eax
        and eax, 7fh
        and ecx, 0ffffff80h
        add ecx, 1ff80h
        ; Exact mapped bytes F2 0F 58 E0: addsd xmm4, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xe0
        ; Exact mapped bytes F2 0F 10 C3: movsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xc3
        ; Exact mapped bytes F2 0F 58 1D E0 40 8C 58: addsd xmm3, qword ptr [0x588c40e0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 D7: mulpd xmm2, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd7
        ; Exact mapped bytes F2 0F 5C 1D E0 40 8C 58: subsd xmm3, qword ptr [0x588c40e0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 FF: mulpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5C C3: subsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc3
        add eax, eax
        add eax, eax
        add eax, eax
        add eax, eax
        ; Exact mapped bytes 66 0F 28 98 D0 95 8C 58: movapd xmm3, xmmword ptr [eax + 0x588c95d0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x98
        __asm _emit 0xd0
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 35 20 41 8C 58: movapd xmm6, xmmword ptr [0x588c4120]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 CF: mulpd xmm1, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xcf
        ; Exact mapped bytes 66 0F 58 D1: addpd xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F 70 CA EE: pshufd xmm1, xmm2, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xca
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 59 D7: mulsd xmm2, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0F 57 FF: xorpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xff
        mov edx, 3f80h
        ; Exact mapped bytes F2 0F 58 D1: addsd xmm2, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F C4 FA 03: pinsrw xmm7, edx, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0xfa
        __asm _emit 0x03
        ; Exact mapped bytes F2 0F 58 D4: addsd xmm2, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xd4
        ; Exact mapped bytes 66 0F 12 25 40 41 8C 58: movlpd xmm4, qword ptr [0x588c4140]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x25
        __asm _emit 0x40
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 6E C9: movd xmm1, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc9
        ; Exact mapped bytes F2 0F 59 54 24 08: mulsd xmm2, qword ptr [esp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 59 C7: mulsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc7
        ; Exact mapped bytes 66 0F 73 F1 2D: psllq xmm1, 0x2d
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0x2d
        ; Exact mapped bytes 66 0F 70 C9 44: pshufd xmm1, xmm1, 0x44
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xc9
        __asm _emit 0x44
        ; Exact mapped bytes 66 0F 28 3D 30 41 8C 58: movapd xmm7, xmmword ptr [0x588c4130]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 EA: addsd xmm5, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xea
        ; Exact mapped bytes 66 0F 59 D9: mulpd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd9
        ; Exact mapped bytes F2 0F 58 C5: addsd xmm0, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc5
        ; Exact mapped bytes 66 0F 14 C0: unpcklpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 59 F0: mulpd xmm6, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 59 E0: mulsd xmm4, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F 59 C0: mulpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 58 FE: addpd xmm7, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfe
        ; Exact mapped bytes 66 0F 59 F8: mulpd xmm7, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 59 C3: mulsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc3
        ; Exact mapped bytes 66 0F 70 F7 EE: pshufd xmm6, xmm7, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xf7
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 59 C7: mulsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc7
        ; Exact mapped bytes 66 0F 70 EB EE: pshufd xmm5, xmm3, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xeb
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 59 F3: mulsd xmm6, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf3
        ; Exact mapped bytes F2 0F 59 E3: mulsd xmm4, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe3
        ; Exact mapped bytes F2 0F 58 C5: addsd xmm0, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc5
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
        ; Exact mapped bytes F2 0F 58 C3: addsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc3
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 4C 24 08: movlpd xmm1, qword ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 12 1D 10 41 8C 58: movlpd xmm3, qword ptr [0x588c4110]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 7E C8: movd eax, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 10 D1: movsd xmm2, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F 54 CB: andpd xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F 73 D1 20: psrlq xmm1, 0x20
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd1
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 7E C9: movd ecx, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc9
        cmp ecx, 7ff00000h
        ; Exact mapped bytes 0F 83 D8 00 00 00: jae 0x58862bde
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, ecx
        cmp eax, 0
        ; Exact mapped bytes 0F 84 1A 04 00 00: je 0x58862f2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0
        ; Exact mapped bytes 0F 8D 00 01 00 00: jge 0x58862c1a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        neg edx
        add edx, 7fefh
        ; Exact mapped bytes 66 0F 73 F3 34: psllq xmm3, 0x34
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0x34
        ; Exact mapped bytes 66 0F 56 D3: orpd xmm2, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xd3
        mov ecx, 3f3h
        ; Exact mapped bytes 66 0F 6E D9: movd xmm3, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 73 D1 14: psrlq xmm1, 0x14
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd1
        __asm _emit 0x14
        ; Exact mapped bytes 66 0F FA CB: psubd xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F EF DB: pxor xmm3, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xef
        __asm _emit 0xdb
        ; Exact mapped bytes 66 0F EE CB: pmaxsw xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xee
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F F3 D1: psllq xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F 76 D3: pcmpeqd xmm2, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x76
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F D7 C2: pmovmskb eax, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc2
        mov ecx, edx
        and edx, 7fffh
        cmp edx, 7ff0h
        ; Exact mapped bytes 0F 83 A2 01 00 00: jae 0x58862d07
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        cmp eax, 0ffh
        ; Exact mapped bytes 0F 85 9D 02 00 00: jne 0x58862e12
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 12 4C 24 08: movlpd xmm1, qword ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 28 D1: movapd xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd1
        mov ecx, 3f4h
        ; Exact mapped bytes 66 0F 6E D9: movd xmm3, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 54 0D 10 41 8C 58: andpd xmm1, xmmword ptr [0x588c4110]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 73 D1 34: psrlq xmm1, 0x34
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd1
        __asm _emit 0x34
        ; Exact mapped bytes 66 0F FA CB: psubd xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F 12 1D 70 41 8C 58: movlpd xmm3, qword ptr [0x588c4170]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0x70
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F F3 D1: psllq xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F 76 D3: pcmpeqd xmm2, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x76
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F D7 C2: pmovmskb eax, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc2
        and eax, 0ffh
        mov ecx, 3ff01h
        add ecx, eax
        and ecx, 40000h
        cmp edx, 10h
        ; Exact mapped bytes 72 5B: jb 0x58862c1f
        __asm _emit 0x72
        __asm _emit 0x5b
        mov edx, 0bfe7fh
        ; Exact mapped bytes 66 0F 12 1D F0 40 8C 58: movlpd xmm3, qword ptr [0x588c40f0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 15 00 41 8C 58: movlpd xmm2, qword ptr [0x588c4100]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes E9 35 FC FF FF: jmp 0x58862813
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 12 3C 24: movlpd xmm7, qword ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x3c
        __asm _emit 0x24
        ; Exact mapped bytes 66 0F 28 E7: movapd xmm4, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xe7
        ; Exact mapped bytes 66 0F 7E FA: movd edx, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xfa
        ; Exact mapped bytes 66 0F 73 D7 20: psrlq xmm7, 0x20
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd7
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 7E F8: movd eax, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xf8
        mov ecx, eax
        and eax, 7fffffffh
        cmp eax, 7ff00000h
        ; Exact mapped bytes 0F 82 8F 02 00 00: jb 0x58862e95
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 F4 01 00 00: ja 0x58862e00
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0
        ; Exact mapped bytes 0F 87 EB 01 00 00: ja 0x58862e00
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7B 02 00 00: jmp 0x58862e95
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0
        ; Exact mapped bytes 66 0F 57 C0: xorpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov eax, 43f0h
        ; Exact mapped bytes 66 0F C4 C0 03: pinsrw xmm0, eax, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0xc0
        __asm _emit 0x03
        ; Exact mapped bytes 66 0F 12 3D F0 40 8C 58: movlpd xmm7, qword ptr [0x588c40f0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 15 00 41 8C 58: movlpd xmm2, qword ptr [0x588c4100]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 C4: mulsd xmm0, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc4
        ; Exact mapped bytes 66 0F 7E E2: movd edx, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0F 73 D4 20: psrlq xmm4, 0x20
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd4
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 7E E0: movd eax, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xe0
        cmp edx, 0
        ; Exact mapped bytes 74 52: je 0x58862ca5
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 66 0F 54 F8: andpd xmm7, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 10 E0: movsd xmm4, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F 54 05 10 41 8C 58: andpd xmm0, xmmword ptr [0x588c4110]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 73 D0 2C: psrlq xmm0, 0x2c
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd0
        __asm _emit 0x2c
        ; Exact mapped bytes 66 0F C5 C0 00: pextrw eax, xmm0, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc0
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 56 FA: orpd xmm7, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xfa
        and eax, 0ffh
        add eax, 1
        and eax, 1feh
        ; Exact mapped bytes F2 0F 59 3C 85 50 65 8C 58: mulsd xmm7, qword ptr [eax*4 + 0x588c6550]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x3c
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x65
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 2C 85 50 65 8C 58: movlpd xmm5, qword ptr [eax*4 + 0x588c6550]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x2c
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x65
        __asm _emit 0x8c
        __asm _emit 0x58
        add eax, eax
        ; Exact mapped bytes 66 0F 28 34 85 60 69 8C 58: movapd xmm6, xmmword ptr [eax*4 + 0x588c6960]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x69
        __asm _emit 0x8c
        __asm _emit 0x58
        mov edx, 43e7fh
        ; Exact mapped bytes E9 6E FB FF FF: jmp 0x58862813
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        and edx, 7fffffffh
        cmp edx, 0
        ; Exact mapped bytes 75 A1: jne 0x58862c53
        __asm _emit 0x75
        __asm _emit 0xa1
        mov edx, dword ptr [esp + 0ch]
        and edx, 80000000h
        cmp edx, 0
        ; Exact mapped bytes 74 30: je 0x58862cf1
        __asm _emit 0x74
        __asm _emit 0x30
        shl ecx, 0dh
        and eax, ecx
        mov edx, 7ff00000h
        or edx, eax
        ; Exact mapped bytes 66 0F 6E C2: movd xmm0, edx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0F 73 F0 20: psllq xmm0, 0x20
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 12 0D 00 41 8C 58: movlpd xmm1, qword ptr [0x588c4100]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 14 24: movlpd xmm2, qword ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 5E CA: divsd xmm1, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xca
        mov edx, 1bh
        ; Exact mapped bytes E9 8F 02 00 00: jmp 0x58862f80
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        shl ecx, 0dh
        and eax, ecx
        cmp eax, 0
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x58862da6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 57 C0: xorpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 1D F0 40 8C 58: movlpd xmm3, qword ptr [0x588c40f0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 57 C9: xorpd xmm1, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0F 54 DC: andpd xmm3, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xdc
        ; Exact mapped bytes 66 0F 76 CB: pcmpeqd xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x76
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F D7 C9: pmovmskb ecx, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc9
        and ecx, 0ffh
        cmp ecx, 0ffh
        ; Exact mapped bytes 0F 85 CF 00 00 00: jne 0x58862e00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F C5 CC 03: pextrw ecx, xmm4, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xcc
        __asm _emit 0x03
        and ecx, 8000h
        cmp ecx, 0
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x58862ddf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        cmp eax, 0ffh
        ; Exact mapped bytes 75 6D: jne 0x58862dbe
        __asm _emit 0x75
        __asm _emit 0x6d
        ; Exact mapped bytes 66 0F 12 4C 24 08: movlpd xmm1, qword ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 28 D1: movapd xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd1
        mov ecx, 3f4h
        ; Exact mapped bytes 66 0F 6E D9: movd xmm3, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xd9
        ; Exact mapped bytes 66 0F 54 0D 10 41 8C 58: andpd xmm1, xmmword ptr [0x588c4110]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 73 D1 34: psrlq xmm1, 0x34
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd1
        __asm _emit 0x34
        ; Exact mapped bytes 66 0F FA CB: psubd xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F EF DB: pxor xmm3, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xef
        __asm _emit 0xdb
        ; Exact mapped bytes 66 0F F3 D1: psllq xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F 76 D3: pcmpeqd xmm2, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x76
        __asm _emit 0xd3
        ; Exact mapped bytes 66 0F D7 C2: pmovmskb eax, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc2
        and eax, 0ffh
        cmp eax, 0ffh
        ; Exact mapped bytes 74 2D: je 0x58862dbe
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 66 0F 12 4C 24 08: movlpd xmm1, qword ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F C5 C1 03: pextrw eax, xmm1, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc1
        __asm _emit 0x03
        and eax, 8000h
        cmp eax, 0
        ; Exact mapped bytes 74 0C: je 0x58862db2
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 12 05 70 41 8C 58: movlpd xmm0, qword ptr [0x588c4170]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 05 68 41 8C 58: movlpd xmm0, qword ptr [0x588c4168]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 4C 24 08: movlpd xmm1, qword ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F C5 C1 03: pextrw eax, xmm1, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc1
        __asm _emit 0x03
        and eax, 8000h
        cmp eax, 0
        ; Exact mapped bytes 0F 84 39 01 00 00: je 0x58862f10
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 57 C0: xorpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 4C 24 08: movlpd xmm1, qword ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F C5 C1 03: pextrw eax, xmm1, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc1
        __asm _emit 0x03
        and eax, 8000h
        cmp eax, 0
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x58862f10
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 57 C0: xorpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        add esp, 10h
        ret
        ; Exact mapped bytes F2 0F 58 E4: addsd xmm4, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xe4
        ; Exact mapped bytes F2 0F 10 C4: movsd xmm0, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xc4
        mov edx, 3eeh
        ; Exact mapped bytes E9 6E 01 00 00: jmp 0x58862f80
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 12 14 24: movlpd xmm2, qword ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x24
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
        ; Exact mapped bytes 66 0F 7E D2: movd edx, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xd2
        and edx, 7fffffffh
        or eax, edx
        mov ecx, 0
        cmp eax, 0
        ; Exact mapped bytes 0F 84 6B FE FF FF: je 0x58862ca5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 12 0D 58 41 8C 58: movlpd xmm1, qword ptr [0x588c4158]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 12 05 90 41 8C 58: movlpd xmm0, qword ptr [0x588c4190]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 C9: mulsd xmm1, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc9
        mov edx, 1ch
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x58862f80
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 12 24 24: movlpd xmm4, qword ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 66 0F 12 54 24 08: movlpd xmm2, qword ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 7E E0: movd eax, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xe0
        cmp eax, 0
        ; Exact mapped bytes 75 29: jne 0x58862e95
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 66 0F 73 D4 20: psrlq xmm4, 0x20
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd4
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 7E E2: movd edx, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xe2
        cmp edx, 3ff00000h
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x58862f74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0bff00000h
        ; Exact mapped bytes 75 0C: jne 0x58862e95
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 12 05 00 41 8C 58: movlpd xmm0, qword ptr [0x588c4100]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 1D F0 40 8C 58: movlpd xmm3, qword ptr [0x588c40f0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 57 C9: xorpd xmm1, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0F 54 DA: andpd xmm3, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xda
        ; Exact mapped bytes 66 0F 76 CB: pcmpeqd xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x76
        __asm _emit 0xcb
        ; Exact mapped bytes 66 0F D7 C1: pmovmskb eax, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc1
        and eax, 0ffh
        cmp eax, 0ffh
        ; Exact mapped bytes 75 63: jne 0x58862f1c
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 66 0F C5 C2 03: pextrw eax, xmm2, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc2
        __asm _emit 0x03
        ; Exact mapped bytes 66 0F 12 24 24: movlpd xmm4, qword ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x24
        __asm _emit 0x24
        and eax, 8000h
        xor ecx, 0bff00000h
        or edx, ecx
        cmp edx, 0
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x58862f74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0
        ; Exact mapped bytes 74 19: je 0x58862ef7
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 66 0F C5 C4 03: pextrw eax, xmm4, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc4
        __asm _emit 0x03
        and eax, 7ff0h
        cmp eax, 3ff0h
        ; Exact mapped bytes 72 21: jb 0x58862f10
        __asm _emit 0x72
        __asm _emit 0x21
        ; Exact mapped bytes 66 0F 57 C0: xorpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F C5 C4 03: pextrw eax, xmm4, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc4
        __asm _emit 0x03
        and eax, 7ff0h
        cmp eax, 3ff0h
        ; Exact mapped bytes 73 08: jae 0x58862f10
        __asm _emit 0x73
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 57 C0: xorpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 05 60 41 8C 58: movlpd xmm0, qword ptr [0x588c4160]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        add esp, 10h
        ret
        ; Exact mapped bytes F2 0F 58 D2: addsd xmm2, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xd2
        ; Exact mapped bytes F2 0F 10 C2: movsd xmm0, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xc2
        mov edx, 3eeh
        ; Exact mapped bytes EB 55: jmp 0x58862f80
        __asm _emit 0xeb
        __asm _emit 0x55
        ; Exact mapped bytes 66 0F 7E E0: movd eax, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F 73 D4 20: psrlq xmm4, 0x20
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd4
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 7E E2: movd edx, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xe2
        and edx, 7fffffffh
        mov ecx, eax
        or eax, edx
        ; Exact mapped bytes 66 0F 12 05 00 41 8C 58: movlpd xmm0, qword ptr [0x588c4100]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        mov edx, 1ah
        cmp eax, 0
        ; Exact mapped bytes 74 2C: je 0x58862f80
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 0F 7E E0: movd eax, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xe0
        mov edx, 1dh
        and eax, 7fffffffh
        cmp eax, 7ff00000h
        ; Exact mapped bytes 77 17: ja 0x58862f80
        __asm _emit 0x77
        __asm _emit 0x17
        ; Exact mapped bytes 72 05: jb 0x58862f70
        __asm _emit 0x72
        __asm _emit 0x05
        cmp ecx, 0
        ; Exact mapped bytes 77 10: ja 0x58862f80
        __asm _emit 0x77
        __asm _emit 0x10
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 05 50 65 8C 58: movlpd xmm0, qword ptr [0x588c6550]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x65
        __asm _emit 0x8c
        __asm _emit 0x58
        add esp, 10h
        ret
        sub esp, 18h
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
        sub edx, 8
        mov dword ptr [esp], edx
        ; Exact mapped bytes E8 38 FB 00 00: call 0x58872ae0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 12 44 24 10: movlpd xmm0, qword ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        add esp, 28h
        ret
        cmp eax, 0
        ; Exact mapped bytes 7E 28: jle 0x58862fdf
        __asm _emit 0x7e
        __asm _emit 0x28
        cmp eax, 40000h
        ; Exact mapped bytes 0F 83 22 02 00 00: jae 0x588631e4
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov edx, eax
        and eax, 7fh
        add ecx, 3ff00h
        sub edx, 80h
        and edx, 0ffffff80h
        push edi
        mov edi, 3ff0h
        ; Exact mapped bytes EB 26: jmp 0x58863005
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp eax, 0fffc0200h
        ; Exact mapped bytes 0F 8E D7 01 00 00: jle 0x588631c1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov edx, eax
        and eax, 7fh
        add ecx, 80h
        and edx, 0ffffff80h
        add edx, 3fe80h
        push edi
        mov edi, 0
        ; Exact mapped bytes F2 0F 58 E0: addsd xmm4, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xe0
        ; Exact mapped bytes F2 0F 10 C3: movsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xc3
        ; Exact mapped bytes F2 0F 58 1D E0 40 8C 58: addsd xmm3, qword ptr [0x588c40e0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        mov esi, edx
        sub esi, 1ff80h
        ; Exact mapped bytes 66 0F 59 D7: mulpd xmm2, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd7
        ; Exact mapped bytes F2 0F 5C 1D E0 40 8C 58: subsd xmm3, qword ptr [0x588c40e0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0x40
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 FF: mulpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5C C3: subsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc3
        add eax, eax
        add eax, eax
        add eax, eax
        add eax, eax
        ; Exact mapped bytes 66 0F 28 98 D0 95 8C 58: movapd xmm3, xmmword ptr [eax + 0x588c95d0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x98
        __asm _emit 0xd0
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 35 20 41 8C 58: movapd xmm6, xmmword ptr [0x588c4120]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 59 CF: mulpd xmm1, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xcf
        ; Exact mapped bytes 66 0F 58 D1: addpd xmm2, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0F 70 CA EE: pshufd xmm1, xmm2, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xca
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 59 D7: mulsd xmm2, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd7
        ; Exact mapped bytes F2 0F 58 D1: addsd xmm2, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xd1
        ; Exact mapped bytes F2 0F 58 D4: addsd xmm2, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xd4
        ; Exact mapped bytes 66 0F 12 25 40 41 8C 58: movlpd xmm4, qword ptr [0x588c4140]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x25
        __asm _emit 0x40
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 6E CA: movd xmm1, edx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xca
        sub edx, 1ff80h
        neg edx
        sar edx, 7
        add edx, 2
        mov eax, edx
        and eax, 20h
        add edx, eax
        ; Exact mapped bytes 66 0F 57 FF: xorpd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xff
        mov eax, 3f80h
        ; Exact mapped bytes 66 0F C4 F8 03: pinsrw xmm7, eax, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes F2 0F 59 54 24 10: mulsd xmm2, qword ptr [esp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes F2 0F 59 C7: mulsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc7
        ; Exact mapped bytes 66 0F 73 F1 2D: psllq xmm1, 0x2d
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0x2d
        ; Exact mapped bytes 66 0F 70 C9 44: pshufd xmm1, xmm1, 0x44
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xc9
        __asm _emit 0x44
        ; Exact mapped bytes 66 0F 28 3D 30 41 8C 58: movapd xmm7, xmmword ptr [0x588c4130]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 EA: addsd xmm5, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xea
        ; Exact mapped bytes 66 0F 59 D9: mulpd xmm3, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xd9
        ; Exact mapped bytes F2 0F 58 C5: addsd xmm0, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc5
        ; Exact mapped bytes 66 0F 14 C0: unpcklpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 59 F0: mulpd xmm6, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 59 E0: mulsd xmm4, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F 59 C0: mulpd xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 58 FE: addpd xmm7, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xfe
        ; Exact mapped bytes 66 0F 59 F8: mulpd xmm7, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 59 C3: mulsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc3
        ; Exact mapped bytes 66 0F 70 F7 EE: pshufd xmm6, xmm7, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xf7
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 59 C7: mulsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc7
        ; Exact mapped bytes 66 0F 70 EB EE: pshufd xmm5, xmm3, 0xee
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xeb
        __asm _emit 0xee
        ; Exact mapped bytes F2 0F 59 F3: mulsd xmm6, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf3
        ; Exact mapped bytes F2 0F 59 E3: mulsd xmm4, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe3
        ; Exact mapped bytes 66 0F 6E F9: movd xmm7, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xf9
        ; Exact mapped bytes 66 0F 73 F7 2D: psllq xmm7, 0x2d
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xf7
        __asm _emit 0x2d
        ; Exact mapped bytes 66 0F 6E D2: movd xmm2, edx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xd2
        ; Exact mapped bytes 66 0F 76 C9: pcmpeqd xmm1, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x76
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0F F3 CA: psllq xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xca
        ; Exact mapped bytes F2 0F 58 C5: addsd xmm0, xmm5
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc5
        ; Exact mapped bytes F2 0F 58 C6: addsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0F 54 CB: andpd xmm1, xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xcb
        ; Exact mapped bytes F2 0F 58 C4: addsd xmm0, xmm4
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc4
        ; Exact mapped bytes 66 0F 57 F6: xorpd xmm6, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xf6
        ; Exact mapped bytes 66 0F 76 E4: pcmpeqd xmm4, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x76
        __asm _emit 0xe4
        ; Exact mapped bytes 66 0F F3 E2: psllq xmm4, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xe2
        ; Exact mapped bytes F2 0F 5C D9: subsd xmm3, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd9
        ; Exact mapped bytes F2 0F 10 D1: movsd xmm2, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0xd1
        ; Exact mapped bytes F2 0F 58 C8: addsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 54 CC: andpd xmm1, xmm4
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0xcc
        ; Exact mapped bytes 66 0F C4 F7 03: pinsrw xmm6, edi, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0x03
        pop edi
        ; Exact mapped bytes F2 0F 5C D1: subsd xmm2, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xd1
        ; Exact mapped bytes F2 0F 58 C2: addsd xmm0, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc2
        ; Exact mapped bytes F2 0F 58 C3: addsd xmm0, xmm3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc3
        cmp esi, 0
        ; Exact mapped bytes 7F 41: jg 0x58863184
        __asm _emit 0x7f
        __asm _emit 0x41
        pop esi
        ; Exact mapped bytes F2 0F 59 C7: mulsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc7
        ; Exact mapped bytes F2 0F 59 CF: mulsd xmm1, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xcf
        ; Exact mapped bytes F2 0F 58 C1: addsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 59 F0: mulsd xmm6, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 58 C6: addsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0F C5 C0 03: pextrw eax, xmm0, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc0
        __asm _emit 0x03
        and eax, 7ff0h
        mov edx, 18h
        cmp eax, 7ff0h
        ; Exact mapped bytes 0F 84 0E FE FF FF: je 0x58862f80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 19h
        cmp eax, 0
        ; Exact mapped bytes 0F 84 00 FE FF FF: je 0x58862f80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ret
        pop esi
        ; Exact mapped bytes F2 0F 58 C1: addsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 59 C7: mulsd xmm0, xmm7
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc7
        ; Exact mapped bytes F2 0F 59 F0: mulsd xmm6, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 58 C6: addsd xmm0, xmm6
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0F C5 C0 03: pextrw eax, xmm0, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc0
        __asm _emit 0x03
        and eax, 7ff0h
        mov edx, 18h
        cmp eax, 7ff0h
        ; Exact mapped bytes 0F 84 D1 FD FF FF: je 0x58862f80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 19h
        cmp eax, 0
        ; Exact mapped bytes 0F 84 C3 FD FF FF: je 0x58862f80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 05 88 41 8C 58: movlpd xmm0, qword ptr [0x588c4188]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 6E C9: movd xmm1, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc9
        ; Exact mapped bytes F2 0F 59 C0: mulsd xmm0, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 73 F1 2D: psllq xmm1, 0x2d
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0x2d
        ; Exact mapped bytes 66 0F 56 C1: orpd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc1
        mov edx, 19h
        ; Exact mapped bytes E9 9C FD FF FF: jmp 0x58862f80
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 18h
        cmp ecx, 0
        ; Exact mapped bytes 74 15: je 0x58863203
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 0F 12 05 78 41 8C 58: movlpd xmm0, qword ptr [0x588c4178]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 80 41 8C 58: mulsd xmm0, qword ptr [0x588c4180]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes E9 7D FD FF FF: jmp 0x58862f80
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 12 05 80 41 8C 58: movlpd xmm0, qword ptr [0x588c4180]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x41
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 C0: mulsd xmm0, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc0
        ; Exact mapped bytes E9 6C FD FF FF: jmp 0x58862f80
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 70 E1 44: pshufd xmm4, xmm1, 0x44
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xe1
        __asm _emit 0x44
        ; Exact mapped bytes 66 0F 59 E6: mulpd xmm4, xmm6
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xe6
        ; Exact mapped bytes 66 0F C5 C4 03: pextrw eax, xmm4, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc4
        __asm _emit 0x03
        and eax, 7ff0h
        mov edx, 40a0h
        sub edx, eax
        sub eax, 3c70h
        or edx, eax
        cmp edx, 80000000h
        ; Exact mapped bytes 0F 82 24 F7 FF FF: jb 0x58862965
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 80000000h
        ; Exact mapped bytes 72 13: jb 0x5886325b
        __asm _emit 0x72
        __asm _emit 0x13
        or ecx, 1ff80h
        ; Exact mapped bytes 66 0F 6E C1: movd xmm0, ecx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 73 F0 2D: psllq xmm0, 0x2d
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0x2d
        add esp, 10h
        ret
        ; Exact mapped bytes 66 0F 12 24 24: movlpd xmm4, qword ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 66 0F C5 D4 03: pextrw edx, xmm4, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xd4
        __asm _emit 0x03
        and edx, 7ff0h
        sub edx, 3ff0h
        ; Exact mapped bytes 66 0F C5 C1 03: pextrw eax, xmm1, 3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0xc1
        __asm _emit 0x03
        xor eax, edx
        and eax, 8000h
        cmp eax, 0
        ; Exact mapped bytes 0F 85 3B FF FF FF: jne 0x588631c1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x588631e4
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F D6 04 24: movq qword ptr [esp], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes 66 0F D6 4C 24 08: movq qword ptr [esp + 8], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes E8 09 74 00 00: call 0x5886a6a4
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes F3 0F 7E 04 24: movq xmm0, qword ptr [esp]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x24
        add esp, 10h
        ret
    }
}
