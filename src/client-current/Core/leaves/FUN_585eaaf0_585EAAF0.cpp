// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EAAF0 .. +0xFD8 bytes.
extern "C" __declspec(naked) void FUN_585eaaf0_585EAAF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7f0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 718h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 58903798h
        ; Exact mapped bytes FF 15 7C 42 89 58: call dword ptr [0x5889427c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp - 104h]
        push edx
        push 58903798h
        push 588ad0fch
        lea eax, [ebp - 304h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0
        push 80h
        push 1
        push 0
        push 0
        push 40000000h
        lea ecx, [ebp - 304h]
        push ecx
        ; Exact mapped bytes E8 98 87 1C 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x87
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 718h]
        mov dword ptr [edx + 21e14h], eax
        mov eax, dword ptr [ebp - 718h]
        cmp dword ptr [eax + 21e14h], -1
        ; Exact mapped bytes 0F 85 FF 01 00 00: jne 0x585ead86
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 740h], 0
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 5
        ; Exact mapped bytes 0F 8E 6F 01 00 00: jle 0x585ead16
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 734h], 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 730h], eax
        mov eax, dword ptr [ebp - 730h]
        ; Exact mapped bytes 0F BE 8C 05 F7 FE FF FF: movsx ecx, byte ptr [ebp + eax - 0x109]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, 5fh
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x585ead16
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 730h]
        sub edx, 4
        mov dword ptr [ebp - 72ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x585eabfb
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 72ch]
        add eax, 1
        mov dword ptr [ebp - 72ch], eax
        mov ecx, dword ptr [ebp - 72ch]
        cmp ecx, dword ptr [ebp - 730h]
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x585eac91
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 72ch]
        ; Exact mapped bytes 0F BE 84 15 FC FE FF FF: movsx eax, byte ptr [ebp + edx - 0x104]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 30h
        ; Exact mapped bytes 7C 13: jl 0x585eac33
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 72ch]
        ; Exact mapped bytes 0F BE 94 0D FC FE FF FF: movsx edx, byte ptr [ebp + ecx - 0x104]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, 39h
        ; Exact mapped bytes 7E 30: jle 0x585eac63
        __asm _emit 0x7e
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 734h]
        mov dword ptr [ebp - 74ch], eax
        cmp dword ptr [ebp - 74ch], 100h
        ; Exact mapped bytes 73 02: jae 0x585eac4d
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x585eac53
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 57 65 24 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x65
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 74ch]
        mov byte ptr [ebp + ecx - 204h], 0
        ; Exact mapped bytes EB 2E: jmp 0x585eac91
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 734h]
        mov eax, dword ptr [ebp - 72ch]
        mov cl, byte ptr [ebp + eax - 104h]
        mov byte ptr [ebp + edx - 204h], cl
        mov edx, dword ptr [ebp - 734h]
        add edx, 1
        mov dword ptr [ebp - 734h], edx
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x585eabec
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 72ch]
        cmp eax, dword ptr [ebp - 730h]
        ; Exact mapped bytes 75 77: jne 0x585ead16
        __asm _emit 0x75
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 730h]
        sub ecx, 5
        mov dword ptr [ebp - 750h], ecx
        cmp dword ptr [ebp - 750h], 100h
        ; Exact mapped bytes 73 02: jae 0x585eacbc
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x585eacc2
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 E8 64 24 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 750h]
        mov byte ptr [ebp + edx - 104h], 0
        mov eax, dword ptr [ebp - 734h]
        mov dword ptr [ebp - 754h], eax
        cmp dword ptr [ebp - 754h], 100h
        ; Exact mapped bytes 73 02: jae 0x585eacea
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x585eacf0
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 BA 64 24 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 754h]
        mov byte ptr [ebp + ecx - 204h], 0
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes E8 8E CF 26 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xcf
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 740h], eax
        mov eax, dword ptr [ebp - 740h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        push 58903798h
        push 588ad108h
        lea edx, [ebp - 304h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        push 0
        push 80h
        push 1
        push 0
        push 0
        push 40000000h
        lea eax, [ebp - 304h]
        push eax
        ; Exact mapped bytes E8 A4 85 1C 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 718h]
        mov dword ptr [ecx + 21e14h], eax
        mov edx, dword ptr [ebp - 740h]
        add edx, 1
        mov dword ptr [ebp - 740h], edx
        mov eax, dword ptr [ebp - 718h]
        cmp dword ptr [eax + 21e14h], -1
        ; Exact mapped bytes 74 90: je 0x585ead16
        __asm _emit 0x74
        __asm _emit 0x90
        mov ecx, dword ptr [ebp - 718h]
        cmp dword ptr [ecx + 21e14h], -1
        ; Exact mapped bytes 0F 84 20 0D 00 00: je 0x585ebab9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 588ad118h
        mov edx, dword ptr [ebp - 718h]
        add edx, 21af0h
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 1
        mov ecx, dword ptr [ebp - 718h]
        ; Exact mapped bytes 66 89 81 20 1B 02 00: mov word ptr [ecx + 0x21b20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 718h]
        ; Exact mapped bytes 66 89 90 22 1B 02 00: mov word ptr [eax + 0x21b22], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 718h]
        ; Exact mapped bytes 66 8B 15 28 D2 8F 58: mov dx, word ptr [0x588fd228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 91 24 1B 02 00: mov word ptr [ecx + 0x21b24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 718h]
        ; Exact mapped bytes 66 8B 0D 2C D2 8F 58: mov cx, word ptr [0x588fd22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 88 26 1B 02 00: mov word ptr [eax + 0x21b26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x26
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 718h]
        mov al, byte ptr [edx + 10776h]
        and al, 0fh
        movzx ecx, al
        mov edx, dword ptr [ebp - 718h]
        mov dword ptr [edx + 21b34h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 12 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x12
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 718h]
        mov dword ptr [ecx + 21b38h], eax
        lea edx, [ebp - 714h]
        push edx
        ; Exact mapped bytes FF 15 3C 42 89 58: call dword ptr [0x5889423c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 718h]
        ; Exact mapped bytes 66 8B 8D EC F8 FF FF: mov cx, word ptr [ebp - 0x714]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 88 28 1B 02 00: mov word ptr [eax + 0x21b28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 718h]
        mov al, byte ptr [ebp - 712h]
        mov byte ptr [edx + 21b2ah], al
        mov ecx, dword ptr [ebp - 718h]
        mov dl, byte ptr [ebp - 70eh]
        mov byte ptr [ecx + 21b2bh], dl
        mov eax, dword ptr [ebp - 718h]
        mov cl, byte ptr [ebp - 70ch]
        mov byte ptr [eax + 21b2ch], cl
        mov edx, dword ptr [ebp - 718h]
        mov al, byte ptr [ebp - 70ah]
        mov byte ptr [edx + 21b2dh], al
        mov ecx, dword ptr [ebp - 718h]
        mov dl, byte ptr [ebp - 708h]
        mov byte ptr [ecx + 21b2eh], dl
        xor eax, eax
        mov ecx, dword ptr [ebp - 718h]
        ; Exact mapped bytes 66 89 81 30 1B 02 00: mov word ptr [ecx + 0x21b30], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 718h]
        movzx eax, byte ptr [edx + 21b2ch]
        add eax, 9
        mov ecx, dword ptr [ebp - 718h]
        mov byte ptr [ecx + 21b2ch], al
        mov edx, dword ptr [ebp - 718h]
        movzx eax, byte ptr [edx + 21b2ch]
        cmp eax, 18h
        ; Exact mapped bytes 7E 37: jle 0x585eaf1d
        __asm _emit 0x7e
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 718h]
        mov dl, byte ptr [ecx + 21b2bh]
        add dl, 1
        mov eax, dword ptr [ebp - 718h]
        mov byte ptr [eax + 21b2bh], dl
        mov ecx, dword ptr [ebp - 718h]
        movzx edx, byte ptr [ecx + 21b2ch]
        sub edx, 18h
        mov eax, dword ptr [ebp - 718h]
        mov byte ptr [eax + 21b2ch], dl
        mov ecx, dword ptr [ebp - 718h]
        movzx edx, byte ptr [ecx + 21b2bh]
        cmp edx, 1ch
        ; Exact mapped bytes 7E 6B: jle 0x585eaf9a
        __asm _emit 0x7e
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 718h]
        movzx ecx, byte ptr [eax + 21b2ah]
        cmp ecx, 2
        ; Exact mapped bytes 75 59: jne 0x585eaf9a
        __asm _emit 0x75
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 718h]
        movzx eax, word ptr [edx + 21b28h]
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x585eaf5a
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x585eaf9a
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 718h]
        mov dl, byte ptr [ecx + 21b2ah]
        add dl, 1
        mov eax, dword ptr [ebp - 718h]
        mov byte ptr [eax + 21b2ah], dl
        mov ecx, dword ptr [ebp - 718h]
        movzx edx, byte ptr [ecx + 21b2bh]
        sub edx, 1ch
        mov eax, dword ptr [ebp - 718h]
        mov byte ptr [eax + 21b2bh], dl
        ; Exact mapped bytes E9 5C 01 00 00: jmp 0x585eb0f6
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 718h]
        movzx edx, byte ptr [ecx + 21b2bh]
        cmp edx, 1dh
        ; Exact mapped bytes 7E 6B: jle 0x585eb017
        __asm _emit 0x7e
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 718h]
        movzx ecx, byte ptr [eax + 21b2ah]
        cmp ecx, 2
        ; Exact mapped bytes 75 59: jne 0x585eb017
        __asm _emit 0x75
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 718h]
        movzx eax, word ptr [edx + 21b28h]
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x585eafd7
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 3C: jne 0x585eb017
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 718h]
        mov dl, byte ptr [ecx + 21b2ah]
        add dl, 1
        mov eax, dword ptr [ebp - 718h]
        mov byte ptr [eax + 21b2ah], dl
        mov ecx, dword ptr [ebp - 718h]
        movzx edx, byte ptr [ecx + 21b2bh]
        sub edx, 1dh
        mov eax, dword ptr [ebp - 718h]
        mov byte ptr [eax + 21b2bh], dl
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x585eb0f6
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 718h]
        movzx edx, byte ptr [ecx + 21b2bh]
        cmp edx, 1eh
        ; Exact mapped bytes 0F 8E 80 00 00 00: jle 0x585eb0ad
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 718h]
        movzx ecx, byte ptr [eax + 21b2ah]
        cmp ecx, 4
        ; Exact mapped bytes 74 36: je 0x585eb075
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 718h]
        movzx eax, byte ptr [edx + 21b2ah]
        cmp eax, 6
        ; Exact mapped bytes 74 24: je 0x585eb075
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 718h]
        movzx edx, byte ptr [ecx + 21b2ah]
        cmp edx, 9
        ; Exact mapped bytes 74 12: je 0x585eb075
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 718h]
        movzx ecx, byte ptr [eax + 21b2ah]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 38: jne 0x585eb0ad
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 718h]
        mov al, byte ptr [edx + 21b2ah]
        add al, 1
        mov ecx, dword ptr [ebp - 718h]
        mov byte ptr [ecx + 21b2ah], al
        mov edx, dword ptr [ebp - 718h]
        movzx eax, byte ptr [edx + 21b2bh]
        sub eax, 1eh
        mov ecx, dword ptr [ebp - 718h]
        mov byte ptr [ecx + 21b2bh], al
        ; Exact mapped bytes EB 49: jmp 0x585eb0f6
        __asm _emit 0xeb
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 718h]
        movzx eax, byte ptr [edx + 21b2bh]
        cmp eax, 1fh
        ; Exact mapped bytes 7E 37: jle 0x585eb0f6
        __asm _emit 0x7e
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 718h]
        mov dl, byte ptr [ecx + 21b2ah]
        add dl, 1
        mov eax, dword ptr [ebp - 718h]
        mov byte ptr [eax + 21b2ah], dl
        mov ecx, dword ptr [ebp - 718h]
        movzx edx, byte ptr [ecx + 21b2bh]
        sub edx, 1fh
        mov eax, dword ptr [ebp - 718h]
        mov byte ptr [eax + 21b2bh], dl
        mov ecx, dword ptr [ebp - 718h]
        movzx edx, byte ptr [ecx + 21b2ah]
        cmp edx, 0ch
        ; Exact mapped bytes 7E 3A: jle 0x585eb142
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 718h]
        ; Exact mapped bytes 66 8B 88 28 1B 02 00: mov cx, word ptr [eax + 0x21b28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 718h]
        ; Exact mapped bytes 66 89 8A 28 1B 02 00: mov word ptr [edx + 0x21b28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 718h]
        movzx ecx, byte ptr [eax + 21b2ah]
        sub ecx, 0ch
        mov edx, dword ptr [ebp - 718h]
        mov byte ptr [edx + 21b2ah], cl
        mov edi, dword ptr [ebp - 718h]
        add edi, 21b3ch
        mov ecx, 77h
        mov esi, 589475a0h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [ebp - 718h]
        add esi, 10744h
        mov edi, dword ptr [ebp - 718h]
        add edi, 21d18h
        mov ecx, 31h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [ebp - 718h]
        add esi, 21ddch
        mov edi, dword ptr [ebp - 718h]
        add edi, 21ddch
        mov ecx, 0ah
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 718h]
        mov dword ptr [eax + 21e08h], 0
        push 0
        lea ecx, [ebp - 720h]
        push ecx
        push 31ch
        mov edx, dword ptr [ebp - 718h]
        add edx, 21af0h
        push edx
        mov eax, dword ptr [ebp - 718h]
        mov ecx, dword ptr [eax + 21e14h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 0C EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 71ch], eax
        cmp dword ptr [ebp - 71ch], 0
        ; Exact mapped bytes 0F 84 C5 08 00 00: je 0x585ebab9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 41 12 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x12
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FA 0C EA FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 7b8h], eax
        mov edx, dword ptr [ebp - 718h]
        mov eax, dword ptr [edx + 21e14h]
        mov dword ptr [ebp - 7e0h], eax
        push 0
        lea ecx, [ebp - 720h]
        push ecx
        push 114h
        mov edx, dword ptr [ebp - 7b8h]
        push edx
        mov eax, dword ptr [ebp - 7e0h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 F4 11 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x11
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0D 98 E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 1
        and ecx, 1fh
        ; Exact mapped bytes 74 71: je 0x585eb2cd
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 D9 11 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 97 E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x97
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        shr edx, 1
        and edx, 1fh
        imul eax, edx, 18h
        mov dword ptr [ebp - 7e4h], eax
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 B7 11 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x11
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 20 80 FE FF: call 0x585d32b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 7e8h], eax
        mov ecx, dword ptr [ebp - 718h]
        mov edx, dword ptr [ecx + 21e14h]
        mov dword ptr [ebp - 7ech], edx
        push 0
        lea eax, [ebp - 720h]
        push eax
        mov ecx, dword ptr [ebp - 7e4h]
        push ecx
        mov edx, dword ptr [ebp - 7e8h]
        push edx
        mov eax, dword ptr [ebp - 7ech]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 68 11 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 51 49 EB FF: call 0x5849fc30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x49
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 11 01 00 00: je 0x585eb3fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 73ch], 0
        mov dword ptr [ebp - 738h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585eb310
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 738h]
        add edx, 1
        mov dword ptr [ebp - 738h], edx
        cmp dword ptr [ebp - 738h], 20h
        ; Exact mapped bytes 7D 7C: jge 0x585eb395
        __asm _emit 0x7d
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 1C 11 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x11
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 760h], eax
        mov eax, dword ptr [ebp - 738h]
        push eax
        mov ecx, dword ptr [ebp - 760h]
        ; Exact mapped bytes E8 24 78 EB FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 1]
        cmp ecx, 2ah
        ; Exact mapped bytes 74 4B: je 0x585eb390
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 F0 10 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x10
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 764h], eax
        mov edx, dword ptr [ebp - 738h]
        push edx
        mov ecx, dword ptr [ebp - 764h]
        ; Exact mapped bytes E8 F8 77 EB FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x77
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 73ch]
        shl ecx, 5
        lea edi, [ebp + ecx - 704h]
        mov ecx, 8
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 73ch]
        add edx, 1
        mov dword ptr [ebp - 73ch], edx
        ; Exact mapped bytes E9 6C FF FF FF: jmp 0x585eb301
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 A0 10 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x10
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 89 48 EB FF: call 0x5849fc30
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 4]
        cmp eax, dword ptr [ebp - 73ch]
        ; Exact mapped bytes 75 30: jne 0x585eb3e3
        __asm _emit 0x75
        __asm _emit 0x30
        push 0
        lea ecx, [ebp - 720h]
        push ecx
        mov edx, dword ptr [ebp - 73ch]
        shl edx, 5
        push edx
        lea eax, [ebp - 704h]
        push eax
        mov ecx, dword ptr [ebp - 718h]
        mov edx, dword ptr [ecx + 21e14h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 19: jmp 0x585eb3fc
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0
        push 588ad138h
        push 588ad144h
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 39 10 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x10
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D2 95 E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 768h], eax
        mov ecx, dword ptr [ebp - 718h]
        mov edx, dword ptr [ecx + 21e14h]
        mov dword ptr [ebp - 76ch], edx
        push 0
        lea eax, [ebp - 720h]
        push eax
        push 390h
        mov ecx, dword ptr [ebp - 768h]
        push ecx
        mov edx, dword ptr [ebp - 76ch]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 ED 0F EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B6 C7 E9 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 770h], eax
        mov eax, dword ptr [ebp - 718h]
        mov ecx, dword ptr [eax + 21e14h]
        mov dword ptr [ebp - 774h], ecx
        push 0
        lea edx, [ebp - 720h]
        push edx
        push 0ceh
        mov eax, dword ptr [ebp - 770h]
        push eax
        mov ecx, dword ptr [ebp - 774h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 A1 0F EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2A A3 EA FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa3
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 778h], eax
        mov edx, dword ptr [ebp - 718h]
        mov eax, dword ptr [edx + 21e14h]
        mov dword ptr [ebp - 77ch], eax
        push 0
        lea ecx, [ebp - 720h]
        push ecx
        push 0ach
        mov edx, dword ptr [ebp - 778h]
        push edx
        mov eax, dword ptr [ebp - 77ch]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 55 0F EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE A2 EA FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa2
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 780h], eax
        mov ecx, dword ptr [ebp - 718h]
        mov edx, dword ptr [ecx + 21e14h]
        mov dword ptr [ebp - 784h], edx
        push 0
        lea eax, [ebp - 720h]
        push eax
        push 0a4h
        mov ecx, dword ptr [ebp - 780h]
        push ecx
        mov edx, dword ptr [ebp - 784h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 08 0F EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C1 09 EA FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x585eb597
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 EB 0E EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 14 E5 F9 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 788h], eax
        mov ecx, dword ptr [ebp - 718h]
        mov edx, dword ptr [ecx + 21e14h]
        mov dword ptr [ebp - 78ch], edx
        push 0
        lea eax, [ebp - 720h]
        push eax
        push 9ch
        mov ecx, dword ptr [ebp - 788h]
        push ecx
        mov edx, dword ptr [ebp - 78ch]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 9E 0E EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 57 09 EA FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0xff
        movzx eax, word ptr [eax + 86h]
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x585eb601
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 81 0E EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA 7E F3 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 790h], eax
        mov ecx, dword ptr [ebp - 718h]
        mov edx, dword ptr [ecx + 21e14h]
        mov dword ptr [ebp - 794h], edx
        push 0
        lea eax, [ebp - 720h]
        push eax
        push 9ch
        mov ecx, dword ptr [ebp - 790h]
        push ecx
        mov edx, dword ptr [ebp - 794h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 34 0E EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x0e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED 08 EA FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        movzx eax, word ptr [eax + 88h]
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x585eb66b
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 17 0E EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 70 FE FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 798h], eax
        mov ecx, dword ptr [ebp - 718h]
        mov edx, dword ptr [ecx + 21e14h]
        mov dword ptr [ebp - 79ch], edx
        push 0
        lea eax, [ebp - 720h]
        push eax
        push 9ch
        mov ecx, dword ptr [ebp - 798h]
        push ecx
        mov edx, dword ptr [ebp - 79ch]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 CA 0D EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 08 EA FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        movzx eax, word ptr [eax + 8ah]
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x585eb6d5
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 AD 0D EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 16 70 FE FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 7a0h], eax
        mov ecx, dword ptr [ebp - 718h]
        mov edx, dword ptr [ecx + 21e14h]
        mov dword ptr [ebp - 7a4h], edx
        push 0
        lea eax, [ebp - 720h]
        push eax
        push 9ch
        mov ecx, dword ptr [ebp - 7a0h]
        push ecx
        mov edx, dword ptr [ebp - 7a4h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 744h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585eb6f0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 744h]
        add eax, 1
        mov dword ptr [ebp - 744h], eax
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 45 0D EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E 93 E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x93
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 1
        and ecx, 1fh
        cmp dword ptr [ebp - 744h], ecx
        ; Exact mapped bytes 0F 83 8E 03 00 00: jae 0x585ebaa3
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 20 0D EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 89 7B FE FF: call 0x585d32b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 744h], 18h
        add eax, edx
        mov dword ptr [ebp - 728h], eax
        mov dword ptr [ebp - 724h], 0
        mov eax, dword ptr [ebp - 728h]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 748h], cl
        cmp byte ptr [ebp - 748h], 5
        ; Exact mapped bytes 74 1B: je 0x585eb772
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp byte ptr [ebp - 748h], 6
        ; Exact mapped bytes 74 79: je 0x585eb7d9
        __asm _emit 0x74
        __asm _emit 0x79
        cmp byte ptr [ebp - 748h], 0dh
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x585eb83d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x585eb89f
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 C3 0C EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 7ach], eax
        mov edx, dword ptr [ebp - 728h]
        movzx eax, byte ptr [edx + 0eh]
        mov dword ptr [ebp - 7a8h], eax
        mov ecx, dword ptr [ebp - 7a8h]
        push ecx
        mov ecx, dword ptr [ebp - 7ach]
        ; Exact mapped bytes E8 9B 18 EA FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x18
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 724h], eax
        push 0
        lea edx, [ebp - 720h]
        push edx
        push 0b4h
        mov eax, dword ptr [ebp - 724h]
        push eax
        mov ecx, dword ptr [ebp - 718h]
        mov edx, dword ptr [ecx + 21e14h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x585eb89f
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 5C 0C EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 7b4h], eax
        mov eax, dword ptr [ebp - 728h]
        movzx ecx, byte ptr [eax + 0eh]
        mov dword ptr [ebp - 7b0h], ecx
        mov edx, dword ptr [ebp - 7b0h]
        push edx
        mov ecx, dword ptr [ebp - 7b4h]
        ; Exact mapped bytes E8 34 18 EA FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x18
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 724h], eax
        push 0
        lea eax, [ebp - 720h]
        push eax
        push 0a8h
        mov ecx, dword ptr [ebp - 724h]
        push ecx
        mov edx, dword ptr [ebp - 718h]
        mov eax, dword ptr [edx + 21e14h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 62: jmp 0x585eb89f
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 F8 0B EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 7bch], eax
        mov ecx, dword ptr [ebp - 728h]
        movzx edx, byte ptr [ecx + 0eh]
        mov dword ptr [ebp - 7d4h], edx
        mov eax, dword ptr [ebp - 7d4h]
        push eax
        mov ecx, dword ptr [ebp - 7bch]
        ; Exact mapped bytes E8 D0 17 EA FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x17
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 724h], eax
        push 0
        lea ecx, [ebp - 720h]
        push ecx
        push 0d4h
        mov edx, dword ptr [ebp - 724h]
        push edx
        mov eax, dword ptr [ebp - 718h]
        mov ecx, dword ptr [eax + 21e14h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 724h], 0
        ; Exact mapped bytes 0F 84 F2 01 00 00: je 0x585eba9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 728h]
        mov dl, byte ptr [ecx + eax + 4]
        mov byte ptr [ebp - 758h], dl
        cmp byte ptr [ebp - 758h], 0bh
        ; Exact mapped bytes 74 0E: je 0x585eb8db
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp byte ptr [ebp - 758h], 0ch
        ; Exact mapped bytes 74 6B: je 0x585eb941
        __asm _emit 0x74
        __asm _emit 0x6b
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x585eb9a5
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 5A 0B EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 7c4h], eax
        mov eax, dword ptr [ebp - 728h]
        movzx ecx, byte ptr [eax + 0eh]
        mov dword ptr [ebp - 7c0h], ecx
        push 0
        mov edx, dword ptr [ebp - 7c0h]
        push edx
        mov ecx, dword ptr [ebp - 7c4h]
        ; Exact mapped bytes E8 00 44 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 724h], eax
        push 0
        lea eax, [ebp - 720h]
        push eax
        push 0ach
        mov ecx, dword ptr [ebp - 724h]
        push ecx
        mov edx, dword ptr [ebp - 718h]
        mov eax, dword ptr [edx + 21e14h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 64: jmp 0x585eb9a5
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 F4 0A EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 7cch], eax
        mov ecx, dword ptr [ebp - 728h]
        movzx edx, byte ptr [ecx + 0eh]
        mov dword ptr [ebp - 7c8h], edx
        push 0
        mov eax, dword ptr [ebp - 7c8h]
        push eax
        mov ecx, dword ptr [ebp - 7cch]
        ; Exact mapped bytes E8 9A 43 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x43
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 724h], eax
        push 0
        lea ecx, [ebp - 720h]
        push ecx
        push 0b4h
        mov edx, dword ptr [ebp - 724h]
        push edx
        mov eax, dword ptr [ebp - 718h]
        mov ecx, dword ptr [eax + 21e14h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 728h]
        mov cl, byte ptr [eax + edx + 4]
        mov byte ptr [ebp - 75ch], cl
        cmp byte ptr [ebp - 75ch], 0bh
        ; Exact mapped bytes 74 0E: je 0x585eb9d4
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp byte ptr [ebp - 75ch], 0ch
        ; Exact mapped bytes 74 6B: je 0x585eba3a
        __asm _emit 0x74
        __asm _emit 0x6b
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x585eba9e
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 61 0A EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 7f0h], eax
        mov edx, dword ptr [ebp - 728h]
        movzx eax, byte ptr [edx + 0eh]
        mov dword ptr [ebp - 7d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 7d0h]
        push ecx
        mov ecx, dword ptr [ebp - 7f0h]
        ; Exact mapped bytes E8 07 43 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x43
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 724h], eax
        push 0
        lea edx, [ebp - 720h]
        push edx
        push 0ach
        mov eax, dword ptr [ebp - 724h]
        push eax
        mov ecx, dword ptr [ebp - 718h]
        mov edx, dword ptr [ecx + 21e14h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 64: jmp 0x585eba9e
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 FB 09 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 7dch], eax
        mov eax, dword ptr [ebp - 728h]
        movzx ecx, byte ptr [eax + 0eh]
        mov dword ptr [ebp - 7d8h], ecx
        push 1
        mov edx, dword ptr [ebp - 7d8h]
        push edx
        mov ecx, dword ptr [ebp - 7dch]
        ; Exact mapped bytes E8 A1 42 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x42
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 724h], eax
        push 0
        lea eax, [ebp - 720h]
        push eax
        push 0b4h
        mov ecx, dword ptr [ebp - 724h]
        push ecx
        mov edx, dword ptr [ebp - 718h]
        mov eax, dword ptr [edx + 21e14h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 3E FC FF FF: jmp 0x585eb6e1
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 82 06 EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 71ch], eax
        ; Exact mapped bytes E9 2E F7 FF FF: jmp 0x585eb1e7
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 8B 55 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
    }
}
