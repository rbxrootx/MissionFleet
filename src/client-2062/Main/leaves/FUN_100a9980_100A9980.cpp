// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A9980 .. +0x452 bytes.
extern "C" __declspec(naked) void FUN_100a9980_100A9980() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, ecx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 3D 04 00 00: je 0x100a9dcd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 74h]
        push esi
        push edi
        push 0bb8h
        ; Exact mapped bytes E8 81 5D 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        lea edi, [ebp + 100h]
        mov ecx, 24h
        mov esi, ebx
        xor edx, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp + 47ch], eax
        mov dword ptr [ebp + 480h], edx
        mov eax, dword ptr [ebx + 54h]
        and al, 0feh
        cmp eax, 0a0h
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x100a9ab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 1
        mov dword ptr [ebp + 484h], edi
        ; Exact mapped bytes A1 18 58 1C 10: mov eax, dword ptr [0x101c5818]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 110h
        ; Exact mapped bytes 7E 12: jle 0x100a99fe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edx
        ; Exact mapped bytes 74 08: je 0x100a99fe
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 440h]
        ; Exact mapped bytes EB 02: jmp 0x100a9a00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 60h]
        cmp eax, edx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a9a32
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
        lea ecx, [ebp + 488h]
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100a9a3d
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 0fch]
        mov ecx, 0fff0h
        mov esi, 0fffeh
        push 230h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 74h]
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 70h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 6ch]
        ; Exact mapped bytes E8 D8 52 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        lea ebx, [ebp + 0d0h]
        lea eax, [ebp + 78h]
        mov edi, ebx
        mov dword ptr [esp + 1ch], 0bh
        mov edx, 2
        mov ecx, dword ptr [eax]
        add eax, 4
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100a9a90
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [edi]
        add edi, 4
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 1ch]
        dec ecx
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes 75 DB: jne 0x100a9a8b
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes E9 AC 02 00 00: jmp 0x100a9d61
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a8h
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x100a9b9e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 1
        mov dword ptr [ebp + 484h], edi
        ; Exact mapped bytes A1 2C 58 1C 10: mov eax, dword ptr [0x101c582c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x100a9ae7
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edx
        ; Exact mapped bytes 74 05: je 0x100a9ae7
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100a9ae9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 60h]
        cmp eax, edx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a9b1b
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
        lea ecx, [ebp + 488h]
        mov edx, 2
        mov esi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100a9b2b
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 0fch]
        mov ecx, 0fff0h
        push 230h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 74h]
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 70h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 6ch]
        ; Exact mapped bytes E8 EF 51 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        lea ebx, [ebp + 0d0h]
        lea eax, [ebp + 78h]
        mov edi, ebx
        mov dword ptr [esp + 1ch], 0bh
        mov edx, 2
        mov ecx, dword ptr [eax]
        add eax, 4
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100a9b79
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [edi]
        add edi, 4
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 1ch]
        dec ecx
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes 75 DB: jne 0x100a9b74
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x100a9d61
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a6h
        mov dword ptr [ebp + 484h], edx
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x100a9c8d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 1
        mov dword ptr [ebp + 480h], edi
        ; Exact mapped bytes A1 24 58 1C 10: mov eax, dword ptr [0x101c5824]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x100a9bd6
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edx
        ; Exact mapped bytes 74 05: je 0x100a9bd6
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100a9bd8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 60h]
        cmp eax, edx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a9c0a
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
        lea ecx, [ebp + 488h]
        mov edx, 2
        mov esi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100a9c1a
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 0fch]
        mov ecx, 0fff0h
        push 230h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 74h]
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 70h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 6ch]
        ; Exact mapped bytes E8 00 51 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        lea ebx, [ebp + 0d0h]
        lea eax, [ebp + 78h]
        mov edi, ebx
        mov dword ptr [esp + 1ch], 0bh
        mov edx, 2
        mov ecx, dword ptr [eax]
        add eax, 4
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100a9c68
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [edi]
        add edi, 4
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 1ch]
        dec ecx
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes 75 DB: jne 0x100a9c63
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x100a9d61
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6
        ; Exact mapped bytes 7E 0F: jle 0x100a9caa
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edx
        ; Exact mapped bytes 74 05: je 0x100a9caa
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 18h]
        ; Exact mapped bytes EB 02: jmp 0x100a9cac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 60h]
        cmp eax, edx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a9cde
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
        lea ecx, [ebp + 488h]
        mov edx, 2
        mov esi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100a9cee
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 0fch]
        mov ecx, 0fh
        push 1feh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 74h]
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 70h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 6ch]
        ; Exact mapped bytes E8 2C 50 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        lea ebx, [ebp + 0d0h]
        lea eax, [ebp + 78h]
        mov esi, ebx
        mov dword ptr [esp + 1ch], 0bh
        mov edi, 1
        mov edx, 2
        mov ecx, dword ptr [eax]
        add eax, 4
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100a9d41
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi]
        add esi, 4
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 1ch]
        dec ecx
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes 75 DB: jne 0x100a9d3c
        __asm _emit 0x75
        __asm _emit 0xdb
        mov esi, dword ptr [esp + 14h]
        mov edx, dword ptr [ebp + 68h]
        mov eax, 0ffffffd4h
        lea edi, [ebp + 7ch]
        mov ecx, dword ptr [esi + 10h]
        add esi, 2ch
        and ecx, 0fh
        mov dword ptr [edx + 50h], ecx
        mov ecx, dword ptr [esp + 14h]
        sub eax, ecx
        lea ebp, [ecx + 14h]
        mov dword ptr [esp + 14h], eax
        mov ecx, dword ptr [edi - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 45 00: mov ax, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 88 59 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 06: movsx eax, byte ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x06
        mov ecx, dword ptr [edi]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 78 59 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        mov al, byte ptr [esi]
        mov edx, dword ptr [ebx]
        xor ecx, ecx
        test al, al
        mov eax, dword ptr [esp + 14h]
        setl cl
        add ebp, 2
        add ebx, 4
        add edi, 8
        inc esi
        add eax, esi
        mov dword ptr [edx + 50h], ecx
        cmp eax, 0bh
        ; Exact mapped bytes 7C BE: jl 0x100a9d89
        __asm _emit 0x7c
        __asm _emit 0xbe
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
