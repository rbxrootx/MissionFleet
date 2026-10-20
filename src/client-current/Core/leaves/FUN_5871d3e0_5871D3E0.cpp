// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871D3E0 .. +0x2F7 bytes.
extern "C" __declspec(naked) void FUN_5871d3e0_5871D3E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 EF C2 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc2
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 67: jne 0x5871d46c
        __asm _emit 0x75
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 144h]
        ; Exact mapped bytes E8 7D 84 D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x5871d432
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 144h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AF 8A D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8a
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5871d444
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 1D: jge 0x5871d467
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DC 23 D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5871d43b
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes E9 66 02 00 00: jmp 0x5871d6d2
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 ED 37 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 24 37 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8F C0 00 00 00: jg 0x5871d564
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 B5 37 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esi, 8
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 E9 36 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 85 00 00 00: jle 0x5871d564
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 144h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 0e4h]
        ; Exact mapped bytes E8 BE 36 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 0e4h]
        ; Exact mapped bytes E8 55 37 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        sub esi, eax
        imul ecx, esi, 0dh
        add ecx, 0e8h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FB 81 09 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 144h]
        ; Exact mapped bytes E8 4C 83 D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x83
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 17: jne 0x5871d562
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 144h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7F 89 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x89
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5871d591
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 144h]
        ; Exact mapped bytes E8 1E 83 D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x83
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 17: jne 0x5871d591
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 144h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 50 89 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5871d5a3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 0F 8D 25 01 00 00: jge 0x5871d6d2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 0e4h]
        ; Exact mapped bytes E8 97 36 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 75 35 0A 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x5871d6b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 65 36 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esi, dword ptr [ebp - 0ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 C9 C0 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc0
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 6A: jge 0x5871d695
        __asm _emit 0x7d
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 0e4h]
        ; Exact mapped bytes E8 12 36 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        add eax, dword ptr [ebp - 0ch]
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 FF 71 00 00: call 0x58724870
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F8 5C DA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5c
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 AE 21 D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x21
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5871d6b0
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 91 21 D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x21
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5871d6cd
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 74 21 D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x21
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C8 FE FF FF: jmp 0x5871d59a
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
