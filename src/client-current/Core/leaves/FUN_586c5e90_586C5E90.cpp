// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C5E90 .. +0xCBE bytes.
extern "C" __declspec(naked) void FUN_586c5e90_586C5E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 21ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        add eax, 98h
        mov dword ptr [ebp - 1dch], eax
        lea ecx, [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 B4 21 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0xdc
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 95 EC FE FF FF: mov word ptr [ebp - 0x114], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes 66 89 85 F4 FE FF FF: mov word ptr [ebp - 0x10c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 6]
        sub edx, 1
        cmp edx, 29h
        ; Exact mapped bytes 74 0F: je 0x586c5efc
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 6]
        sub ecx, 1
        cmp ecx, 2ah
        ; Exact mapped bytes 75 22: jne 0x586c5f1e
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, 1
        ; Exact mapped bytes 66 89 95 EC FE FF FF: mov word ptr [ebp - 0x114], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 6]
        sub ecx, 1
        ; Exact mapped bytes 66 89 8D F4 FE FF FF: mov word ptr [ebp - 0x10c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x586c5fa5
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x586c5f31
        __asm _emit 0xeb
        __asm _emit 0x11
        push 1
        lea edx, [ebp - 118h]
        push edx
        ; Exact mapped bytes E8 12 27 FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 108h]
        add eax, 98h
        mov dword ptr [ebp - 120h], eax
        lea ecx, [ebp - 21ch]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 3C 22 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x22
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 70 1A DC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x1a
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 3E: je 0x586c5fa5
        __asm _emit 0x74
        __asm _emit 0x3e
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 BE 1A DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1a
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 2]
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 2]
        cmp eax, edx
        ; Exact mapped bytes 75 1F: jne 0x586c5fa0
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, 1
        ; Exact mapped bytes 66 89 85 EC FE FF FF: mov word ptr [ebp - 0x114], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 6]
        sub edx, 1
        ; Exact mapped bytes 66 89 95 F4 FE FF FF: mov word ptr [ebp - 0x10c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x586c5fa5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x586c5f20
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 85 EC FE FF FF: movsx eax, word ptr [ebp - 0x114]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x586c608a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 128h], ecx
        push 588b18e0h
        ; Exact mapped bytes E8 17 C0 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc0
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 AC 00 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 130h], edx
        push 588b1904h
        ; Exact mapped bytes E8 D8 BF E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xbf
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 6D 00 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 138h], ecx
        push 588b1928h
        ; Exact mapped bytes E8 98 BF E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbf
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 2D 00 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0xdc
        __asm _emit 0xff
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 EC EB FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B4 0A 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c60a5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 110h]
        add eax, 1
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 5
        ; Exact mapped bytes 7D 4F: jge 0x586c60fd
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 22ch]
        mov dword ptr [ebp - 13ch], eax
        push 1
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 0C FD DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 22ch]
        mov dword ptr [ebp - 140h], eax
        push 1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 56 94 DD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x94
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 99: jmp 0x586c6096
        __asm _emit 0xeb
        __asm _emit 0x99
        push 0
        push 1
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 62 EB FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 8]
        cmp edx, 1
        ; Exact mapped bytes 75 20: jne 0x586c613b
        __asm _emit 0x75
        __asm _emit 0x20
        push 588b194ch
        ; Exact mapped bytes E8 CB BE E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 4A: jmp 0x586c6185
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 8]
        cmp edx, 2
        ; Exact mapped bytes 75 20: jne 0x586c6167
        __asm _emit 0x75
        __asm _emit 0x20
        push 588b1960h
        ; Exact mapped bytes E8 9F BE E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 1E: jmp 0x586c6185
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 588b1974h
        ; Exact mapped bytes E8 7F BE E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes 0F BF 95 F4 FE FF FF: movsx edx, word ptr [ebp - 0x10c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, 29h
        ; Exact mapped bytes 74 0C: je 0x586c619d
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BF 85 F4 FE FF FF: movsx eax, word ptr [ebp - 0x10c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2ah
        ; Exact mapped bytes 75 22: jne 0x586c61bf
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 144h], edx
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 D4 4F 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x4f
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3A: jmp 0x586c61f9
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 14ch], ecx
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 54 18 DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x18
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, word ptr [eax + 8]
        mov dword ptr [ebp - 148h], edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 98 4F 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x4f
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 154h], edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 9A 5E DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5e
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 1c9h
        mov dword ptr [ebp - 150h], eax
        mov eax, dword ptr [ebp - 150h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 FD F4 0E 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 158h], edx
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 8E FC DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 15ch], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 21 FE DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 220h]
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 24 07 DC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 2b2h
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 F7 F3 0E 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 220h]
        mov dword ptr [ebp - 16ch], eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 DA 5D DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x5d
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 1c2h
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 3D F4 0E 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c630f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 110h]
        add edx, 1
        mov dword ptr [ebp - 110h], edx
        cmp dword ptr [ebp - 110h], 3
        ; Exact mapped bytes 7D 6D: jge 0x586c6385
        __asm _emit 0x7d
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax*4 + 1dch]
        mov dword ptr [ebp - 174h], edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 74 5D DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5d
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 1c5h
        mov dword ptr [ebp - 170h], eax
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 D7 F3 0E 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 178h], eax
        push 1
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 61 FB DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x586c6300
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 8D F4 FE FF FF: movsx ecx, word ptr [ebp - 0x10c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, 29h
        ; Exact mapped bytes 74 10: je 0x586c63a1
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 0F BF 95 F4 FE FF FF: movsx edx, word ptr [ebp - 0x10c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, 2ah
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x586c6436
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c63bc
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 110h]
        add eax, 1
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 3
        ; Exact mapped bytes 7D 29: jge 0x586c63ee
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 17ch], eax
        push 0
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 F5 FA DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xfa
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c63ad
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 180h], edx
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 D3 FA DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfa
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 184h], eax
        push 0
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 AB FA DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfa
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 8D F4 FE FF FF: movsx ecx, word ptr [ebp - 0x10c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], ecx
        cmp dword ptr [ebp - 11ch], 2eh
        ; Exact mapped bytes 0F 87 EE 06 00 00: ja 0x586c6b3e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 11ch]
        movzx eax, byte ptr [edx + 586c6ba0h]
        ; Exact mapped bytes FF 24 85 50 6B 6C 58: jmp dword ptr [eax*4 + 0x586c6b50]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x6b
        __asm _emit 0x6c
        __asm _emit 0x58
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 18ch], ecx
        push 588b1984h
        ; Exact mapped bytes E8 67 BB E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbb
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 188h], eax
        mov edx, dword ptr [ebp - 188h]
        push edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 FC FB DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xdb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 6F E8 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 C4 7C FF FF: call 0x586be180
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7C 06 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 194h], eax
        push 588b19b0h
        ; Exact mapped bytes E8 09 BB E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbb
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 190h], eax
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 9E FB DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 11 E8 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 64 92 FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1C 06 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 19ch], edx
        push 588b19e0h
        ; Exact mapped bytes E8 A9 BA E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xba
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 198h], eax
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 3E FB DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 B1 E7 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 04 92 FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BC 05 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 1a4h], ecx
        push 588b1a10h
        ; Exact mapped bytes E8 49 BA E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xba
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        mov edx, dword ptr [ebp - 1a0h]
        push edx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 DE FA DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfa
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 51 E7 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E4 8C FF FF: call 0x586bf2c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5C 05 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 1ach], eax
        push 588b1a40h
        ; Exact mapped bytes E8 E9 B9 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 7E FA DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfa
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F1 E6 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 66 87 FF FF: call 0x586beda0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FE 04 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 1b4h], edx
        push 588b1a6ch
        ; Exact mapped bytes E8 8B B9 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1b0h], eax
        mov eax, dword ptr [ebp - 1b0h]
        push eax
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 20 FA DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 93 E6 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 26 8C FF FF: call 0x586bf2c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9E 04 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 1bch], ecx
        push 588b1a9ch
        ; Exact mapped bytes E8 2B B9 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb9
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1b8h], eax
        mov edx, dword ptr [ebp - 1b8h]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 C0 F9 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf9
        __asm _emit 0xdb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 33 E6 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 85 F4 FE FF FF: movsx eax, word ptr [ebp - 0x10c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 17h
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 2D 7F FF FF: call 0x586be630
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 35 04 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 56 E5 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1E 04 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 1c4h], ecx
        push 588b1ac8h
        ; Exact mapped bytes E8 AB B8 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb8
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov edx, dword ptr [ebp - 1c0h]
        push edx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 40 F9 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 B3 E5 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 85 F4 FE FF FF: movsx eax, word ptr [ebp - 0x10c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 80 82 FF FF: call 0x586bea00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B8 03 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 1cch], ecx
        push 588b1af8h
        ; Exact mapped bytes E8 45 B8 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb8
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov edx, dword ptr [ebp - 1c8h]
        push edx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 DA F8 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf8
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 4D E5 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E0 8A FF FF: call 0x586bf2c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 58 03 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 1d4h], eax
        push 588b1b28h
        ; Exact mapped bytes E8 E5 B7 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb7
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1d0h], eax
        mov ecx, dword ptr [ebp - 1d0h]
        push ecx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 7A F8 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 ED E4 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 40 8F FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F8 02 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 1fch], edx
        push 588b1b58h
        ; Exact mapped bytes E8 85 B7 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov eax, dword ptr [ebp - 1d8h]
        push eax
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 1A F8 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 8D E4 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push 5
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E0 8E FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 98 02 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 1e4h], ecx
        push 588b1b88h
        ; Exact mapped bytes E8 25 B7 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb7
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1e0h], eax
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 BA F7 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf7
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 2D E4 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 80 8E FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 38 02 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 1ech], eax
        push 588b1bb8h
        ; Exact mapped bytes E8 C5 B6 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb6
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1e8h], eax
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 5A F7 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf7
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 CD E3 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        push 3
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 20 8E FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D8 01 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 1f4h], edx
        push 588b1be8h
        ; Exact mapped bytes E8 65 B6 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb6
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1f0h], eax
        mov eax, dword ptr [ebp - 1f0h]
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 FA F6 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 6D E3 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        push 6
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 C0 8D FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 218h], ecx
        push 588b1c18h
        ; Exact mapped bytes E8 05 B6 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb6
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1f8h], eax
        mov edx, dword ptr [ebp - 1f8h]
        push edx
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 9A F6 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf6
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 0D E3 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        push 9
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 60 8D FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 204h], eax
        push 588b1c48h
        ; Exact mapped bytes E8 A5 B5 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb5
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 200h], eax
        mov ecx, dword ptr [ebp - 200h]
        push ecx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 3A F6 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf6
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 AD E2 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 00 8D FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x586c6b3e
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 20ch], edx
        push 588b1c78h
        ; Exact mapped bytes E8 45 B5 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb5
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 208h], eax
        mov eax, dword ptr [ebp - 208h]
        push eax
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 DA F5 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf5
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 4D E2 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        push 7
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 A0 8C FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5B: jmp 0x586c6b3e
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 214h], ecx
        push 588b1ca8h
        ; Exact mapped bytes E8 E8 B4 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 210h], eax
        mov edx, dword ptr [ebp - 210h]
        push edx
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 7D F5 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf5
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F0 E1 FF FF: call 0x586c4d20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ah
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 43 8C FF FF: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 08 A5 16 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa5
        __asm _emit 0x16
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
