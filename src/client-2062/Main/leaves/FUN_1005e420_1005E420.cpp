// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005E420 .. +0xDCD bytes.
extern "C" __declspec(naked) void FUN_1005e420_1005E420() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 1ch]
        xor ebx, ebx
        push edi
        cmp esi, ebx
        mov edi, ecx
        ; Exact mapped bytes 74 4A: je 0x1005e47d
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dword ptr [esi + 0a0h], ebx
        ; Exact mapped bytes 75 2E: jne 0x1005e469
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 6A 64 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, ah
        mov eax, dword ptr [esi + 0b4ch]
        ; Exact mapped bytes 66 8B 90 48 03 00 00: mov dx, word ptr [eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 0D: shr dx, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        cmp dl, cl
        ; Exact mapped bytes 75 0A: jne 0x1005e469
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, esi
        mov dword ptr [edi + 0d0ch], eax
        ; Exact mapped bytes EB 1A: jmp 0x1005e483
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0ffh
        mov ecx, edi
        ; Exact mapped bytes E8 7B 25 00 00: call 0x100609f0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 0d0ch], eax
        ; Exact mapped bytes EB 06: jmp 0x1005e483
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [edi + 0d0ch], ebx
        mov ecx, dword ptr [edi + 0d0ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 10: je 0x1005e49d
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes E8 BE 4F 09 00: call 0x100f3450
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0d0ch]
        ; Exact mapped bytes E8 D3 3F 09 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0d40h]
        ; Exact mapped bytes E8 C8 79 09 00: call 0x100f5e70
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0d50h]
        ; Exact mapped bytes E8 9D A4 09 00: call 0x100f8950
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d0ch]
        mov ecx, dword ptr [edi + 0d48h]
        push eax
        ; Exact mapped bytes E8 9B 2B 05 00: call 0x100b1060
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0d50h]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 4
        ; Exact mapped bytes 75 18: jne 0x1005e4ee
        __asm _emit 0x75
        __asm _emit 0x18
        mov esi, dword ptr [edi + 0d48h]
        xor edx, edx
        mov dl, byte ptr [esi + 25h]
        and dl, 1fh
        cmp dl, 1
        ; Exact mapped bytes 74 05: je 0x1005e4ee
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dl, 2
        ; Exact mapped bytes 75 2C: jne 0x1005e51a
        __asm _emit 0x75
        __asm _emit 0x2c
        mov esi, dword ptr [edi + 0d48h]
        xor edx, edx
        mov dl, byte ptr [esi + 25h]
        and dl, 1fh
        cmp dl, 4
        ; Exact mapped bytes 75 11: jne 0x1005e512
        __asm _emit 0x75
        __asm _emit 0x11
        cmp al, 1
        ; Exact mapped bytes 74 0D: je 0x1005e512
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp al, 2
        ; Exact mapped bytes 74 09: je 0x1005e512
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 0D: jmp 0x1005e51f
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp al, 5
        ; Exact mapped bytes 75 09: jne 0x1005e51f
        __asm _emit 0x75
        __asm _emit 0x09
        cmp dl, al
        ; Exact mapped bytes 75 05: jne 0x1005e51f
        __asm _emit 0x75
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 14 57 1C 10: mov eax, dword ptr [0x101c5714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 C4 A7 05 00: call 0x100b8cf0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [edi + 0d0ch], ebx
        ; Exact mapped bytes 0F 84 36 0C 00 00: je 0x1005f16e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 9ch]
        mov ebp, 0fh
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [edi + 0a0h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 0d0ch]
        mov edx, dword ptr [ecx + 4ch]
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 74 12: je 0x1005e574
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [edi + 460h]
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x1005e587
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [edi + 460h]
        mov ebx, 0ffffff4ch
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [edi + 0d0ch]
        xor ecx, ecx
        mov eax, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 48 18: mov cx, word ptr [eax + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x18
        push ecx
        ; Exact mapped bytes E8 91 82 FF FF: call 0x10056830
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 160h]
        add esp, 4
        test ecx, ecx
        ; Exact mapped bytes 7E 0A: jle 0x1005e5b6
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x1005e5b8
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 9ch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005e5ed
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi + 9ch]
        push ebx
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 9ch]
        ; Exact mapped bytes E8 5D 0B 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0d0ch]
        xor edx, edx
        mov eax, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 66 8B 50 18: mov dx, word ptr [eax + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        push edx
        ; Exact mapped bytes E8 15 82 FF FF: call 0x10056830
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 160h]
        add esp, 4
        cmp ecx, 1
        ; Exact mapped bytes 7E 0F: jle 0x1005e638
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1005e638
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x1005e63a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 0a0h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005e66f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi + 0a0h]
        push ebx
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 0a0h]
        ; Exact mapped bytes E8 DB 0A 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0d0ch]
        xor edx, edx
        mov eax, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 66 8B 50 18: mov dx, word ptr [eax + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        push edx
        ; Exact mapped bytes E8 93 81 FF FF: call 0x10056830
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 160h]
        mov esi, 6
        add esp, 4
        cmp ecx, esi
        ; Exact mapped bytes 7C 6F: jl 0x1005e71e
        __asm _emit 0x7c
        __asm _emit 0x6f
        mov eax, dword ptr [edi + 0d0ch]
        xor ecx, ecx
        mov eax, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 48 18: mov cx, word ptr [eax + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x18
        push ecx
        ; Exact mapped bytes E8 69 81 FF FF: call 0x10056830
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 160h]
        add esp, 4
        cmp ecx, esi
        ; Exact mapped bytes 7E 11: jle 0x1005e6e5
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1005e6e5
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 180h
        ; Exact mapped bytes EB 02: jmp 0x1005e6e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 0a4h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 43: je 0x1005e737
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 19: jmp 0x1005e737
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [edi + 0a4h]
        mov dword ptr [eax + 54h], 0
        mov eax, dword ptr [edi + 0a4h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0a4h]
        push 101h
        ; Exact mapped bytes E8 19 0A 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0a4h]
        push 80h
        ; Exact mapped bytes E8 C9 09 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0d0ch]
        mov eax, dword ptr [ecx + 0b50h]
        mov ecx, dword ptr [edi + 53ch]
        ; Exact mapped bytes 0F BF 50 0C: movsx edx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BF 40 0A: movsx eax, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x0a
        add edx, 168h
        add eax, 190h
        push edx
        push eax
        ; Exact mapped bytes E8 4D 05 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi + 53ch]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [edi + 328h]
        push edx
        ; Exact mapped bytes E8 32 05 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d0ch]
        xor esi, esi
        mov eax, dword ptr [eax + 0b58h]
        cmp eax, esi
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x1005e843
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [eax], 0fh
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x1005e843
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 53ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 0d0ch]
        xor eax, eax
        mov edx, dword ptr [ecx + 0b58h]
        ; Exact mapped bytes 8B 0D 64 57 1C 10: mov ecx, dword ptr [0x101c5764]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1005e7fe
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, esi
        ; Exact mapped bytes 7C 11: jl 0x1005e7fe
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, esi
        ; Exact mapped bytes 74 07: je 0x1005e7fe
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005e800
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 328h]
        cmp eax, esi
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005e835
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [edi + 328h]
        push ebx
        ; Exact mapped bytes E8 1F 09 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x1005e84c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [edi + 328h]
        mov dword ptr [eax + 54h], esi
        mov ecx, dword ptr [edi + 0d0ch]
        mov eax, dword ptr [ecx + 0b54h]
        cmp eax, esi
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x1005e925
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [eax], 0fh
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x1005e925
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 540h]
        push 2bch
        push esi
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 540h]
        ; Exact mapped bytes E8 4C 04 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0d0ch]
        mov ecx, dword ptr [edi + 0a0h]
        mov eax, dword ptr [edx + 0b50h]
        mov ebp, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F BF 50 08: movsx edx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 0F BF 40 06: movsx eax, word ptr [eax + 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x06
        add edx, ebp
        mov ebp, dword ptr [ecx + 4]
        mov ecx, dword ptr [edi + 32ch]
        add eax, ebp
        push edx
        push eax
        ; Exact mapped bytes E8 1B 04 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0d0ch]
        xor eax, eax
        mov edx, dword ptr [ecx + 0b54h]
        ; Exact mapped bytes 8B 0D 68 57 1C 10: mov ecx, dword ptr [0x101c5768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1005e8ec
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, esi
        ; Exact mapped bytes 7C 11: jl 0x1005e8ec
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, esi
        ; Exact mapped bytes 74 07: je 0x1005e8ec
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005e8ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 32ch]
        cmp eax, esi
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 3F: je 0x1005e93a
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 15: jmp 0x1005e93a
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [edi + 540h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [edi + 32ch]
        mov dword ptr [eax + 54h], esi
        mov eax, dword ptr [edi + 32ch]
        mov dword ptr [esp + 20h], esi
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [edi + 0d0ch]
        mov ecx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        and edx, 7c00h
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 86 74 03 00 00: jbe 0x1005ecdd
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 510h
        mov dword ptr [esp + 10h], 0eh
        sub ecx, edi
        lea esi, [edi + 4bch]
        mov dword ptr [esp + 14h], ecx
        mov eax, dword ptr [eax + 0b50h]
        mov ebx, dword ptr [esp + 10h]
        ; Exact mapped bytes 0F BF 4C 03 40: movsx ecx, word ptr [ebx + eax + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 14 03: movsx edx, word ptr [ebx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x03
        add ecx, 168h
        add edx, 190h
        push ecx
        mov ecx, dword ptr [esi]
        push edx
        ; Exact mapped bytes E8 26 03 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d0ch]
        mov ecx, dword ptr [edi + 0a0h]
        mov eax, dword ptr [eax + 0b50h]
        mov ebp, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F BF 54 03 40: movsx edx, word ptr [ebx + eax + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 04 03: movsx eax, word ptr [ebx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x03
        add edx, ebp
        mov ebp, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi - 214h]
        add eax, ebp
        push edx
        push eax
        ; Exact mapped bytes E8 F4 02 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        sub ecx, 3
        push ecx
        mov ecx, dword ptr [esi - 414h]
        push edx
        ; Exact mapped bytes E8 DC 02 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 20h]
        push 0
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 5E ED FF FF: call 0x1005d760
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 0d0ch]
        mov ecx, 1fh
        sub ecx, ebx
        mov ebx, dword ptr [esi - 294h]
        mov edx, dword ptr [eax + 0b4ch]
        mov ebp, dword ptr [edx + 258h]
        shr ebp, cl
        and ebp, 1
        ; Exact mapped bytes 74 2C: je 0x1005ea54
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [edi + 0a0h]
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 66 2B 4C 24 20: sub cx, word ptr [esp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        add ecx, 20h
        ; Exact mapped bytes 66 89 4B 26: mov word ptr [ebx + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x26
        mov ecx, dword ptr [ebx + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005ea4b
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 55 05 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 2F: je 0x1005ea81
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes EB 27: jmp 0x1005ea7b
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [edi + 0a0h]
        mov ecx, dword ptr [ebx + 40h]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        ; Exact mapped bytes 66 03 44 24 20: add ax, word ptr [esp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        test ecx, ecx
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1005ea74
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 2C 05 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005ea81
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 7F 04 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [edi + 0d0ch]
        xor ebx, ebx
        lea edx, [ecx + esi]
        mov ecx, dword ptr [eax + edx]
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x1005ea9e
        __asm _emit 0x74
        __asm _emit 0x07
        mov cl, byte ptr [ecx]
        and ecx, 0fh
        ; Exact mapped bytes EB 02: jmp 0x1005eaa0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        and ecx, 0ffffh
        sub ecx, 5
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x1005eba8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec ecx
        ; Exact mapped bytes 74 17: je 0x1005eac9
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [esi - 294h]
        mov dword ptr [eax + 54h], ebx
        mov eax, dword ptr [esi - 214h]
        mov dword ptr [eax + 54h], ebx
        ; Exact mapped bytes E9 B3 01 00 00: jmp 0x1005ec7c
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + eax]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        mov eax, ecx
        ; Exact mapped bytes 8B 0D 60 57 1C 10: mov ecx, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 3
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x1005eafa
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebx
        ; Exact mapped bytes 7C 11: jl 0x1005eafa
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x1005eafa
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005eafc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi - 294h]
        cmp eax, ebx
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005eb31
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [edi + 0d0ch]
        xor eax, eax
        mov edx, dword ptr [edx + ecx]
        ; Exact mapped bytes 8B 0D 60 57 1C 10: mov ecx, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        add eax, 4
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1005eb68
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebx
        ; Exact mapped bytes 7C 11: jl 0x1005eb68
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x1005eb68
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005eb6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi - 214h]
        cmp eax, ebx
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x1005ec7c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x1005ec7c
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + eax]
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 04: mov ax, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 5C 57 1C 10: mov ecx, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [eax + ebp + 3]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x1005ebd8
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebx
        ; Exact mapped bytes 7C 11: jl 0x1005ebd8
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x1005ebd8
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005ebda
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi - 294h]
        cmp eax, ebx
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005ec0f
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [edi + 0d0ch]
        xor eax, eax
        mov edx, dword ptr [edx + ecx]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        lea ebp, [eax + ebp + 5]
        ; Exact mapped bytes A1 5C 57 1C 10: mov eax, dword ptr [0x101c575c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 15: jle 0x1005ec44
        __asm _emit 0x7e
        __asm _emit 0x15
        test ebp, ebp
        ; Exact mapped bytes 7C 11: jl 0x1005ec44
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1005ec44
        __asm _emit 0x74
        __asm _emit 0x07
        shl ebp, 6
        add ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x1005ec46
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi - 214h]
        test ebp, ebp
        mov dword ptr [eax + 54h], ebp
        ; Exact mapped bytes 74 29: je 0x1005ec7c
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [ebp]
        add eax, 14h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esi]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi - 414h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esi - 294h]
        push eax
        ; Exact mapped bytes E8 BF 04 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 20h]
        add eax, 2
        inc ecx
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [edi + 0d0ch]
        add esi, 4
        mov dword ptr [esp + 20h], ecx
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 52 0A: mov dx, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0a
        shr edx, 0ah
        and edx, 1fh
        cmp ecx, edx
        ; Exact mapped bytes 0F 82 AC FC FF FF: jb 0x1005e982
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ecx
        cmp eax, 20h
        ; Exact mapped bytes 73 42: jae 0x1005ed1f
        __asm _emit 0x73
        __asm _emit 0x42
        mov ecx, dword ptr [esp + 20h]
        mov edx, 20h
        sub edx, ecx
        lea eax, [edi + ecx*4 + 0a8h]
        mov ecx, dword ptr [eax + 414h]
        mov esi, 0fff0h
        add eax, 4
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 17ch]
        xor esi, esi
        dec edx
        mov dword ptr [ecx + 54h], esi
        mov ecx, dword ptr [eax + 1fch]
        mov dword ptr [ecx + 54h], esi
        ; Exact mapped bytes 75 D0: jne 0x1005ecef
        __asm _emit 0x75
        __asm _emit 0xd0
        mov eax, dword ptr [edi + 0d0ch]
        mov dword ptr [esp + 20h], 1ch
        mov ecx, dword ptr [eax + 0b4ch]
        mov al, byte ptr [ecx + 2]
        and al, 1fh
        sub al, 8
        neg al
        sbb eax, eax
        and al, 0fdh
        add eax, 4
        add eax, 1ch
        cmp eax, 1ch
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 86 64 02 00 00: jbe 0x1005efb7
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 490h
        mov ebx, 510h
        sub eax, edi
        sub ebx, edi
        mov ebp, 46h
        lea esi, [edi + 52ch]
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ebx
        mov edx, dword ptr [edi + 0d0ch]
        mov ecx, 1fh
        mov eax, dword ptr [edx + 0b4ch]
        mov edx, dword ptr [esp + 20h]
        sub ecx, edx
        mov edx, dword ptr [eax + 25ch]
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 0F 84 ED 01 00 00: je 0x1005ef89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi - 414h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 0d0ch]
        mov eax, dword ptr [eax + 0b50h]
        ; Exact mapped bytes 0F BF 4C 28 40: movsx ecx, word ptr [eax + ebp + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 14 28: movsx edx, word ptr [eax + ebp]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x28
        add ecx, 168h
        add edx, 190h
        push ecx
        mov ecx, dword ptr [esi]
        push edx
        ; Exact mapped bytes E8 F5 FE 09 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi - 214h]
        push edx
        ; Exact mapped bytes E8 DE FE 09 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi - 294h]
        push edx
        ; Exact mapped bytes E8 C7 FE 09 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi - 414h]
        push edx
        ; Exact mapped bytes E8 B0 FE 09 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 54h]
        push edx
        ; Exact mapped bytes E8 9C FE 09 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 44h]
        push edx
        ; Exact mapped bytes E8 81 FE 09 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 44h]
        push 23h
        push 1eh
        or byte ptr [eax + 24h], 1
        mov ecx, dword ptr [esi + 44h]
        ; Exact mapped bytes E8 CE FF 09 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d0ch]
        lea edx, [ebx + esi]
        mov ecx, dword ptr [eax + edx]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x1005ef73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ecx]
        and ecx, 0fh
        ; Exact mapped bytes 66 83 F9 0D: cmp cx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x1005ef73
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        add ecx, esi
        ; Exact mapped bytes 66 81 3C 01 AA 00: cmp word ptr [ecx + eax], 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x1005ef73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + eax]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        mov eax, ecx
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 3
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x1005eec8
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1005eec8
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1005eec8
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005eeca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi - 294h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 2C: je 0x1005ef03
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov ebx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [edi + 0d0ch]
        xor eax, eax
        mov edx, dword ptr [edx + ecx]
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        add eax, 4
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1005ef3a
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1005ef3a
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1005ef3a
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005ef3c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi - 214h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 53: je 0x1005ef9c
        __asm _emit 0x74
        __asm _emit 0x53
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 29: jmp 0x1005ef9c
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [esi - 294h]
        xor ecx, ecx
        mov dword ptr [eax + 54h], ecx
        mov eax, dword ptr [esi - 214h]
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes EB 13: jmp 0x1005ef9c
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [esi + 54h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 44h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 10h]
        inc eax
        add ebp, 2
        add esi, 4
        cmp eax, ecx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 82 BD FD FF FF: jb 0x1005ed74
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 E2 12 00 00: call 0x100602a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 BB EA FF FF: call 0x1005da80
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0d4ch]
        mov edx, dword ptr [ecx + 98h]
        mov al, byte ptr [edx + 24h]
        shr al, 1
        test al, 1
        ; Exact mapped bytes 75 20: jne 0x1005effa
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [edi + 0d48h]
        mov esi, 1
        push 0
        mov eax, dword ptr [ecx + 0e0h]
        mov ecx, edi
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes E8 88 DF FF FF: call 0x1005cf80
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 20: jmp 0x1005f01a
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [edi + 0d48h]
        push 0fh
        mov ecx, edi
        mov eax, dword ptr [edx + 0e0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 6B DF FF FF: call 0x1005cf80
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, 1
        mov eax, dword ptr [edi + 464h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 04: je 0x1005f02a
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [edi + 468h]
        cmp eax, ebp
        ; Exact mapped bytes 74 04: je 0x1005f038
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        mov esi, dword ptr [edi + 0d7ch]
        mov ebx, 100h
        cmp esi, ebp
        ; Exact mapped bytes 74 49: je 0x1005f090
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 5E 58 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, ah
        mov eax, dword ptr [esi + 0b6ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 30: je 0x1005f090
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 92 48 03 00 00: mov dx, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 0D: shr dx, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 0C: jne 0x1005f086
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [eax + 0a0h], ebp
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x1005f11e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0b6ch]
        cmp eax, ebp
        ; Exact mapped bytes 75 D4: jne 0x1005f064
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [edi + 55ch]
        mov dword ptr [eax + 80h], ebp
        mov ecx, dword ptr [edi + 55ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov esi, dword ptr [edi + 0d7ch]
        cmp esi, ebp
        ; Exact mapped bytes 74 45: je 0x1005f0f6
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 F4 57 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, ah
        mov eax, dword ptr [esi + 0b70h]
        cmp eax, ebp
        ; Exact mapped bytes 74 2C: je 0x1005f0f6
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 92 48 03 00 00: mov dx, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 0D: shr dx, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 08: jne 0x1005f0ec
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [eax + 0a0h], ebp
        ; Exact mapped bytes 74 56: je 0x1005f142
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [eax + 0b70h]
        cmp eax, ebp
        ; Exact mapped bytes 75 D8: jne 0x1005f0ce
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [edi + 558h]
        mov dword ptr [eax + 80h], ebp
        mov ecx, dword ptr [edi + 558h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, edi
        ; Exact mapped bytes E8 7C ED FF FF: call 0x1005de90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 6A FF FF FF: je 0x1005f090
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 55ch]
        mov dword ptr [eax + 80h], ebx
        mov ecx, dword ptr [edi + 55ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x1005f0a7
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ebp
        ; Exact mapped bytes 74 B0: je 0x1005f0f6
        __asm _emit 0x74
        __asm _emit 0xb0
        mov eax, dword ptr [edi + 558h]
        mov dword ptr [eax + 80h], ebx
        mov ecx, dword ptr [edi + 558h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, edi
        ; Exact mapped bytes E8 2C ED FF FF: call 0x1005de90
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 460h]
        push ebx
        mov ecx, edi
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 FE DD FF FF: call 0x1005cf80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 464h]
        mov ecx, 0fffeh
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x1005f195
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 468h]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x1005f1a3
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 55ch]
        mov dword ptr [eax + 80h], ebx
        mov ecx, dword ptr [edi + 55ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [edi + 558h]
        mov dword ptr [eax + 80h], ebx
        mov ecx, dword ptr [edi + 558h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [edi + 0d50h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, edi
        ; Exact mapped bytes E8 AD EC FF FF: call 0x1005de90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
