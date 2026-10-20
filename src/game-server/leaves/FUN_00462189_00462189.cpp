// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462189 .. +0x649 bytes.
extern "C" __declspec(naked) void FUN_00462189_00462189() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 48h], ecx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        cmp dword ptr [edx + 0fch], 4
        ; Exact mapped bytes 74 07: je 0x4621c1
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FF 05 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 178h], 1
        ; Exact mapped bytes 75 07: jne 0x4621d4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EC 05 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
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
        cmp ecx, 1
        ; Exact mapped bytes 75 07: jne 0x4621f5
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CB 05 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 0F B6 82 70 01 00 00: movzx ax, byte ptr [edx + 0x170]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx + 180h]
        mov byte ptr [ebp - 4], dl
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 178h], 1
        push 6
        lea ecx, [ebp - 8]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 170h]
        or eax, 30000h
        push eax
        push 80020116h
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 B2 78 02 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 10 FD FF FF: call 0x461f5c
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 6A 05 00 00: je 0x4627be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
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
        cmp edx, 4
        ; Exact mapped bytes 0F 85 40 02 00 00: jne 0x4624b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 0b8h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x4623bb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [edx + 0d90h], 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 0d94h], 0
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x4622c1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 38h]
        add edx, 1
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        and al, 0fh
        and eax, 0ffh
        cmp dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 0F 8D B1 00 00 00: jge 0x462394
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov esi, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 38h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 47 A5 01 00: call 0x47c848
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d90h]
        add edx, eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 0d90h], edx
        mov edx, dword ptr [ebp - 48h]
        mov esi, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 38h]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 90 A5 01 00: call 0x47c8c3
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d94h]
        add ecx, eax
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax + 0d94h], ecx
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 38h]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 2E A3 01 00: call 0x47c68d
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 0ah
        ; Exact mapped bytes 7E 07: jle 0x46236b
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 55 04 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 38h]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 F6 A3 01 00: call 0x47c779
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 7E 07: jle 0x46238f
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 31 04 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 24 FF FF FF: jmp 0x4622b8
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 6E 13 FA FF: call 0x40370d
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x13
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 10h
        ; Exact mapped bytes 73 07: jae 0x4623ab
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 15 04 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 4A 43 FD FF: call 0x436700
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x43
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x4624ad
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 0d90h], 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax + 0d94h], 0
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4623ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        cmp dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes 7D 7F: jge 0x46248c
        __asm _emit 0x7d
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 48h]
        mov esi, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 3ch]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 1D A4 01 00: call 0x47c848
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d90h]
        add ecx, eax
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax + 0d90h], ecx
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 3ch]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 36 A2 01 00: call 0x47c68d
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 0ah
        ; Exact mapped bytes 7E 07: jle 0x462463
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5D 03 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 3ch]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 FE A2 01 00: call 0x47c779
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 7E 07: jle 0x462487
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 39 03 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x4623e4
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
        cmp dword ptr [edx + 0d90h], 10h
        ; Exact mapped bytes 73 07: jae 0x4624a2
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1E 03 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 53 42 FD FF: call 0x436700
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x462674
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
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
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 A4 01 00 00: jne 0x462674
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 0b8h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x4625cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 0d90h], 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax + 0d94h], 0
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x46251f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        cmp dword ptr [ebp - 40h], edx
        ; Exact mapped bytes 7D 69: jge 0x4625a8
        __asm _emit 0x7d
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 48h]
        mov esi, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 40h]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 EB A2 01 00: call 0x47c848
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d90h]
        add ecx, eax
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax + 0d90h], ecx
        mov ecx, dword ptr [ebp - 48h]
        mov esi, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 40h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 34 A3 01 00: call 0x47c8c3
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d94h]
        add edx, eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 0d94h], edx
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x462516
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 5A 11 FA FF: call 0x40370d
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 73 07: jae 0x4625bf
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 01 02 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 36 41 FD FF: call 0x436700
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x462674
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [edx + 0d90h], 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 0d94h], 0
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x462601
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 44h]
        add edx, 1
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        and al, 0fh
        and eax, 0ffh
        cmp dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 7D 34: jge 0x462653
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 48h]
        mov esi, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 44h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 0B A2 01 00: call 0x47c848
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d90h]
        add edx, eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 0d90h], edx
        ; Exact mapped bytes EB A5: jmp 0x4625f8
        __asm _emit 0xeb
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        cmp dword ptr [eax + 0d90h], 4
        ; Exact mapped bytes 73 07: jae 0x462669
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x4627c0
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 8C 40 FD FF: call 0x436700
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 81 40 FD FF: call 0x436700
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        push -1
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 0d74h]
        ; Exact mapped bytes E8 EB 6D 01 00: call 0x47947d
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dword ptr [ecx + 0f8h], 1
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 29 61 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [ecx + 0d84h], eax
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 46 D5 FD FF: call 0x43fc14
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 A5 0C FA FF: call 0x40337f
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 86 01 00 00: call 0x462868
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 62 D5 FD FF: call 0x43fc4f
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x4626ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        add edx, 1
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        and al, 0fh
        and eax, 0ffh
        cmp dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 7D 4A: jge 0x462767
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 ED 0C FA FF: call 0x403415
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 34h]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 58 9E 01 00: call 0x47c599
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 04 0D FA FF: call 0x403450
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0d
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 34h]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 AE 9E 01 00: call 0x47c613
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 8F: jmp 0x4626f6
        __asm _emit 0xeb
        __asm _emit 0x8f
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d74h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes E8 1C 5A FB FF: call 0x41819b
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5a
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x46279f
        __asm _emit 0x74
        __asm _emit 0x1c
        push 28h
        lea ecx, [ebp - 30h]
        push ecx
        push 0
        push 0
        push 80000200h
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 59 73 02 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x4627b7
        __asm _emit 0xeb
        __asm _emit 0x18
        push 0
        push 0
        push 0
        push 0
        push 80000200h
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 3F 73 02 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4627c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 14 60 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
