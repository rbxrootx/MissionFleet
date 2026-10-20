// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A50D0 .. +0x38D bytes.
extern "C" __declspec(naked) void FUN_584a50d0_584A50D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887deadh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 70h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 3E 73 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D7 F8 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 6
        ; Exact mapped bytes 74 0D: je 0x584a512a
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 40h], 7
        ; Exact mapped bytes 74 07: je 0x584a512a
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 24 03 00 00: jmp 0x584a544e
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8E 18 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x584a513d
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 11 03 00 00: jmp 0x584a544e
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 0dh], 0
        ; Exact mapped bytes E8 FA 4F 00 00: call 0x584aa140
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 53 73 FE FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 4A D1 FF FF: call 0x584a22a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 34h]
        push eax
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 17 2F FE FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584a5175
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 5C D6 FF FF: call 0x584a27d0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 60h]
        push ecx
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 0F 30 FE FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 46 28 FE FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x584a523f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 A3 28 FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 16 23 FE FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AF 02 00 00: call 0x584a5460
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 75 02: jne 0x584a51bc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB B0: jmp 0x584a516c
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 FC 22 FE FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 22 FE FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 02: je 0x584a51d8
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 94: jmp 0x584a516c
        __asm _emit 0xeb
        __asm _emit 0x94
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A0 D9 FF FF: call 0x584a2b80
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 06: jle 0x584a51ea
        __asm _emit 0x7e
        __asm _emit 0x06
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes EB 50: jmp 0x584a523a
        __asm _emit 0xeb
        __asm _emit 0x50
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 05 A0 51 89 58: movsd xmm0, qword ptr [0x588951a0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 5B 3A 00 00: call 0x584a8c60
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 29: je 0x584a523a
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E7 F7 FD FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 68h], ecx
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 C9 39 00 00: call 0x584a8c00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 2D FF FF FF: jmp 0x584a516c
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp - 0dh]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 EA 01 00 00: je 0x584a5435
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 0c8h], 0
        ; Exact mapped bytes 74 0C: je 0x584a5263
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 75 2C: jne 0x584a528f
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 53 17 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 55h
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0c8h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 2D 6E FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 55h
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0cch], eax
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 27 17 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 0A 6E FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 30h], 190h
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 2ch], 1
        mov dword ptr [ebp - 54h], 1
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 32 6A FE FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 708h
        ; Exact mapped bytes 7D 07: jge 0x584a52fc
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 1A 6A FE FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 384h
        ; Exact mapped bytes 7E 18: jle 0x584a5325
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 09 6A FE FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 0a8ch
        ; Exact mapped bytes 7F 07: jg 0x584a5325
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0ffffffffh
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 D8: movss dword ptr [ebp - 0x28], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 C8: movss dword ptr [ebp - 0x38], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x584a53e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x584a53e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes F3 0F 2A C1: cvtsi2ss xmm0, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 1ch]
        sub edx, dword ptr [ebp - 50h]
        ; Exact mapped bytes F3 0F 2A CA: cvtsi2ss xmm1, edx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 11 45 D8: movss dword ptr [ebp - 0x28], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 10 4D D8: movss xmm1, dword ptr [ebp - 0x28]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes F3 0F 59 4D D8: mulss xmm1, dword ptr [ebp - 0x28]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes F3 0F 58 0D 50 4D 89 58: addss xmm1, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 58 05 50 4D 89 58: addss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 92 BF FE FF: call 0x58491330
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes D9 5D C8: fstp dword ptr [ebp - 0x38]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 2A 45 E8: cvtsi2ss xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F3 0F 2A 4D D4: cvtsi2ss xmm1, dword ptr [ebp - 0x2c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes F3 0F 59 4D C8: mulss xmm1, dword ptr [ebp - 0x38]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes F3 0F 2A 45 E4: cvtsi2ss xmm0, dword ptr [ebp - 0x1c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes F3 0F 10 4D D8: movss xmm1, dword ptr [ebp - 0x28]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes F3 0F 59 4D C8: mulss xmm1, dword ptr [ebp - 0x38]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 2A 55 D4: cvtsi2ss xmm2, dword ptr [ebp - 0x2c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x55
        __asm _emit 0xd4
        ; Exact mapped bytes F3 0F 59 CA: mulss xmm1, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C D0: cvttss2si edx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 30: jmp 0x584a5413
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 75 15: jne 0x584a5400
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 2ch]
        imul ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 13: jmp 0x584a5413
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 54h]
        imul ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 CE 37 00 00: call 0x584a8c00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 95 23 FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
