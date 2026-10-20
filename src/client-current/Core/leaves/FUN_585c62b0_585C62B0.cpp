// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C62B0 .. +0x51F bytes.
extern "C" __declspec(naked) void FUN_585c62b0_585C62B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 70 61 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x61
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 09 E7 EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe7
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
        ; Exact mapped bytes E8 4E 61 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x61
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 E6 EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe6
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
        mov dword ptr [ebp - 30h], esi
        mov dword ptr [ebp - 2ch], 64h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 61 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x61
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B9 E6 EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe6
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
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x585c63c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 40000000h
        ; Exact mapped bytes 75 7D: jne 0x585c63c3
        __asm _emit 0x75
        __asm _emit 0x7d
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 21a88h], 0
        ; Exact mapped bytes 74 40: je 0x585c6392
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 60 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x60
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EF 93 EE FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x93
        __asm _emit 0xee
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 28h
        div ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 21e20h]
        ; Exact mapped bytes E8 76 CA 00 00: call 0x585d2df0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, esi
        xor edx, edx
        mov ecx, 2710h
        div ecx
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 A3 FF FF: call 0x585c0730
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 31: jmp 0x585c63c3
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 1077ah]
        cmp eax, 7
        ; Exact mapped bytes 74 22: je 0x585c63c3
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 60 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x60
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 93 EE FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x93
        __asm _emit 0xee
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 28h
        div ecx
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E A3 FF FF: call 0x585c0730
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
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
        ; Exact mapped bytes E8 4B AC 28 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xac
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D C8: fstp qword ptr [ebp - 0x38]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 10 45 C8: movsd xmm0, qword ptr [ebp - 0x38]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 59 05 98 DA 8A 58: mulsd xmm0, qword ptr [0x588ada98]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xda
        __asm _emit 0x8a
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
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 11 45 C0: movsd qword ptr [ebp - 0x40], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes E8 43 5B EC FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x5b
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC 5A EC FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5a
        __asm _emit 0xec
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 0B AC 28 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xac
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 73 AE 26 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xae
        __asm _emit 0x26
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 EA AB 28 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xab
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        lea edx, [eax*8 + 190h]
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        ; Exact mapped bytes F2 0F 10 4D C0: movsd xmm1, qword ptr [ebp - 0x40]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xc0
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
        mov dword ptr [ebp - 14h], eax
        movzx ecx, word ptr [ebp + 20h]
        imul ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes F3 0F 2A C1: cvtsi2ss xmm0, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes F3 0F 59 82 FC 0B 01 00: mulss xmm0, dword ptr [edx + 0x10bfc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 2A 4D EC: cvtsi2ss xmm1, dword ptr [ebp - 0x14]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xec
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
        ; Exact mapped bytes F3 0F 2A 4D 24: cvtsi2ss xmm1, dword ptr [ebp + 0x24]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0x24
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
        ; Exact mapped bytes F3 0F 5A C0: cvtss2sd xmm0, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 8D 66 F4 FF: call 0x5850cb20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 F5 AD 26 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xad
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 10780h]
        and ecx, 1
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x585c656d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 68 6C EC FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x585c656b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 C4 00 00: call 0x585d28e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fh
        ; Exact mapped bytes 7F 17: jg 0x585c64e4
        __asm _emit 0x7f
        __asm _emit 0x17
        imul eax, dword ptr [ebp - 8], 8ch
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x585c656b
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F4 C3 00 00: call 0x585d28e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 19h
        ; Exact mapped bytes 7F 11: jg 0x585c6502
        __asm _emit 0x7f
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 8], 78h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 69: jmp 0x585c656b
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 C3 00 00: call 0x585d28e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 23h
        ; Exact mapped bytes 7F 11: jg 0x585c6520
        __asm _emit 0x7f
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 8], 50h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 4B: jmp 0x585c656b
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 C3 00 00: call 0x585d28e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2dh
        ; Exact mapped bytes 7F 11: jg 0x585c653e
        __asm _emit 0x7f
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 8], 3ch
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 2D: jmp 0x585c656b
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A C3 00 00: call 0x585d28e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 37h
        ; Exact mapped bytes 7F 11: jg 0x585c655c
        __asm _emit 0x7f
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 8], 28h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0F: jmp 0x585c656b
        __asm _emit 0xeb
        __asm _emit 0x0f
        imul eax, dword ptr [ebp - 8], 14h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 2A: jmp 0x585c6597
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AB 6B EC FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x585c6597
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 21e20h]
        ; Exact mapped bytes E8 49 C7 00 00: call 0x585d2cd0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc7
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
        ; Exact mapped bytes 75 2E: jne 0x585c65d4
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 220e0h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A2 3D F0 FF: call 0x584ca360
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x585c65d4
        __asm _emit 0x74
        __asm _emit 0x12
        imul eax, dword ptr [ebp - 8], 96h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 4
        ; Exact mapped bytes 74 4F: je 0x585c6632
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 6
        ; Exact mapped bytes 74 40: je 0x585c6632
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0bh
        ; Exact mapped bytes 74 31: je 0x585c6632
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0ah
        ; Exact mapped bytes 74 22: je 0x585c6632
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 5
        ; Exact mapped bytes 74 13: je 0x585c6632
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0eh
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x585c66e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 76 69 EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x69
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + eax*4 + 10c64h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 1077ah]
        cmp edx, 0bh
        ; Exact mapped bytes 75 34: jne 0x585c669a
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 1077ch]
        cmp ecx, 2
        ; Exact mapped bytes 75 25: jne 0x585c669a
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 69 EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x69
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + eax*4 + 10c64h]
        mov dword ptr [ebp - 1ch], eax
        imul ecx, dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [edx]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 23: jmp 0x585c66bd
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E 69 EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x69
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*4 + 10c64h]
        mov dword ptr [ebp - 20h], edx
        imul eax, dword ptr [ebp - 8], 0ah
        mov ecx, dword ptr [ebp - 20h]
        add eax, dword ptr [ecx]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 68 EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*4 + 10c64h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 1077ah]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 4
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0ah
        ; Exact mapped bytes 0F 87 91 00 00 00: ja 0x585c6793
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 85 D0 67 5C 58: jmp dword ptr [eax*4 + 0x585c67d0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x67
        __asm _emit 0x5c
        __asm _emit 0x58
        mov ecx, 14h
        imul edx, ecx, 0
        movzx eax, word ptr [ebp - 4]
        movzx ecx, word ptr [edx + eax*2 + 5890575ch]
        imul ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 76 19 00: call 0x5875ddd0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x76
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x585c67c5
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x585c67c5
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 1077ch]
        cmp eax, 2
        ; Exact mapped bytes 75 28: jne 0x585c676f
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 1
        mov edx, 14h
        imul eax, edx, 0
        movzx edx, word ptr [ebp - 4]
        movzx eax, word ptr [eax + edx*2 + 5890575ch]
        imul ecx, eax
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 76 19 00: call 0x5875ddd0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x76
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 22: jmp 0x585c6791
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, 14h
        imul edx, ecx, 0
        movzx eax, word ptr [ebp - 4]
        movzx ecx, word ptr [edx + eax*2 + 5890575ch]
        imul ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 40 76 19 00: call 0x5875ddd0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x76
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x585c67c5
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [ebp - 2ch]
        mov edx, 14h
        shl edx, 0
        movzx ecx, word ptr [ebp - 4]
        movzx edx, word ptr [edx + ecx*2 + 5890575ch]
        imul eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C 76 19 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x76
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
