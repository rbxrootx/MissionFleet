// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B11B0 .. +0x4EA bytes.
extern "C" __declspec(naked) void FUN_586b11b0_586B11B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 C5 04 00 00: je 0x586b1698
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 CE 00 00 00: mov cx, word ptr [eax + 0xce]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A CE 00 00 00: mov word ptr [edx + 0xce], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 CC 00 00 00: movsx ecx, word ptr [eax + 0xcc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x586b12f1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 CE 00 00 00: movsx eax, word ptr [edx + 0xce]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 190h
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x586b12e1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0ach]
        ; Exact mapped bytes E8 A6 4D E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x4d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 81 CE 00 00 00: movsx eax, word ptr [ecx + 0xce]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x81
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cdq
        mov ecx, 18h
        idiv ecx
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x586b124d
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 3C: jne 0x586b128d
        __asm _emit 0x75
        __asm _emit 0x3c
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586b1263
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 22: jge 0x586b128b
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0ach]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 2ch]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B8 42 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CF: jmp 0x586b125a
        __asm _emit 0xeb
        __asm _emit 0xcf
        ; Exact mapped bytes EB 3A: jmp 0x586b12c7
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b129f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 22: jge 0x586b12c7
        __asm _emit 0x7d
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 0ah
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7C 42 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CF: jmp 0x586b1296
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 CE 00 00 00: mov cx, word ptr [eax + 0xce]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A CE 00 00 00: mov word ptr [edx + 0xce], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x586b12ec
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 03 00 00: call 0x586b16a0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 1D 03 00 00: jmp 0x586b160e
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 CC 00 00 00: movsx ecx, word ptr [eax + 0xcc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 2B 01 00 00: jne 0x586b142f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 CE 00 00 00: movsx eax, word ptr [edx + 0xce]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0c8h
        ; Exact mapped bytes 0F 8D 06 01 00 00: jge 0x586b141f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b4h]
        ; Exact mapped bytes E8 A0 4C E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 81 CE 00 00 00: movsx eax, word ptr [ecx + 0xce]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x81
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cdq
        mov ecx, 18h
        idiv ecx
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x586b1353
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 58: jne 0x586b13af
        __asm _emit 0x75
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586b1369
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 3E: jge 0x586b13ad
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 24h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B2 41 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x41
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 96 41 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x41
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B3: jmp 0x586b1360
        __asm _emit 0xeb
        __asm _emit 0xb3
        ; Exact mapped bytes EB 56: jmp 0x586b1405
        __asm _emit 0xeb
        __asm _emit 0x56
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b13c1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 3E: jge 0x586b1405
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 5A 41 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x41
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 3E 41 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x41
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B3: jmp 0x586b13b8
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 CE 00 00 00: mov ax, word ptr [edx + 0xce]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 CE 00 00 00: mov word ptr [ecx + 0xce], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x586b142a
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 02 00 00: call 0x586b16a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DF 01 00 00: jmp 0x586b160e
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 CC 00 00 00: movsx eax, word ptr [edx + 0xcc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 CC 01 00 00: jne 0x586b160e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 CE 00 00 00: movsx edx, word ptr [ecx + 0xce]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 190h
        ; Exact mapped bytes 0F 8D 0F 01 00 00: jge 0x586b1567
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0bch]
        ; Exact mapped bytes E8 61 4B E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x4b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 80 CE 00 00 00: movsx eax, word ptr [eax + 0xce]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cdq
        mov ecx, 18h
        idiv ecx
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x586b1492
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 5B: jne 0x586b14f1
        __asm _emit 0x75
        __asm _emit 0x5b
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b14a8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 41: jge 0x586b14ef
        __asm _emit 0x7d
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 28h]
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 73 40 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 84h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 54 40 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B0: jmp 0x586b149f
        __asm _emit 0xeb
        __asm _emit 0xb0
        ; Exact mapped bytes EB 59: jmp 0x586b154a
        __asm _emit 0xeb
        __asm _emit 0x59
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b1503
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 41: jge 0x586b154a
        __asm _emit 0x7d
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 28h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 18 40 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 84h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F9 3F 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3f
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B0: jmp 0x586b14fa
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 CE 00 00 00: mov ax, word ptr [edx + 0xce]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 CE 00 00 00: mov word ptr [ecx + 0xce], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x586b160e
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 01 00 00: call 0x586b16a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 84h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c4h], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 58h], edx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 3C 49 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x49
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 5ch], eax
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1B 49 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x49
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 60h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 C7 3F 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x3f
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 64h], eax
        push 101h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 A3 3F 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3f
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x586b162f
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x586b162f
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x586b1698
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x586b1652
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x586b1638
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B6 3F DE FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x3f
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x586b1676
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x586b1698
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x586b1696
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 92 3F DE FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x3f
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x586b1638
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
