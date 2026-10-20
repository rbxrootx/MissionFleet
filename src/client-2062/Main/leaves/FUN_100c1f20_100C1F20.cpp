// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C1F20 .. +0x2E5 bytes.
extern "C" __declspec(naked) void FUN_100c1f20_100C1F20() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        xor eax, eax
        push esi
        push edi
        mov al, byte ptr [ebp + 0b75h]
        dec eax
        cmp eax, 3
        ; Exact mapped bytes 0F 87 C8 02 00 00: ja 0x100c2200
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 08 22 0C 10: jmp dword ptr [eax*4 + 0x100c2208]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x0c
        __asm _emit 0x10
        mov ebx, 0fffff69bh
        lea esi, [ebp + 974h]
        mov edi, 3c0h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c1f71
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c1f71
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c1f71
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c1f73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c1fa4
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
        mov ecx, dword ptr [esi]
        push 4fh
        push 88h
        ; Exact mapped bytes E8 1E CD 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 5c0h
        ; Exact mapped bytes 7C 88: jl 0x100c1f51
        __asm _emit 0x7c
        __asm _emit 0x88
        mov ebx, 0fffff694h
        lea esi, [ebp + 97ch]
        mov edi, 400h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c1ffb
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c1ffb
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c1ffb
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c1ffd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c202e
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
        mov ecx, dword ptr [esi]
        push 46h
        push 22eh
        ; Exact mapped bytes E8 94 CC 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 600h
        ; Exact mapped bytes 7C 88: jl 0x100c1fdb
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff593h
        lea esi, [ebp + 0a74h]
        mov edi, 1c0h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c208a
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c208a
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c208a
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c208c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c20bd
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
        mov ecx, dword ptr [esi]
        push 4fh
        push 88h
        ; Exact mapped bytes E8 05 CC 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 3c0h
        ; Exact mapped bytes 7C 88: jl 0x100c206a
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69bh
        lea esi, [ebp + 974h]
        mov edi, 3c0h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2119
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2119
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2119
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c211b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c214c
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
        mov ecx, dword ptr [esi]
        push 4fh
        push 19dh
        ; Exact mapped bytes E8 76 CB 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 5c0h
        ; Exact mapped bytes 7C 88: jl 0x100c20f9
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff594h
        lea esi, [ebp + 0a74h]
        mov edi, 200h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c21a8
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c21a8
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c21a8
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c21aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c21db
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
        mov ecx, dword ptr [esi]
        push 46h
        push 22eh
        ; Exact mapped bytes E8 E7 CA 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 400h
        ; Exact mapped bytes 7C 88: jl 0x100c2188
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
