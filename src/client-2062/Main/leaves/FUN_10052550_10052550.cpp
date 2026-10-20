// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10052550 .. +0x471 bytes.
extern "C" __declspec(naked) void FUN_10052550_10052550() {
    __asm {
        push -1
        push 1016eca6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 58h
        mov eax, dword ptr [esp + 6ch]
        push ebx
        mov ebx, ecx
        push ebp
        mov edx, dword ptr [eax]
        push esi
        lea esi, [ebx + 0a6ch]
        push edi
        mov ecx, esi
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes D9 06: fld dword ptr [esi]
        __asm _emit 0xd9
        __asm _emit 0x06
        ; Exact mapped bytes D8 0D 1C 52 17 10: fmul dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 09 A2 11 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 11ch]
        mov dword ptr [ecx + 64h], eax
        ; Exact mapped bytes D9 06: fld dword ptr [esi]
        __asm _emit 0xd9
        __asm _emit 0x06
        ; Exact mapped bytes D8 0D 1C 52 17 10: fmul dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 F3 A1 11 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa1
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 120h]
        mov dword ptr [ecx + 64h], eax
        mov ecx, dword ptr [ebx + 124h]
        mov eax, dword ptr [ebx + 0a70h]
        mov dword ptr [ecx + 64h], eax
        mov ecx, dword ptr [ebx + 128h]
        mov eax, dword ptr [ebx + 0a70h]
        mov dword ptr [ecx + 64h], eax
        mov ecx, dword ptr [ebx + 44ch]
        ; Exact mapped bytes E8 8B 95 FD FF: call 0x1002bb70
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edi, dword ptr [ebx + 0c8h]
        mov esi, dword ptr [esp + 80h]
        mov ecx, 19h
        xor eax, eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        xor ecx, ecx
        mov cl, al
        ; Exact mapped bytes 66 89 83 AA 09 00 00: mov word ptr [ebx + 0x9aa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [esp + 28h], 0ffffffach
        ; Exact mapped bytes 66 8B 14 4D B6 92 19 10: mov dx, word ptr [ecx*2 + 0x101992b6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x4d
        __asm _emit 0xb6
        __asm _emit 0x92
        __asm _emit 0x19
        __asm _emit 0x10
        mov ecx, dword ptr [ebx + 46ch]
        dec eax
        ; Exact mapped bytes 66 89 93 D8 00 00 00: mov word ptr [ebx + 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [ebx + 470h]
        add esi, 4
        mov dword ptr [esp + 2ch], 0fffffeb5h
        mov dword ptr [ecx + 50h], eax
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 30h], 15fh
        mov dword ptr [esp + 34h], 0ffffff4ch
        mov dword ptr [esp + 38h], 30fh
        mov dword ptr [esp + 3ch], 0ffffffddh
        mov dword ptr [esp + 40h], 1b0h
        mov dword ptr [esp + 44h], 91h
        mov dword ptr [esp + 48h], 51h
        mov dword ptr [esp + 4ch], 145h
        mov dword ptr [esp + 50h], 0fffffea1h
        mov dword ptr [esp + 54h], 0b4h
        mov dword ptr [esp + 58h], 0fffffceeh
        mov dword ptr [esp + 5ch], 1eh
        mov dword ptr [esp + 60h], 0fffffe4dh
        mov dword ptr [esp + 64h], 0ffffff6ah
        mov dword ptr [esp + 7ch], 0
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 1ch], esi
        mov eax, dword ptr [esp + 1ch]
        xor edi, edi
        mov edx, dword ptr [eax]
        mov dword ptr [esp + 10h], edx
        xor eax, eax
        mov dword ptr [esp + 14h], eax
        test dword ptr [esp + 10h], 80000000h
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x100527a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 0cch]
        mov esi, dword ptr [ecx - 4]
        imul edx, edi
        add edx, eax
        mov eax, dword ptr [ebx + 0c4h]
        push 15ch
        lea eax, [eax + edx*8]
        mov edx, dword ptr [eax]
        add esi, edx
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx]
        lea ebp, [edx + eax + 258h]
        ; Exact mapped bytes E8 88 A0 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 70h], 0
        ; Exact mapped bytes 74 19: je 0x10052744
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [esp + 7ch]
        push 40h
        push 0
        push 0
        push ebp
        push esi
        push ecx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 E0 C3 FB FF: call 0x1000eb20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x10052746
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov edx, dword ptr [esp + 14h]
        lea eax, [edi + edi*4]
        mov ecx, dword ptr [esi + 40h]
        mov dword ptr [esp + 70h], 0ffffffffh
        shl eax, 2
        ; Exact mapped bytes 66 03 43 26: add ax, word ptr [ebx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x43
        __asm _emit 0x26
        sub eax, edx
        add eax, 582h
        test ecx, ecx
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x10052774
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 2C C8 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10052781
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 7F C7 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 28 E0 FB FF: call 0x100107b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [ebx + 44ch]
        push esi
        ; Exact mapped bytes E8 35 93 FD FF: call 0x1002bad0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 14h]
        mov ebp, dword ptr [esp + 10h]
        shl ebp, 1
        inc eax
        mov dword ptr [esp + 10h], ebp
        cmp eax, 5
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C 1E FF FF FF: jl 0x100526d9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        cmp edi, 5
        ; Exact mapped bytes 0F 8C 0E FF FF FF: jl 0x100526d3
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 7ch]
        mov edi, dword ptr [esp + 1ch]
        inc eax
        add edi, 4
        add ecx, 8
        cmp eax, 8
        mov dword ptr [esp + 7ch], eax
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [esp + 20h], ecx
        ; Exact mapped bytes 0F 8C DE FE FF FF: jl 0x100526c7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 84h]
        test esi, esi
        ; Exact mapped bytes 0F 84 B4 01 00 00: je 0x100529ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 80h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 45 02: mov ax, word ptr [ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x02
        lea eax, [eax + eax*2]
        shl eax, 5
        push eax
        ; Exact mapped bytes E8 8F 9F 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x9f
        __asm _emit 0x11
        __asm _emit 0x00
        xor ecx, ecx
        mov edi, eax
        ; Exact mapped bytes 66 8B 4D 02: mov cx, word ptr [ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x02
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 7ch], 0
        lea ecx, [ecx + ecx*2]
        shl ecx, 5
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes 66 83 7D 02 00: cmp word ptr [ebp + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 5C 01 00 00: jbe 0x100529a3
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 30h]
        mov dword ptr [esp + 84h], ecx
        test byte ptr [ecx], 7fh
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x1005297b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx + 16h]
        mov ecx, dword ptr [ebx + 0d0h]
        mov byte ptr [esp + 20h], al
        mov edx, dword ptr [ebx + 0c8h]
        mov eax, dword ptr [esp + 20h]
        push 15ch
        and eax, 0ffh
        mov esi, eax
        and eax, 0fh
        shr esi, 4
        imul ecx, esi
        mov ebp, eax
        add ecx, ebp
        mov dword ptr [edx + ecx*4], 40000000h
        mov eax, dword ptr [ebx + 0cch]
        imul eax, esi
        mov ecx, dword ptr [ebx + 0c4h]
        add eax, ebp
        mov edx, dword ptr [ecx + eax*8]
        mov edi, dword ptr [ecx + eax*8 + 4]
        lea eax, [ecx + eax*8]
        mov dword ptr [esp + 18h], edx
        add edi, 258h
        ; Exact mapped bytes E8 E5 9E 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov dword ptr [esp + 70h], 1
        ; Exact mapped bytes 74 1A: je 0x100528e8
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esp + 14h]
        push 40h
        push 0
        push 0
        push edi
        push ecx
        push 8
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 3C C2 FB FF: call 0x1000eb20
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100528ea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        lea edx, [esi + esi*4]
        mov dword ptr [ebx + 448h], edi
        mov ecx, dword ptr [edi + 40h]
        mov dword ptr [esp + 70h], 0ffffffffh
        shl edx, 2
        ; Exact mapped bytes 66 03 53 26: add dx, word ptr [ebx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x53
        __asm _emit 0x26
        sub edx, ebp
        add edx, 7dah
        test ecx, ecx
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1005291b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 85 C6 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10052928
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D8 C5 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 84h]
        push ebp
        push esi
        mov dl, byte ptr [eax]
        lea ecx, [eax - 30h]
        push ecx
        mov ecx, dword ptr [esp + 8ch]
        xor eax, eax
        and edx, 7fh
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        mov ecx, dword ptr [ebx + 448h]
        push edx
        push eax
        ; Exact mapped bytes E8 2D CB FB FF: call 0x1000f480
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 448h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [ebx + 448h]
        mov ecx, dword ptr [ebx + 44ch]
        push eax
        ; Exact mapped bytes E8 60 91 FD FF: call 0x1002bad0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 84h]
        mov eax, dword ptr [esp + 1ch]
        mov edi, dword ptr [esp + 80h]
        mov edx, dword ptr [esp + 7ch]
        xor esi, esi
        inc edx
        ; Exact mapped bytes 66 8B 77 02: mov si, word ptr [edi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x77
        __asm _emit 0x02
        add ecx, 60h
        cmp edx, esi
        mov dword ptr [esp + 7ch], edx
        mov dword ptr [esp + 84h], ecx
        ; Exact mapped bytes 0F 8C AE FE FF FF: jl 0x10052851
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 DB 9D 11 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x9d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esp + 68h]
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
        add esp, 64h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
