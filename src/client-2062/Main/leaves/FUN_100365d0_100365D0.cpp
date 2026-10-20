// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100365D0 .. +0x1B28 bytes.
extern "C" __declspec(naked) void FUN_100365d0_100365D0() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016e57ah
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 21ch
        push ebx
        push ebp
        mov ebx, ecx
        xor ebp, ebp
        push esi
        push edi
        mov dword ptr [ebx + 308h], ebp
        mov eax, dword ptr [ebx + 10ch]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x10036617
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101a858ch
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10036617
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [ebx + 1d4h]
        push ebp
        ; Exact mapped bytes E8 BD FB 0C 00: call 0x101061e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0x00
        or eax, 0ffffffffh
        mov dword ptr [ebx + 304h], ebp
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [ebx + 0c0h]
        mov dword ptr [eax + 50h], ebp
        mov dword ptr [ebx + 2a0h], ebp
        mov ecx, dword ptr [ebx + 1d0h]
        ; Exact mapped bytes E8 72 22 FE FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        lea esi, [ebx + 110h]
        mov edi, 28h
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 60 22 FE FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x10036659
        __asm _emit 0x75
        __asm _emit 0xf3
        mov edi, dword ptr [esp + 23ch]
        lea eax, [ebx + 2c8h]
        xor edx, edx
        ; Exact mapped bytes 66 83 FF 05: cmp di, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x05
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], edx
        mov dword ptr [ebx + 2c4h], 0ffh
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x10036724
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FF 06: cmp di, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x10036724
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100366b8
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x100366b8
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100366ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 6ch]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100366ec
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
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0c6h
        ; Exact mapped bytes 7E 12: jle 0x1003670f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x1003670f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 318h]
        ; Exact mapped bytes EB 02: jmp 0x10036711
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 78h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x100367d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x100367aa
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 126h
        ; Exact mapped bytes 7E 12: jle 0x10036747
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x10036747
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 498h]
        ; Exact mapped bytes EB 02: jmp 0x10036749
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 6ch]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1003677b
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
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 127h
        ; Exact mapped bytes 7E 12: jle 0x1003679e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x1003679e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 49ch]
        ; Exact mapped bytes EB 02: jmp 0x100367a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 78h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100367d2
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
        mov ecx, dword ptr [ebx + 6ch]
        push 101h
        ; Exact mapped bytes E8 81 89 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 78h]
        push 0fffffeffh
        ; Exact mapped bytes E8 74 89 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 6ch]
        mov ecx, 8000h
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 78h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 39 BB A4 02 00 00: cmp word ptr [ebx + 0x2a4], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbb
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 B8 18 00 00: jne 0x100380c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 240h]
        cmp edx, 8
        ; Exact mapped bytes 7E 08: jle 0x10036820
        __asm _emit 0x7e
        __asm _emit 0x08
        mov eax, dword ptr [ebx + 7ch]
        mov dword ptr [eax + 54h], ebp
        ; Exact mapped bytes EB 53: jmp 0x10036873
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 20h
        ; Exact mapped bytes 7E 11: jle 0x1003683f
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x1003683f
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 800h
        ; Exact mapped bytes EB 02: jmp 0x10036841
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 7ch]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10036873
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], esi
        mov esi, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], esi
        mov esi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        xor eax, eax
        cmp edx, ebp
        mov dword ptr [esp + 20h], eax
        mov esi, 0fffeh
        ; Exact mapped bytes 0F 8E 9C 13 00 00: jle 0x10037c22
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 88 51 17 10: mov ebp, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes EB 0B: jmp 0x10036899
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 23ch]
        mov edx, dword ptr [esp + 244h]
        lea ecx, [eax + eax*2]
        mov al, byte ptr [edx + ecx*4]
        lea esi, [edx + ecx*4]
        and eax, 0fh
        ; Exact mapped bytes 66 3B F8: cmp di, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 0F 85 47 13 00 00: jne 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 23ch]
        and ecx, 0ffffh
        lea eax, [ecx - 1]
        cmp eax, 0dh
        ; Exact mapped bytes 0F 87 2E 13 00 00: ja 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 F8 80 03 10: jmp dword ptr [eax*4 + 0x100380f8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov dword ptr [esp + 28h], 368h
        ; Exact mapped bytes E8 74 E5 FE FF: call 0x10024e60
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 06 13 00 00: je 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 308h]
        mov ecx, dword ptr [ebx + 68h]
        inc eax
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [ebx + 308h], eax
        mov edx, dword ptr [ecx + 160h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 18: mov ax, word ptr [edi + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x18
        cmp edx, eax
        ; Exact mapped bytes 7E 19: jle 0x10036933
        __asm _emit 0x7e
        __asm _emit 0x19
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x10036933
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x10036933
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x1003693b
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        mov cl, byte ptr [edi + 2]
        lea eax, [edi + 328h]
        and ecx, 1fh
        push eax
        shl ecx, 4
        add ecx, 10199570h
        lea edx, [esp + 130h]
        push ecx
        push 101a8584h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 10h
        lea ecx, [ebx + 0ech]
        mov edx, 6
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1003696f
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [ebx + 0ech]
        push 14bh
        ; Exact mapped bytes E8 C5 83 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f0h]
        push 187h
        ; Exact mapped bytes E8 B5 83 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f4h]
        push 1b9h
        ; Exact mapped bytes E8 A5 83 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f8h]
        push 1e6h
        ; Exact mapped bytes E8 95 83 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push 213h
        ; Exact mapped bytes E8 85 83 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 100h]
        push 23bh
        ; Exact mapped bytes E8 75 83 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        lea ecx, [esp + 2ch]
        push eax
        push 101a8580h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [ebx + 0ech]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push edx
        push eax
        ; Exact mapped bytes E8 A9 D2 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea edx, [esp + 2ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f8h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 7F D2 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4F 0C: mov cx, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        lea edx, [esp + 2ch]
        shr ecx, 4
        and ecx, 0ffh
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0fch]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 4B D2 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 64h]
        lea edx, [esp + 2ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 100h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E9 95 0F 00 00: jmp 0x10037a24
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        mov dword ptr [esp + 24h], 0ach
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 7A E4 FE FF: call 0x10024f20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 4C 11 00 00: je 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 308h]
        xor eax, eax
        inc edx
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [ebx + 308h], edx
        ; Exact mapped bytes 8B 0D 68 57 1C 10: mov ecx, dword ptr [0x101c5768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        inc eax
        cmp edx, eax
        ; Exact mapped bytes 7E 19: jle 0x10036af1
        __asm _emit 0x7e
        __asm _emit 0x19
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x10036af1
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x10036af1
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x10036af9
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        lea edx, [edi + 78h]
        lea eax, [esp + 12ch]
        push edx
        push 1017f54ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [ebx + 0ech]
        mov edx, 5
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10036b1a
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [ebx + 0ech]
        push 14bh
        ; Exact mapped bytes E8 1A 82 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f0h]
        push 182h
        ; Exact mapped bytes E8 0A 82 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f4h]
        push 1b9h
        ; Exact mapped bytes E8 FA 81 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f8h]
        push 1e6h
        ; Exact mapped bytes E8 EA 81 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push 213h
        ; Exact mapped bytes E8 DA 81 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        lea edx, [esp + 2ch]
        push ecx
        push 101a8580h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        add esp, 0ch
        lea ecx, [esp + 2ch]
        push 777777h
        push eax
        push ecx
        mov ecx, dword ptr [ebx + 0ech]
        ; Exact mapped bytes E8 0E D1 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd1
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        mov eax, 10624dd3h
        push edx
        mul dword ptr [edi + 24h]
        shr edx, 6
        push edx
        lea edx, [esp + 34h]
        push 101a8578h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f0h]
        add esp, 10h
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 C5 D0 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [esp + 2ch]
        ; Exact mapped bytes 66 8B 4F 1E: mov cx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1e
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f4h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 98 D0 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea edx, [esp + 2ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f8h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 6E D0 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 98h]
        push ecx
        push 1017f3cch
        ; Exact mapped bytes E9 B5 0D 00 00: jmp 0x10037a08
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        mov dword ptr [esp + 24h], 0b4h
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 76 E3 FE FF: call 0x10024fe0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 88 0F 00 00: je 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 308h]
        xor eax, eax
        inc edx
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [ebx + 308h], edx
        ; Exact mapped bytes 8B 0D 64 57 1C 10: mov ecx, dword ptr [0x101c5764]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        inc eax
        cmp edx, eax
        ; Exact mapped bytes 7E 19: jle 0x10036cb5
        __asm _emit 0x7e
        __asm _emit 0x19
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x10036cb5
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x10036cb5
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x10036cbd
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        lea edx, [edi + 78h]
        lea eax, [esp + 12ch]
        push edx
        push 1017f54ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [ebx + 0ech]
        mov edx, 6
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10036cde
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [ebx + 0ech]
        push 14bh
        ; Exact mapped bytes E8 56 80 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f0h]
        push 182h
        ; Exact mapped bytes E8 46 80 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f4h]
        push 1b9h
        ; Exact mapped bytes E8 36 80 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f8h]
        push 1e6h
        ; Exact mapped bytes E8 26 80 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push 213h
        ; Exact mapped bytes E8 16 80 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 100h]
        push 23bh
        ; Exact mapped bytes E8 06 80 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        lea edx, [esp + 2ch]
        push ecx
        push 101a8580h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0ech]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 3C CF 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        mov eax, 10624dd3h
        push edx
        mul dword ptr [edi + 24h]
        shr edx, 6
        push edx
        lea edx, [esp + 34h]
        push 101a8578h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f0h]
        add esp, 10h
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 F3 CE 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [esp + 2ch]
        ; Exact mapped bytes 66 8B 4F 1E: mov cx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1e
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f4h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 C6 CE 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea edx, [esp + 2ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f8h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 9C CE 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [esp + 2ch]
        ; Exact mapped bytes 66 8B 8F 98 00 00 00: mov cx, word ptr [edi + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push 101a8574h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0fch]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 6C CE 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BF 9E 00 00 00 00: cmp word ptr [edi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 101a856ch
        ; Exact mapped bytes 75 05: jne 0x10036e58
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 101a8564h
        mov ecx, dword ptr [ebx + 100h]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E9 B9 0B 00 00: jmp 0x10037a24
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        mov dword ptr [esp + 24h], 0b4h
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BE E1 FE FF: call 0x10025040
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 70 0D 00 00: je 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 308h]
        xor eax, eax
        inc edx
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [ebx + 308h], edx
        ; Exact mapped bytes 8B 0D 5C 57 1C 10: mov ecx, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        add eax, 2
        cmp edx, eax
        ; Exact mapped bytes 7E 19: jle 0x10036ecf
        __asm _emit 0x7e
        __asm _emit 0x19
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x10036ecf
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x10036ecf
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x10036ed7
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        mov al, byte ptr [edi + 98h]
        lea edx, [edi + 78h]
        and eax, 7
        push edx
        shl eax, 4
        add eax, 10199880h
        lea ecx, [esp + 130h]
        push eax
        push 101a855ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 10h
        lea ecx, [ebx + 0ech]
        mov edx, 6
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10036f0a
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [ebx + 0ech]
        push 14bh
        ; Exact mapped bytes E8 2A 7E 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f0h]
        push 18ch
        ; Exact mapped bytes E8 1A 7E 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f4h]
        push 1b9h
        ; Exact mapped bytes E8 0A 7E 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f8h]
        push 1e6h
        ; Exact mapped bytes E8 FA 7D 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push 213h
        ; Exact mapped bytes E8 EA 7D 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 100h]
        push 259h
        ; Exact mapped bytes E8 DA 7D 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        lea eax, [esp + 2ch]
        push edx
        push 101a8580h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 2ch]
        push 777777h
        push 0
        push ecx
        mov ecx, dword ptr [ebx + 0ech]
        ; Exact mapped bytes E8 10 CD 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        mov eax, 10624dd3h
        push edx
        mul dword ptr [edi + 24h]
        shr edx, 6
        push edx
        lea edx, [esp + 34h]
        push 101a8578h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f0h]
        add esp, 10h
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 C7 CC 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [esp + 2ch]
        ; Exact mapped bytes 66 8B 4F 1E: mov cx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1e
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f4h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 9A CC 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea edx, [esp + 2ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f8h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 70 CC 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        mov ecx, 64h
        ; Exact mapped bytes 66 8B 87 A0 00 00 00: mov ax, word ptr [edi + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        cdq
        idiv ecx
        mov eax, 51eb851fh
        lea ecx, [esp + 2ch]
        push edx
        imul dword ptr [esp + 14h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a8578h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0fch]
        add esp, 10h
        lea edx, [esp + 2ch]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 20 CC 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        mov al, byte ptr [edi + 9ch]
        lea ecx, [esp + 2ch]
        and eax, 7fh
        push eax
        push 101a8554h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 100h]
        add esp, 0ch
        lea edx, [esp + 2ch]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 F0 CB 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xcb
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7F 06 02: cmp word ptr [edi + 6], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x02
        ; Exact mapped bytes 75 14: jne 0x100370db
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebx + 2c8h]
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x100370db
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [ebx + 2c8h], eax
        ; Exact mapped bytes 66 83 7F 06 03: cmp word ptr [edi + 6], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 90 02 00 00: jne 0x10037376
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 2cch]
        test eax, eax
        ; Exact mapped bytes 0F 85 82 02 00 00: jne 0x10037376
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 73 02 00 00: jmp 0x1003736c
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov dword ptr [esp + 28h], 0a8h
        ; Exact mapped bytes E8 90 DF FE FF: call 0x100250a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 E2 0A 00 00: je 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 308h]
        xor eax, eax
        inc edx
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [ebx + 308h], edx
        ; Exact mapped bytes 8B 0D 60 57 1C 10: mov ecx, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        add eax, 5
        cmp edx, eax
        ; Exact mapped bytes 7E 19: jle 0x1003715d
        __asm _emit 0x7e
        __asm _emit 0x19
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x1003715d
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x1003715d
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x10037165
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        lea ecx, [edi + 78h]
        lea edx, [esp + 12ch]
        push ecx
        push 1017f54ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [ebx + 0ech]
        mov edx, 6
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10037186
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [ebx + 0ech]
        push 14bh
        ; Exact mapped bytes E8 AE 7B 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f0h]
        push 182h
        ; Exact mapped bytes E8 9E 7B 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f4h]
        push 1b9h
        ; Exact mapped bytes E8 8E 7B 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f8h]
        push 1e6h
        ; Exact mapped bytes E8 7E 7B 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push 213h
        ; Exact mapped bytes E8 6E 7B 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 100h]
        push 259h
        ; Exact mapped bytes E8 5E 7B 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        lea ecx, [esp + 2ch]
        push eax
        push 101a8580h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0ech]
        add esp, 0ch
        lea edx, [esp + 2ch]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 94 CA 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xca
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        mov eax, 10624dd3h
        push edx
        mul dword ptr [edi + 24h]
        shr edx, 6
        push edx
        lea edx, [esp + 34h]
        push 101a8578h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f0h]
        add esp, 10h
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 4B CA 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xca
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [esp + 2ch]
        ; Exact mapped bytes 66 8B 4F 1E: mov cx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1e
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f4h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 1E CA 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xca
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea edx, [esp + 2ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f8h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 F4 C9 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc9
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        mov ecx, 64h
        ; Exact mapped bytes 66 8B 87 A2 00 00 00: mov ax, word ptr [edi + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        cdq
        idiv ecx
        mov eax, 51eb851fh
        lea ecx, [esp + 2ch]
        push edx
        imul dword ptr [esp + 14h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a8578h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0fch]
        add esp, 10h
        lea edx, [esp + 2ch]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 A4 C9 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 87 98 00 00 00: mov ax, word ptr [edi + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 2ch]
        shr eax, 4
        and eax, 7fh
        push eax
        push 101a8554h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 100h]
        add esp, 0ch
        lea edx, [esp + 2ch]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 70 C9 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7F 06 02: cmp word ptr [edi + 6], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x02
        ; Exact mapped bytes 75 14: jne 0x1003735b
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebx + 2c8h]
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x1003735b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [ebx + 2c8h], eax
        ; Exact mapped bytes 66 83 7F 06 03: cmp word ptr [edi + 6], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x03
        ; Exact mapped bytes 75 14: jne 0x10037376
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebx + 2cch]
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x10037376
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [ebx + 2cch], ecx
        ; Exact mapped bytes 66 83 7F 06 04: cmp word ptr [edi + 6], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 A8 06 00 00: jne 0x10037a29
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 2d0h]
        test eax, eax
        ; Exact mapped bytes 0F 85 9A 06 00 00: jne 0x10037a29
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [ebx + 2d0h], edx
        ; Exact mapped bytes E9 8B 06 00 00: jmp 0x10037a29
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebx + 1e0h]
        mov edx, 3
        mov edi, 0fh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100373ae
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov dword ptr [esp + 28h], 0ach
        ; Exact mapped bytes E8 2F DD FE FF: call 0x10025100
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 84 1F 08 00 00: je 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebx + 308h]
        xor ecx, ecx
        inc edi
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [ebx + 308h], edi
        ; Exact mapped bytes 8B 15 7C 57 1C 10: mov edx, dword ptr [0x101c577c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        mov edi, dword ptr [edx + 160h]
        inc ecx
        cmp edi, ecx
        ; Exact mapped bytes 7E 19: jle 0x1003741e
        __asm _emit 0x7e
        __asm _emit 0x19
        test ecx, ecx
        ; Exact mapped bytes 7C 15: jl 0x1003741e
        __asm _emit 0x7c
        __asm _emit 0x15
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x1003741e
        __asm _emit 0x74
        __asm _emit 0x0b
        shl ecx, 6
        add ecx, edx
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes EB 08: jmp 0x10037426
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        add eax, 78h
        lea ecx, [esp + 12ch]
        push eax
        push 1017f54ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea edi, [ebx + 0ech]
        add esp, 0ch
        mov ecx, edi
        mov edx, 6
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10037449
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [edi]
        push 14bh
        ; Exact mapped bytes E8 EF 78 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f0h]
        push 182h
        ; Exact mapped bytes E8 DF 78 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f4h]
        push 1b9h
        ; Exact mapped bytes E8 CF 78 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f8h]
        push 1e6h
        ; Exact mapped bytes E8 BF 78 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push 213h
        ; Exact mapped bytes E8 AF 78 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 100h]
        push 245h
        ; Exact mapped bytes E8 9F 78 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        lea eax, [esp + 2ch]
        push edx
        push 101a8580h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 2ch]
        push 777777h
        push 0
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 D9 C7 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, 3e8h
        mov ecx, dword ptr [edx + 24h]
        xor edx, edx
        mov eax, ecx
        div edi
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        mov eax, 10624dd3h
        push edx
        mul ecx
        shr edx, 6
        push edx
        lea eax, [esp + 34h]
        push 101a8578h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 10h
        lea ecx, [esp + 2ch]
        push 777777h
        push 0
        push ecx
        mov ecx, dword ptr [ebx + 0f0h]
        ; Exact mapped bytes E8 8B C7 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        xor ecx, ecx
        mov edi, 0ah
        ; Exact mapped bytes 66 8B 4A 1E: mov cx, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x1e
        mov eax, ecx
        cdq
        idiv edi
        mov eax, 66666667h
        push edx
        imul ecx
        sar edx, 2
        mov eax, edx
        lea ecx, [esp + 30h]
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a8578h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f4h]
        add esp, 10h
        lea edx, [esp + 2ch]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 3E C7 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        lea ecx, [esp + 2ch]
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f8h]
        add esp, 0ch
        lea edx, [esp + 2ch]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 14 C7 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, dword ptr [esp + 10h]
        lea ecx, [esp + 2ch]
        mov al, byte ptr [edi + 9ah]
        and eax, 0ffh
        push eax
        push 101a8550h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0fch]
        add esp, 0ch
        lea edx, [esp + 2ch]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 DE C6 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        lea ecx, [esp + 2ch]
        ; Exact mapped bytes 66 8B 87 9C 00 00 00: mov ax, word ptr [edi + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 101a8550h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 100h]
        add esp, 0ch
        lea edx, [esp + 2ch]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E9 22 04 00 00: jmp 0x10037a24
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov dword ptr [esp + 28h], 0b4h
        ; Exact mapped bytes E8 47 DB FE FF: call 0x10025160
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 84 D7 05 00 00: je 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 308h]
        mov dword ptr [esp + 1ch], eax
        inc ecx
        mov dword ptr [ebx + 308h], ecx
        ; Exact mapped bytes 8B 15 78 57 1C 10: mov edx, dword ptr [0x101c5778]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        mov edi, dword ptr [edx + 160h]
        cmp edi, ecx
        ; Exact mapped bytes 7E 19: jle 0x10037665
        __asm _emit 0x7e
        __asm _emit 0x19
        test ecx, ecx
        ; Exact mapped bytes 7C 15: jl 0x10037665
        __asm _emit 0x7c
        __asm _emit 0x15
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x10037665
        __asm _emit 0x74
        __asm _emit 0x0b
        shl ecx, 6
        add ecx, edx
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes EB 08: jmp 0x1003766d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        add eax, 78h
        lea ecx, [esp + 12ch]
        push eax
        push 1017f54ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea edi, [ebx + 0ech]
        add esp, 0ch
        mov ecx, edi
        mov edx, 6
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10037690
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [edi]
        push 14bh
        ; Exact mapped bytes E8 A8 76 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f0h]
        push 182h
        ; Exact mapped bytes E8 98 76 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f4h]
        push 1b9h
        ; Exact mapped bytes E8 88 76 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f8h]
        push 1e6h
        ; Exact mapped bytes E8 78 76 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push 213h
        ; Exact mapped bytes E8 68 76 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 100h]
        push 23bh
        ; Exact mapped bytes E8 58 76 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        lea eax, [esp + 2ch]
        push edx
        push 101a8580h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 2ch]
        push 777777h
        push 0
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 92 C5 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, 3e8h
        mov ecx, dword ptr [edx + 24h]
        xor edx, edx
        mov eax, ecx
        div edi
        mov eax, 10624dd3h
        push edx
        mul ecx
        shr edx, 6
        push edx
        lea eax, [esp + 34h]
        push 101a8578h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 10h
        lea ecx, [esp + 2ch]
        push 777777h
        push 0
        push ecx
        mov ecx, dword ptr [ebx + 0f0h]
        ; Exact mapped bytes E8 4E C5 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, dword ptr [esp + 10h]
        xor edx, edx
        lea eax, [esp + 2ch]
        ; Exact mapped bytes 66 8B 57 1E: mov dx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x1e
        push edx
        push 101a8550h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 2ch]
        push 777777h
        push 0
        push ecx
        mov ecx, dword ptr [ebx + 0f4h]
        ; Exact mapped bytes E8 1D C5 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        lea eax, [esp + 2ch]
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 2ch]
        push 777777h
        push 0
        push ecx
        mov ecx, dword ptr [ebx + 0f8h]
        ; Exact mapped bytes E8 F3 C4 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc4
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8F AE 00 00 00: mov cx, word ptr [edi + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 64h
        mov eax, ecx
        cdq
        idiv edi
        mov eax, 51eb851fh
        push edx
        imul ecx
        sar edx, 5
        mov eax, edx
        lea ecx, [esp + 30h]
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a8578h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0fch]
        add esp, 10h
        lea edx, [esp + 2ch]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 A7 C4 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        xor eax, eax
        lea edx, [esp + 2ch]
        ; Exact mapped bytes 66 8B 81 AA 00 00 00: mov ax, word ptr [ecx + 0xaa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 101a8548h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 100h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E9 E7 01 00 00: jmp 0x10037a24
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        mov dword ptr [esp + 24h], 0d4h
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 6C D9 FE FF: call 0x100251c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 9E 03 00 00: je 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 308h]
        xor eax, eax
        inc edx
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [ebx + 308h], edx
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        add eax, 2
        cmp edx, eax
        ; Exact mapped bytes 7E 19: jle 0x100378a1
        __asm _emit 0x7e
        __asm _emit 0x19
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x100378a1
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x100378a1
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x100378a9
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        lea edx, [edi + 78h]
        lea eax, [esp + 12ch]
        push edx
        push 1017f54ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [ebx + 0ech]
        mov edx, 5
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100378ca
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [ebx + 0ech]
        push 14bh
        ; Exact mapped bytes E8 6A 74 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f0h]
        push 182h
        ; Exact mapped bytes E8 5A 74 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f4h]
        push 1b9h
        ; Exact mapped bytes E8 4A 74 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f8h]
        push 1e6h
        ; Exact mapped bytes E8 3A 74 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push 213h
        ; Exact mapped bytes E8 2A 74 0C 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        lea edx, [esp + 2ch]
        push ecx
        push 101a8580h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0ech]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 60 C3 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, 10624dd3h
        push edx
        mul dword ptr [edi + 24h]
        shr edx, 6
        push edx
        lea edx, [esp + 34h]
        push 101a8578h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f0h]
        add esp, 10h
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 21 C3 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc3
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [esp + 2ch]
        ; Exact mapped bytes 66 8B 4F 1E: mov cx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1e
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f4h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 F4 C2 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea edx, [esp + 2ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0f8h]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 CA C2 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, 88888889h
        ; Exact mapped bytes 66 8B 8F AA 00 00 00: mov cx, word ptr [edi + 0xaa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx
        add edx, ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        push 101a8540h
        lea edx, [esp + 34h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [ebx + 0fch]
        add esp, 0ch
        lea eax, [esp + 2ch]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 87 C2 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 C7 01 00 00: je 0x10037bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        ; Exact mapped bytes E8 61 4D 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x4d
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov dword ptr [esp + 234h], 0
        ; Exact mapped bytes 74 27: je 0x10037a7c
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebx + 8]
        mov edx, dword ptr [ebx + 4]
        add ecx, 75h
        push 1feh
        push ecx
        mov ecx, dword ptr [esp + 1ch]
        add edx, 0fah
        push edx
        push ecx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 D8 FE 00 00: call 0x10047950
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10037a7e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 300h]
        test eax, eax
        mov dword ptr [esp + 234h], 0ffffffffh
        push 18h
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x10037b2a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC 4C 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4c
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov dword ptr [esp + 234h], 1
        ; Exact mapped bytes 74 4C: je 0x10037b06
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        mov esi, dword ptr [esp + 10h]
        mov dword ptr [esi + 14h], edi
        mov edi, dword ptr [esp + 24h]
        push edi
        mov dword ptr [esi + 4], 0
        mov dword ptr [esi], 0
        mov dword ptr [esi + 0ch], ecx
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes E8 BC 4C 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4c
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, edi
        mov dword ptr [esi + 8], eax
        mov esi, dword ptr [esp + 20h]
        mov edx, ecx
        mov edi, eax
        mov eax, dword ptr [esp + 14h]
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        add esp, 4
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes EB 02: jmp 0x10037b08
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 234h], 0ffffffffh
        mov dword ptr [ebx + 300h], eax
        mov dword ptr [ebx + 304h], eax
        mov dword ptr [ebx + 2fch], eax
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x10037bc1
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 4C 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x4c
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov dword ptr [esp + 234h], 2
        ; Exact mapped bytes 74 4C: je 0x10037b91
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        mov esi, dword ptr [esp + 10h]
        mov dword ptr [esi + 14h], edi
        mov edi, dword ptr [esp + 24h]
        push edi
        mov dword ptr [esi + 4], 0
        mov dword ptr [esi], 0
        mov dword ptr [esi + 0ch], ecx
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes E8 31 4C 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x4c
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, edi
        mov dword ptr [esi + 8], eax
        mov esi, dword ptr [esp + 20h]
        mov edi, eax
        mov eax, ecx
        add esp, 4
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        mov eax, dword ptr [esp + 10h]
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes EB 02: jmp 0x10037b93
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 300h]
        mov dword ptr [esp + 234h], 0ffffffffh
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebx + 300h]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebx + 300h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebx + 300h], ecx
        mov edx, dword ptr [ebx + 300h]
        mov ecx, dword ptr [ebx + 0e8h]
        push 777777h
        lea eax, [esp + 130h]
        push edx
        push eax
        ; Exact mapped bytes E8 D0 C0 0C 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 3B 93 88 02 00 00: cmp dx, word ptr [ebx + 0x288]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x93
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x10037bfc
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 240h]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 8C 7A EC FF FF: jl 0x1003688e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7a
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, ecx
        mov ebp, 1
        mov esi, 0fffeh
        ; Exact mapped bytes EB 0C: jmp 0x10037c2e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edi, dword ptr [esp + 240h]
        mov ebp, 1
        mov eax, dword ptr [esp + 23ch]
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C2 01 00 00: je 0x10037e01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B8 01 00 00: je 0x10037e01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 90h]
        mov edx, 4
        mov ecx, dword ptr [eax - 10h]
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
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 E5: jne 0x10037c54
        __asm _emit 0x75
        __asm _emit 0xe5
        mov eax, dword ptr [esp + 23ch]
        ; Exact mapped bytes 66 3D 0B 00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x10037cb4
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebx + 2fch]
        xor ecx, ecx
        test edi, edi
        ; Exact mapped bytes 7E 1D: jle 0x10037ca5
        __asm _emit 0x7e
        __asm _emit 0x1d
        ; Exact mapped bytes 66 8B 93 DA 02 00 00: mov dx, word ptr [ebx + 0x2da]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [eax + 8]
        ; Exact mapped bytes 66 39 16: cmp word ptr [esi], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x16
        ; Exact mapped bytes 74 0A: je 0x10037ca1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 4]
        inc ecx
        cmp ecx, edi
        ; Exact mapped bytes 7C F0: jl 0x10037c8f
        __asm _emit 0x7c
        __asm _emit 0xf0
        ; Exact mapped bytes EB 04: jmp 0x10037ca5
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 18h], ecx
        cmp ecx, edi
        ; Exact mapped bytes 75 47: jne 0x10037cf0
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 66 C7 83 DE 02 00 00 00 00: mov word ptr [ebx + 0x2de], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3C: jmp 0x10037cf0
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes 66 3D 0C 00: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 36: jne 0x10037cf0
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [ebx + 2fch]
        xor ecx, ecx
        test edi, edi
        ; Exact mapped bytes 7E 1D: jle 0x10037ce3
        __asm _emit 0x7e
        __asm _emit 0x1d
        ; Exact mapped bytes 66 8B 93 DC 02 00 00: mov dx, word ptr [ebx + 0x2dc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [eax + 8]
        ; Exact mapped bytes 66 39 16: cmp word ptr [esi], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x16
        ; Exact mapped bytes 74 0A: je 0x10037cdf
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 4]
        inc ecx
        cmp ecx, edi
        ; Exact mapped bytes 7C F0: jl 0x10037ccd
        __asm _emit 0x7c
        __asm _emit 0xf0
        ; Exact mapped bytes EB 04: jmp 0x10037ce3
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 18h], ecx
        cmp ecx, edi
        ; Exact mapped bytes 75 09: jne 0x10037cf0
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 C7 83 E0 02 00 00 00 00: mov word ptr [ebx + 0x2e0], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x10037d4f
        __asm _emit 0x74
        __asm _emit 0x55
        xor ebp, ebp
        mov eax, dword ptr [ebx + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x10037d4f
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebx + 0e8h]
        ; Exact mapped bytes E8 7F C1 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc1
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x10037d4f
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebx + 0e8h]
        ; Exact mapped bytes E8 10 C8 0C 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc8
        __asm _emit 0x0c
        __asm _emit 0x00
        lea esi, [ebx + 0ech]
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 FE C7 0C 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x10037d2b
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, ebx
        ; Exact mapped bytes E8 41 08 00 00: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 7A 09 00 00: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        inc ebp
        cmp ebp, 3e8h
        ; Exact mapped bytes 7C AD: jl 0x10037cfc
        __asm _emit 0x7c
        __asm _emit 0xad
        mov ecx, dword ptr [ebx + 0e8h]
        push 0
        ; Exact mapped bytes E8 F4 C9 0C 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 18h]
        cmp ebp, -1
        ; Exact mapped bytes 75 0B: jne 0x10037d70
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ebp, dword ptr [ebx + 308h]
        dec ebp
        mov dword ptr [esp + 18h], ebp
        mov eax, dword ptr [ebx + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x10037de4
        __asm _emit 0x74
        __asm _emit 0x6a
        test ebp, ebp
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 76 5E: jbe 0x10037de4
        __asm _emit 0x76
        __asm _emit 0x5e
        mov eax, dword ptr [ebx + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x10037de4
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebx + 0e8h]
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 EF C0 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        dec esi
        cmp eax, esi
        ; Exact mapped bytes 7D 3E: jge 0x10037de4
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov ecx, dword ptr [ebx + 0e8h]
        ; Exact mapped bytes E8 FF C7 0C 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        lea esi, [ebx + 0ech]
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 ED C7 0C 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x10037dbc
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, ebx
        ; Exact mapped bytes E8 B0 07 00 00: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 E9 08 00 00: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        inc eax
        cmp eax, ebp
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 72 A2: jb 0x10037d86
        __asm _emit 0x72
        __asm _emit 0xa2
        mov ecx, dword ptr [ebx + 0e8h]
        push ebp
        ; Exact mapped bytes E8 60 C9 0C 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 308h]
        mov dword ptr [ebx + 30ch], eax
        ; Exact mapped bytes E9 A3 01 00 00: jmp 0x10037fa4
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 90h]
        mov edx, 4
        mov ecx, dword ptr [eax - 10h]
        add eax, 4
        ; Exact mapped bytes 66 09 69 24: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 09 69 24: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 EC: jne 0x10037e0c
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 66 83 BC 24 3C 02 00 00 05: cmp word ptr [esp + 0x23c], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 75 3E: jne 0x10037e69
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 66 8B 93 D6 02 00 00: mov dx, word ptr [ebx + 0x2d6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 FA FF FF: cmp dx, 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 1C: je 0x10037e55
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebx + 2fch]
        xor ecx, ecx
        test edi, edi
        ; Exact mapped bytes 7E 10: jle 0x10037e55
        __asm _emit 0x7e
        __asm _emit 0x10
        mov esi, dword ptr [eax + 8]
        ; Exact mapped bytes 66 39 16: cmp word ptr [esi], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x16
        ; Exact mapped bytes 74 11: je 0x10037e5e
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [eax + 4]
        inc ecx
        cmp ecx, edi
        ; Exact mapped bytes 7C F0: jl 0x10037e45
        __asm _emit 0x7c
        __asm _emit 0xf0
        cmp dword ptr [esp + 18h], -1
        ; Exact mapped bytes 75 4D: jne 0x10037ea9
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes EB 40: jmp 0x10037e9e
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp ecx, -1
        ; Exact mapped bytes 74 F2: je 0x10037e55
        __asm _emit 0x74
        __asm _emit 0xf2
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes EB 40: jmp 0x10037ea9
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 66 8B 93 D8 02 00 00: mov dx, word ptr [ebx + 0x2d8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 FA FF FF: cmp dx, 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 20: je 0x10037e97
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebx + 2fch]
        xor ecx, ecx
        test edi, edi
        ; Exact mapped bytes 7E 14: jle 0x10037e97
        __asm _emit 0x7e
        __asm _emit 0x14
        mov esi, dword ptr [eax + 8]
        ; Exact mapped bytes 66 39 16: cmp word ptr [esi], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x16
        ; Exact mapped bytes 0F 84 1C 02 00 00: je 0x100380ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        inc ecx
        cmp ecx, edi
        ; Exact mapped bytes 7C EC: jl 0x10037e83
        __asm _emit 0x7c
        __asm _emit 0xec
        cmp dword ptr [esp + 18h], -1
        ; Exact mapped bytes 75 0B: jne 0x10037ea9
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebx + 308h]
        dec eax
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [ebx + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x10037f08
        __asm _emit 0x74
        __asm _emit 0x55
        xor ebp, ebp
        mov eax, dword ptr [ebx + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x10037f08
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebx + 0e8h]
        ; Exact mapped bytes E8 C6 BF 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x10037f08
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebx + 0e8h]
        ; Exact mapped bytes E8 57 C6 0C 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0x00
        lea esi, [ebx + 0ech]
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 45 C6 0C 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x10037ee4
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, ebx
        ; Exact mapped bytes E8 88 06 00 00: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 C1 07 00 00: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        inc ebp
        cmp ebp, 3e8h
        ; Exact mapped bytes 7C AD: jl 0x10037eb5
        __asm _emit 0x7c
        __asm _emit 0xad
        mov ecx, dword ptr [ebx + 0e8h]
        push 0
        ; Exact mapped bytes E8 3B C8 0C 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc8
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x10037f83
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [esp + 18h]
        xor ebp, ebp
        test eax, eax
        ; Exact mapped bytes 76 5A: jbe 0x10037f83
        __asm _emit 0x76
        __asm _emit 0x5a
        mov eax, dword ptr [ebx + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x10037f83
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebx + 0e8h]
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 4C BF 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        dec esi
        cmp eax, esi
        ; Exact mapped bytes 7D 3A: jge 0x10037f83
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [ebx + 0e8h]
        ; Exact mapped bytes E8 5C C6 0C 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0x00
        lea esi, [ebx + 0ech]
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 4A C6 0C 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x10037f5f
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, ebx
        ; Exact mapped bytes E8 0D 06 00 00: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 46 07 00 00: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        inc ebp
        cmp ebp, eax
        ; Exact mapped bytes 72 A6: jb 0x10037f29
        __asm _emit 0x72
        __asm _emit 0xa6
        mov ecx, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [ebx + 0e8h]
        ; Exact mapped bytes E8 BD C7 0C 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BB F0 02 00 00 0F: cmp word ptr [ebx + 0x2f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 74 07: je 0x10037fa4
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 FC 38 00 00: call 0x1003b8a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 240h]
        lea ecx, [ebx + 2b4h]
        lea edx, [eax + eax*2]
        mov eax, dword ptr [esp + 244h]
        lea eax, [eax + edx*4]
        mov edx, 4
        mov esi, dword ptr [eax]
        add eax, 4
        mov dword ptr [ecx], esi
        add ecx, 4
        dec edx
        ; Exact mapped bytes 75 F3: jne 0x10037fc3
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [ebx + 308h]
        test eax, eax
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x100380bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 28h]
        cmp esi, -1
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x10038073
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0e8h]
        push 0d0c090h
        push esi
        ; Exact mapped bytes E8 94 C0 0C 00: call 0x10104090
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0ech]
        push 0d0c090h
        push esi
        ; Exact mapped bytes E8 83 C0 0C 00: call 0x10104090
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f0h]
        push 0d0c090h
        push esi
        ; Exact mapped bytes E8 72 C0 0C 00: call 0x10104090
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f4h]
        push 0d0c090h
        push esi
        ; Exact mapped bytes E8 61 C0 0C 00: call 0x10104090
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0f8h]
        push 0d0c090h
        push esi
        ; Exact mapped bytes E8 50 C0 0C 00: call 0x10104090
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0fch]
        push 0d0c090h
        push esi
        ; Exact mapped bytes E8 3F C0 0C 00: call 0x10104090
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 100h]
        push 0d0c090h
        push esi
        ; Exact mapped bytes E8 2E C0 0C 00: call 0x10104090
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 104h]
        push 0d0c090h
        push esi
        ; Exact mapped bytes E8 1D C0 0C 00: call 0x10104090
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov eax, 1
        mov dword ptr [ebx + 2f4h], ecx
        mov ecx, dword ptr [ebx + 30ch]
        test ecx, ecx
        mov dword ptr [ebx + 2a0h], eax
        ; Exact mapped bytes 7E 4B: jle 0x100380dd
        __asm _emit 0x7e
        __asm _emit 0x4b
        mov edx, dword ptr [ebx + 0c0h]
        mov ecx, ebx
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes E8 DE 04 00 00: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 17 06 00 00: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x100380dd
        __asm _emit 0xeb
        __asm _emit 0x32
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 E3 FD FF FF: je 0x10037e97
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes E9 EC FD FF FF: jmp 0x10037ea9
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 101a8538h
        ; Exact mapped bytes EB 0E: jmp 0x100380d2
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebx + 0c0h]
        push 101a8524h
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [ebx + 1d0h]
        ; Exact mapped bytes E8 63 07 FE FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 22ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 228h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
