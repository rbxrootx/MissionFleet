// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D9B60 .. +0x1E1 bytes.
extern "C" __declspec(naked) void FUN_100d9b60_100D9B60() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 86 9C 01 00 00: mov ax, word ptr [esi + 0x19c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0B 00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x100d9b84
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 3D 0C 00: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x100d9b84
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 7C 2F F7 FF: call 0x1004cb00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 4]
        and eax, 0e4fdh
        mov dword ptr [esi + 50h], ecx
        mov ecx, dword ptr [esi + 0ach]
        or eax, 405h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 54h], 0fffffe3eh
        ; Exact mapped bytes E8 12 ED F3 FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xed
        __asm _emit 0xf3
        __asm _emit 0xff
        xor ebx, ebx
        lea edi, [esi + 0ech]
        mov byte ptr [esi + 1a0h], bl
        ; Exact mapped bytes 66 89 9E 9C 01 00 00: mov word ptr [esi + 0x19c], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, 3
        mov ecx, dword ptr [edi - 0ch]
        ; Exact mapped bytes E8 40 AB 02 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 39 AB 02 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 EB: jne 0x100d9bc8
        __asm _emit 0x75
        __asm _emit 0xeb
        cmp dword ptr [esi + 1cch], ebx
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x100d9c7f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 188h], ebx
        ; Exact mapped bytes 74 43: je 0x100d9c34
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 66 8B 86 7E 01 00 00: mov ax, word ptr [esi + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 76 37: jbe 0x100d9c34
        __asm _emit 0x76
        __asm _emit 0x37
        xor edi, edi
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 76 21: jbe 0x100d9c25
        __asm _emit 0x76
        __asm _emit 0x21
        mov edx, dword ptr [esi + 188h]
        mov ecx, dword ptr [edx + edi*4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100d9c17
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        xor ecx, ecx
        inc edi
        ; Exact mapped bytes 66 8B 8E 7E 01 00 00: mov cx, word ptr [esi + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ecx
        ; Exact mapped bytes 7C DF: jl 0x100d9c04
        __asm _emit 0x7c
        __asm _emit 0xdf
        mov edx, dword ptr [esi + 188h]
        push edx
        ; Exact mapped bytes E8 53 2B 09 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [esi + 18ch], ebx
        ; Exact mapped bytes 74 43: je 0x100d9c7f
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 66 8B 86 80 01 00 00: mov ax, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 76 37: jbe 0x100d9c7f
        __asm _emit 0x76
        __asm _emit 0x37
        xor edi, edi
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 76 21: jbe 0x100d9c70
        __asm _emit 0x76
        __asm _emit 0x21
        mov eax, dword ptr [esi + 18ch]
        mov ecx, dword ptr [eax + edi*4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100d9c62
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
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
        ; Exact mapped bytes 7C DF: jl 0x100d9c4f
        __asm _emit 0x7c
        __asm _emit 0xdf
        mov ecx, dword ptr [esi + 18ch]
        push ecx
        ; Exact mapped bytes E8 08 2B 09 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x2b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi + 170h]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 74 04: je 0x100d9c94
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 2
        ; Exact mapped bytes 75 05: jne 0x100d9c99
        __asm _emit 0x75
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 16ch]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 74 04: je 0x100d9cae
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 2
        ; Exact mapped bytes 75 05: jne 0x100d9cb3
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 1cch]
        push ecx
        mov ecx, dword ptr [esi + 164h]
        ; Exact mapped bytes E8 EB 3B 00 00: call 0x100dd8b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1cch]
        mov ecx, dword ptr [esi + 160h]
        push edx
        ; Exact mapped bytes E8 A9 51 00 00: call 0x100dee80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 84 01 00 00: mov word ptr [esi + 0x184], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 82 01 00 00: mov word ptr [esi + 0x182], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 80 01 00 00: mov word ptr [esi + 0x180], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 7E 01 00 00: mov word ptr [esi + 0x17e], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 7C 01 00 00: mov word ptr [esi + 0x17c], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 7A 01 00 00: mov word ptr [esi + 0x17a], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 78 01 00 00: mov word ptr [esi + 0x178], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 32h
        ; Exact mapped bytes 7E 12: jle 0x100d9d28
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100d9d28
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes EB 02: jmp 0x100d9d2a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [esi + 1d4h], ebx
        mov dword ptr [esi + 1d8h], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
