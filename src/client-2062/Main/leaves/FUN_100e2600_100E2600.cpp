// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E2600 .. +0x1F8 bytes.
extern "C" __declspec(naked) void FUN_100e2600_100E2600() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [esi + 50h], eax
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 DF 01 00 00: je 0x100e27f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 58h], 2
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes A1 CC 58 1C 10: mov eax, dword ptr [0x101c58cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, 4
        mov ecx, 1
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 D0 58 1C 10: mov eax, dword ptr [0x101c58d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 58 1C 10: mov eax, dword ptr [0x101c58d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 50h]
        cmp eax, 12ch
        ; Exact mapped bytes 74 78: je 0x100e26c6
        __asm _emit 0x74
        __asm _emit 0x78
        cmp eax, 3e8h
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x100e2736
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 57 1C 10: mov eax, dword ptr [0x101c5740]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 160h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0A: jle 0x100e2672
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x100e2674
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 0D CC 58 1C 10: mov ecx, dword ptr [0x101c58cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100e26a9
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
        ; Exact mapped bytes 8B 0D CC 58 1C 10: mov ecx, dword ptr [0x101c58cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 100h
        ; Exact mapped bytes E8 67 CA 01 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 58 1C 10: mov eax, dword ptr [0x101c58d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 70: jmp 0x100e2736
        __asm _emit 0xeb
        __asm _emit 0x70
        ; Exact mapped bytes A1 D0 58 1C 10: mov eax, dword ptr [0x101c58d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 57 1C 10: mov eax, dword ptr [0x101c5740]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edx
        ; Exact mapped bytes 7E 11: jle 0x100e26ef
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100e26ef
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 100h
        ; Exact mapped bytes EB 02: jmp 0x100e26f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 0D CC 58 1C 10: mov ecx, dword ptr [0x101c58cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100e2726
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
        ; Exact mapped bytes 8B 0D CC 58 1C 10: mov ecx, dword ptr [0x101c58cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 100h
        ; Exact mapped bytes E8 EA C9 01 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        lea ecx, [eax + 1]
        mov dword ptr [esi + 5ch], ecx
        ; Exact mapped bytes 8B 0D 40 57 1C 10: mov ecx, dword ptr [0x101c5740]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x100e2762
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100e2762
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100e2762
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100e2764
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100e2799
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
        ; Exact mapped bytes A1 40 57 1C 10: mov eax, dword ptr [0x101c5740]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [esi + 5ch]
        cmp dword ptr [eax + 160h], esi
        ; Exact mapped bytes 7E 15: jle 0x100e27be
        __asm _emit 0x7e
        __asm _emit 0x15
        test esi, esi
        ; Exact mapped bytes 7C 11: jl 0x100e27be
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100e27be
        __asm _emit 0x74
        __asm _emit 0x07
        shl esi, 6
        add esi, eax
        ; Exact mapped bytes EB 02: jmp 0x100e27c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        ; Exact mapped bytes A1 D0 58 1C 10: mov eax, dword ptr [0x101c58d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        test esi, esi
        mov dword ptr [eax + 54h], esi
        ; Exact mapped bytes 74 28: je 0x100e27f4
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [esi + 18h]
        add esi, 20h
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [esi - 4]
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [esi]
        add eax, 14h
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [esi + 0ch]
        mov dword ptr [eax + 0ch], edx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
