// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DB390 .. +0x28E bytes.
extern "C" __declspec(naked) void FUN_100db390_100DB390() {
    __asm {
        sub esp, 0b0h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ebx, 3
        lea edi, [esi + 0ech]
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 62 93 02 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x100db3a7
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        xor edi, edi
        ; Exact mapped bytes 66 39 BE 7E 01 00 00: cmp word ptr [esi + 0x17e], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 D6 00 00 00: jbe 0x100db49f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 188h]
        lea edx, [esp + 40h]
        mov ecx, dword ptr [eax + edi*4]
        add ecx, 0fch
        push ecx
        push 101ac310h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 188h]
        add esp, 0ch
        mov ecx, dword ptr [eax + edi*4]
        lea eax, [esp + 20h]
        mov edx, dword ptr [ecx + 60h]
        xor edx, 0fffffaafh
        shr edx, 4
        and edx, 0ffh
        push edx
        push 101ac30ch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 188h]
        add esp, 0ch
        mov ecx, dword ptr [ecx + edi*4]
        push 0ffffffh
        push 1
        mov eax, dword ptr [ecx + 60h]
        mov ecx, dword ptr [ecx + 0a4h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add eax, ecx
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        lea eax, [eax + eax*4]
        lea ecx, [eax*4 + 10181688h]
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 58 88 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 188h]
        push 0ffffffh
        lea ecx, [esp + 44h]
        mov eax, dword ptr [edx + edi*4]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes E8 39 88 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        push 0ffffffh
        lea edx, [esp + 24h]
        push edi
        push edx
        ; Exact mapped bytes E8 23 88 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        inc edi
        ; Exact mapped bytes 66 8B 86 7E 01 00 00: mov ax, word ptr [esi + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 0F 8C 2A FF FF FF: jl 0x100db3c9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        ; Exact mapped bytes 66 39 BE 80 01 00 00: cmp word ptr [esi + 0x180], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 B7 00 00 00: jbe 0x100db565
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18ch]
        mov edx, dword ptr [ecx + edi*4]
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 6C: mov ax, word ptr [edx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6c
        push eax
        ; Exact mapped bytes E8 99 99 F4 FF: call 0x10024e60
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ebp, eax
        push 3
        lea edx, [esp + 1ch]
        mov cl, byte ptr [ebp + 2]
        and ecx, 1fh
        shl ecx, 4
        add ecx, 10199570h
        push ecx
        push edx
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 45 0C: mov ax, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        lea ecx, [esp + 10h]
        shr eax, 4
        and eax, 0ffh
        push eax
        push 101ac30ch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 0ech]
        add esp, 0ch
        lea edx, [esp + 18h]
        push 0ffffffh
        push 2
        push edx
        ; Exact mapped bytes E8 97 87 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 18ch]
        push 0ffffffh
        mov eax, dword ptr [eax + edi*4]
        mov ecx, dword ptr [eax + 48h]
        add eax, 54h
        shr ecx, 0ah
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        push eax
        ; Exact mapped bytes E8 73 87 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        push 0ffffffh
        lea edx, [esp + 14h]
        push edi
        push edx
        ; Exact mapped bytes E8 5D 87 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        inc edi
        ; Exact mapped bytes 66 8B 86 80 01 00 00: mov ax, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 0F 8C 49 FF FF FF: jl 0x100db4ae
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        ; Exact mapped bytes 66 39 AE 80 01 00 00: cmp word ptr [esi + 0x180], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 1d0h], ebp
        ; Exact mapped bytes 0F 86 92 00 00 00: jbe 0x100db60c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18ch]
        mov edx, dword ptr [ecx + ebp*4]
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 6C: mov ax, word ptr [edx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6c
        push eax
        ; Exact mapped bytes E8 CD 98 F4 FF: call 0x10024e60
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B B8 48 03 00 00: mov di, word ptr [eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EF 05: shr di, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 4F: je 0x100db5fa
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 66 8B 9A 48 03 00 00: mov bx, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x9a
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EB 05: shr bx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B DF: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 75 0D: jne 0x100db5ce
        __asm _emit 0x75
        __asm _emit 0x0d
        mov dl, byte ptr [edx + 2]
        mov bl, byte ptr [eax + 2]
        xor dl, bl
        test dl, 1fh
        ; Exact mapped bytes 74 0C: je 0x100db5da
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ecx + 0b70h]
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x100db5ab
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes EB 20: jmp 0x100db5fa
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 2beh
        ; Exact mapped bytes E8 C0 24 F4 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [esi + 1d0h], 1
        xor eax, eax
        inc ebp
        ; Exact mapped bytes 66 8B 86 80 01 00 00: mov ax, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, eax
        ; Exact mapped bytes 0F 8C 6E FF FF FF: jl 0x100db57a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 7D 07 00 00: call 0x100dbd90
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0b0h
        ret
    }
}
