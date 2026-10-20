// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C5CA0 .. +0x5E2 bytes.
extern "C" __declspec(naked) void FUN_585c5ca0_585C5CA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 79 67 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 ED EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx esi, ax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 67 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 EC EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xec
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        sub esi, ecx
        mov dword ptr [ebp - 18h], esi
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 67 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C2 EC EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        cmp dword ptr [ebp - 18h], 0fh
        ; Exact mapped bytes 7C 0F: jl 0x585c5d3f
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp dword ptr [ebp - 18h], 1eh
        ; Exact mapped bytes 7D 09: jge 0x585c5d3f
        __asm _emit 0x7d
        __asm _emit 0x09
        imul eax, dword ptr [ebp - 10h], 0ch
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 16: jmp 0x585c5d55
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp - 18h], 1eh
        ; Exact mapped bytes 7C 09: jl 0x585c5d4e
        __asm _emit 0x7c
        __asm _emit 0x09
        imul ecx, dword ptr [ebp - 10h], 0eh
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 07: jmp 0x585c5d55
        __asm _emit 0xeb
        __asm _emit 0x07
        imul edx, dword ptr [ebp - 10h], 0ah
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E3 66 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x66
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C EC EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xec
        __asm _emit 0xeb
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
        cmp ecx, 9
        ; Exact mapped bytes 75 09: jne 0x585c5d7d
        __asm _emit 0x75
        __asm _emit 0x09
        imul edx, dword ptr [ebp - 10h], 0ch
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 07: jmp 0x585c5d84
        __asm _emit 0xeb
        __asm _emit 0x07
        imul eax, dword ptr [ebp - 10h], 0ah
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 35: je 0x585c5dbf
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp + 18h], 40000000h
        ; Exact mapped bytes 75 2C: jne 0x585c5dbf
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 1077ah]
        cmp edx, 7
        ; Exact mapped bytes 74 1D: je 0x585c5dbf
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 96 66 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x66
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F 99 EE FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xff
        shl eax, 1
        push eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 80 19 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x80
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 10h], 1c2h
        ; Exact mapped bytes 7D 36: jge 0x585c5dfe
        __asm _emit 0x7d
        __asm _emit 0x36
        ; Exact mapped bytes F2 0F 2A 45 10: cvtsi2sd xmm0, dword ptr [ebp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x10
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 46 B2 28 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb2
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D C0: fstp qword ptr [ebp - 0x40]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 10 45 C0: movsd xmm0, qword ptr [ebp - 0x40]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 59 05 A0 DA 8A 58: mulsd xmm0, qword ptr [0x588adaa0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 05 D8 51 89 58: addsd xmm0, qword ptr [0x588951d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 3B: jmp 0x585c5e39
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, 384h
        sub ecx, dword ptr [ebp + 10h]
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
        ; Exact mapped bytes E8 09 B2 28 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb2
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D B8: fstp qword ptr [ebp - 0x48]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xb8
        ; Exact mapped bytes F2 0F 10 45 B8: movsd xmm0, qword ptr [ebp - 0x48]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes F2 0F 59 05 A0 DA 8A 58: mulsd xmm0, qword ptr [0x588adaa0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 05 D8 51 89 58: addsd xmm0, qword ptr [0x588951d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes F2 0F 2A 45 E4: cvtsi2sd xmm0, dword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 11 45 A8: movsd qword ptr [ebp - 0x58], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes E8 F5 60 EC FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x60
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E 60 EC FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x60
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 B5 B1 28 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb1
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 B4 B1 28 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb1
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D B0: fstp qword ptr [ebp - 0x50]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xb0
        ; Exact mapped bytes F2 0F 10 45 B0: movsd xmm0, qword ptr [ebp - 0x50]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes F2 0F 59 05 D0 50 89 58: mulsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 05 F0 51 89 58: addsd xmm0, qword ptr [0x588951f0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 4D A8: movsd xmm1, qword ptr [ebp - 0x58]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F2 0F 59 C8: mulsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 5E 0D A0 51 89 58: divsd xmm1, qword ptr [0x588951a0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C1: cvttsd2si eax, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 1ch]
        imul ecx, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes F2 0F 2A 45 E0: cvtsi2sd xmm0, dword ptr [ebp - 0x20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 20h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 A0: movsd qword ptr [ebp - 0x60], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes F2 0F 5A 45 A0: cvtsd2ss xmm0, qword ptr [ebp - 0x60]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0xa0
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes F3 0F 59 80 FC 0B 01 00: mulss xmm0, dword ptr [eax + 0x10bfc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 2A 4D DC: cvtsi2ss xmm1, dword ptr [ebp - 0x24]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes F3 0F 59 C1: mulss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 5E 05 60 4D 89 58: divss xmm0, dword ptr [0x58894d60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x60
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
        ; Exact mapped bytes E8 32 89 02 00: call 0x585ee820
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 9A B3 26 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb3
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 10780h]
        and edx, 1
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x585c5fe8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 72 EC FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x72
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x585c5f2b
        __asm _emit 0x74
        __asm _emit 0x14
        imul eax, dword ptr [ebp - 8], 14h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x585c5fe6
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 ED 71 EC FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x71
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x585c5fe6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D C9 00 00: call 0x585d28e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fh
        ; Exact mapped bytes 7F 17: jg 0x585c5f5f
        __asm _emit 0x7f
        __asm _emit 0x17
        imul eax, dword ptr [ebp - 8], 8ch
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x585c5fe6
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 C9 00 00: call 0x585d28e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 19h
        ; Exact mapped bytes 7F 11: jg 0x585c5f7d
        __asm _emit 0x7f
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 8], 78h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 69: jmp 0x585c5fe6
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B C9 00 00: call 0x585d28e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 23h
        ; Exact mapped bytes 7F 11: jg 0x585c5f9b
        __asm _emit 0x7f
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 8], 50h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 4B: jmp 0x585c5fe6
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D C9 00 00: call 0x585d28e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2dh
        ; Exact mapped bytes 7F 11: jg 0x585c5fb9
        __asm _emit 0x7f
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 8], 3ch
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 2D: jmp 0x585c5fe6
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F C9 00 00: call 0x585d28e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 37h
        ; Exact mapped bytes 7F 11: jg 0x585c5fd7
        __asm _emit 0x7f
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 8], 28h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0F: jmp 0x585c5fe6
        __asm _emit 0xeb
        __asm _emit 0x0f
        imul eax, dword ptr [ebp - 8], 14h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 2A: jmp 0x585c6012
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 30 71 EC FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x71
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x585c6012
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 21e20h]
        ; Exact mapped bytes E8 AE CC 00 00: call 0x585d2cb0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8]
        xor edx, edx
        mov ecx, 2710h
        div ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 1077ah]
        cmp eax, 6
        ; Exact mapped bytes 75 2B: jne 0x585c604c
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 220e0h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 27 43 F0 FF: call 0x584ca360
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x43
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x585c604c
        __asm _emit 0x74
        __asm _emit 0x0f
        imul eax, dword ptr [ebp - 8], 0fh
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 4
        ; Exact mapped bytes 74 4F: je 0x585c60aa
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 5
        ; Exact mapped bytes 74 40: je 0x585c60aa
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 6
        ; Exact mapped bytes 74 31: je 0x585c60aa
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0ah
        ; Exact mapped bytes 74 22: je 0x585c60aa
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0bh
        ; Exact mapped bytes 74 13: je 0x585c60aa
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0eh
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x585c615a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 6E EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + eax*4 + 10c64h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 1077ah]
        cmp edx, 0bh
        ; Exact mapped bytes 75 34: jne 0x585c6112
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 1077ch]
        cmp ecx, 2
        ; Exact mapped bytes 75 25: jne 0x585c6112
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 6E EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + eax*4 + 10c64h]
        mov dword ptr [ebp - 2ch], eax
        imul ecx, dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [edx]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 23: jmp 0x585c6135
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 6E EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*4 + 10c64h]
        mov dword ptr [ebp - 30h], edx
        imul eax, dword ptr [ebp - 8], 0ah
        mov ecx, dword ptr [ebp - 30h]
        add eax, dword ptr [ecx]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 6E EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*4 + 10c64h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 1077ah]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        sub edx, 4
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0ah
        ; Exact mapped bytes 0F 87 DB 00 00 00: ja 0x585c6255
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 24 85 84 62 5C 58: jmp dword ptr [eax*4 + 0x585c6284]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x5c
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 14h
        imul edx, ecx, 0
        movzx ecx, word ptr [ebp - 4]
        movzx edx, word ptr [edx + ecx*2 + 58905720h]
        imul eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 7C 19 00: call 0x5875ddd0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7c
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x585c6278
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 14h
        shl edx, 0
        movzx eax, word ptr [ebp - 4]
        movzx ecx, word ptr [edx + eax*2 + 58905720h]
        imul ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 7B 19 00: call 0x5875ddd0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7b
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x585c6278
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 1077ch]
        cmp eax, 2
        ; Exact mapped bytes 75 34: jne 0x585c6223
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 8]
        shl eax, 1
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 14h
        imul edx, ecx, 0
        movzx ecx, word ptr [ebp - 4]
        movzx edx, word ptr [edx + ecx*2 + 58905720h]
        imul eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B0 7B 19 00: call 0x5875ddd0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7b
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 30: jmp 0x585c6253
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [ebp - 10h]
        mov edx, 14h
        imul ecx, edx, 0
        movzx edx, word ptr [ebp - 4]
        movzx ecx, word ptr [ecx + edx*2 + 58905720h]
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7E 7B 19 00: call 0x5875ddd0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7b
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 23: jmp 0x585c6278
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, 14h
        shl edx, 1
        movzx eax, word ptr [ebp - 4]
        movzx ecx, word ptr [edx + eax*2 + 58905720h]
        imul ecx, dword ptr [ebp - 8]
        push ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 7B 19 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7b
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
