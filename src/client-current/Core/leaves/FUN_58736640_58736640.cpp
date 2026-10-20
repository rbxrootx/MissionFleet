// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58736640 .. +0x671 bytes.
extern "C" __declspec(naked) void FUN_58736640_58736640() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov edi, dword ptr [ebp - 4]
        add edi, 0a0h
        mov ecx, 60h
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 AE 00 00 00: mov cx, word ptr [eax + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 2E 02 00 00: mov cx, word ptr [eax + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx eax, cx
        xor eax, 55h
        cmp edx, eax
        ; Exact mapped bytes 0F 84 38 02 00 00: je 0x587368d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 AE 00 00 00: mov dx, word ptr [ecx + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 2E 02 00 00: mov dx, word ptr [ecx + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx ecx, dx
        xor ecx, 55h
        cmp eax, ecx
        ; Exact mapped bytes 0F 8E 00 01 00 00: jle 0x587367d2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 27ch]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 278h]
        xor eax, 55555555h
        sub ecx, eax
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 2E 02 00 00: mov dx, word ptr [ecx + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        xor eax, 55h
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 AE 00 00 00: mov dx, word ptr [ecx + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7D 1B: jge 0x58736770
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx*4 + 58947a38h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB CB: jmp 0x5873673b
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 50h]
        mov dword ptr [ebp - 18h], ecx
        push 6eh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 E3 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe3
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 92 F7 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 50h]
        mov dword ptr [ebp - 20h], edx
        push 6fh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 E3 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 64 F7 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x587368a6
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 94h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 278h]
        xor ecx, 55555555h
        neg ecx
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0fch]
        sub ecx, dword ptr [eax + 0f8h]
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 2E 02 00 00: mov cx, word ptr [eax + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        xor edx, 55h
        sub edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 AE 00 00 00: mov cx, word ptr [eax + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        cmp dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 7E 1B: jle 0x5873686d
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [eax*4 + 58947a38h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB CB: jmp 0x58736838
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 50h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A7 F6 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf6
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 50h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8B F6 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf6
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 41 D7 DC FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd7
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x5873697b
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 94h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 278h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        sub eax, ecx
        mov dword ptr [ebp - 8], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 50h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 08 F6 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 50h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 EC F5 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf5
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 278h]
        xor eax, 55555555h
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 96 D6 DC FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 58h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 AE 00 00 00: mov ax, word ptr [edx + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E5 47 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 AE 00 00 00: mov ax, word ptr [edx + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        imul edx, ecx, 6900h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        shr ecx, 1
        and ecx, 7fffffffh
        imul eax, ecx, 0e0h
        cmp dword ptr [edx + eax + 5890c098h], 4bh
        ; Exact mapped bytes 0F 8D C4 00 00 00: jge 0x58736aac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 AE 00 00 00: mov cx, word ptr [eax + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 12dh
        push edx
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 E0 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E9 F4 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 AE 00 00 00: mov cx, word ptr [eax + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 0c6h
        push edx
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 E0 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 8A F4 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf4
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x58736b6b
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 AE 00 00 00: mov cx, word ptr [eax + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 0e1h
        push edx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 E0 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 25 F4 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 AE 00 00 00: mov cx, word ptr [eax + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 0afh
        push edx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 DF D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xdf
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C6 F3 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf3
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 1B F5 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf5
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0fch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 5A D4 DC FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd4
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 4F: jl 0x58736c0c
        __asm _emit 0x7c
        __asm _emit 0x4f
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 78h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 B5 45 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 78h]
        mov dword ptr [ebp - 70h], ecx
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 DE D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xde
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 B7 8B D6 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8b
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4F: jmp 0x58736c5b
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 78h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 8]
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 64 45 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 78h]
        mov dword ptr [ebp - 7ch], edx
        push 25h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 DE D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 66 8B D6 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 78h]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 11 45 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 78h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 E8 44 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
