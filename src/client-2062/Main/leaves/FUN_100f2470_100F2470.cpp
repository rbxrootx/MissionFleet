// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F2470 .. +0x582 bytes.
extern "C" __declspec(naked) void FUN_100f2470_100F2470() {
    __asm {
        sub esp, 80h
        xor eax, eax
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ecx, 0e0h
        lea edi, [ebp + 0b4h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea eax, [ebp + 0c8h]
        mov ecx, 20h
        mov edx, dword ptr [eax - 14h]
        add eax, 1ch
        and edx, 0fffff55fh
        or edx, 540h
        mov dword ptr [eax - 30h], edx
        mov edx, dword ptr [eax - 1ch]
        and edx, 0caa2a8aah
        or edx, 0aa2a8aah
        mov dword ptr [eax - 1ch], edx
        mov edx, dword ptr [eax - 2ch]
        and edx, 0fc0000aah
        or dl, 0aah
        dec ecx
        mov dword ptr [eax - 2ch], edx
        mov byte ptr [eax - 18h], 0aah
        ; Exact mapped bytes 75 C3: jne 0x100f2496
        __asm _emit 0x75
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        xor esi, esi
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 04 00 00: je 0x100f29d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi*8]
        xor edi, edi
        sub eax, esi
        mov edx, dword ptr [ebp + eax*4 + 0b4h]
        lea ecx, [ebp + eax*4]
        mov eax, edx
        xor eax, esi
        and eax, 1fh
        xor eax, edx
        mov dword ptr [ecx + 0b4h], eax
        mov edx, dword ptr [ebp + esi*4 + 83ch]
        add edx, 50h
        and eax, 0fffff01fh
        mov edx, dword ptr [edx + 10h]
        and edx, 7f0h
        shl edx, 1
        or edx, eax
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        add eax, 50h
        and edx, 0ffc0ffffh
        mov eax, dword ptr [eax + 10h]
        and eax, 0fh
        shl eax, 10h
        or eax, edx
        mov dword ptr [ecx + 0b4h], eax
        mov edx, dword ptr [ebp + esi*4 + 83ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 A0 00 00 00: mov ax, word ptr [edx + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        mov eax, 66666667h
        xor edx, 0aah
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        xor dl, 0aah
        mov byte ptr [ecx + 0cch], dl
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        add eax, 50h
        ; Exact mapped bytes 66 8B 50 08: mov dx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [ecx + 0c8h]
        and edx, 3ffh
        and eax, 0fffffc00h
        or edx, eax
        mov dword ptr [ecx + 0c8h], edx
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        add eax, 50h
        and edx, 0fff003ffh
        ; Exact mapped bytes 66 8B 40 0A: mov ax, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0a
        and eax, 3ffh
        shl eax, 0ah
        or eax, edx
        mov dword ptr [ecx + 0c8h], eax
        mov edx, dword ptr [ebp + esi*4 + 83ch]
        add edx, 50h
        and eax, 0c00fffffh
        ; Exact mapped bytes 66 8B 52 0C: mov dx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0c
        and edx, 3ffh
        shl edx, 14h
        or edx, eax
        mov dword ptr [ecx + 0c8h], edx
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        mov edx, dword ptr [ecx + 0b8h]
        add eax, 50h
        ; Exact mapped bytes 66 8B 78 2A: mov di, word ptr [eax + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x2a
        xor edi, edx
        and edi, 3ffffffh
        xor edi, edx
        mov dword ptr [ecx + 0b8h], edi
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        ; Exact mapped bytes 66 8B 50 6C: mov dx, word ptr [eax + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x6c
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 BC 00 00 00: mov word ptr [ecx + 0xbc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        ; Exact mapped bytes 66 8B 50 70: mov dx, word ptr [eax + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x70
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 BE 00 00 00: mov word ptr [ecx + 0xbe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        ; Exact mapped bytes 66 8B 50 6E: mov dx, word ptr [eax + 0x6e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x6e
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 66 89 91 C0 00 00 00: mov word ptr [ecx + 0xc0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 49: jne 0x100f26a8
        __asm _emit 0x75
        __asm _emit 0x49
        mov edi, dword ptr [ebp + 0b4h]
        and edi, 0ffff0fffh
        mov dword ptr [ebp + 0b4h], edi
        ; Exact mapped bytes 66 89 B5 C2 00 00 00: mov word ptr [ebp + 0xc2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 83ch]
        ; Exact mapped bytes 66 8B 48 64: mov cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x64
        ; Exact mapped bytes 66 81 F1 AA 00: xor cx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8D C4 00 00 00: mov word ptr [ebp + 0xc4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 83ch]
        ; Exact mapped bytes 66 8B 42 64: mov ax, word ptr [edx + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x64
        ; Exact mapped bytes 66 35 AA 00: xor ax, 0xaa
        __asm _emit 0x66
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 C6 00 00 00: mov word ptr [ebp + 0xc6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2E 03 00 00: jmp 0x100f29d6
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 1
        ; Exact mapped bytes 7C 5D: jl 0x100f270a
        __asm _emit 0x7c
        __asm _emit 0x5d
        cmp esi, 4
        ; Exact mapped bytes 7F 58: jg 0x100f270a
        __asm _emit 0x7f
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0b4h]
        and dh, 1fh
        or dh, 10h
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        ; Exact mapped bytes 66 8B 50 66: mov dx, word ptr [eax + 0x66]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x66
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 C2 00 00 00: mov word ptr [ecx + 0xc2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        ; Exact mapped bytes 66 8B 50 68: mov dx, word ptr [eax + 0x68]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x68
        lea eax, [esi + 7]
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        lea edi, [eax*8]
        sub edi, eax
        ; Exact mapped bytes 66 89 54 BD 00: mov word ptr [ebp + edi*4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0xbd
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 81 C6 00 00 00 00 00: mov word ptr [ecx + 0xc6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CC 02 00 00: jmp 0x100f29d6
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        mov eax, dword ptr [eax + 0e4h]
        mov edx, eax
        and edx, 400h
        ; Exact mapped bytes 0F 85 F8 01 00 00: jne 0x100f291d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ah, 78h
        ; Exact mapped bytes 0F 85 EF 01 00 00: jne 0x100f291d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 80000h
        ; Exact mapped bytes 74 6B: je 0x100f27a0
        __asm _emit 0x74
        __asm _emit 0x6b
        mov edx, dword ptr [ecx + 0b4h]
        and dh, 4fh
        or dh, 40h
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        ; Exact mapped bytes 66 8B 50 64: mov dx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 C2 00 00 00: mov word ptr [ecx + 0xc2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        test dword ptr [eax + 0e4h], 20000h
        ; Exact mapped bytes 74 0F: je 0x100f2780
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 40 64: mov ax, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x64
        ; Exact mapped bytes 66 35 AA 00: xor ax, 0xaa
        __asm _emit 0x66
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 C2 00 00 00: mov word ptr [ecx + 0xc2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        test dword ptr [eax + 0e4h], 10000h
        ; Exact mapped bytes 0F 84 3F 02 00 00: je 0x100f29d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 64: mov dx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes E9 2A 02 00 00: jmp 0x100f29ca
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 0c000000h
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x100f2843
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 70000h
        ; Exact mapped bytes 0F 84 20 02 00 00: je 0x100f29d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0b4h]
        and ah, 3fh
        or ah, 30h
        mov dword ptr [ecx + 0b4h], eax
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        test dword ptr [eax + 0e4h], 20000h
        ; Exact mapped bytes 74 10: je 0x100f27eb
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 50 64: mov dx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 C2 00 00 00: mov word ptr [ecx + 0xc2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        test dword ptr [eax + 0e4h], 40000h
        ; Exact mapped bytes 74 1A: je 0x100f2818
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 8B 50 64: mov dx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x64
        lea eax, [esi + 7]
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        lea edi, [eax*8]
        sub edi, eax
        ; Exact mapped bytes 66 89 54 BD 00: mov word ptr [ebp + edi*4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0xbd
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        test dword ptr [eax + 0e4h], 10000h
        ; Exact mapped bytes 0F 84 A7 01 00 00: je 0x100f29d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 40 64: mov ax, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x64
        ; Exact mapped bytes 66 35 AA 00: xor ax, 0xaa
        __asm _emit 0x66
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 C6 00 00 00: mov word ptr [ecx + 0xc6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 93 01 00 00: jmp 0x100f29d6
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0b4h]
        and dh, 2fh
        or dh, 20h
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        ; Exact mapped bytes 66 8B 50 72: mov dx, word ptr [eax + 0x72]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x72
        lea eax, [esi + 7]
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 C2 00 00 00: mov word ptr [ecx + 0xc2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax*8]
        sub edx, eax
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        lea edi, [ebp + edx*4]
        ; Exact mapped bytes 66 8B 50 72: mov dx, word ptr [eax + 0x72]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x72
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 17: mov word ptr [edi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x17
        ; Exact mapped bytes 66 C7 81 C6 00 00 00 00 00: mov word ptr [ecx + 0xc6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 72: mov dx, word ptr [eax + 0x72]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x72
        mov eax, dword ptr [eax + 438h]
        xor edx, 0aah
        push edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 C2 00 00 00: mov dx, word ptr [ecx + 0xc2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 6ch]
        push edx
        push ecx
        lea edx, [esp + 1ch]
        push 101ac6f0h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 14h
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 48 72: mov cx, word ptr [eax + 0x72]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x72
        mov eax, dword ptr [eax + 438h]
        ; Exact mapped bytes 66 8B 17: mov dx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x17
        xor ecx, 0aah
        push ecx
        mov ecx, dword ptr [eax + 6ch]
        push edx
        push ecx
        lea edx, [esp + 1ch]
        push 101ac6cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 14h
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x100f29d6
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x100f2935
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ecx + 0b4h]
        and dh, 0bfh
        or dh, 0b0h
        mov dword ptr [ecx + 0b4h], edx
        ; Exact mapped bytes EB 53: jmp 0x100f2988
        __asm _emit 0xeb
        __asm _emit 0x53
        test ah, 8
        ; Exact mapped bytes 74 0E: je 0x100f2948
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 0b4h]
        and ah, 0cfh
        or ah, 0c0h
        ; Exact mapped bytes EB 3A: jmp 0x100f2982
        __asm _emit 0xeb
        __asm _emit 0x3a
        test ah, 10h
        ; Exact mapped bytes 74 14: je 0x100f2961
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ecx + 0b4h]
        and dh, 0dfh
        or dh, 0d0h
        mov dword ptr [ecx + 0b4h], edx
        ; Exact mapped bytes EB 27: jmp 0x100f2988
        __asm _emit 0xeb
        __asm _emit 0x27
        test ah, 20h
        ; Exact mapped bytes 74 0E: je 0x100f2974
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 0b4h]
        and ah, 0efh
        or ah, 0e0h
        ; Exact mapped bytes EB 0E: jmp 0x100f2982
        __asm _emit 0xeb
        __asm _emit 0x0e
        test ah, 40h
        ; Exact mapped bytes 74 0F: je 0x100f2988
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx + 0b4h]
        or ah, 0f0h
        mov dword ptr [ecx + 0b4h], eax
        mov edx, dword ptr [ebp + esi*4 + 83ch]
        ; Exact mapped bytes 66 8B 42 76: mov ax, word ptr [edx + 0x76]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x76
        ; Exact mapped bytes 66 35 AA 00: xor ax, 0xaa
        __asm _emit 0x66
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 C2 00 00 00: mov word ptr [ecx + 0xc2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + esi*4 + 83ch]
        lea eax, [esi + 7]
        ; Exact mapped bytes 66 8B 52 74: mov dx, word ptr [edx + 0x74]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x74
        lea edi, [eax*8]
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        sub edi, eax
        ; Exact mapped bytes 66 89 54 BD 00: mov word ptr [ebp + edi*4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0xbd
        __asm _emit 0x00
        mov eax, dword ptr [ebp + esi*4 + 83ch]
        ; Exact mapped bytes 66 8B 50 78: mov dx, word ptr [eax + 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x78
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 C6 00 00 00: mov word ptr [ecx + 0xc6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        cmp esi, 20h
        ; Exact mapped bytes 0F 8C FB FA FF FF: jl 0x100f24db
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, ebp
        ; Exact mapped bytes E8 B9 F4 FF FF: call 0x100f1ea0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 80h
        ret
    }
}
