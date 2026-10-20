// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58764310 .. +0x6FD bytes.
extern "C" __declspec(naked) void FUN_58764310_58764310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0bch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 28h], 29eh
        mov dword ptr [ebp - 24h], 29eh
        mov dword ptr [ebp - 20h], 2bch
        mov dword ptr [ebp - 1ch], 2bch
        mov dword ptr [ebp - 18h], 26ch
        mov dword ptr [ebp - 14h], 26ch
        mov dword ptr [ebp - 10h], 26ch
        mov dword ptr [ebp - 0ch], 26ch
        mov dword ptr [ebp - 8], 26ch
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 34ch
        ; Exact mapped bytes E8 64 06 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov edx, dword ptr [ebp + ecx*4 - 2ch]
        mov dword ptr [ebp - 54h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + eax + 1278h]
        mov dword ptr [ebp - 58h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + ecx + 1278h], 0
        ; Exact mapped bytes 0F 8C D0 05 00 00: jl 0x5876498c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 30h]
        mov esi, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + ecx + 1278h]
        cmp ecx, dword ptr [esi + edx + 1278h]
        ; Exact mapped bytes 0F 8D A6 05 00 00: jge 0x5876498c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 7A D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x7a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 0B: jmp 0x58764401
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 32 7D D2 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x7d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 7F 05 00 00: je 0x5876498a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3D D2 D6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd2
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 67 05 00 00: jne 0x58764985
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 16 D3 FF: call 0x58495a50
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x5876446e
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 7B D2 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 AF E3 D8 FF: call 0x584f2800
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe3
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 09: jne 0x5876445f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 5ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58764466
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 64h], ecx
        ; Exact mapped bytes EB 2C: jmp 0x5876449a
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3A 8B D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 30 8B D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x8b
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 09: je 0x5876448d
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 60h], 1
        ; Exact mapped bytes EB 07: jmp 0x58764494
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 64h], edx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 75 05: jne 0x587644a5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E0 04 00 00: jmp 0x58764985
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587644b7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 3ch]
        add eax, 1
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 8
        ; Exact mapped bytes 0F 8D C4 04 00 00: jge 0x58764985
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 33 78 D2 FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x78
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C 7A D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7a
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A4 04 00 00: je 0x58764980
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 18 78 D2 FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x78
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D1 24 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x24
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 0F 84 84 04 00 00: je 0x58764980
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 AC 7B D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 CE 79 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x79
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 93 8C D2 FF: call 0x5848d1b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8c
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 4D 04 00 00: jne 0x58764972
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 43 DE FF FF: call 0x58762370
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 3D 04 00 00: jne 0x58764972
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 83 24 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 7ch], edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A0 10 D3 FF: call 0x584955f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        imul eax, edx, 0c8h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 7ch]
        imul edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [ebp - 78h]
        imul eax, dword ptr [ebp - 78h]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 96 CA 0E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xca
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 FE CC 0C 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov esi, dword ptr [ebp - 40h]
        imul esi, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AC 7A D2 FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edi, eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A2 7A D2 FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7a
        __asm _emit 0xd2
        __asm _emit 0xff
        imul edi, eax
        add esi, edi
        ; Exact mapped bytes F2 0F 2A C6: cvtsi2sd xmm0, esi
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc6
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 5C CA 0E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xca
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 9D 4C FF FF FF: fstp qword ptr [ebp - 0xb4]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A 45 AC: cvtsi2sd xmm0, dword ptr [ebp - 0x54]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 66 0F 2F 85 4C FF FF FF: comisd xmm0, xmmword ptr [ebp - 0xb4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 86 92 03 00 00: jbe 0x58764972
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 40h]
        imul esi, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 61 7A D2 FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x7a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edi, eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 57 7A D2 FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7a
        __asm _emit 0xd2
        __asm _emit 0xff
        imul edi, eax
        lea ecx, [esi + edi*4]
        ; Exact mapped bytes F2 0F 2A C1: cvtsi2sd xmm0, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 10 CA 0E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xca
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 9D 44 FF FF FF: fstp qword ptr [ebp - 0xbc]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 85 44 FF FF FF: movsd xmm0, qword ptr [ebp - 0xbc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 05 90 DA 8A 58: mulsd xmm0, qword ptr [0x588ada90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 05 C8 51 89 58: divsd xmm0, qword ptr [0x588951c8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 54h]
        sub eax, dword ptr [ebp - 88h]
        imul eax, eax, 0b4h
        cdq
        idiv dword ptr [ebp - 54h]
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 7D 09: jge 0x58764660
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes EB 06: jmp 0x58764666
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 44h], edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 DC 79 D2 FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x79
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 15eh
        sub ecx, eax
        imul eax, ecx, 46h
        cdq
        mov ecx, 15eh
        idiv ecx
        add eax, 1eh
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes 79 09: jns 0x58764697
        __asm _emit 0x79
        __asm _emit 0x09
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 06: jmp 0x5876469d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 44h]
        imul eax, dword ptr [ebp - 48h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 7C D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x7c
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 66 7A D2 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7a
        __asm _emit 0xd2
        __asm _emit 0xff
        add esi, eax
        push esi
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 D9 75 D2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x75
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 8ch]
        cdq
        mov ecx, 64h
        idiv ecx
        cmp dword ptr [ebp - 80h], edx
        ; Exact mapped bytes 0F 8E E7 01 00 00: jle 0x587648db
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 34ch
        ; Exact mapped bytes E8 DE 02 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 50 0C: and dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x0c
        movzx eax, dx
        cdq
        mov ecx, 3
        idiv ecx
        imul eax, dword ptr [ebp - 80h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 90h], ecx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 08: je 0x58764741
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes EB 07: jmp 0x58764748
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 1
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 70 FF FF FF: call dword ptr [ebp - 0x90]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x587648db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 0F D3 FF: call 0x584956b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0f
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx ecx, al
        and ecx, 80h
        ; Exact mapped bytes 0F 84 64 01 00 00: je 0x587648db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 11 D3 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x11
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x587647a5
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 12 D3 FF: call 0x58495a50
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587647a5
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 0ah
        ; Exact mapped bytes EB 07: jmp 0x587647ac
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BC 11 D3 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0xd3
        __asm _emit 0xff
        imul eax, dword ptr [eax + 70h], 46h
        xor edx, edx
        div dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5A 95 FF FF: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A2 11 D3 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0xd3
        __asm _emit 0xff
        imul eax, dword ptr [eax + 70h], 78h
        xor edx, edx
        div dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 20 A3 D3 FF: call 0x5849eb00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa3
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 68 10 D3 FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7A 11 D3 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x11
        __asm _emit 0xd3
        __asm _emit 0xff
        imul edx, dword ptr [eax + 70h], 32h
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 6E 50 00 00: call 0x58769880
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 21 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x21
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x587648db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 01 0E D3 FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp - 9ch]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 0D E8 FF: call 0x585e55e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F B6 05 9E 75 94 58: movzx eax, byte ptr [0x5894759e]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x9e
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x5876488e
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 EC 0F D3 FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 87 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x87
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 75 1E: jne 0x5876488e
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 10 D3 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 74 0E: je 0x5876488e
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 AB D3 FF: call 0x5849f410
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xab
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 10 D3 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 74 3D: je 0x587648db
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 10 D3 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x587648db
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 10 D3 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp eax, 8
        ; Exact mapped bytes 74 1E: je 0x587648db
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 10 D3 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp eax, 9
        ; Exact mapped bytes 74 0E: je 0x587648db
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 A5 FE FF: call 0x5874ee10
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x5876496e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        sub ecx, 1
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes 83 3D E4 35 90 58 00: cmp dword ptr [0x589035e4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 58: je 0x5876494f
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C1 20 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x20
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E3 0C D3 FF: call 0x584955f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0c
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ecx + 4]
        push eax
        ; Exact mapped bytes E8 CF F5 D7 FF: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf5
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 10h
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E4 4C 00 00: call 0x58769630
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5876496c
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0dh
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 01 D2 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0xd2
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 30h]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 07 F3 D7 FF: call 0x584e3c70
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf3
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 04: jmp 0x58764972
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 1A: jmp 0x5876498a
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes EB 18: jmp 0x5876498a
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes E9 72 FB FF FF: jmp 0x587644f2
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 29 FB FF FF: jmp 0x587644ae
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6C FA FF FF: jmp 0x587643f6
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4C: jmp 0x587649d8
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov edx, 4
        imul eax, edx, 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 30h]
        mov esi, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + eax + 1278h]
        cmp eax, dword ptr [esi + ecx + 1278h]
        ; Exact mapped bytes 75 26: jne 0x587649d8
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + ecx + 1278h]
        neg eax
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + edx + 1278h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + eax + 1278h]
        add edx, 1
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + ecx + 1278h], edx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 45 C6 0C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esp, ebp
    }
}
