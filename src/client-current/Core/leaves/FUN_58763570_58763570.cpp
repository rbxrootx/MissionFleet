// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58763570 .. +0xBCC bytes.
extern "C" __declspec(naked) void FUN_58763570_58763570() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888fde2h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 110h
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
        mov ecx, dword ptr [eax + 5f0ch]
        and ecx, 0ff0000h
        cmp ecx, 40000h
        ; Exact mapped bytes 0F 85 FF 05 00 00: jne 0x58763bb8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 1C 34 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 13 D2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EB 33 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x33
        __asm _emit 0xd2
        __asm _emit 0xff
        sub esi, eax
        push esi
        ; Exact mapped bytes E8 33 DD D2 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xdd
        __asm _emit 0xd2
        __asm _emit 0xff
        add esp, 4
        cmp eax, 384h
        ; Exact mapped bytes 7D 2E: jge 0x58763615
        __asm _emit 0x7d
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 33 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x33
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 37 21 D3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x21
        __asm _emit 0xd3
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AD 8A D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        sub esi, eax
        push esi
        ; Exact mapped bytes E8 05 DD D2 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xdd
        __asm _emit 0xd2
        __asm _emit 0xff
        add esp, 4
        cmp eax, 2bch
        ; Exact mapped bytes 7C 10: jl 0x58763625
        __asm _emit 0x7c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 33 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x33
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 0E: jne 0x58763633
        __asm _emit 0x75
        __asm _emit 0x0e
        push 19h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 76 E6 FF: call 0x585cacf0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x76
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 5f10h], 0
        ; Exact mapped bytes 0F 84 52 05 00 00: je 0x58763b95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 24 D6 0E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0x0e
        __asm _emit 0x00
        cdq
        mov ecx, 3
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 2B 05 00 00: je 0x58763b83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], 0
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 164h]
        test eax, eax
        ; Exact mapped bytes 0F 85 2A 02 00 00: jne 0x587638a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876368d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 0F 83 0E 02 00 00: jae 0x587638a5
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 17ch], 0
        ; Exact mapped bytes 0F 84 F5 01 00 00: je 0x587638a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BC D5 0E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd5
        __asm _emit 0x0e
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x587636bc
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 0F 84 DC 01 00 00: je 0x587638a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 39 D9 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x5876377d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 91 08 41 00 00: movsx edx, word ptr [ecx + 0x4108]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 64h
        ; Exact mapped bytes 66 89 55 D8: mov word ptr [ebp - 0x28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 17ch]
        ; Exact mapped bytes E8 AB 89 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x89
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes E8 60 D5 0E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd5
        __asm _emit 0x0e
        __asm _emit 0x00
        cdq
        mov ecx, 14h
        idiv ecx
        mov eax, 0ah
        sub eax, edx
        add esi, eax
        mov dword ptr [ebp - 48h], esi
        ; Exact mapped bytes E8 47 D5 0E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd5
        __asm _emit 0x0e
        __asm _emit 0x00
        cdq
        mov ecx, 14h
        idiv ecx
        mov esi, 0ah
        sub esi, edx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        ; Exact mapped bytes E8 7A 32 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x32
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, esi
        mov dword ptr [ebp - 4ch], eax
        push 12h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 13 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x13
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        movzx ecx, word ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E8 7A 05 00: call 0x587bb260
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58763784
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 14h], ecx
        push 102h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C 1E 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x587638a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 32 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x32
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FC 11 D2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x11
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 20 D3 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x20
        __asm _emit 0xd3
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
        ; Exact mapped bytes E8 FC 31 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x31
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 22 D3 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x22
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 110h], eax
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
        ; Exact mapped bytes E8 CB 31 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x31
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 14 1F D3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 20 D3 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0xd3
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
        ; Exact mapped bytes E8 A4 31 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x31
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CD 21 D3 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x21
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 10ch], esi
        ; Exact mapped bytes E8 13 D4 0E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0x00
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58763865
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        add eax, 7
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 12 D2 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x12
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov eax, dword ptr [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 21 A3 E0 FF: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DF FD FF FF: jmp 0x58763684
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 D4 02 00 00: je 0x58763b83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 164h]
        test edx, edx
        ; Exact mapped bytes 0F 85 C2 02 00 00: jne 0x58763b83
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 3C D7 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd7
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 7E: je 0x58763959
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2D 1E D3 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1e
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes 66 89 45 DE: mov word ptr [ebp - 0x22], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BB 87 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x87
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C0 30 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x30
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes E8 64 D3 0E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd3
        __asm _emit 0x0e
        __asm _emit 0x00
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58763914
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 11 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x11
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 30 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x30
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        movzx edx, word ptr [ebp - 22h]
        push edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 0C 79 05 00: call 0x587bb260
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58763960
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 78h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 20h], edx
        push 102h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 30 1C 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        push 68h
        ; Exact mapped bytes E8 7C D6 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd6
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 74: je 0x58763a0f
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6D 1D D3 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1d
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 DC: mov word ptr [ebp - 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FE 86 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x86
        __asm _emit 0xd2
        __asm _emit 0xff
        sub eax, 5
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 00 30 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        push 17h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 11 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 2F D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x2f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        movzx ecx, word ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 06 8B DB FF: call 0x5851c510
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58763a16
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 8ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 90h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 6E 1B 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x58763b22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 2F D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E 0F D2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 1E D3 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1e
        __asm _emit 0xd3
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
        ; Exact mapped bytes E8 5E 2F D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x2f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 1F D3 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 118h], eax
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
        ; Exact mapped bytes E8 2D 2F D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x2f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 1C D3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x1c
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 1D D3 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xd3
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
        ; Exact mapped bytes E8 06 2F D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 1F D3 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x1f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 114h], esi
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ea8h]
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 9F A0 E0 FF: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa0
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D C0 35 90 58 00: cmp dword ptr [0x589035c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 58: je 0x58763b83
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 5f34h]
        ; Exact mapped bytes E8 D7 1B D3 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1b
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 1
        ; Exact mapped bytes 66 89 55 DA: mov word ptr [ebp - 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 65 85 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 67 2E D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x2e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        movzx eax, word ptr [ebp - 26h]
        push eax
        push 7
        push 3
        push 28h
        push 0ah
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 9ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE B9 FF FF: call 0x5875f550
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 80000h
        push 0ah
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE C8 00 00: call 0x58770460
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x58763bb3
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5f0ch]
        and ecx, 0ff00ffffh
        or ecx, 80000h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5f0ch], ecx
        ; Exact mapped bytes E9 72 05 00 00: jmp 0x5876412a
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5f0ch]
        and ecx, 0ff0000h
        cmp ecx, 80000h
        ; Exact mapped bytes 0F 85 17 03 00 00: jne 0x58763eea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 63 E3 FF FF: call 0x58761f40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5eb8h]
        cdq
        idiv dword ptr [ecx + 5each]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5eb0h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5eb0h], 9
        ; Exact mapped bytes 7D 0E: jge 0x58763c13
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5eb0h]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes EB 0F: jmp 0x58763c22
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5eb0h]
        sub ecx, 9
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [edx + 5eb0h], eax
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58763c40
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 92 0D D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 07: and dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        movzx eax, dx
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 73 23: jae 0x58763c81
        __asm _emit 0x73
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 5f38h]
        mov dword ptr [ebp - 0a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 62 22 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x22
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B6: jmp 0x58763c37
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 51 0D D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0xd2
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
        cmp edx, 9
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x58763dab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x58763dab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 0a8h], eax
        push 0
        ; Exact mapped bytes 8B 0D 60 07 96 58: mov ecx, dword ptr [0x58960760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 0D D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 77 2F D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 0ach], eax
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 3B BB D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xbb
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 0b4h], edx
        push 1
        ; Exact mapped bytes 8B 0D 60 07 96 58: mov ecx, dword ptr [0x58960760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 0D D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 27 2F D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x2f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 0b8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 EB BA D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xba
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 178h]
        mov dword ptr [ebp - 0c0h], ecx
        push 2
        ; Exact mapped bytes 8B 0D 60 07 96 58: mov ecx, dword ptr [0x58960760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 0D D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov edx, dword ptr [ebp - 0bch]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 D7 2E D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 178h]
        mov dword ptr [ebp - 0c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 9B BA D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xba
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x58763ea9
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5f2ch]
        mov dword ptr [ebp - 0cch], edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 09 0C D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0c
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0A: mov ax, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 07: and ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x07
        movzx ecx, ax
        add ecx, 1
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 D3 0C D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0c
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 4B 2E D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5f34h]
        mov dword ptr [ebp - 0d8h], edx
        mov eax, dword ptr [ebp - 10h]
        imul ecx, dword ptr [eax + 5eb0h], 0ah
        imul edx, ecx, 5
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 03 BA D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xba
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12cch]
        mov dword ptr [ebp - 0e4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f30h]
        mov dword ptr [ebp - 0dch], eax
        push 2
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 68 0C D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 E0 2D D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12cch]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ecx + 5eb0h], 0ah
        imul eax, edx, 5
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 98 B9 D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb9
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5D D0 FF FF: call 0x58760f10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5e98h
        push ecx
        ; Exact mapped bytes E8 4A 8F 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x8f
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f0ch]
        and eax, 0ff00ffffh
        or eax, 100000h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5f0ch], eax
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x5876412a
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f0ch]
        and eax, 0ff0000h
        cmp eax, 100000h
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x58763fa6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5e84h]
        mov dword ptr [ebp - 0ech], edx
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 A1 35 E8 FF: call 0x585e74c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x35
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 0f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 A5 9E 00 00: call 0x5876dde0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 B7 7F D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7f
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 4]
        mov eax, dword ptr [edx*4 + 58948c34h]
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 98 7F D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7f
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, word ptr [eax]
        mov dword ptr [ebp - 0f4h], ecx
        mov edx, dword ptr [ebp - 0f4h]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 2D F6 DB FF: call 0x585235b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf6
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5f0ch]
        and ecx, 0ff00ffffh
        or ecx, 200000h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5f0ch], ecx
        ; Exact mapped bytes E9 84 01 00 00: jmp 0x5876412a
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5f0ch]
        and ecx, 0ff0000h
        cmp ecx, 200000h
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x58764069
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 0fch], eax
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 63 11 D5 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x11
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 100h], edx
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 47 11 D5 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x11
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 178h]
        mov dword ptr [ebp - 104h], ecx
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 2B 11 D5 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x11
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 BC 09 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0xd2
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
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 75 20: jne 0x58764054
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 164h]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x58764054
        __asm _emit 0x74
        __asm _emit 0x12
        push 400000h
        push 4fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0F C4 00 00: call 0x58770460
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 10: jmp 0x58764064
        __asm _emit 0xeb
        __asm _emit 0x10
        push 400000h
        push 31h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FD C3 00 00: call 0x58770460
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x5876412a
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5f0ch]
        and ecx, 0ff0000h
        cmp ecx, 400000h
        ; Exact mapped bytes 75 4D: jne 0x587640cd
        __asm _emit 0x75
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 108h], eax
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 44 1E D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1e
        __asm _emit 0xd2
        __asm _emit 0xff
        push 1
        push 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 56 E8 FF: call 0x585e96d0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f0ch]
        and eax, 0ff00ffffh
        or eax, 0ff0000h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5f0ch], eax
        ; Exact mapped bytes EB 5D: jmp 0x5876412a
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f0ch]
        and eax, 0ff0000h
        cmp eax, 0ff0000h
        ; Exact mapped bytes 75 48: jne 0x5876412a
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 18 D3 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x18
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x5876412a
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 18 D3 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x18
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 29: jne 0x5876412a
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 64a8h], 2710h
        ; Exact mapped bytes 74 1A: je 0x5876412a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5eech], 60000h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 64a4h], 0
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
