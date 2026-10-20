// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004105BF .. +0x358 bytes.
extern "C" __declspec(naked) void FUN_004105bf_004105BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        push edi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 2
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0E FA FF FF: call 0x40fffa
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 0F 03 00 00: je 0x410903
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 C0 00 00 00: mov ax, word ptr [edx + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        imul eax, dword ptr [ecx + 8bch]
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 168h]
        cmp eax, dword ptr [ecx + 18h]
        ; Exact mapped bytes 76 07: jbe 0x41061f
        __asm _emit 0x76
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E6 02 00 00: jmp 0x410905
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        mov edi, dword ptr [ebp - 8]
        add edi, 80h
        mov ecx, 1ch
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 180h], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D4 F8 FF FF: call 0x40ff1b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add eax, 80h
        mov esi, esp
        push eax
        push 5a0e74h
        mov ecx, dword ptr [ebp - 8]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 72 81 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 68: mov ax, word ptr [edx + 0x68]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x68
        ; Exact mapped bytes 66 25 FC FF: and ax, 0xfffc
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 41 68: mov word ptr [ecx + 0x68], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 64h], 1
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 10ch]
        and cl, 7fh
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + 50h]
        and al, 80h
        or al, cl
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 50h], al
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + 0b1h]
        and al, 7fh
        and al, 7fh
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 51h]
        and dl, 80h
        or dl, al
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 51h], dl
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 B6 00 00 00: mov dx, word ptr [ecx + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 4
        ; Exact mapped bytes 74 11: je 0x4106e3
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 B6 00 00 00: mov cx, word ptr [eax + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 5
        ; Exact mapped bytes 75 12: jne 0x4106f5
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + 52h]
        and al, 0f0h
        or al, 2
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 52h], al
        ; Exact mapped bytes EB 1E: jmp 0x410713
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + 0b2h]
        and al, 0fh
        and al, 0fh
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 52h]
        and dl, 0f0h
        or dl, al
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 52h], dl
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 0b2h]
        shr dl, 4
        and dl, 1
        and dl, 1
        shl dl, 4
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 52h]
        and cl, 0efh
        or cl, dl
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 52h], cl
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 0b2h]
        shr cl, 5
        and cl, 1
        and cl, 1
        shl cl, 5
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + 52h]
        and al, 0dfh
        or al, cl
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 52h], al
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + 0b3h]
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 53h]
        and dl, 0
        or dl, al
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 53h], dl
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 0b4h]
        and dl, 0fh
        and dl, 0fh
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 54h]
        and cl, 0f0h
        or cl, dl
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 54h], cl
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 91 B6 00 00 00: mov dx, word ptr [ecx + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 50 56: mov word ptr [eax + 0x56], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [eax + 5ch], edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 B6 00 00 00: mov cx, word ptr [eax + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4
        ; Exact mapped bytes 74 11: je 0x4107da
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 B6 00 00 00: mov ax, word ptr [edx + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 75 0F: jne 0x4107e9
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ecx + 58h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 82 C0 00 00 00: mov ax, word ptr [edx + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 41 60: mov word ptr [ecx + 0x60], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + 0c2h]
        mov byte ptr [ecx + 62h], al
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + 0c3h]
        mov byte ptr [ecx + 63h], al
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 6A: mov dx, word ptr [ecx + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x6a
        ; Exact mapped bytes 66 81 E2 00 80: and dx, 0x8000
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x80
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 50 6A: mov word ptr [eax + 0x6a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 0b1h]
        and dl, 7fh
        and edx, 0ffh
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 04 06 00 00: call 0x410e50
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0fch], 4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0b8h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x410877
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 97 01 00 00: call 0x410a0c
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x410883
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 94 00 00 00: call 0x410917
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 78 8F 09 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 5B 2B FF FF: call 0x4033f5
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        push 80025003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 69 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes 8B 0D 00 78 5D 00: mov ecx, dword ptr [0x5d7800]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 01 25 00 00: call 0x412dc3
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 62 2B FF FF: call 0x403430
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 180h]
        shl eax, 6
        lea ecx, [ecx + eax + 0cb0h]
        ; Exact mapped bytes E8 72 AD 06 00: call 0x47b662
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xad
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x410903
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C9 F6 FF FF: call 0x40ffc5
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x410905
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 CF 7E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
