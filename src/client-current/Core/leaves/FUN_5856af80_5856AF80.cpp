// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856AF80 .. +0x779 bytes.
extern "C" __declspec(naked) void FUN_5856af80_5856AF80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 3B 07 00 00: je 0x5856b6e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 3910h], 0
        ; Exact mapped bytes 0F 84 D3 05 00 00: je 0x5856b590
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 144h], 0
        ; Exact mapped bytes 0F 84 C3 05 00 00: je 0x5856b590
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 148h], 0
        ; Exact mapped bytes 0F 84 B3 05 00 00: je 0x5856b590
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4B 8B FF FF: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D0 B9 F1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb9
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 B9 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb9
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC 99 F1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x99
        __asm _emit 0xf1
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 2ch], esi
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9F 10 F2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0xf2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 B9 F1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb9
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B A7 F2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa7
        __asm _emit 0xf2
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 28h], esi
        mov dword ptr [ebp - 88h], 32h
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 391ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, eax
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 391ch]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 7D 0D: jge 0x5856b07b
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 30h]
        add eax, 0e10h
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 0E: jmp 0x5856b089
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 30h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 44h], edx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 7D 0D: jge 0x5856b0a2
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 34h]
        add eax, 0e10h
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 0E: jmp 0x5856b0b0
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 34h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 48h], edx
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 18h]
        lea ecx, [eax + edx + 3940h]
        push ecx
        lea edx, [ebp - 88h]
        push edx
        ; Exact mapped bytes E8 77 8A F7 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 18h]
        lea eax, [edx + ecx + 3940h]
        push eax
        lea ecx, [ebp - 88h]
        push ecx
        ; Exact mapped bytes E8 51 8A F7 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 3930h]
        add eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 3934h]
        add edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + 3918h]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 3938h]
        add edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 393ch]
        add ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 3918h]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 FD FF FF: call 0x5856af00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 44h]
        mov dword ptr [ebp - 64h], edx
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        test eax, eax
        ; Exact mapped bytes 0F 85 7D 02 00 00: jne 0x5856b3f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 3910h], 2
        ; Exact mapped bytes 75 28: jne 0x5856b1ad
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0f4h], 0
        ; Exact mapped bytes 74 0B: je 0x5856b19c
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D 1C 22 96 58: mov ecx, dword ptr [0x5896221c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes EB 09: jmp 0x5856b1a5
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 18 22 96 58: mov edx, dword ptr [0x58962218]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 09: jmp 0x5856b1b6
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 0D 24 22 96 58: mov ecx, dword ptr [0x58962224]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 84 40 89 58: call dword ptr [0x58894084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 392ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 84 40 89 58: call dword ptr [0x58894084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 3910h], 2
        ; Exact mapped bytes 75 36: jne 0x5856b21a
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0f4h], 0
        ; Exact mapped bytes 74 12: je 0x5856b202
        __asm _emit 0x74
        __asm _emit 0x12
        push 6
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 99 F1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x99
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 10: jmp 0x5856b212
        __asm _emit 0xeb
        __asm _emit 0x10
        push 7
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 99 F1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x99
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 10: jmp 0x5856b22a
        __asm _emit 0xeb
        __asm _emit 0x10
        push 5
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 98 F1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x98
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 3a54h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 FC 11 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x11
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 97 F1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x97
        __asm _emit 0xf1
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
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x5856b333
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + ecx + 1b0h]
        cmp eax, 4
        ; Exact mapped bytes 75 1C: jne 0x5856b293
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + ecx + 1b0h]
        cmp eax, 1
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x5856b32e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 18h]
        imul eax, dword ptr [edx + ecx + 3944h], 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        sub edx, eax
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + 3918h]
        push edx
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + ecx + 3940h]
        add eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [eax + edx + 3944h], 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        sub edx, eax
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + 3918h]
        push edx
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx + 3940h]
        add ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 88 40 89 58: call dword ptr [0x58894088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x5856b3ce
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 18h]
        imul eax, dword ptr [edx + ecx + 3944h], 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        sub edx, eax
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + 3918h]
        push edx
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + ecx + 3940h]
        add eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [eax + edx + 3944h], 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        sub edx, eax
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + 3918h]
        push edx
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx + 3940h]
        add ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 88 40 89 58: call dword ptr [0x58894088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A FB FF FF: call 0x5856af00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes FF 55 94: call dword ptr [ebp - 0x6c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x94
        nop
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 3a54h], 0
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x5856b590
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5856b418
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 3ch]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 74h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        cmp dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 0F 8D 60 01 00 00: jge 0x5856b590
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        lea edx, [ecx*4 + 10h]
        mov dword ptr [ebp - 90h], edx
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 40h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 90h]
        push edx
        ; Exact mapped bytes E8 F2 86 F7 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 10h]
        add ecx, dword ptr [edx]
        mov dword ptr [ebp - 24h], ecx
        imul eax, dword ptr [ebp - 20h], 56h
        neg eax
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 3918h]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 3ch]
        cdq
        mov ecx, 14h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 73: jne 0x5856b51a
        __asm _emit 0x75
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 3a58h]
        ; Exact mapped bytes E8 2B 95 F1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x95
        __asm _emit 0xf1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 3a58h]
        ; Exact mapped bytes E8 47 C7 F1 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc7
        __asm _emit 0xf1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 3a58h]
        mov dword ptr [ebp - 70h], edx
        push 101h
        push 100h
        mov eax, dword ptr [ebp + 0ch]
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 19 F3 24 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf3
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 71: jmp 0x5856b58b
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 3a54h]
        ; Exact mapped bytes E8 B8 94 F1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0xf1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 3a54h]
        ; Exact mapped bytes E8 D4 C6 F1 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc6
        __asm _emit 0xf1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 3a54h]
        mov dword ptr [ebp - 74h], ecx
        push 101h
        push 100h
        mov edx, dword ptr [ebp + 0ch]
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 A6 F2 24 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf2
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7F FE FF FF: jmp 0x5856b40f
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x5856b5b1
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5856b5b1
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 51: je 0x5856b611
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5856b5d4
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x5856b5ba
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 34 A1 F2 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa1
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x5856b5e5
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x5856b611
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 66 A2 F2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB A9: jmp 0x5856b5ba
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 74 68: je 0x5856b682
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx]
        mov dword ptr [ebp - 98h], edx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 28h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 EF 10 F3 FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x10
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x5856b69a
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 07: ja 0x5856b69a
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 48: je 0x5856b6e8
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 40: je 0x5856b6e6
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5856b6ba
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x5856b6a0
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 80: call dword ptr [ebp - 0x80]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x80
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 91 A1 F2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa1
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB BA: jmp 0x5856b6a0
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x5856b69a
        __asm _emit 0xeb
        __asm _emit 0xb2
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 5D 59 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x59
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
