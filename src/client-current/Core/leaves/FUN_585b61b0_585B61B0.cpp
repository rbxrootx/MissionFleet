// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B61B0 .. +0x87F bytes.
extern "C" __declspec(naked) void FUN_585b61b0_585B61B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 44h], 32h
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x585b61dd
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx esi, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 F4 E7 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0xec
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
        cmp esi, ecx
        ; Exact mapped bytes 0F 8D 26 08 00 00: jge 0x585b6a29
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 0c18h], 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 C0 E7 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe7
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        movzx eax, word ptr [ebp - 4]
        cdq
        and edx, 0fh
        add eax, edx
        sar eax, 4
        movzx edx, word ptr [ebp - 4]
        shl edx, 1
        mov esi, 1eh
        sub esi, edx
        mov eax, dword ptr [ecx + eax*4 + 274h]
        mov ecx, esi
        shr eax, cl
        and eax, 3
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0c98h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 7D E7 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe7
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [eax + 26ch]
        shl edx, cl
        and edx, 80000000h
        ; Exact mapped bytes 74 09: je 0x585b6280
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0b4h
        ; Exact mapped bytes EB 07: jmp 0x585b6287
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 40h], eax
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0c18h], 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 36 E7 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        lea edx, [eax + ecx*4 + 168h]
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 0F BF 04 0A: movsx eax, word ptr [edx + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x0a
        add eax, 72h
        cdq
        mov ecx, 168h
        idiv ecx
        mov dword ptr [ebp - 10h], edx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 06 E7 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe7
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        lea edx, [eax + ecx*4 + 168h]
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 0F BF 04 02: movsx eax, word ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x02
        add eax, 72h
        cdq
        mov ecx, 168h
        idiv ecx
        mov dword ptr [ebp - 0ch], edx
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 0c98h], 0
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x585b6412
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 C1 E6 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe6
        __asm _emit 0xec
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 84 50 28 01 00 00: movsx eax, word ptr [eax + edx*2 + 0x128]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x585b639f
        __asm _emit 0x74
        __asm _emit 0x70
        imul ecx, dword ptr [ebp - 10h], 0ah
        push ecx
        movzx edx, word ptr [ebp - 4]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 818h]
        mov edx, 10h
        imul eax, edx, 0
        add ecx, eax
        mov edx, 8
        imul eax, edx, 0
        add ecx, eax
        push ecx
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 ED D7 F2 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xd7
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        imul edx, dword ptr [ebp - 0ch], 0ah
        push edx
        movzx eax, word ptr [ebp - 4]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        imul ecx, eax, 0
        add edx, ecx
        mov eax, 8
        shl eax, 0
        add edx, eax
        push edx
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 B6 D7 F2 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd7
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 6E: jmp 0x585b640d
        __asm _emit 0xeb
        __asm _emit 0x6e
        imul edx, dword ptr [ebp - 0ch], 0ah
        push edx
        movzx eax, word ptr [ebp - 4]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        imul ecx, eax, 0
        add edx, ecx
        mov eax, 8
        imul ecx, eax, 0
        add edx, ecx
        push edx
        lea edx, [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 7D D7 F2 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd7
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        imul eax, dword ptr [ebp - 10h], 0ah
        push eax
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 818h]
        mov ecx, 10h
        imul edx, ecx, 0
        add eax, edx
        mov ecx, 8
        shl ecx, 0
        add eax, ecx
        push eax
        lea edx, [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 46 D7 F2 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd7
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E9 2E 02 00 00: jmp 0x585b6640
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 0c98h], 1
        ; Exact mapped bytes 74 11: je 0x585b6434
        __asm _emit 0x74
        __asm _emit 0x11
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 0c98h], 2
        ; Exact mapped bytes 75 73: jne 0x585b64a7
        __asm _emit 0x75
        __asm _emit 0x73
        imul ecx, dword ptr [ebp - 10h], 0ah
        push ecx
        movzx edx, word ptr [ebp - 4]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 818h]
        mov edx, 10h
        imul eax, edx, 0
        add ecx, eax
        mov edx, 8
        imul eax, edx, 0
        add ecx, eax
        push ecx
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 E8 D6 F2 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        imul edx, dword ptr [ebp - 0ch], 0ah
        push edx
        movzx eax, word ptr [ebp - 4]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        imul ecx, eax, 0
        add edx, ecx
        mov eax, 8
        shl eax, 0
        add edx, eax
        push edx
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 B1 D6 F2 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd6
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E9 99 01 00 00: jmp 0x585b6640
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 0c98h], 3
        ; Exact mapped bytes 0F 85 84 01 00 00: jne 0x585b6640
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 10h], 0ah
        push ecx
        movzx edx, word ptr [ebp - 4]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 818h]
        mov edx, 10h
        imul eax, edx, 0
        add ecx, eax
        mov edx, 8
        imul eax, edx, 0
        add ecx, eax
        push ecx
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 60 D6 F2 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd6
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        imul edx, dword ptr [ebp - 0ch], 0ah
        push edx
        movzx eax, word ptr [ebp - 4]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        imul ecx, eax, 0
        add edx, ecx
        mov eax, 8
        shl eax, 0
        add edx, eax
        push edx
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 29 D6 F2 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd6
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 AB E4 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe4
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        lea edx, [eax + ecx*4 + 168h]
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 0F BF 14 0A: movsx edx, word ptr [edx + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x0a
        mov eax, 72h
        sub eax, edx
        cdq
        mov ecx, 168h
        idiv ecx
        mov dword ptr [ebp - 10h], edx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 77 E4 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe4
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        lea edx, [eax + ecx*4 + 168h]
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 0F BF 0C 02: movsx ecx, word ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x02
        mov eax, 72h
        sub eax, ecx
        cdq
        mov ecx, 168h
        idiv ecx
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 0E: jge 0x585b65a6
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        add edx, 168h
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 06: jmp 0x585b65ac
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 0E: jge 0x585b65c6
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0ch]
        add edx, 168h
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 06: jmp 0x585b65cc
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], ecx
        imul edx, dword ptr [ebp - 0ch], 0ah
        push edx
        movzx eax, word ptr [ebp - 4]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        shl eax, 0
        add edx, eax
        mov ecx, 8
        imul eax, ecx, 0
        add edx, eax
        push edx
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 4A D5 F2 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd5
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        imul edx, dword ptr [ebp - 10h], 0ah
        push edx
        movzx eax, word ptr [ebp - 4]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        shl eax, 0
        add edx, eax
        mov ecx, 8
        shl ecx, 0
        add edx, ecx
        push edx
        lea edx, [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 13 D5 F2 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd5
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 508h]
        ; Exact mapped bytes E8 6D 03 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 608h]
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 618h], eax
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 508h]
        ; Exact mapped bytes E8 40 03 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 610h]
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 620h], eax
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 508h]
        ; Exact mapped bytes E8 03 5A ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5a
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 60ch]
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 61ch], eax
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 508h]
        ; Exact mapped bytes E8 D6 59 ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x59
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 614h]
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 624h], eax
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 508h]
        ; Exact mapped bytes E8 B9 02 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        movzx edx, word ptr [ebp - 4]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 818h]
        mov edx, 10h
        imul eax, edx, 0
        add ecx, eax
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ebp - 24h]
        mov eax, 8
        imul ecx, eax, 0
        mov eax, 10h
        imul eax, eax, 0
        movzx esi, word ptr [ebp - 4]
        shl esi, 5
        mov edi, dword ptr [ebp - 8]
        lea esi, [edi + esi + 818h]
        add esi, eax
        mov dword ptr [esi + ecx], edx
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 508h]
        ; Exact mapped bytes E8 3E 59 ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x59
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 818h]
        mov edx, 10h
        imul edx, edx, 0
        add ecx, edx
        mov edx, 8
        imul edx, edx, 0
        sub eax, dword ptr [ecx + edx + 4]
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 818h]
        mov edx, 10h
        imul edx, edx, 0
        add ecx, edx
        mov edx, 8
        imul edx, edx, 0
        mov dword ptr [ecx + edx + 4], eax
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 508h]
        ; Exact mapped bytes E8 ED 01 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        movzx edx, word ptr [ebp - 4]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 818h]
        mov edx, 10h
        imul eax, edx, 0
        add ecx, eax
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, dword ptr [ebp - 2ch]
        mov edx, 8
        shl edx, 0
        mov eax, 10h
        imul eax, eax, 0
        movzx esi, word ptr [ebp - 4]
        shl esi, 5
        mov edi, dword ptr [ebp - 8]
        lea esi, [edi + esi + 818h]
        add esi, eax
        mov dword ptr [esi + edx], ecx
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 508h]
        ; Exact mapped bytes E8 72 58 ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 818h]
        mov edx, 10h
        imul edx, edx, 0
        add ecx, edx
        mov edx, 8
        shl edx, 0
        sub eax, dword ptr [ecx + edx + 4]
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 818h]
        mov edx, 10h
        imul edx, edx, 0
        add ecx, edx
        mov edx, 8
        shl edx, 0
        mov dword ptr [ecx + edx + 4], eax
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 508h]
        ; Exact mapped bytes E8 21 01 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        movzx edx, word ptr [ebp - 4]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 818h]
        mov edx, 10h
        shl edx, 0
        add ecx, edx
        mov eax, 8
        imul edx, eax, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 34h]
        mov edx, 8
        imul eax, edx, 0
        mov edx, 10h
        shl edx, 0
        movzx esi, word ptr [ebp - 4]
        shl esi, 5
        mov edi, dword ptr [ebp - 8]
        lea esi, [edi + esi + 818h]
        add esi, edx
        mov dword ptr [esi + eax], ecx
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 508h]
        ; Exact mapped bytes E8 A6 57 ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x57
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 4]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 818h]
        mov ecx, 10h
        shl ecx, 0
        add edx, ecx
        mov ecx, 8
        imul ecx, ecx, 0
        sub eax, dword ptr [edx + ecx + 4]
        movzx edx, word ptr [ebp - 4]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 818h]
        mov ecx, 10h
        shl ecx, 0
        add edx, ecx
        mov ecx, 8
        imul ecx, ecx, 0
        mov dword ptr [edx + ecx + 4], eax
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        ; Exact mapped bytes E8 55 00 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 818h]
        mov ecx, 10h
        shl ecx, 0
        add eax, ecx
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, dword ptr [ebp - 3ch]
        mov edx, 8
        shl edx, 0
        mov eax, 10h
        shl eax, 0
        movzx esi, word ptr [ebp - 4]
        shl esi, 5
        mov edi, dword ptr [ebp - 8]
        lea esi, [edi + esi + 818h]
        add esi, eax
        mov dword ptr [esi + edx], ecx
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 508h]
        ; Exact mapped bytes E8 DA 56 ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x56
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 818h]
        mov edx, 10h
        shl edx, 0
        add ecx, edx
        mov edx, 8
        shl edx, 0
        sub eax, dword ptr [ecx + edx + 4]
        movzx ecx, word ptr [ebp - 4]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 818h]
        mov edx, 10h
        shl edx, 0
        add ecx, edx
        mov edx, 8
        shl edx, 0
        mov dword ptr [ecx + edx + 4], eax
        ; Exact mapped bytes E9 A8 F7 FF FF: jmp 0x585b61d1
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
