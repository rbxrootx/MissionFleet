// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10027CC0 .. +0x40A bytes.
extern "C" __declspec(naked) void FUN_10027cc0_10027CC0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 444h]
        test eax, eax
        ; Exact mapped bytes 0F 85 F7 03 00 00: jne 0x100280c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 43ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 E9 03 00 00: jne 0x100280c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        push ebx
        and al, 0feh
        mov ebx, 1
        cmp eax, 0a2h
        mov dword ptr [esi + 43ch], ebx
        ; Exact mapped bytes 74 7C: je 0x10027d76
        __asm _emit 0x74
        __asm _emit 0x7c
        cmp eax, 0a4h
        ; Exact mapped bytes 74 75: je 0x10027d76
        __asm _emit 0x74
        __asm _emit 0x75
        cmp eax, 0a6h
        ; Exact mapped bytes 74 6E: je 0x10027d76
        __asm _emit 0x74
        __asm _emit 0x6e
        cmp eax, 0aeh
        ; Exact mapped bytes 74 67: je 0x10027d76
        __asm _emit 0x74
        __asm _emit 0x67
        cmp eax, 0a0h
        ; Exact mapped bytes 74 3B: je 0x10027d51
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp eax, 0a8h
        ; Exact mapped bytes 74 34: je 0x10027d51
        __asm _emit 0x74
        __asm _emit 0x34
        cmp eax, 0ach
        ; Exact mapped bytes 74 2D: je 0x10027d51
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push esi
        mov ecx, dword ptr [eax + 0d48h]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 93 48 08 00: call 0x100ac5d0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0d48h]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes EB 4C: jmp 0x10027d9d
        __asm _emit 0xeb
        __asm _emit 0x4c
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov ecx, dword ptr [eax + 0d48h]
        mov ecx, dword ptr [ecx + 180h]
        ; Exact mapped bytes E8 E8 A5 0B 00: call 0x100e2350
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0b
        __asm _emit 0x00
        push 100h
        mov ecx, esi
        ; Exact mapped bytes E8 AC 73 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x73
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x10027da2
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0d48h]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ecx + 60h], esi
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0d48h]
        mov ecx, dword ptr [eax + 0cch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 448h]
        test eax, eax
        ; Exact mapped bytes 75 54: jne 0x10027e00
        __asm _emit 0x75
        __asm _emit 0x54
        cmp dword ptr [esi + 0e8h], -1
        ; Exact mapped bytes 75 33: jne 0x10027de8
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [esi + 0a4h]
        and al, 0feh
        cmp eax, 0a0h
        ; Exact mapped bytes 74 18: je 0x10027ddc
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, 0a8h
        ; Exact mapped bytes 74 11: je 0x10027ddc
        __asm _emit 0x74
        __asm _emit 0x11
        cmp eax, 0ach
        ; Exact mapped bytes 74 0A: je 0x10027ddc
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 410h]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [esi + 404h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 18: jmp 0x10027e00
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [esi + 410h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 404h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, 12ch
        sub eax, 190h
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 3d4h]
        push eax
        ; Exact mapped bytes E8 71 0B 02 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        mov eax, ecx
        and al, 0feh
        cmp eax, 0a0h
        ; Exact mapped bytes 75 6C: jne 0x10027e9c
        __asm _emit 0x75
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 18 58 1C 10: mov eax, dword ptr [0x101c5818]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 3
        ; Exact mapped bytes 7E 11: jle 0x10027e5b
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10027e5b
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x10027e5d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10027e92
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
        push 101h
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x10028043
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a8h
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x10027f27
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 2C 58 1C 10: mov eax, dword ptr [0x101c582c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0F: jle 0x10027ecf
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10027ecf
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x10027ed1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10027f06
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
        mov ecx, dword ptr [esi + 3dch]
        push 101h
        ; Exact mapped bytes E8 4A 72 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0x00
        push 100h
        mov ecx, esi
        ; Exact mapped bytes E8 FE 71 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x71
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 27 01 00 00: jmp 0x1002804e
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a0h
        ; Exact mapped bytes 0F 83 1C 01 00 00: jae 0x1002804e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 10181754h]
        inc eax
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x10027f7b
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x10027f7b
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x10027f7b
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x10027f7d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3e0h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10027fb2
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
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 60h]
        and eax, 0fh
        lea ecx, [eax + eax*4]
        lea edx, [eax + ecx*8]
        mov ecx, dword ptr [esi + 0a4h]
        shr ecx, 1
        lea eax, [eax + edx*2]
        add eax, ecx
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        mov edx, dword ptr [ecx + 160h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 10181754h]
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1002800a
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1002800a
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1002800a
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1002800c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10028041
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
        push 0
        mov ecx, dword ptr [esi + 3dch]
        ; Exact mapped bytes E8 12 71 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x71
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        pop ebx
        and al, 0feh
        cmp eax, 0a2h
        ; Exact mapped bytes 74 1B: je 0x10028079
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp eax, 0a4h
        ; Exact mapped bytes 74 14: je 0x10028079
        __asm _emit 0x74
        __asm _emit 0x14
        cmp eax, 0a6h
        ; Exact mapped bytes 74 0D: je 0x10028079
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 3e0h]
        mov dword ptr [ecx + 50h], 0
        mov eax, dword ptr [esi + 0a4h]
        and al, 0feh
        cmp eax, 0a0h
        ; Exact mapped bytes 74 30: je 0x100280b8
        __asm _emit 0x74
        __asm _emit 0x30
        cmp eax, 0a2h
        ; Exact mapped bytes 74 29: je 0x100280b8
        __asm _emit 0x74
        __asm _emit 0x29
        cmp eax, 0a4h
        ; Exact mapped bytes 74 22: je 0x100280b8
        __asm _emit 0x74
        __asm _emit 0x22
        cmp eax, 0a6h
        ; Exact mapped bytes 74 1B: je 0x100280b8
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp eax, 0a8h
        ; Exact mapped bytes 74 14: je 0x100280b8
        __asm _emit 0x74
        __asm _emit 0x14
        cmp eax, 0ach
        ; Exact mapped bytes 74 0D: je 0x100280b8
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [esi + 3dch]
        mov dword ptr [edx + 50h], 0
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e1ffh
        or ah, 1
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
    }
}
