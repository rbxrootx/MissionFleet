// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877BD30 .. +0x4EC bytes.
extern "C" __declspec(naked) void FUN_5877bd30_5877BD30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 3ech]
        sub ecx, 8
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 15 4F 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 85 D9 DA FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0xda
        __asm _emit 0xff
        sub eax, 8
        cmp esi, eax
        ; Exact mapped bytes 0F 8D A0 04 00 00: jge 0x5877c216
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 EC 4E 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 0F 8E 89 04 00 00: jle 0x5877c216
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 D5 4E 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 04 8D DB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 C3 55 04 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5877bdd0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 7D 15: jge 0x5877bdeb
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 11ch]
        ; Exact mapped bytes E8 98 55 04 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x5877bdc7
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 77 4E 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 0F 84 14 04 00 00: je 0x5877c216
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5877be14
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 3ech]
        ; Exact mapped bytes 0F 8D A3 03 00 00: jge 0x5877c1c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 98h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 10h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6C 94 03 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4E 94 03 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 1b4h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 10h]
        neg edx
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 30 94 03 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 234h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 10h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 12 94 03 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 C3 4D 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 8
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 13: jge 0x5877bec8
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 AD 4D 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 6E: jge 0x5877bf36
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 98h]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AE A0 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 134h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 94 A0 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 1b4h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7A A0 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 234h]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 60 A0 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8E 02 00 00: jmp 0x5877c1c4
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 98h]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 90 9F D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9f
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 8A D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8a
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7D 8A D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8a
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x5877c016
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 89 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x89
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CB 10 D1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x10
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 75 37: jne 0x5877bfd4
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 48h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D9 9F D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9f
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1b4h]
        mov dword ptr [ebp - 4ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BF 9F D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x9f
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x5877c011
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 89 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x89
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 72 10 D1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x10
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 75 1B: jne 0x5877c011
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 234h]
        mov dword ptr [ebp - 54h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 80 9F D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9f
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AE 01 00 00: jmp 0x5877c1c4
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 89 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x89
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov esi, dword ptr [ebp - 4]
        add esi, 1ch
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 89 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x89
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 89 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x89
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        sub esi, ecx
        mov dword ptr [ebp - 58h], esi
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E4 0F D1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5877c0e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 134h]
        mov dword ptr [ebp - 60h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 12 9F D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x9f
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 88 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 89 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x89
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov edx, dword ptr [ebp - 4]
        sub edx, ecx
        cmp edx, 1
        ; Exact mapped bytes 74 1D: je 0x5877c0c7
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 1b4h]
        mov dword ptr [ebp - 64h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 CC 9E D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x9e
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5877c0e2
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 1b4h]
        mov dword ptr [ebp - 68h], edx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 AF 9E D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x9e
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x5877c1c4
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 88 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 88 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x88
        __asm _emit 0xd0
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
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x5877c1c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0ffffffffh
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5877c126
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D 94 00 00 00: jge 0x5877c1c4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 88 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 F6 0E D1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x0e
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5877c157
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 60: jne 0x5877c1bf
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 134h]
        mov dword ptr [ebp - 70h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 17 9E D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x9e
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1ch
        cmp eax, 1
        ; Exact mapped bytes 74 1D: je 0x5877c1a2
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1b4h]
        mov dword ptr [ebp - 74h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 F1 9D D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9d
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5877c1bd
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1b4h]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 D4 9D D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9d
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x5877c1c4
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x5877c11d
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 42 FC FF FF: jmp 0x5877be0b
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 2bch]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 87 4A 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x4a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        mov edx, dword ptr [ebp - 8]
        mov edi, dword ptr [edx + 3ech]
        sub edi, 8
        mov eax, 46h
        cdq
        idiv edi
        imul ecx, eax
        lea eax, [esi + ecx + 48h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 1B 95 03 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
