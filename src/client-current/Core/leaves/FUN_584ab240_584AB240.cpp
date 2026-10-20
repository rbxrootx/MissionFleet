// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AB240 .. +0xA27 bytes.
extern "C" __declspec(naked) void FUN_584ab240_584AB240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 124h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
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
        ; Exact mapped bytes 0F 84 E9 09 00 00: je 0x584abc56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x584ab28e
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584ab28e
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 51: je 0x584ab2ee
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x584ab2b1
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB E6: jmp 0x584ab297
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 57 A4 FE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x584ab2c2
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x584ab2ee
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 89 A5 FE FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB A9: jmp 0x584ab297
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 0F 84 EF 08 00 00: je 0x584abbea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 28h]
        add edx, dword ptr [eax + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx]
        mov dword ptr [ebp - 3ch], edx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 28h]
        add eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 38h]
        add ecx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 7D 08: jge 0x584ab366
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7D 09: jge 0x584ab37a
        __asm _emit 0x7d
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 09: jle 0x584ab38e
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 7E 09: jle 0x584ab3a2
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 9ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x584ab45a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 0fch]
        cmp ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes 7D 4A: jge 0x584ab412
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [edx + 0f0h]
        mov ecx, dword ptr [ebp - 28h]
        sub eax, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 48: jmp 0x584ab45a
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [edx + 0f0h]
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 8D 84 07 00 00: jge 0x584abbea
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8D 78 07 00 00: jge 0x584abbea
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 9ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 03 05 00 00: je 0x584ab987
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 28h]
        movzx ecx, word ptr [ecx + 9ch]
        mov eax, dword ptr [ebp - 5ch]
        cdq
        idiv ecx
        add eax, 1
        mov dword ptr [ebp - 124h], eax
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 50h], edx
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 64h], ecx
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 9ch]
        add ecx, 1
        push ecx
        ; Exact mapped bytes E8 67 5B 38 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x5b
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 40h]
        mov byte ptr [edx + ecx], 0
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 9ch]
        add ecx, 1
        push ecx
        ; Exact mapped bytes E8 37 5B 38 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x5b
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 9ch]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 E0 18 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x18
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 0F 8D D7 02 00 00: jge 0x584ab829
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 25 5C 3A 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x5c
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 28h]
        movzx edx, word ptr [ecx + 9ch]
        mov ecx, dword ptr [ebp - 34h]
        lea edx, [ecx + edx - 1]
        cmp eax, edx
        ; Exact mapped bytes 0F 82 06 01 00 00: jb 0x584ab67d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        add eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 28h]
        movzx edx, word ptr [ecx + 9ch]
        movzx eax, byte ptr [eax + edx - 1]
        and eax, 80h
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x584ab67d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        movzx edx, word ptr [ecx + 9ch]
        sub edx, 1
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 30h]
        movzx eax, byte ptr [ecx + edx]
        and eax, 80h
        ; Exact mapped bytes 74 11: je 0x584ab5d2
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 7C 0B: jl 0x584ab5d2
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 30h]
        sub ecx, 1
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB DB: jmp 0x584ab5ad
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 74h]
        sub eax, dword ptr [ebp - 30h]
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x584ab5ed
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x584ab603
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 28h]
        movzx edx, word ptr [ecx + 9ch]
        sub edx, 1
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 0D: jmp 0x584ab610
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 9ch]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 34h]
        push edx
        lea eax, [ebp - 30h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 58h]
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 34 06 00 00: call 0x584abc70
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        movzx eax, word ptr [edx + 9ch]
        add eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 BB 17 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x17
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        add eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 24 12 3A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 34h]
        add edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x584ab700
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 9ch]
        mov dword ptr [ebp - 78h], ecx
        lea edx, [ebp - 34h]
        push edx
        lea eax, [ebp - 78h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 58h]
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BA 05 00 00: call 0x584abc70
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        movzx eax, word ptr [edx + 9ch]
        add eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 41 17 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x17
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 28h]
        movzx eax, word ptr [edx + 9ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 A3 11 3A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x11
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 9ch]
        add ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 92 FD FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 6C FF FF FF: call dword ptr [ebp - 0x94]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes E8 EC 59 3A 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x59
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 78: je 0x584ab813
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 9ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 91 FD FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 98h]
        push edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        push 0d2d2d2h
        push 0
        mov edx, dword ptr [ebp - 48h]
        push edx
        lea eax, [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 58 FF FF FF: call dword ptr [ebp - 0xa8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 92 08 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes E9 1D FD FF FF: jmp 0x584ab546
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 7C 08 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4ch]
        sub ecx, eax
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 6ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 6ch], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 6ch]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x584ab96a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E8: shr ax, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x584ab96a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10ch], ecx
        lea edx, [ebp - 120h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 94h]
        cdq
        idiv ecx
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 F4 FE FF FF: call dword ptr [ebp - 0x10c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 D6 07 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 28h]
        movzx esi, word ptr [edx + 9ch]
        mov eax, dword ptr [ebp - 28h]
        mov eax, dword ptr [eax + 94h]
        cdq
        idiv esi
        imul ecx, eax
        add ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 60h], ecx
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 104h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 9E 07 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 60h]
        lea edx, [ecx + eax - 3]
        mov dword ptr [ebp - 100h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 96 B0 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 64h]
        add ecx, dword ptr [ebp - 120h]
        add ecx, eax
        mov dword ptr [ebp - 0e4h], ecx
        push 0
        push 100h
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        add edx, dword ptr [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 F8 FF FF: call 0x584ab1f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0fch], eax
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        ; Exact mapped bytes E8 CC 56 38 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x56
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 63 02 00 00: jmp 0x584abbea
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 108h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0b0h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 28h]
        add edx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 0bch], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 8F FD FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        lea ecx, [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 95 38 FF FF FF: call dword ptr [ebp - 0xc8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 100h]
        push ecx
        ; Exact mapped bytes E8 38 57 3A 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x57
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x584abadd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0d0h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 0d4h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 21 8F FD FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        mov edx, dword ptr [ebp - 0cch]
        push edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        push 0d2d2d2h
        push 0
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        lea eax, [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes FF 95 20 FF FF FF: call dword ptr [ebp - 0xe0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 6ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 6ch], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 6ch]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x584abbea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E8: shr ax, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x584abbea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 110h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0e8h], ecx
        lea edx, [ebp - 118h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 94h]
        sub edx, dword ptr [ecx + 98h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 28h]
        add ecx, dword ptr [edx + 98h]
        push ecx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes FF 95 18 FF FF FF: call dword ptr [ebp - 0xe8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0ech], ecx
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 1E 05 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        lea edx, [ecx + eax - 3]
        mov dword ptr [ebp - 0f0h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 16 AE FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 118h]
        add ecx, eax
        mov dword ptr [ebp - 0f4h], ecx
        push 0
        push 100h
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ebp - 118h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 07 F6 FF FF: call 0x584ab1f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 12: je 0x584abc02
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 07: ja 0x584abc02
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 4E: je 0x584abc56
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 46: je 0x584abc54
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x584abc22
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB E6: jmp 0x584abc08
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 0f8h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 08 FF FF FF: call dword ptr [ebp - 0xf8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 23 9C FE FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB B4: jmp 0x584abc08
        __asm _emit 0xeb
        __asm _emit 0xb4
        ; Exact mapped bytes EB AC: jmp 0x584abc02
        __asm _emit 0xeb
        __asm _emit 0xac
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 EF 53 38 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x53
        __asm _emit 0x38
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
