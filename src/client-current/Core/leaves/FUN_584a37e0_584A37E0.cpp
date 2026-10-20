// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A37E0 .. +0x314 bytes.
extern "C" __declspec(naked) void FUN_584a37e0_584A37E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887de08h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 98h
        push esi
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
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 45 8C: movsd qword ptr [ebp - 0x74], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x8c
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 88h]
        push edx
        ; Exact mapped bytes E8 3A 4E 00 00: call 0x584a8660
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 18 EA FF FF: call 0x584a2250
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x584a384e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 8D 79 01 00 00: jge 0x584a39d6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 8F 84 FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 44 31 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 48 01 00 00: je 0x584a39d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4F 86 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 02: jne 0x584a389c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB A9: jmp 0x584a3845
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes F2 0F 10 05 A8 51 89 58: movsd xmm0, qword ptr [0x588951a8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 C0: movsd qword ptr [ebp - 0x40], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc0
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584a38c2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 73 49 FE FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 0F 83 AF 00 00 00: jae 0x584a3985
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 2B 41 FE FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5E DD 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 18: jne 0x584a3911
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 AD 96 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A3 96 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 02: jne 0x584a3913
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB A6: jmp 0x584a38b9
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 95 87 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9A 30 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7F 87 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 84 30 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes E8 CC 4A 00 00: call 0x584a8420
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes DD 5D 8C: fstp qword ptr [ebp - 0x74]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0x8c
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 2F 45 C0: comisd xmm0, xmmword ptr [ebp - 0x40]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 77 0C: ja 0x584a3970
        __asm _emit 0x77
        __asm _emit 0x0c
        ; Exact mapped bytes F2 0F 10 45 C0: movsd xmm0, qword ptr [ebp - 0x40]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 2F 45 8C: comisd xmm0, xmmword ptr [ebp - 0x74]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0x8c
        ; Exact mapped bytes 76 10: jbe 0x584a3980
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes F2 0F 10 45 8C: movsd xmm0, qword ptr [ebp - 0x74]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x8c
        ; Exact mapped bytes F2 0F 11 45 C0: movsd qword ptr [ebp - 0x40], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x584a38b9
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 46: je 0x584a39d1
        __asm _emit 0x74
        __asm _emit 0x46
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        lea edx, [ebp - 94h]
        push edx
        ; Exact mapped bytes E8 B1 E6 FF FF: call 0x584a2050
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push eax
        lea eax, [ebp - 40h]
        push eax
        lea ecx, [ebp - 0a4h]
        push ecx
        ; Exact mapped bytes E8 5D E6 FF FF: call 0x584a2010
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 5ch]
        push edx
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 C7 EC FF FF: call 0x584a2690
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D0 D9 FF FF: call 0x584a13a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6F FE FF FF: jmp 0x584a3845
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], 0
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 64h], 0ffffffffh
        ; Exact mapped bytes F2 0F 10 05 A8 51 89 58: movsd xmm0, qword ptr [0x588951a8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 84: movsd qword ptr [ebp - 0x7c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x84
        lea ecx, [ebp - 10h]
        push ecx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 2C FC FF FF: call 0x584a3630
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584a3a10
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 31 ED FF FF: call 0x584a2740
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea edx, [ebp - 8ch]
        push edx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 51 FD FF FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F8 EB FF FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x584a3a8d
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 2F 45 84: comisd xmm0, xmmword ptr [ebp - 0x7c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes 77 14: ja 0x584a3a4d
        __asm _emit 0x77
        __asm _emit 0x14
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7F EC FF FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 45 84: movsd xmm0, qword ptr [ebp - 0x7c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes 66 0F 2F 40 08: comisd xmm0, xmmword ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 76 3B: jbe 0x584a3a88
        __asm _emit 0x76
        __asm _emit 0x3b
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6B EC FF FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 40 08: movsd xmm0, qword ptr [eax + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 11 45 84: movsd qword ptr [ebp - 0x7c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x84
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 59 EC FF FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 60h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4C EC FF FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 2ch], edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3E EC FF FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x584a3a07
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 29: je 0x584a3abc
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 68h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 2B EB FF FF: call 0x584a25d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 29 3D FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes EB 28: jmp 0x584a3ae4
        __asm _emit 0xeb
        __asm _emit 0x28
        mov dword ptr [ebp - 6ch], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 01 EB FF FF: call 0x584a25d0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 FF 3C FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 6ch]
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
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
