// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435B4E .. +0x74D bytes.
extern "C" __declspec(naked) void FUN_00435b4e_00435B4E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4ch]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 48h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 88 70 01 00 00: mov cx, word ptr [eax + 0x170]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + 180h]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 2
        ; Exact mapped bytes 74 15: je 0x435bae
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 4ch], 4
        ; Exact mapped bytes 74 2B: je 0x435bca
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebp - 4ch], 8
        ; Exact mapped bytes 0F 84 7E 06 00 00: je 0x436227
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B0 06 00 00: jmp 0x43625e
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 1ah
        push 8000010ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D 16 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 94 06 00 00: jmp 0x43625e
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 180h]
        shl edx, 6
        lea ecx, [eax + edx + 0cb0h]
        ; Exact mapped bytes E8 99 5F 04 00: call 0x47bb85
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 18h]
        cmp dword ptr [ecx + 0f8h], 0
        ; Exact mapped bytes 0F 85 F1 05 00 00: jne 0x4361f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes E8 69 E8 FC FF: call 0x40447d
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 18h]
        mov ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes E8 3B 0C 05 00: call 0x486861
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 0b8h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x435c47
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 53 01 00: call 0x44afe7
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 24h]
        ; Exact mapped bytes E8 EA 0A 00 00: call 0x436740
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x435c6b
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 24h]
        ; Exact mapped bytes E8 53 B4 FC FF: call 0x4010bc
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x435c92
        __asm _emit 0xeb
        __asm _emit 0x27
        push 0
        push 6
        lea edx, [ebp - 8]
        push edx
        push 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 170h]
        or ecx, 100000h
        push ecx
        push 80020116h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 15 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        push 6
        lea edx, [ebp - 8]
        push edx
        push 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 170h]
        or ecx, 100000h
        push ecx
        push 80020116h
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 3C 3E 05 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes E8 97 C2 02 00: call 0x461f5c
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 21 05 00 00: je 0x4361ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 28 02 00 00: jne 0x435f13
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 0b8h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x435e2a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 0d90h], 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [eax + 0d94h], 0
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x435d3a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        cmp dword ptr [ebp - 38h], edx
        ; Exact mapped bytes 0F 8D A7 00 00 00: jge 0x435e05
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov esi, dword ptr [eax + 14h]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp - 38h]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 CC 6A 04 00: call 0x47c848
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d90h]
        add ecx, eax
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [eax + 0d90h], ecx
        mov ecx, dword ptr [ebp - 48h]
        mov esi, dword ptr [ecx + 14h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 38h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 15 6B 04 00: call 0x47c8c3
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d94h]
        add edx, eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 0d94h], edx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 38h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 B3 68 04 00: call 0x47c68d
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 0ah
        ; Exact mapped bytes 7E 02: jle 0x435de1
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 24: jmp 0x435e05
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 38h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 80 69 04 00: call 0x47c779
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 7E 02: jle 0x435e00
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x435e05
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 2C FF FF FF: jmp 0x435d31
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 FD D8 FC FF: call 0x40370d
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 10h
        ; Exact mapped bytes 73 05: jae 0x435e1a
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E9 44 04 00 00: jmp 0x43625e
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 DB 08 00 00: call 0x436700
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x435f0e
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [edx + 0d90h], 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 0d94h], 0
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x435e5c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 3ch]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        and al, 0fh
        and eax, 0ffh
        cmp dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 7D 75: jge 0x435eef
        __asm _emit 0x7d
        __asm _emit 0x75
        mov ecx, dword ptr [ebp - 48h]
        mov esi, dword ptr [ecx + 14h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 3ch]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 B0 69 04 00: call 0x47c848
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d90h]
        add edx, eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 0d90h], edx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 3ch]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 C9 67 04 00: call 0x47c68d
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 0ah
        ; Exact mapped bytes 7E 02: jle 0x435ecb
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 24: jmp 0x435eef
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 3ch]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 96 68 04 00: call 0x47c779
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 7E 02: jle 0x435eea
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x435eef
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x435e53
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        cmp dword ptr [eax + 0d90h], 10h
        ; Exact mapped bytes 73 05: jae 0x435f03
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E9 5B 03 00 00: jmp 0x43625e
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 F2 07 00 00: call 0x436700
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BE 01 00 00: jmp 0x4360d1
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 EC 00 00 00: mov dx, word ptr [ecx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 5
        ; Exact mapped bytes 0F 85 A0 01 00 00: jne 0x4360d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 0b8h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x43602c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [edx + 0d90h], 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 0d94h], 0
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x435f80
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 40h]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        and al, 0fh
        and eax, 0ffh
        cmp dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 7D 69: jge 0x436007
        __asm _emit 0x7d
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 48h]
        mov esi, dword ptr [ecx + 14h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 40h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 8C 68 04 00: call 0x47c848
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d90h]
        add edx, eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 0d90h], edx
        mov edx, dword ptr [ebp - 48h]
        mov esi, dword ptr [edx + 14h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 40h]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 D5 68 04 00: call 0x47c8c3
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d94h]
        add ecx, eax
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [eax + 0d94h], ecx
        ; Exact mapped bytes E9 70 FF FF FF: jmp 0x435f77
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 FB D6 FC FF: call 0x40370d
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 73 05: jae 0x43601c
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x43625e
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 D9 06 00 00: call 0x436700
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x4360d1
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 0d90h], 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [eax + 0d94h], 0
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x43605e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 1
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        cmp dword ptr [ebp - 44h], edx
        ; Exact mapped bytes 7D 34: jge 0x4360b2
        __asm _emit 0x7d
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 48h]
        mov esi, dword ptr [eax + 14h]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp - 44h]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 AC 67 04 00: call 0x47c848
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d90h]
        add ecx, eax
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [eax + 0d90h], ecx
        ; Exact mapped bytes EB A3: jmp 0x436055
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 14h]
        cmp dword ptr [edx + 0d90h], 4
        ; Exact mapped bytes 73 05: jae 0x4360c6
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x43625e
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 2F 06 00 00: call 0x436700
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 24 06 00 00: call 0x436700
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d74h]
        ; Exact mapped bytes E8 8E 33 04 00: call 0x47947d
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [edx + 0f8h], 1
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D2 26 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x26
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [edx + 0d84h], eax
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x43612c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        and cl, 0fh
        and ecx, 0ffh
        cmp dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes 7D 4A: jge 0x436196
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 BE D2 FC FF: call 0x403415
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 34h]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 29 64 04 00: call 0x47c599
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 D5 D2 FC FF: call 0x403450
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp - 34h]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 7F 64 04 00: call 0x47c613
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 8D: jmp 0x436123
        __asm _emit 0xeb
        __asm _emit 0x8d
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 FD 00 00 00: call 0x43629b
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d74h]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes E8 E5 1F FE FF: call 0x41819b
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4361d6
        __asm _emit 0x74
        __asm _emit 0x1c
        push 28h
        lea edx, [ebp - 30h]
        push edx
        push 0
        push 0
        push 80000200h
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 22 39 05 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x4361ee
        __asm _emit 0xeb
        __asm _emit 0x18
        push 0
        push 0
        push 0
        push 0
        push 80000200h
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 08 39 05 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x436225
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + 0d74h]
        ; Exact mapped bytes E8 B2 36 04 00: call 0x4798b7
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 20h]
        ; Exact mapped bytes E8 CE BE 02 00: call 0x4620de
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x436225
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + 0d74h]
        ; Exact mapped bytes E8 9F 37 04 00: call 0x4799c4
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 37: jmp 0x43625e
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 180h]
        shl eax, 6
        lea ecx, [ecx + eax + 0cb0h]
        ; Exact mapped bytes E8 3C 59 04 00: call 0x47bb85
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d74h]
        ; Exact mapped bytes E8 59 36 04 00: call 0x4798b7
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 0A 01 00: call 0x446c7d
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 95 99 04 00: call 0x47fc0d
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + 0d78h]
        ; Exact mapped bytes E8 3C 9D FD FF: call 0x40ffc5
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 4B 25 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x25
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
