// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E6C00 .. +0x332 bytes.
extern "C" __declspec(naked) void FUN_100e6c00_100E6C00() {
    __asm {
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        sub esp, 8
        push ebx
        mov ebx, dword ptr [eax + 10474h]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [eax + 1047ch]
        mov edi, dword ptr [esp + 1ch]
        add ecx, ebx
        xor eax, eax
        add ecx, edi
        mov dword ptr [esi + 7ch], ecx
        mov ecx, dword ptr [esp + 20h]
        cmp ecx, eax
        ; Exact mapped bytes 74 15: je 0x100e6c44
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ecx + 5c50h], eax
        ; Exact mapped bytes 74 0D: je 0x100e6c44
        __asm _emit 0x74
        __asm _emit 0x0d
        mov dword ptr [esi + 224h], eax
        mov edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x100e6c4f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edi, 1
        mov dword ptr [esi + 224h], edi
        cmp dword ptr [ecx + 5c54h], eax
        ; Exact mapped bytes 74 06: je 0x100e6c5d
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 224h], eax
        mov ebx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        mov ebp, dword ptr [esi + 88h]
        xor edx, edx
        mov dl, byte ptr [ebx + 9bh]
        mov dword ptr [esi + 1dch], eax
        mov eax, dword ptr [esp + 24h]
        and edx, 0fh
        ; Exact mapped bytes 66 89 96 D8 01 00 00: mov word ptr [esi + 0x1d8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8ch]
        test ecx, ecx
        mov dword ptr [esi + 23ch], ecx
        mov dword ptr [esi + 240h], eax
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 74 4C: je 0x100e6cf1
        __asm _emit 0x74
        __asm _emit 0x4c
        push eax
        lea eax, [esp + 14h]
        push eax
        ; Exact mapped bytes E8 F0 74 00 00: call 0x100ee1a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x100e6ce4
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 66 83 BE B8 01 00 00 0D: cmp word ptr [esi + 0x1b8], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 75 14: jne 0x100e6cd2
        __asm _emit 0x75
        __asm _emit 0x14
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, dword ptr [esi + 23ch]
        ; Exact mapped bytes E8 32 76 00 00: call 0x100ee300
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x100e6ce4
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 28h], 0
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x100e6d6b
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 7E 24: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x24
        mov dword ptr [esi + 28h], 100h
        ; Exact mapped bytes EB 7A: jmp 0x100e6d6b
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 3D EC 55 1C 10: mov edi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [edi + edi*2]
        lea eax, [edi + edx*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, dword ptr [esp + 14h]
        cdq
        idiv ecx
        push eax
        lea eax, [edi + edi*4]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        mov ecx, edx
        mov eax, ebp
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 B8 7E F8 FF: call 0x1006ec00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7e
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100e6d59
        __asm _emit 0x74
        __asm _emit 0x0d
        or byte ptr [esi + 24h], 1
        mov dword ptr [esi + 28h], 100h
        ; Exact mapped bytes EB 0D: jmp 0x100e6d66
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 28h], 0
        mov edi, 1
        mov eax, dword ptr [esp + 1ch]
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 14h
        mov ebp, 2
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 9C 00 00 00: mov ax, word ptr [ebx + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 5ah
        imul edx, eax
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        xor edx, 0aah
        ; Exact mapped bytes 66 39 BE D8 01 00 00: cmp word ptr [esi + 0x1d8], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 1c0h], edx
        ; Exact mapped bytes 75 20: jne 0x100e6ddb
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 66 39 AB 9C 00 00 00: cmp word ptr [ebx + 0x9c], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xab
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 17: ja 0x100e6ddb
        __asm _emit 0x77
        __asm _emit 0x17
        xor ecx, ecx
        mov dword ptr [esi + 244h], edi
        ; Exact mapped bytes 66 8B 8B 9C 00 00 00: mov cx, word ptr [ebx + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 248h], ecx
        ; Exact mapped bytes EB 14: jmp 0x100e6def
        __asm _emit 0xeb
        __asm _emit 0x14
        mov dword ptr [esi + 244h], 0
        mov dword ptr [esi + 248h], 0ffffffffh
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 9E 00 00 00: mov dx, word ptr [ebx + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 1c4h], edx
        ; Exact mapped bytes 0F BE 83 9A 00 00 00: movsx eax, byte ptr [ebx + 0x9a]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x83
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 05 F4 55 1C 10: imul eax, dword ptr [0x101c55f4]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 64h
        mov dword ptr [esi + 0b0h], 0
        mov dword ptr [esi + 1cch], eax
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 A0 00 00 00: mov ax, word ptr [ebx + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [esi + 1c8h], eax
        ; Exact mapped bytes 75 05: jne 0x100e6e37
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 64h
        mov dword ptr [esi + 1c8h], eax
        imul eax, eax
        cdq
        ; Exact mapped bytes F7 3D F8 55 1C 10: idiv dword ptr [0x101c55f8]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 1c4h]
        add ecx, 5
        cdq
        idiv ecx
        xor edx, edx
        mov dl, byte ptr [ebx + 99h]
        mov ecx, eax
        ; Exact mapped bytes 0F BE C2: movsx eax, dl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc2
        mov edx, 64h
        sub edx, eax
        mov eax, 51eb851fh
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov eax, edx
        mov ecx, 2710h
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esi + 1c8h]
        sub ecx, edx
        cmp eax, 1f4h
        mov dword ptr [esi + 1d4h], ecx
        ; Exact mapped bytes 7E 1B: jle 0x100e6eb0
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp eax, 3e8h
        ; Exact mapped bytes 7E 10: jle 0x100e6eac
        __asm _emit 0x7e
        __asm _emit 0x10
        xor edx, edx
        cmp eax, 5dch
        setg dl
        add edx, ebp
        mov eax, edx
        ; Exact mapped bytes EB 06: jmp 0x100e6eb2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100e6eb2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [eax + 0c4h]
        mov dword ptr [esi + 204h], eax
        mov dword ptr [esi + 214h], ecx
        mov ecx, dword ptr [esi + 1c0h]
        xor ecx, 0aah
        mov dword ptr [esi + 208h], ebp
        mov dword ptr [esi + 20ch], 3
        mov dword ptr [esi + 210h], edi
        lea edx, [eax + 4]
        ; Exact mapped bytes 75 03: jne 0x100e6eee
        __asm _emit 0x75
        __asm _emit 0x03
        lea edx, [eax + 8]
        test ecx, ecx
        mov dword ptr [esi + 21ch], edx
        ; Exact mapped bytes 74 1D: je 0x100e6f15
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [esp + 34h]
        add eax, 0ch
        mov dword ptr [esi + 218h], eax
        mov dword ptr [esi + 1b4h], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
        add eax, 14h
        pop edi
        mov dword ptr [esi + 218h], eax
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [esi + 1b4h], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
