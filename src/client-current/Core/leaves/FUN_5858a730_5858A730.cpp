// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858A730 .. +0x2C9 bytes.
extern "C" __declspec(naked) void FUN_5858a730_5858A730() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883fe4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 48h
        push ebx
        push esi
        push edi
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 0F 84 7C 02 00 00: je 0x5858a9e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B0 01 00 00: je 0x5858a928
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
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
        ; Exact mapped bytes E8 5D C2 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc2
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 36 A2 EF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa2
        __asm _emit 0xef
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 B1 F0 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb1
        __asm _emit 0xf0
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 C2 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc2
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F B2 F0 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb2
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 C2 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc2
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 51 AF F0 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xaf
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 B0 F0 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 C1 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0A B2 F0 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb2
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 48h], esi
        ; Exact mapped bytes E8 53 64 2C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x64
        __asm _emit 0x2c
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        add edx, 13h
        mov dword ptr [ebp - 24h], edx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A A2 EF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 51: je 0x5858a890
        __asm _emit 0x74
        __asm _emit 0x51
        push 2
        ; Exact mapped bytes F2 0F 2A 05 90 20 96 58: cvtsi2sd xmm0, dword ptr [0x58962090]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 CA 67 2C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x67
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D AC: fstp qword ptr [ebp - 0x54]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xac
        ; Exact mapped bytes F2 0F 10 45 AC: movsd xmm0, qword ptr [ebp - 0x54]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes F2 0F 58 05 C0 50 89 58: addsd xmm0, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 BA 70 F0 FF: call 0x58491930
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E8 12 6A 2A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6a
        __asm _emit 0x2a
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 33 FE FF: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 8ch], 0ah
        ; Exact mapped bytes 75 15: jne 0x5858a8b1
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2bch]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2bch], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 2bch], 4
        ; Exact mapped bytes 72 6B: jb 0x5858a928
        __asm _emit 0x72
        __asm _emit 0x6b
        push 3bh
        push 38h
        push 0ah
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 74 1E 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x74
        __asm _emit 0x1e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x5858a91b
        __asm _emit 0x75
        __asm _emit 0x49
        push 22h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 A1 EF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa1
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C9 14 23 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x14
        __asm _emit 0x23
        __asm _emit 0x00
        push 22h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C A1 EF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa1
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2bch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], edx
        push 58h
        ; Exact mapped bytes E8 C0 66 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x66
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 68: je 0x5858a9bf
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ecx + 8]
        add esi, 5
        ; Exact mapped bytes E8 07 63 2C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x63
        __asm _emit 0x2c
        __asm _emit 0x00
        cdq
        mov ecx, 0ah
        idiv ecx
        sub esi, edx
        mov dword ptr [ebp - 34h], esi
        ; Exact mapped bytes E8 F5 62 2C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x62
        __asm _emit 0x2c
        __asm _emit 0x00
        cdq
        mov ecx, 0ah
        idiv ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 5
        sub ecx, edx
        mov dword ptr [ebp - 38h], ecx
        push 14h
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 A1 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa1
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 1770h
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A6 08 23 00: call 0x587bb260
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x08
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858a9c6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], ecx
        push 102h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CA AB 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xab
        __asm _emit 0x22
        __asm _emit 0x00
        nop
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
