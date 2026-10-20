// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868FF10 .. +0x81B bytes.
extern "C" __declspec(naked) void FUN_5868ff10_5868FF10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 14h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 148h
        push eax
        ; Exact mapped bytes E8 E0 CE 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        push 14h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 640h
        push ecx
        ; Exact mapped bytes E8 CA CE 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 63ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 118h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 11ch], 0
        push 14h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 698h
        push edx
        ; Exact mapped bytes E8 8D CE 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 5f4h
        push eax
        ; Exact mapped bytes E8 78 CE 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        push 14h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5d0h
        push ecx
        ; Exact mapped bytes E8 62 CE 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        push 14h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 614h
        push edx
        ; Exact mapped bytes E8 4C CE 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        push 14h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 120h
        push eax
        ; Exact mapped bytes E8 37 CE 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5868ffee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 7D 1E: jge 0x58690012
        __asm _emit 0x7d
        __asm _emit 0x1e
        push 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 120h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 DD EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xdd
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D3: jmp 0x5868ffe5
        __asm _emit 0xeb
        __asm _emit 0xd3
        push 14h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 134h
        push edx
        ; Exact mapped bytes E8 EB CD 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        push 14h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 628h
        push eax
        ; Exact mapped bytes E8 D6 CD 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        push 28h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 15ch
        push ecx
        ; Exact mapped bytes E8 C0 CD 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        push 28h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 184h
        push edx
        ; Exact mapped bytes E8 AA CD 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5869007b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x5869012c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 184h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 184h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + ecx], eax
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x58690072
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 424h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 1ach
        push eax
        ; Exact mapped bytes E8 CF CC 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xcc
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 70ch]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2D B0 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 70ch]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0E B0 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 70ch]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F0 AF 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xaf
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 70ch]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D1 AF 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xaf
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 704h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BB AF 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xaf
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586901e8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 2F: jge 0x5869021d
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 67ch]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 88 5D DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 6ach]
        ; Exact mapped bytes E8 16 4B EA FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4b
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C2: jmp 0x586901df
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5869022f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 13: jge 0x58690248
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 5e4h], 55h
        ; Exact mapped bytes EB DE: jmp 0x58690226
        __asm _emit 0xeb
        __asm _emit 0xde
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5869025a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 15: jge 0x58690275
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 6c0h]
        ; Exact mapped bytes E8 0E 59 E2 FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x59
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB DC: jmp 0x58690251
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 728h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 55 5B DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x5b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 72ch]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 3F 5B DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x5b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 734h]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 29 5B DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x5b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 730h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 13 5B DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5b
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 66 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 61 C1 DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc1
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FA 46 DF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x46
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 388h]
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F2 0F 2A 80 B8 00 00 00: cvtsi2sd xmm0, dword ptr [eax + 0xb8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x80
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 59 05 60 02 8B 58: mulsd xmm0, qword ptr [0x588b0260]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0bch], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov byte ptr [ebp - 0dh], 0
        mov dword ptr [ebp - 8], 5
        ; Exact mapped bytes EB 09: jmp 0x58690331
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 8F 02 00 00: jge 0x586905ca
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
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
        ; Exact mapped bytes E8 7A 66 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F3 C0 DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8C 46 DF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x46
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 66 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D0 C0 DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 11 1F E3 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1f
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx esi, byte ptr [eax + 3]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 66 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AB C0 DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 44 46 DF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 35ch]
        cmp ecx, esi
        ; Exact mapped bytes 75 4D: jne 0x586903f4
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 66 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 C0 DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 C8 1E E3 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1e
        __asm _emit 0xe3
        __asm _emit 0xff
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 2B: je 0x586903f9
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 65 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 C0 DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 11 1C 0C 00: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 05: jne 0x586903f9
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x58690328
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 65 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 C0 DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 76 1E E3 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x1e
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 2]
        cmp edx, 11h
        ; Exact mapped bytes 0F 85 9E 01 00 00: jne 0x586905c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 65 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 07 C0 DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 48 1E E3 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x1e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 3
        movzx eax, word ptr [eax + edx + 8]
        movzx ecx, word ptr [ebp - 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8E 64 01 00 00: jle 0x586905c5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 65 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CD BF DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 65 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B8 BF DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 65 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A3 BF DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xbf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 65 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8E BF DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xbf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 CF 1D E3 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov esi, dword ptr [eax + 14h]
        shr esi, 14h
        and esi, 3ffh
        xor esi, 55h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 B4 1D E3 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x1d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edi, dword ptr [eax + 14h]
        shr edi, 0ah
        and edi, 3ffh
        xor edi, 55h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 99 1D E3 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [eax + 14h]
        and edx, 3ffh
        xor edx, 55h
        add edx, edi
        add edx, esi
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes F2 0F 2A 45 E4: cvtsi2sd xmm0, dword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe4
        mov eax, dword ptr [ebp - 1ch]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes F2 0F 11 85 70 FF FF FF: movsd qword ptr [ebp - 0x90], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 5E 1D E3 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        xor edx, 55h
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes F2 0F 2A 45 E0: cvtsi2sd xmm0, dword ptr [ebp - 0x20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 20h]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 A8 93 8A 58: mulsd xmm0, qword ptr [0x588a93a8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x93
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 8D 70 FF FF FF: movsd xmm1, qword ptr [ebp - 0x90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 76 07: jbe 0x5869056c
        __asm _emit 0x76
        __asm _emit 0x07
        ; Exact mapped bytes E9 BE FD FF FF: jmp 0x58690328
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 59: jmp 0x586905c5
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 64 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x64
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C2 BE DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbe
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 03 1D E3 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 3
        ; Exact mapped bytes 66 8B 54 08 08: mov dx, word ptr [eax + ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 64 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x64
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 BE DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 D1 1C E3 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov cl, byte ptr [eax + 3]
        mov byte ptr [ebp - 0dh], cl
        ; Exact mapped bytes E9 5E FD FF FF: jmp 0x58690328
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 0ch]
        test edx, edx
        ; Exact mapped bytes 0F 8E C2 00 00 00: jle 0x58690698
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], 28h
        movzx eax, byte ptr [ebp - 0dh]
        cmp eax, 4
        ; Exact mapped bytes 75 18: jne 0x586905fe
        __asm _emit 0x75
        __asm _emit 0x18
        movzx ecx, word ptr [ebp - 0ch]
        ; Exact mapped bytes F2 0F 2A C1: cvtsi2sd xmm0, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 59 05 A8 5A 89 58: mulsd xmm0, qword ptr [0x58895aa8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        movzx eax, word ptr [ebp - 0ch]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 2A 4D 84: cvtsi2sd xmm1, dword ptr [ebp - 0x7c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes F2 0F 5E C1: divsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 11 85 68 FF FF FF: movsd qword ptr [ebp - 0x98], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2C 8D 68 FF FF FF: cvttsd2si ecx, qword ptr [ebp - 0x98]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add ecx, 19h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c4h], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F2 0F 2A 80 C4 00 00 00: cvtsi2sd xmm0, dword ptr [eax + 0xc4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x80
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 59 05 88 DA 8A 58: mulsd xmm0, qword ptr [0x588ada88]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c4h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c4h], 7dh
        ; Exact mapped bytes 7E 0D: jle 0x58690664
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c4h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [edx + 0b4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b4h
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B D7 EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd7
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 32: jmp 0x586906ca
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c4h], 12h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b4h
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 D6 EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd6
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 80h], eax
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 60 F1 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf1
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 84h], edx
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 44 F1 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf1
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 88h], ecx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 28 F1 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf1
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0f0h]
        ; Exact mapped bytes E8 0A 46 EA FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x46
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
    }
}
