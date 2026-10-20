// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10002220 .. +0xC1F bytes.
extern "C" __declspec(naked) void FUN_10002220_10002220() {
    __asm {
        sub esp, 24h
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 0c8h]
        test eax, eax
        ; Exact mapped bytes 0F 84 FD 0B 00 00: je 0x10002e37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax*8]
        sub ecx, eax
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 54 A5 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa5
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp + 18h], eax
        mov eax, dword ptr [ebp + 10h]
        add esp, 4
        mov ecx, dword ptr [eax + 0bch]
        test ecx, ecx
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes 0F 84 97 0B 00 00: je 0x10002e00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 85 93 0B 00 00: jne 0x10002e04
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [esp + 1ch], edx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 24h], edx
        mov dword ptr [esp + 28h], edx
        mov dword ptr [esp + 2ch], edx
        test ecx, ecx
        ; Exact mapped bytes 66 89 54 24 30: mov word ptr [esp + 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 0F 86 99 0B 00 00: jbe 0x10002e37
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x99
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [edx*8]
        mov eax, dword ptr [ebp + 14h]
        sub esi, edx
        shl esi, 5
        sub esi, edx
        shl esi, 2
        lea ecx, [esi + eax]
        mov eax, dword ptr [esi + eax + 10h]
        and eax, 0fh
        lea edi, [eax + eax*4]
        lea edi, [eax + edi*8]
        lea eax, [eax + edi*2]
        mov edi, dword ptr [ecx + 54h]
        shr edi, 1
        add eax, edi
        lea edi, [edx*8]
        imul eax, eax, 0dch
        sub edi, edx
        mov eax, dword ptr [eax + 101816cch]
        mov dword ptr [ecx + 94h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp + 14h]
        shl edi, 2
        lea eax, [edi + ecx]
        mov ecx, dword ptr [esi + edx + 10h]
        and ecx, 7f0h
        mov edx, dword ptr [eax]
        shl ecx, 1
        and edx, 0fffff01fh
        or ecx, edx
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        add eax, edi
        mov edx, dword ptr [esi + ecx + 10h]
        mov ecx, dword ptr [eax]
        shr edx, 0ch
        and edx, 0fh
        and ecx, 0ffffffe0h
        or edx, ecx
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [edi + edx]
        mov edx, dword ptr [esi + ecx + 10h]
        mov ecx, dword ptr [eax]
        and edx, 0fh
        shl edx, 10h
        and ecx, 0ffc0ffffh
        or edx, ecx
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [edi + edx + 14h]
        ; Exact mapped bytes 66 8B 54 0E 08: mov dx, word ptr [esi + ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x08
        mov ecx, dword ptr [eax]
        and edx, 3ffh
        and ecx, 0fffffc00h
        or edx, ecx
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [edi + edx + 14h]
        ; Exact mapped bytes 66 8B 54 0E 0A: mov dx, word ptr [esi + ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x0a
        mov ecx, dword ptr [eax]
        and edx, 3ffh
        shl edx, 0ah
        and ecx, 0fff003ffh
        or edx, ecx
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [edi + edx + 14h]
        ; Exact mapped bytes 66 8B 54 0E 0C: mov dx, word ptr [esi + ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x0c
        mov ecx, dword ptr [eax]
        and edx, 3ffh
        shl edx, 14h
        and ecx, 0c00fffffh
        or edx, ecx
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edi + edx + 14h]
        lea ecx, [edi + edx]
        mov edx, eax
        mov ebx, eax
        shr edx, 14h
        shr ebx, 0ah
        and edx, 3ffh
        and ebx, 3ffh
        add edx, ebx
        and eax, 3ffh
        add edx, eax
        mov eax, dword ptr [ecx + 4]
        xor edx, eax
        and edx, 3ffffffh
        xor edx, eax
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 18h]
        lea ecx, [edi + eax]
        mov eax, dword ptr [edi + eax]
        and eax, 3f0000h
        ; Exact mapped bytes 75 06: jne 0x100023fd
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ecx + 18h], 64h
        ; Exact mapped bytes EB 32: jmp 0x1000242f
        __asm _emit 0xeb
        __asm _emit 0x32
        cmp eax, 10000h
        ; Exact mapped bytes 75 06: jne 0x1000240a
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ecx + 18h], 6ah
        ; Exact mapped bytes EB 25: jmp 0x1000242f
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp eax, 20000h
        ; Exact mapped bytes 75 06: jne 0x10002417
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ecx + 18h], 6eh
        ; Exact mapped bytes EB 18: jmp 0x1000242f
        __asm _emit 0xeb
        __asm _emit 0x18
        cmp eax, 30000h
        ; Exact mapped bytes 75 06: jne 0x10002424
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ecx + 18h], 64h
        ; Exact mapped bytes EB 0B: jmp 0x1000242f
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp eax, 40000h
        ; Exact mapped bytes 75 04: jne 0x1000242f
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ecx + 18h], 71h
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 8B 44 0E 1C: mov ax, word ptr [esi + ecx + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x1c
        ; Exact mapped bytes 66 89 44 17 08: mov word ptr [edi + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x17
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 8B 44 0E 20: mov ax, word ptr [esi + ecx + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x20
        ; Exact mapped bytes 66 89 44 17 0A: mov word ptr [edi + edx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x17
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 8B 44 0E 1E: mov ax, word ptr [esi + ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x1e
        ; Exact mapped bytes 66 89 44 17 0C: mov word ptr [edi + edx + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x17
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 14h]
        add ecx, esi
        mov eax, dword ptr [ecx + 94h]
        test eax, 10000000h
        ; Exact mapped bytes 0F 85 6D 08 00 00: jne 0x10002ce2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 10h]
        test dh, 0f0h
        ; Exact mapped bytes 0F 84 61 08 00 00: je 0x10002ce2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 3ffh
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x100025e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edi + edx]
        lea eax, [edi + edx]
        and ch, 1fh
        or ch, 10h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 8B 44 16 16: mov ax, word ptr [esi + edx + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x16
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 1eh]
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 44 24 10: fadd dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x100024f9
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x10002502
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 A4 A2 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa2
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 0E: mov word ptr [edi + ecx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 8B 44 16 18: mov ax, word ptr [esi + edx + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x18
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 20h]
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 44 24 10: fadd dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x10002566
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x1000256f
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 37 A2 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa2
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 10: mov word ptr [edi + ecx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [esp + 22h]
        ; Exact mapped bytes 66 8B 74 16 1A: mov si, word ptr [esi + edx + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0x1a
        and eax, 0ffffh
        and esi, 0ffffh
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 44 24 10: fadd dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 0A: jne 0x100025d7
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 0fffah
        ; Exact mapped bytes E9 FF 07 00 00: jmp 0x10002dd6
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E9 F1 07 00 00: jmp 0x10002dd1
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 2ffffc00h
        ; Exact mapped bytes 0F 84 F3 07 00 00: je 0x10002dde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 0c000000h
        ; Exact mapped bytes 0F 85 CF 05 00 00: jne 0x10002bc5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 80000h
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x10002745
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edi + edx]
        lea eax, [edi + edx]
        and ch, 4fh
        or ch, 40h
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 1ch]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 44 16 14: mov ax, word ptr [esi + edx + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x14
        and eax, 0ffffh
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x10002677
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x10002680
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 26 A1 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa1
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 17 0E: mov word ptr [edi + edx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x17
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 14h]
        add eax, esi
        test dword ptr [eax + 94h], 20000h
        ; Exact mapped bytes 74 4E: je 0x100026e7
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 66 8B 40 14: mov ax, word ptr [eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x100026d6
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x100026df
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 C7 A0 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 10: mov word ptr [edi + ecx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 14h]
        add esi, edx
        test dword ptr [esi + 94h], 40000h
        ; Exact mapped bytes 0F 84 E2 06 00 00: je 0x10002dde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 14: mov ax, word ptr [esi + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 0A: jne 0x1000273c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 0fffah
        ; Exact mapped bytes E9 9A 06 00 00: jmp 0x10002dd6
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E9 8C 06 00 00: jmp 0x10002dd1
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 3000000h
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x10002836
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edi + edx]
        lea eax, [edi + edx]
        and ch, 5fh
        or ch, 50h
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 1ch]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 44 16 14: mov ax, word ptr [esi + edx + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x14
        and eax, 0ffffh
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x100027c6
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x100027cf
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 D7 9F 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 17 0E: mov word ptr [edi + edx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x17
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 14h]
        add esi, eax
        test dword ptr [esi + 94h], 10000h
        ; Exact mapped bytes 0F 84 F2 05 00 00: je 0x10002dde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 76 14: mov si, word ptr [esi + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x14
        and esi, 0ffffh
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 0A: jne 0x1000282d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 0fffah
        ; Exact mapped bytes E9 A9 05 00 00: jmp 0x10002dd6
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E9 9B 05 00 00: jmp 0x10002dd1
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 20000000h
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x100028d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edi + edx]
        lea eax, [edi + edx]
        and ch, 6fh
        or ch, 60h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 8B 74 16 14: mov si, word ptr [esi + edx + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0x14
        and eax, 0ffffh
        and esi, 0ffffh
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 14: fmul dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 12: jne 0x100028ba
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 18h]
        mov eax, 0fffah
        ; Exact mapped bytes 66 89 44 0F 0E: mov word ptr [edi + ecx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x0e
        ; Exact mapped bytes E9 24 05 00 00: jmp 0x10002dde
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 E3 9E 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 0E: mov word ptr [edi + ecx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x0e
        ; Exact mapped bytes E9 0E 05 00 00: jmp 0x10002dde
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test ah, 7ch
        ; Exact mapped bytes 0F 84 CF 01 00 00: je 0x10002aa8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ah, 4
        ; Exact mapped bytes 74 11: je 0x100028ef
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edi + edx]
        lea eax, [edi + edx]
        and ch, 0bfh
        or ch, 0b0h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [esi + edx + 94h]
        test ah, 8
        ; Exact mapped bytes 74 0F: je 0x1000290d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 18h]
        add eax, edi
        mov ecx, dword ptr [eax]
        and ch, 0cfh
        or ch, 0c0h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [esi + edx + 94h]
        test ah, 20h
        ; Exact mapped bytes 74 0F: je 0x1000292b
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 18h]
        add eax, edi
        mov ecx, dword ptr [eax]
        and ch, 0dfh
        or ch, 0d0h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [esi + edx + 94h]
        test ah, 10h
        ; Exact mapped bytes 74 0F: je 0x10002949
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 18h]
        add eax, edi
        mov ecx, dword ptr [eax]
        and ch, 0efh
        or ch, 0e0h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [esi + edx + 94h]
        test ah, 40h
        ; Exact mapped bytes 74 0C: je 0x10002964
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 18h]
        add eax, edi
        mov ecx, dword ptr [eax]
        or ch, 0f0h
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [esp + 2eh]
        and edx, 0ffffh
        ; Exact mapped bytes 66 8B 44 0E 26: mov ax, word ptr [esi + ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x26
        mov dword ptr [esp + 10h], edx
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 14: fmul dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x100029c1
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x100029ca
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 DC 9D 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 0E: mov word ptr [edi + ecx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 8B 44 16 28: mov ax, word ptr [esi + edx + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x28
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 30h]
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 14: fmul dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x10002a2e
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x10002a37
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 6F 9D 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 10: mov word ptr [edi + ecx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 8B 74 16 24: mov si, word ptr [esi + edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0x24
        and eax, 0ffffh
        and esi, 0ffffh
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 14: fmul dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 0A: jne 0x10002a9f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 0fffah
        ; Exact mapped bytes E9 37 03 00 00: jmp 0x10002dd6
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E9 29 03 00 00: jmp 0x10002dd1
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edi + edx]
        lea eax, [edi + edx]
        and ch, 3fh
        or ch, 30h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [esi + edx + 94h]
        lea eax, [esi + edx]
        test ecx, 10000h
        ; Exact mapped bytes 74 69: je 0x10002b37
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 66 8B 40 14: mov ax, word ptr [eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 14: fmul dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x10002b26
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x10002b2f
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 77 9C 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x9c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 0E: mov word ptr [edi + ecx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 14h]
        add esi, edx
        test dword ptr [esi + 94h], 20000h
        ; Exact mapped bytes 0F 84 92 02 00 00: je 0x10002dde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 14: mov ax, word ptr [esi + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 14: fmul dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 12: jne 0x10002baf
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 18h]
        mov eax, 0fffah
        ; Exact mapped bytes 66 89 44 0F 10: mov word ptr [edi + ecx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x10
        ; Exact mapped bytes E9 2F 02 00 00: jmp 0x10002dde
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 EE 9B 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 10: mov word ptr [edi + ecx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x10
        ; Exact mapped bytes E9 19 02 00 00: jmp 0x10002dde
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edi + edx]
        lea eax, [edi + edx]
        and ch, 2fh
        or ch, 20h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [esi + edx + 94h]
        lea eax, [esi + edx]
        test ecx, 4000000h
        ; Exact mapped bytes 74 69: je 0x10002c54
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 66 8B 40 22: mov ax, word ptr [eax + 0x22]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x22
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 2ah]
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 14: fmul dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x10002c43
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x10002c4c
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 5A 9B 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 0E: mov word ptr [edi + ecx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 14h]
        add esi, edx
        test dword ptr [esi + 94h], 8000000h
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x10002dde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 22: mov ax, word ptr [esi + 0x22]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x22
        and eax, 0ffffh
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 2ah]
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        and eax, 0ffffh
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 14: fmul dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 12: jne 0x10002ccc
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 18h]
        mov eax, 0fffah
        ; Exact mapped bytes 66 89 44 0F 10: mov word ptr [edi + ecx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x10
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x10002dde
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 D1 9A 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9a
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 10: mov word ptr [edi + ecx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x10
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x10002dde
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edi + edx]
        lea eax, [edi + edx]
        and ch, 0fh
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [esi + eax + 10h]
        shr ecx, 4
        and ecx, 0ffh
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 38 01 00 00: call 0x10002e40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        mov dl, al
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 54 07 0E: mov word ptr [edi + eax + 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x0e
        mov edx, dword ptr [esp + 1ch]
        and edx, 0ffffh
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 44 0E 14: mov ax, word ptr [esi + ecx + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x14
        and eax, 0ffffh
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x10002d7a
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x10002d83
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 23 9A 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9a
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 10: mov word ptr [edi + ecx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 8B 74 16 14: mov si, word ptr [esi + edx + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0x14
        and esi, 0ffffh
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 44 24 14: fadd dword ptr [esp + 0x14]
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 1D 18 52 17 10: fcomp dword ptr [0x10175218]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 07: jne 0x10002dcd
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 09: jmp 0x10002dd6
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 D0 99 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 89 44 0F 12: mov word ptr [edi + ecx + 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 10h]
        mov edx, dword ptr [esp + 18h]
        inc edx
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [esp + 18h], edx
        cmp edx, ecx
        ; Exact mapped bytes 0F 82 A6 F4 FF FF: jb 0x1000229e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa6
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ret
        test ecx, ecx
        ; Exact mapped bytes 74 33: je 0x10002e37
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [eax + 0c8h]
        xor ebx, ebx
        test ecx, ecx
        ; Exact mapped bytes 76 27: jbe 0x10002e37
        __asm _emit 0x76
        __asm _emit 0x27
        xor edx, edx
        mov esi, dword ptr [eax + 0c0h]
        mov eax, dword ptr [ebp + 18h]
        mov edi, edx
        add esi, edx
        add edi, eax
        mov ecx, 7
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 10h]
        inc ebx
        add edx, 1ch
        cmp ebx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes 72 DB: jb 0x10002e12
        __asm _emit 0x72
        __asm _emit 0xdb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ret
    }
}
