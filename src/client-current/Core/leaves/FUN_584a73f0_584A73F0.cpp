// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A73F0 .. +0x36E bytes.
extern "C" __declspec(naked) void FUN_584a73f0_584A73F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8ch], 1eh
        ; Exact mapped bytes 7D 1C: jge 0x584a7422
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8ch]
        add edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 8ch], edx
        xor eax, eax
        ; Exact mapped bytes E9 37 03 00 00: jmp 0x584a7759
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 C7 D5 FD FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], edx
        mov byte ptr [ebp - 1], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 90 E0 FF FF: call 0x584a54e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x584a7461
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 F8 02 00 00: jmp 0x584a7759
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 4A FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a747c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B7 4C FE FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 F4 01 00 00: je 0x584a767a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 02: jne 0x584a7492
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DF: jmp 0x584a7471
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EA AE 2B 00: call 0x58762390
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xae
        __asm _emit 0x2b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C7 01 00 00: je 0x584a7675
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9A A1 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 B4 01 00 00: jne 0x584a7675
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 1
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 75 1F: jne 0x584a74f0
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 45 48 FE FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 94h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 98h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 90h]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 90h], eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 B1 F4 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A7 F4 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 28h], esi
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 88 4B FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7E 4B FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 24h], esi
        ; Exact mapped bytes F2 0F 2A 45 D8: cvtsi2sd xmm0, dword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 2A 4D D8: cvtsi2sd xmm1, dword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes F2 0F 2A C9: cvtsi2sd xmm1, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc9
        ; Exact mapped bytes F2 0F 58 C1: addsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 BF 9A 3A 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x9a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D D0: fstp qword ptr [ebp - 0x30]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd0
        ; Exact mapped bytes F2 0F 10 45 D0: movsd xmm0, qword ptr [ebp - 0x30]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F 2F 05 B0 51 89 58: comisd xmm0, xmmword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 76 34: jbe 0x584a75aa
        __asm _emit 0x76
        __asm _emit 0x34
        ; Exact mapped bytes F2 0F 2A 45 D8: cvtsi2sd xmm0, dword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 5E 45 D0: divsd xmm0, qword ptr [ebp - 0x30]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes F2 0F 59 05 E0 51 89 58: mulsd xmm0, qword ptr [0x588951e0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes F2 0F 2A 45 DC: cvtsi2sd xmm0, dword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 5E 45 D0: divsd xmm0, qword ptr [ebp - 0x30]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes F2 0F 59 05 E0 51 89 58: mulsd xmm0, qword ptr [0x588951e0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 57: jmp 0x584a7601
        __asm _emit 0xeb
        __asm _emit 0x57
        mov dword ptr [ebp - 10h], 42h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 4E FE FF: call 0x5848c420
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 E6 46 FE FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 1
        xor edx, edx
        div ecx
        sub edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 4E FE FF: call 0x5848c420
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 BE 46 FE FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 1
        xor edx, edx
        div ecx
        sub edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 B5 F3 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        add eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 95 4A FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 62 11 00 00: call 0x584a8790
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x584a7655
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 81 F3 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 61 4A FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 98 15 00 00: call 0x584a8c00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 1
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x584a7759
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F7 FD FF FF: jmp 0x584a7471
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 1]
        test eax, eax
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x584a7757
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 0F 8E C1 00 00 00: jle 0x584a7757
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 45 B8: movsd qword ptr [ebp - 0x48], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 45 C0: movsd qword ptr [ebp - 0x40], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 F4 49 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 45 B0: movsd qword ptr [ebp - 0x50], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xb0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 F1 F2 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 45 A8: movsd qword ptr [ebp - 0x58], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xa8
        lea eax, [ebp - 40h]
        push eax
        lea ecx, [ebp - 48h]
        push ecx
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 05 98 51 89 58: movsd xmm0, qword ptr [0x58895198]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 20h]
        push edx
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 B0: movsd xmm0, qword ptr [ebp - 0x50]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 A8: movsd xmm0, qword ptr [ebp - 0x58]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 4D 0D 00 00: call 0x584a8460
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        ; Exact mapped bytes F2 0F 2C 45 C0: cvttsd2si eax, qword ptr [ebp - 0x40]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x45
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes F2 0F 2C 4D B8: cvttsd2si ecx, qword ptr [ebp - 0x48]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x4d
        __asm _emit 0xb8
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 D3 14 00 00: call 0x584a8c00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 90h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 94h], 0
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
