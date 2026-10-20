// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D6FC0 .. +0x63D bytes.
extern "C" __declspec(naked) void FUN_585d6fc0_585D6FC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 7
        ; Exact mapped bytes 75 14: jne 0x585d6fee
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E D9 EA FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd9
        __asm _emit 0xea
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 05: jne 0x585d6fee
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 09 06 00 00: jmp 0x585d75f7
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1070ch], 0
        ; Exact mapped bytes 0F 85 71 04 00 00: jne 0x585d746f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 8B F3 FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 40 B8 FF FF: call 0x585d2850
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 57 04 00 00: jne 0x585d746f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D F9 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 7D 09: jge 0x585d7031
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x585d7038
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D F9 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf9
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 27dh
        ; Exact mapped bytes 7E 09: jle 0x585d7053
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x585d705a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 10h]
        or ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 50 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 7D 09: jge 0x585d707c
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 07: jmp 0x585d7083
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 30h]
        or edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 50 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1ddh
        ; Exact mapped bytes 7E 09: jle 0x585d70a7
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x585d70ae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 34h]
        or eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 84 B5 03 00 00: je 0x585d746f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 59ch], 14h
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE F8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 7F 12: jg 0x585d70e9
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 5ach]
        or eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 13: jmp 0x585d70fc
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5ach]
        and edx, 0feh
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [eax + 5ach], cl
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD F8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B3 E7 EB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe7
        __asm _emit 0xeb
        __asm _emit 0xff
        sub eax, 6
        cmp esi, eax
        ; Exact mapped bytes 7C 2B: jl 0x585d714f
        __asm _emit 0x7c
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 F8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 97 E7 EB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe7
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7F 12: jg 0x585d714f
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 5ach]
        or eax, 2
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 13: jmp 0x585d7162
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5ach]
        and edx, 0fdh
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 24h]
        mov byte ptr [eax + 5ach], cl
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 4F EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4f
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 7F 12: jg 0x585d7190
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 5ach]
        or eax, 4
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 13: jmp 0x585d71a3
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5ach]
        and edx, 0fbh
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 28h]
        mov byte ptr [eax + 5ach], cl
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 4E EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x4e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC E6 EB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe6
        __asm _emit 0xeb
        __asm _emit 0xff
        sub eax, 6
        cmp esi, eax
        ; Exact mapped bytes 7C 2B: jl 0x585d71f6
        __asm _emit 0x7c
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 4E EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x4e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 E6 EB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe6
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7F 12: jg 0x585d71f6
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 5ach]
        or eax, 8
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 13: jmp 0x585d7209
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5ach]
        and edx, 0f7h
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 2ch]
        mov byte ptr [eax + 5ach], cl
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 5ach]
        and eax, 1
        ; Exact mapped bytes 74 33: je 0x585d7257
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 8E D7 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd7
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 40h
        ; Exact mapped bytes 7E 20: jle 0x585d7257
        __asm _emit 0x7e
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 10704h]
        sub ecx, dword ptr [eax + 106bch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10704h], ecx
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x585d7341
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 5ach]
        and ecx, 2
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x585d7341
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 F1 E4 EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe4
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 41 B7 FF FF: call 0x585d29d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        sub esi, 44ch
        mov ecx, dword ptr [ebp - 4]
        cmp esi, dword ptr [ecx + 106bch]
        ; Exact mapped bytes 7E 29: jle 0x585d72cb
        __asm _emit 0x7e
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10704h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 106bch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10704h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106bch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 76: jmp 0x585d7341
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 97 E4 EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe4
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 E7 E5 EB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe5
        __asm _emit 0xeb
        __asm _emit 0xff
        imul edi, eax, 3e8h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 13 E7 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe7
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        sub esi, eax
        mov edx, dword ptr [ebp - 4]
        sub esi, dword ptr [edx + 10704h]
        mov dword ptr [ebp - 8], esi
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 106bch]
        ; Exact mapped bytes 7E 0C: jle 0x585d732c
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 106bch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10704h]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10704h], edx
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5ach]
        and edx, 4
        ; Exact mapped bytes 74 35: je 0x585d7385
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 D2 E3 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe3
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 96h
        ; Exact mapped bytes 7E 20: jle 0x585d7385
        __asm _emit 0x7e
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 10708h]
        sub eax, dword ptr [edx + 106bch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10708h], eax
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x585d746f
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 5ach]
        and eax, 8
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x585d746f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 A3 E3 EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe3
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 F3 B5 FF FF: call 0x585d29b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        sub esi, 320h
        mov eax, dword ptr [ebp - 4]
        cmp esi, dword ptr [eax + 106bch]
        ; Exact mapped bytes 7E 29: jle 0x585d73f9
        __asm _emit 0x7e
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 106bch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10708h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 106bch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10708h], ecx
        ; Exact mapped bytes EB 76: jmp 0x585d746f
        __asm _emit 0xeb
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 49 E3 EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe3
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 99 E4 EB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe4
        __asm _emit 0xeb
        __asm _emit 0xff
        imul edi, eax, 3e8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 E5 E5 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe5
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        sub esi, eax
        mov edx, dword ptr [ebp - 4]
        sub esi, dword ptr [edx + 10708h]
        mov dword ptr [ebp - 0ch], esi
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 106bch]
        ; Exact mapped bytes 7E 0C: jle 0x585d745a
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 106bch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10708h]
        add edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10708h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5a4h], 0
        ; Exact mapped bytes 75 38: jne 0x585d74b3
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 106fch], 0
        ; Exact mapped bytes 74 2C: je 0x585d74b3
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 38h], ecx
        lea edx, [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E1 B4 FF FF: call 0x585d2980
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10668h], ecx
        mov dword ptr [eax + 1066ch], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10730h], 0
        ; Exact mapped bytes 0F 84 34 01 00 00: je 0x585d75f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10730h], 0
        ; Exact mapped bytes 0F 84 24 01 00 00: je 0x585d75f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 106fch], 0
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x585d75f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10730h]
        ; Exact mapped bytes E8 0F D5 EA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], edx
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 B6 D4 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd4
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 3e8h
        ; Exact mapped bytes 0F 8E E2 00 00 00: jle 0x585d75f7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 AD B4 FF FF: call 0x585d29d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 3D E2 EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe2
        __asm _emit 0xeb
        __asm _emit 0xff
        sub eax, 3e8h
        cmp esi, eax
        ; Exact mapped bytes 0F 8D B7 00 00 00: jge 0x585d75f7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 E2 E1 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe1
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 258h
        ; Exact mapped bytes 0F 8E 9E 00 00 00: jle 0x585d75f7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 49 B4 FF FF: call 0x585d29b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 D9 E1 EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe1
        __asm _emit 0xeb
        __asm _emit 0xff
        sub eax, 258h
        cmp esi, eax
        ; Exact mapped bytes 7D 77: jge 0x585d75f7
        __asm _emit 0x7d
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10730h]
        ; Exact mapped bytes E8 C2 4B EB FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 F4 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AE 4B EB FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4b
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 3C: jne 0x585d75e2
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 40h]
        sub eax, dword ptr [edx + 10d90h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 10704h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10704h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, dword ptr [eax + 10d94h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 10708h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10708h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 10d90h], edx
        mov dword ptr [ecx + 10d94h], eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
