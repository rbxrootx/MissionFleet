// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000F480 .. +0x8F5 bytes.
extern "C" __declspec(naked) void FUN_1000f480_1000F480() {
    __asm {
        sub esp, 34h
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr [esp + 48h]
        xor ecx, ecx
        push esi
        lea eax, [ebp + 0a0h]
        push edi
        mov edx, eax
        lea edi, [ebp + 0e4h]
        mov esi, ebx
        mov dword ptr [esp + 10h], edi
        mov dword ptr [edx], ecx
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [esp + 54h]
        mov ecx, 18h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 48h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [esp + 58h]
        mov edi, 0fffeh
        mov dword ptr [ebp + 0a4h], eax
        mov eax, dword ptr [ebp + 0cch]
        mov dword ptr [ebp + 0b0h], ecx
        mov edx, 1
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 0d0h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 0d4h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov al, byte ptr [ebx + 32h]
        test al, 20h
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x1000f5dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 165h
        ; Exact mapped bytes 7E 12: jle 0x1000f51f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000f51f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 594h]
        ; Exact mapped bytes EB 02: jmp 0x1000f521
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0b8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1000f556
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
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0c2h
        ; Exact mapped bytes 7E 11: jle 0x1000f578
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1000f578
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 3080h
        ; Exact mapped bytes EB 02: jmp 0x1000f57a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0c4h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1000f5af
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
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 166h
        ; Exact mapped bytes 0F 8E A7 03 00 00: jle 0x1000f96b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 99 03 00 00: je 0x1000f96b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 598h]
        ; Exact mapped bytes E9 90 03 00 00: jmp 0x1000f96d
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 43 36: mov ax, word ptr [ebx + 0x36]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x36
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 85 E1 00 00 00: jne 0x1000f6cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 952h
        ; Exact mapped bytes 7E 12: jle 0x1000f60d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000f60d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 2548h]
        ; Exact mapped bytes EB 02: jmp 0x1000f60f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0b8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1000f644
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
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0dch
        ; Exact mapped bytes 7E 11: jle 0x1000f666
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1000f666
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 3700h
        ; Exact mapped bytes EB 02: jmp 0x1000f668
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0c4h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1000f69d
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
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 951h
        ; Exact mapped bytes 0F 8E B9 02 00 00: jle 0x1000f96b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 02 00 00: je 0x1000f96b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 2544h]
        ; Exact mapped bytes E9 A2 02 00 00: jmp 0x1000f96d
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 E1 00 00 00: jne 0x1000f7b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5f3h
        ; Exact mapped bytes 7E 12: jle 0x1000f6f7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000f6f7
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 17cch]
        ; Exact mapped bytes EB 02: jmp 0x1000f6f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0b8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1000f72e
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
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0c7h
        ; Exact mapped bytes 7E 11: jle 0x1000f750
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1000f750
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 31c0h
        ; Exact mapped bytes EB 02: jmp 0x1000f752
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0c4h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1000f787
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
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5f4h
        ; Exact mapped bytes 0F 8E CF 01 00 00: jle 0x1000f96b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 C1 01 00 00: je 0x1000f96b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 17d0h]
        ; Exact mapped bytes E9 B8 01 00 00: jmp 0x1000f96d
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x1000f894
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 57 1C 10: mov eax, dword ptr [0x101c57a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 66h
        ; Exact mapped bytes 7E 12: jle 0x1000f7df
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000f7df
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 198h]
        ; Exact mapped bytes EB 02: jmp 0x1000f7e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0b8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1000f816
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], esi
        mov esi, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], esi
        mov esi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A8 57 1C 10: mov eax, dword ptr [0x101c57a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edx
        ; Exact mapped bytes 7E 0F: jle 0x1000f832
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1000f832
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x1000f834
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0c4h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1000f869
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
        ; Exact mapped bytes A1 A8 57 1C 10: mov eax, dword ptr [0x101c57a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 65h
        ; Exact mapped bytes 0F 8E F0 00 00 00: jle 0x1000f96b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x1000f96b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 194h]
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x1000f96d
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x1000f983
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 57 1C 10: mov eax, dword ptr [0x101c57a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 71h
        ; Exact mapped bytes 7E 12: jle 0x1000f8be
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000f8be
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1c4h]
        ; Exact mapped bytes EB 02: jmp 0x1000f8c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0b8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1000f8f5
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
        ; Exact mapped bytes A1 A8 57 1C 10: mov eax, dword ptr [0x101c57a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 2
        ; Exact mapped bytes 7E 11: jle 0x1000f914
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1000f914
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 80h
        ; Exact mapped bytes EB 02: jmp 0x1000f916
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0c4h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1000f94b
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
        ; Exact mapped bytes A1 A8 57 1C 10: mov eax, dword ptr [0x101c57a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 70h
        ; Exact mapped bytes 7E 12: jle 0x1000f96b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000f96b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x1000f96d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x1000fa88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x1000fa60
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x1000fa88
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 38 58 1C 10: mov eax, dword ptr [0x101c5838]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 14h
        ; Exact mapped bytes 7E 0F: jle 0x1000f9aa
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1000f9aa
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 50h]
        ; Exact mapped bytes EB 02: jmp 0x1000f9ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0b8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1000f9e1
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], esi
        mov esi, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], esi
        mov esi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 38 58 1C 10: mov eax, dword ptr [0x101c5838]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edx
        ; Exact mapped bytes 7E 0F: jle 0x1000f9fd
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1000f9fd
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x1000f9ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0c4h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1000fa34
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
        ; Exact mapped bytes A1 38 58 1C 10: mov eax, dword ptr [0x101c5838]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 18h
        ; Exact mapped bytes 7E 0F: jle 0x1000fa51
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1000fa51
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 60h]
        ; Exact mapped bytes EB 02: jmp 0x1000fa53
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 0c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1000fa88
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
        mov al, byte ptr [ebp + 11ch]
        lea ecx, [ebp + 154h]
        test al, 1
        mov edx, 2
        ; Exact mapped bytes 74 13: je 0x1000fab0
        __asm _emit 0x74
        __asm _emit 0x13
        mov esi, 1
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1000faa2
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB 0C: jmp 0x1000fabc
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1000fab0
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 66 8B 85 2C 01 00 00: mov ax, word ptr [ebp + 0x12c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        ; Exact mapped bytes 66 25 03 00: and ax, 3
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 3E: jne 0x1000fb0f
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp + 0c4h]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp + 0d8h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 25h
        ; Exact mapped bytes 0F 8E 36 01 00 00: jle 0x1000fc2c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x1000fc2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 94h]
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x1000fc2e
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 1
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 22: jne 0x1000fb3b
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 0c4h]
        mov dword ptr [ebp + 144h], 0
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [ebp + 0d8h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x1000fc34
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 F0 00 00 00: jne 0x1000fc34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [eax + 30h]
        test esi, esi
        ; Exact mapped bytes 74 0A: je 0x1000fb5a
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp + 98h], 40000000h
        ; Exact mapped bytes 66 39 53 36: cmp word ptr [ebx + 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x53
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 0d8h]
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x1000fbfb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4B 40: mov cx, word ptr [ebx + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x40
        push ecx
        mov ecx, dword ptr [ebp + 0d8h]
        ; Exact mapped bytes E8 A0 FB 0E 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, 10624dd3h
        ; Exact mapped bytes 66 8B 4B 40: mov cx, word ptr [ebx + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x40
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes 75 66: jne 0x1000fbff
        __asm _emit 0x75
        __asm _emit 0x66
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes 75 3B: jne 0x1000fbe7
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        ; Exact mapped bytes 75 14: jne 0x1000fbd3
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 4]
        mov ecx, dword ptr [ebp + 0d8h]
        sub edx, 2fh
        push edx
        ; Exact mapped bytes E8 7F F1 0E 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x1000fbff
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 4]
        mov ecx, dword ptr [ebp + 0d8h]
        sub eax, 2ah
        push eax
        ; Exact mapped bytes E8 6B F1 0E 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x1000fbff
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 4]
        sub ecx, 25h
        push ecx
        mov ecx, dword ptr [ebp + 0d8h]
        ; Exact mapped bytes E8 57 F1 0E 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x1000fbff
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 0c4h]
        mov dword ptr [edx + 50h], 0
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 26h
        ; Exact mapped bytes 7E 12: jle 0x1000fc2c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1000fc2c
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 98h]
        ; Exact mapped bytes EB 02: jmp 0x1000fc2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 144h], eax
        mov eax, dword ptr [ebp + 98h]
        test eax, eax
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x1000fd6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        push esi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        xor ecx, ecx
        cmp eax, 0ch
        setg cl
        mov dword ptr [ebp + 14ch], ecx
        mov ecx, dword ptr [ebp + 148h]
        push esi
        ; Exact mapped bytes E8 59 1B 00 00: call 0x100117c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 148h]
        ; Exact mapped bytes E8 DE 1B 00 00: call 0x10011850
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14ch]
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x1000fcdc
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, esi
        lea eax, [esp + 14h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, 1017f3c8h
        or ecx, 0ffffffffh
        xor eax, eax
        add esp, 8
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        lea edx, [esp + 14h]
        mov esi, edi
        mov ebx, ecx
        mov edi, edx
        or ecx, 0ffffffffh
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        mov ecx, ebx
        dec edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 0c8h]
        mov ecx, ebx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x1000fcf5
        __asm _emit 0x74
        __asm _emit 0x28
        lea ecx, [esp + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x1000fcf5
        __asm _emit 0x74
        __asm _emit 0x20
        lea edx, [esp + 14h]
        push edx
        ; Exact mapped bytes EB 12: jmp 0x1000fcee
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0c8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1000fcf5
        __asm _emit 0x74
        __asm _emit 0x0c
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x1000fcf5
        __asm _emit 0x74
        __asm _emit 0x08
        push esi
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0cch]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 0d0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 0d4h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 0cch]
        xor eax, eax
        mov al, byte ptr [ebp + 128h]
        push eax
        ; Exact mapped bytes E8 F4 F9 0E 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov cl, byte ptr [ebp + 115h]
        and ecx, 7fh
        inc ecx
        push ecx
        mov ecx, dword ptr [ebp + 0d0h]
        ; Exact mapped bytes E8 DE F9 0E 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dl, byte ptr [ebp + 116h]
        mov ecx, dword ptr [ebp + 0d4h]
        and edx, 0fh
        push edx
        ; Exact mapped bytes E8 C9 F9 0E 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0e0h]
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x1000fd6b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esp + 10h]
        push eax
        ; Exact mapped bytes E8 05 3E 0A 00: call 0x100b3b70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 34h
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
