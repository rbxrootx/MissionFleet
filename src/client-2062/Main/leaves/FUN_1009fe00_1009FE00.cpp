// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009FE00 .. +0x251 bytes.
extern "C" __declspec(naked) void FUN_1009fe00_1009FE00() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, ecx
        lea eax, [edi + 1]
        mov ecx, dword ptr [esi + 9c8h]
        push eax
        mov dword ptr [esi + 0d4h], edi
        ; Exact mapped bytes E8 02 F9 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        mov edx, dword ptr [esi + ecx*4 + 888h]
        mov ecx, dword ptr [esi + 9d0h]
        push edx
        ; Exact mapped bytes E8 E9 F8 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [edi + edi*2]
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [eax + eax*8]
        mov edx, dword ptr [ecx + 160h]
        shl eax, 1
        sub eax, edi
        lea ebx, [esi + eax*4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 7C 01 00 00: mov ax, word ptr [ebx + 0x17c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 5
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1009fe75
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1009fe75
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1009fe75
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1009fe77
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 914h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1009feac
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
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
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 7C 01 00 00: mov ax, word ptr [ebx + 0x17c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 160h]
        add eax, 5
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1009fedd
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1009fedd
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1009fedd
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1009fedf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 918h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1009ff14
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
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
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8B 12 02 00 00: mov cx, word ptr [ebx + 0x212]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [esi + 9e4h]
        ; Exact mapped bytes E8 F7 F7 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9e8h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 1C 02 00 00: mov dx, word ptr [ebx + 0x21c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 E2 F7 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*8 + 13ch]
        mov ecx, dword ptr [esi + 9cch]
        push eax
        ; Exact mapped bytes E8 CF F7 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9f4h]
        lea ecx, [esi + 9d4h]
        mov edx, 4
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009ff68
        __asm _emit 0x75
        __asm _emit 0xf2
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8B 10 02 00 00: mov cx, word ptr [ebx + 0x210]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + ecx*4 + 9d0h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + edi*4 + 118h]
        cmp eax, 10h
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 160h]
        ; Exact mapped bytes 75 5D: jne 0x1009fffe
        __asm _emit 0x75
        __asm _emit 0x5d
        cmp ecx, 1ah
        ; Exact mapped bytes 7E 11: jle 0x1009ffb7
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1009ffb7
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 680h
        ; Exact mapped bytes EB 02: jmp 0x1009ffb9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9f8h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1009ffee
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
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
        mov esi, dword ptr [esi + 9f4h]
        pop edi
        or byte ptr [esi + 24h], 2
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ecx, 17h
        ; Exact mapped bytes 7E 11: jle 0x100a0014
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100a0014
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x100a0016
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esi, dword ptr [esi + 9f8h]
        test eax, eax
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100a004b
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        add esi, 14h
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 4], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 8], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 0ch], edx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
