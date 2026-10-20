// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10075AC0 .. +0x3AB bytes.
extern "C" __declspec(naked) void FUN_10075ac0_10075AC0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 98 03 00 00: je 0x10075e68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 0A: je 0x10075ae5
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 C6 01 00 00: jne 0x10075cab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x10075afd
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 54h]
        cmp edx, edi
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x10075b86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8]
        sub eax, ecx
        mov ecx, dword ptr [esi + 54h]
        sub ecx, edi
        cmp eax, -8
        ; Exact mapped bytes 7E 2C: jle 0x10075b38
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp eax, 8
        ; Exact mapped bytes 7D 27: jge 0x10075b38
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x10075b2f
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x10075b2f
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x10075b24
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x10075b43
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 14: jmp 0x10075b43
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x10075b43
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x10075b72
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x10075b72
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x10075b69
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x10075b69
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x10075b60
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x10075b7d
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x10075b7d
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x10075b7d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 AA 92 08 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x10075bba
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x10075ba3
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10075b9e
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x10075bb3
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x10075bb2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10075baf
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x10075bb3
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 A6 95 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x10075bee
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x10075bd7
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10075bd2
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x10075be7
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x10075be6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10075be3
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x10075be7
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 32 95 08 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 50h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x10075cab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x10075cab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 58h]
        mov eax, dword ptr [esi + 28h]
        cmp edx, eax
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x10075cab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x10075cab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 45: jne 0x10075c7e
        __asm _emit 0x75
        __asm _emit 0x45
        and eax, 0e2ffh
        or eax, 205h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 21a34h]
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x10075c65
        __asm _emit 0x75
        __asm _emit 0x0e
        lea edx, [esi + 658h]
        mov ecx, esi
        push edx
        ; Exact mapped bytes E8 AB 21 00 00: call 0x10077e10
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esi + 658h]
        push 194h
        push eax
        ; Exact mapped bytes E8 24 7A FD FF: call 0x1004d6a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 2D: jmp 0x10075cab
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 26: jne 0x10075cab
        __asm _emit 0x75
        __asm _emit 0x26
        and eax, 0e5fah
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3ech]
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esi + 3f8h]
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 1f00h
        cmp ecx, 200h
        ; Exact mapped bytes 0F 85 83 01 00 00: jne 0x10075e44
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 64h], -1
        ; Exact mapped bytes 75 7B: jne 0x10075d42
        __asm _emit 0x75
        __asm _emit 0x7b
        mov edx, dword ptr [esi + 3a4h]
        xor eax, eax
        mov al, byte ptr [edx + 25h]
        and al, 1fh
        cmp al, 5
        ; Exact mapped bytes 75 6A: jne 0x10075d42
        __asm _emit 0x75
        __asm _emit 0x6a
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 28h
        ; Exact mapped bytes 7E 12: jle 0x10075cf8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10075cf8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x10075cfa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 3a4h]
        mov dword ptr [eax + 58h], 100h
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 34h
        ; Exact mapped bytes 7E 12: jle 0x10075d2e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10075d2e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes EB 02: jmp 0x10075d30
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 3a4h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 74h]
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x10075d6e
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [esi + 38ch]
        mov edi, 1
        push edi
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 43 C7 FB FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 390h]
        push edi
        ; Exact mapped bytes E8 37 C7 FB FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc7
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x10075e44
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x10075e44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 38ch]
        ; Exact mapped bytes E8 5C C8 FB FF: call 0x100325e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x10075e44
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        cmp eax, 8
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x10075e3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 39h
        ; Exact mapped bytes 7E 12: jle 0x10075db8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10075db8
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0e4h]
        ; Exact mapped bytes EB 02: jmp 0x10075dba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 394h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10075def
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov eax, dword ptr [esi + 394h]
        mov edi, 1
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 39ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 398h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3a0h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 39ch]
        mov dword ptr [ecx + 50h], edi
        mov edx, dword ptr [esi + 398h]
        mov dword ptr [edx + 50h], 5
        mov eax, dword ptr [esi + 78h]
        dec eax
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes EB 09: jmp 0x10075e44
        __asm _emit 0xeb
        __asm _emit 0x09
        cmp eax, 0ch
        ; Exact mapped bytes 7D 04: jge 0x10075e44
        __asm _emit 0x7d
        __asm _emit 0x04
        inc eax
        mov dword ptr [esi + 74h], eax
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x10075e68
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10075e63
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10075e4b
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
