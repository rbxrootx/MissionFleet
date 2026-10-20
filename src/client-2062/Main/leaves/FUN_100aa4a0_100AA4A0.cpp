// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100AA4A0 .. +0x1DF5 bytes.
extern "C" __declspec(naked) void FUN_100aa4a0_100AA4A0() {
    __asm {
        push -1
        push 101718b5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        mov eax, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 2ch]
        push ebx
        mov ebx, dword ptr [esp + 2ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 40h]
        push eax
        mov eax, dword ptr [esp + 38h]
        push ecx
        mov ecx, dword ptr [esp + 38h]
        push edx
        push ebx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 69 D0 F9 FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd0
        __asm _emit 0xf9
        __asm _emit 0xff
        xor ebp, ebp
        push 54h
        mov dword ptr [esp + 2ch], ebp
        mov dword ptr [esi], 101760e0h
        ; Exact mapped bytes E8 A6 22 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x22
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebp
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 74 70: je 0x100aa57c
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1b4h
        ; Exact mapped bytes 7E 10: jle 0x100aa52d
        __asm _emit 0x7e
        __asm _emit 0x10
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x100aa52d
        __asm _emit 0x74
        __asm _emit 0x06
        mov ebp, dword ptr [eax + 6d0h]
        mov edx, dword ptr [esp + 34h]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6F 44 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100aa578
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100aa57e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 90h], ecx
        ; Exact mapped bytes E8 CD 4B 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov ebx, 0bfffh
        push 54h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 F7 21 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x21
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 2
        ; Exact mapped bytes 74 78: je 0x100aa633
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1b3h
        ; Exact mapped bytes 7E 12: jle 0x100aa5de
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100aa5de
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 6cch]
        ; Exact mapped bytes EB 02: jmp 0x100aa5e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B8 43 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100aa62f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100aa635
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0c8h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 8ch], ecx
        ; Exact mapped bytes E8 D6 4A 05 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        push 54h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 45 21 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x21
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 3
        ; Exact mapped bytes 74 2F: je 0x100aa69c
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        push 40h
        push 0
        lea eax, [ebp + 8]
        push 0
        lea ecx, [ebx + 0ch]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 25 43 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        mov ecx, edi
        ; Exact mapped bytes EB 0A: jmp 0x100aa6a6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes E8 A5 4A 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        push 70h
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E8 D2 20 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 4
        ; Exact mapped bytes 74 47: je 0x100aa727
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        push 0
        lea edx, [ebp + 32h]
        push 0ffffffh
        lea eax, [ebx + 6eh]
        push edx
        lea ecx, [ebp + 21h]
        push eax
        ; Exact mapped bytes A1 9C 56 1C 10: mov eax, dword ptr [0x101c569c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 2ch]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 79 B4 F6 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb4
        __asm _emit 0xf6
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 2ch], 5
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 84 20 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100aa729
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0ach], edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        test ecx, ecx
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100aa74d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 53 48 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aa75a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A6 47 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x47
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 3C 20 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 6
        ; Exact mapped bytes 74 3B: je 0x100aa7af
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100aa795
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100aa795
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x100aa797
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 10h]
        push edx
        lea edx, [ebx + 87h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E3 4A 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100aa7b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 50h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 DD 1F 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1f
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 7
        ; Exact mapped bytes 74 12: je 0x100aa7e5
        __asm _emit 0x74
        __asm _emit 0x12
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CD 41 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100aa7e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 A7 1F 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 8
        ; Exact mapped bytes 74 7E: je 0x100aa889
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 148h
        ; Exact mapped bytes 7E 12: jle 0x100aa82e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100aa82e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 520h]
        ; Exact mapped bytes EB 02: jmp 0x100aa830
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 94h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 62 41 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100aa885
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100aa88b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 9ch], ecx
        ; Exact mapped bytes E8 C0 48 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        mov ebx, 7fffh
        push 54h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 EA 1E 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 9
        ; Exact mapped bytes 74 7E: je 0x100aa946
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 149h
        ; Exact mapped bytes 7E 12: jle 0x100aa8eb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100aa8eb
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 524h]
        ; Exact mapped bytes EB 02: jmp 0x100aa8ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 94h]
        push 40h
        push 0
        push 0
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 A5 40 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100aa942
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100aa948
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 98h], ecx
        ; Exact mapped bytes E8 03 48 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        push 54h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 32 1E 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x1e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 0ah
        ; Exact mapped bytes 74 7E: je 0x100aa9fe
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 148h
        ; Exact mapped bytes 7E 12: jle 0x100aa9a3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100aa9a3
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 520h]
        ; Exact mapped bytes EB 02: jmp 0x100aa9a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 94h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 ED 3F 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100aa9fa
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100aaa00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0a4h], ecx
        ; Exact mapped bytes E8 4B 47 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x47
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        push 54h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 7A 1D 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x1d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 0bh
        ; Exact mapped bytes 74 7E: je 0x100aaab6
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 149h
        ; Exact mapped bytes 7E 12: jle 0x100aaa5b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100aaa5b
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 524h]
        ; Exact mapped bytes EB 02: jmp 0x100aaa5d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 94h]
        push 40h
        push 0
        push 0
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 35 3F 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100aaab2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100aaab8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0a0h], ecx
        ; Exact mapped bytes E8 93 46 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        push 70h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 C2 1C 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 0ch
        ; Exact mapped bytes 74 5C: je 0x100aab4c
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ebp, dword ptr [esp + 38h]
        push 0
        push 0
        push 0ffffffh
        lea ecx, [ebp + 9eh]
        mov eax, dword ptr [esi + 94h]
        push ecx
        mov ecx, dword ptr [esp + 44h]
        lea edx, [ecx + 6eh]
        add ecx, 0eh
        push edx
        lea edx, [ebp + 8eh]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 54 B0 F6 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb0
        __asm _emit 0xf6
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 2ch], 0dh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 5F 1C 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 06: jmp 0x100aab52
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 38h]
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov dword ptr [esi + 0b0h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 28h], 0
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100aab72
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2E 44 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aab7f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 81 43 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 17 1C 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 0eh
        mov ebx, 0cbh
        ; Exact mapped bytes 74 44: je 0x100aabe2
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100aabbe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100aabbe
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100aabc0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0f3h]
        push edx
        mov edx, dword ptr [esp + 38h]
        add edx, -4
        push edx
        push 8
        push ecx
        mov ecx, dword ptr [esi + 94h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B0 46 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100aabe4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 65 45 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aac1a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 86 43 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aac27
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D9 42 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 6F 1B 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x1b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 0fh
        ; Exact mapped bytes 74 44: je 0x100aac85
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100aac61
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100aac61
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100aac63
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0f3h]
        push ecx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 1fh
        push ecx
        push 8
        push edx
        mov edx, dword ptr [esi + 94h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 0D 46 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100aac87
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 C2 44 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aacbd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E3 42 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aacca
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 36 42 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 CC 1A 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 10h
        ; Exact mapped bytes 74 44: je 0x100aad28
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100aad04
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100aad04
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100aad06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0f3h]
        push ecx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 42h
        push ecx
        push 8
        push edx
        mov edx, dword ptr [esi + 94h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 6A 45 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100aad2a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 1F 44 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aad60
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 40 42 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aad6d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 93 41 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 29 1A 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 11h
        ; Exact mapped bytes 74 45: je 0x100aadcc
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100aada8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100aada8
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x100aadaa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [esp + 34h]
        lea ecx, [ebp + 0fah]
        push ecx
        lea ecx, [ebx + 5ah]
        push ecx
        push 8
        push edx
        mov edx, dword ptr [esi + 94h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 C6 44 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100aadd2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 34h]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes E8 77 43 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aae08
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 98 41 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aae15
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EB 40 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 84 19 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 12h
        ; Exact mapped bytes 74 4F: je 0x100aae7b
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 388h
        ; Exact mapped bytes 7E 12: jle 0x100aae50
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100aae50
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 0e20h]
        ; Exact mapped bytes EB 02: jmp 0x100aae52
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 10bh]
        push 40h
        push ecx
        lea ecx, [ebx + 0eh]
        push ecx
        push edx
        mov edx, dword ptr [esi + 94h]
        mov ecx, eax
        push edx
        push 0
        push 3e8h
        push 0
        ; Exact mapped bytes E8 E9 F0 F7 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100aae7d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov dword ptr [esi + 188h], edi
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 96 00: add ax, 0x96
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x00
        test ecx, ecx
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100aaea1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FF 40 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aaeae
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 52 40 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 EB 18 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 13h
        ; Exact mapped bytes 74 4F: je 0x100aaf14
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 386h
        ; Exact mapped bytes 7E 12: jle 0x100aaee9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100aaee9
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 0e18h]
        ; Exact mapped bytes EB 02: jmp 0x100aaeeb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 10bh]
        push 40h
        push ecx
        lea ecx, [ebx + 0eh]
        push ecx
        push edx
        mov edx, dword ptr [esi + 94h]
        mov ecx, eax
        push edx
        push 0
        push 3e8h
        push 0
        ; Exact mapped bytes E8 50 F0 F7 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100aaf16
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov dword ptr [esi + 184h], edi
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 96 00: add ax, 0x96
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x00
        test ecx, ecx
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100aaf3a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 66 40 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aaf47
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B9 3F 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 52 18 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 14h
        ; Exact mapped bytes 74 4F: je 0x100aafad
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 387h
        ; Exact mapped bytes 7E 12: jle 0x100aaf82
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100aaf82
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 0e1ch]
        ; Exact mapped bytes EB 02: jmp 0x100aaf84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 10bh]
        push 40h
        push ecx
        lea ecx, [ebx + 0eh]
        push ecx
        push edx
        mov edx, dword ptr [esi + 94h]
        mov ecx, eax
        push edx
        push 0
        push 3e8h
        push 0
        ; Exact mapped bytes E8 B7 EF F7 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xef
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100aafaf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov dword ptr [esi + 180h], edi
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 96 00: add ax, 0x96
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x00
        test ecx, ecx
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100aafd3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CD 3F 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100aafe0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 20 3F 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 B6 17 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x17
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 15h
        ; Exact mapped bytes 74 41: je 0x100ab03b
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100ab01b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ab01b
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x100ab01d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 11fh]
        push ecx
        lea ecx, [ebx + 14h]
        push ecx
        push 8
        push edx
        mov edx, dword ptr [esi + 94h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 57 42 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ab03d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes E8 4E 17 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x17
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 16h
        ; Exact mapped bytes 74 41: je 0x100ab0a3
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100ab083
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ab083
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x100ab085
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add ebp, 11fh
        add ebx, 5ah
        push ebp
        push ebx
        push 8
        push ecx
        mov ecx, dword ptr [esi + 94h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 EF 41 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ab0a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0e4h]
        lea ebp, [esi + 0e4h]
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0ech], eax
        ; Exact mapped bytes E8 9A 40 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push 101h
        ; Exact mapped bytes E8 8A 40 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        push 101h
        ; Exact mapped bytes E8 7A 40 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov ebx, 3
        mov edi, dword ptr [ebp]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab107
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 99 3E 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab114
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EC 3D 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        add ebp, 4
        dec ebx
        ; Exact mapped bytes 75 D1: jne 0x100ab0eb
        __asm _emit 0x75
        __asm _emit 0xd1
        push 74h
        ; Exact mapped bytes E8 7F 16 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x16
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 17h
        mov ebx, 2dh
        ; Exact mapped bytes 74 53: je 0x100ab189
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100ab156
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ab156
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 0b4h]
        ; Exact mapped bytes EB 02: jmp 0x100ab158
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 38h]
        push 40h
        add ecx, 12eh
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        add ecx, 0eh
        push ecx
        push edx
        mov edx, dword ptr [esi + 94h]
        mov ecx, eax
        push edx
        push 0
        push 3e8h
        push 0
        ; Exact mapped bytes E8 DB ED F7 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xed
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100ab18b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov dword ptr [esi + 18ch], edi
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 96 00: add ax, 0x96
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x00
        test ecx, ecx
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ab1af
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F1 3D 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab1bc
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 44 3D 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 DD 15 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 18h
        ; Exact mapped bytes 74 4E: je 0x100ab221
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100ab1f3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ab1f3
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 0b4h]
        ; Exact mapped bytes EB 02: jmp 0x100ab1f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 38h]
        push 40h
        add ecx, 48h
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        add ecx, 0eh
        push ecx
        push edx
        mov edx, dword ptr [esi + 94h]
        mov ecx, eax
        push edx
        push 0
        push 3e8h
        push 0
        ; Exact mapped bytes E8 41 ED F7 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xed
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ab223
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 17ch], eax
        xor ebx, ebx
        lea eax, [esi + 190h]
        lea ecx, [esi + 0f0h]
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esp + 14h], 3eh
        mov dword ptr [esp + 18h], 44h
        mov dword ptr [esp + 1ch], 4ah
        mov dword ptr [esp + 44h], ebx
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 3ch], ecx
        push 58h
        ; Exact mapped bytes E8 39 15 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 19h
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x100ab317
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x100ab29d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x100ab29d
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 180h
        ; Exact mapped bytes EB 02: jmp 0x100ab29f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 44h]
        mov ecx, dword ptr [esi + 94h]
        cdq
        and edx, 3
        push 40h
        add eax, edx
        push 0
        sar eax, 2
        push 0
        mov edx, dword ptr [esp + eax*4 + 20h]
        mov eax, dword ptr [esp + 44h]
        add edx, ebx
        lea eax, [edx + eax + 2]
        mov edx, dword ptr [esp + 40h]
        add edx, 15h
        push eax
        push edx
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 D9 36 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100ab319
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100ab319
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 40h]
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ecx - 48h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, dword ptr [ecx - 48h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab347
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 59 3C 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab354
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AC 3B 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 42 14 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        add esp, 4
        mov dword ptr [esp + 30h], ecx
        test ecx, ecx
        mov byte ptr [esp + 28h], 1ah
        ; Exact mapped bytes 74 52: je 0x100ab3c2
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes A1 98 57 1C 10: mov eax, dword ptr [0x101c5798]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100ab389
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edi, dword ptr [eax + 190h]
        test edi, edi
        ; Exact mapped bytes 75 02: jne 0x100ab38b
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edx, dword ptr [esp + eax*4 + 14h]
        mov eax, dword ptr [esp + 38h]
        add edx, ebx
        lea edx, [edx + eax + 2]
        mov eax, dword ptr [esp + 34h]
        add eax, 15h
        push edx
        mov edx, dword ptr [esi + 94h]
        push eax
        push 3
        push edi
        push edx
        ; Exact mapped bytes E8 D2 3E 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100ab3c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 3ch]
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ebp + 4], edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ab3e9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B7 3B 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab3f6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0A 3B 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        push 101h
        ; Exact mapped bytes E8 5D 3D 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 93 13 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x13
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        add esp, 4
        mov dword ptr [esp + 30h], ecx
        test ecx, ecx
        mov byte ptr [esp + 28h], 1bh
        ; Exact mapped bytes 74 52: je 0x100ab471
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes A1 98 57 1C 10: mov eax, dword ptr [0x101c5798]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100ab438
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edi, dword ptr [eax + 190h]
        test edi, edi
        ; Exact mapped bytes 75 02: jne 0x100ab43a
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        cdq
        and edx, 3
        add eax, edx
        mov edx, dword ptr [esp + 38h]
        sar eax, 2
        mov eax, dword ptr [esp + eax*4 + 14h]
        add eax, ebx
        lea eax, [eax + edx + 2]
        mov edx, dword ptr [esp + 34h]
        add edx, 54h
        push eax
        mov eax, dword ptr [esi + 94h]
        push edx
        push 4
        push edi
        push eax
        ; Exact mapped bytes E8 23 3E 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100ab473
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        test ecx, ecx
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ab494
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0C 3B 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab4a1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5F 3A 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 101h
        ; Exact mapped bytes E8 B2 3C 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 EB 12 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x12
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        add esp, 4
        mov dword ptr [esp + 30h], ecx
        test ecx, ecx
        mov byte ptr [esp + 28h], 1ch
        ; Exact mapped bytes 74 62: je 0x100ab529
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100ab4e7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ab4e7
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [eax + 0b0h]
        ; Exact mapped bytes EB 02: jmp 0x100ab4e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        push 40h
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edx, dword ptr [esp + eax*4 + 18h]
        mov eax, dword ptr [esp + 3ch]
        add edx, ebx
        lea edx, [edx + eax + 6]
        mov eax, dword ptr [esp + 38h]
        add eax, 74h
        push edx
        mov edx, dword ptr [esi + 94h]
        push eax
        push edi
        push edx
        push 0
        push 9c4h
        push 0
        ; Exact mapped bytes E8 3B EA F7 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xea
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100ab52b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 40h]
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ebp + 2ch], edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 33 00: add ax, 0x33
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x33
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ab550
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 50 3A 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab55d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A3 39 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 3C 12 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x12
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        add esp, 4
        mov dword ptr [esp + 40h], ecx
        test ecx, ecx
        mov byte ptr [esp + 28h], 1dh
        ; Exact mapped bytes 74 62: je 0x100ab5d8
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100ab596
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ab596
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [eax + 0b0h]
        ; Exact mapped bytes EB 02: jmp 0x100ab598
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        push 40h
        cdq
        and edx, 3
        add eax, edx
        mov edx, dword ptr [esp + 3ch]
        sar eax, 2
        mov eax, dword ptr [esp + eax*4 + 18h]
        add eax, ebx
        lea eax, [eax + edx + 6]
        mov edx, dword ptr [esp + 38h]
        add edx, 74h
        push eax
        mov eax, dword ptr [esi + 94h]
        push edx
        push edi
        push eax
        push 0
        push 9c4h
        push 0
        ; Exact mapped bytes E8 8C E9 F7 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100ab5da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        test ecx, ecx
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ab5fb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A5 39 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab608
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F8 38 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 80h
        ; Exact mapped bytes E8 0B 3B 05 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [esp + 3ch]
        add ebx, 0eh
        add ebp, 4
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esp + 44h]
        inc eax
        add edx, 8
        cmp ebx, 9ah
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 40h], ebp
        mov dword ptr [esp + 3ch], edx
        ; Exact mapped bytes 0F 8C 18 FC FF FF: jl 0x100ab260
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 4E 11 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 1eh
        ; Exact mapped bytes 74 3F: je 0x100ab6a1
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100ab67c
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x100ab67e
        __asm _emit 0x75
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 2ch
        push ecx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 78h
        push ecx
        push 3
        push edx
        mov edx, dword ptr [esi + 94h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F1 3B 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ab6a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 174h], eax
        ; Exact mapped bytes E8 A6 3A 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [esi + 174h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab6d9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C7 38 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab6e6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1A 38 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 B0 10 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 1fh
        ; Exact mapped bytes 74 49: je 0x100ab749
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100ab724
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ab724
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100ab726
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 3ch
        push ecx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 58h
        push ecx
        push 8
        push edx
        mov edx, dword ptr [esi + 94h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 49 3B 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ab74b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 178h], eax
        ; Exact mapped bytes E8 FE 39 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [esi + 178h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab781
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1F 38 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab78e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 72 37 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov edx, dword ptr [esp + 38h]
        and eax, 0e5f0h
        lea ecx, [esi + 0b4h]
        or ah, 5
        mov dword ptr [esp + 44h], ecx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        lea ebx, [edx + 0a4h]
        mov dword ptr [esp + 40h], 8
        push 70h
        ; Exact mapped bytes E8 DF 0F 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 28h], 20h
        ; Exact mapped bytes 74 6D: je 0x100ab840
        __asm _emit 0x74
        __asm _emit 0x6d
        lea ecx, [ebx + 10h]
        mov eax, dword ptr [esi + 94h]
        push 40h
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        ; Exact mapped bytes 8B 2D 98 56 1C 10: mov ebp, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ecx + 0c8h]
        add ecx, 0eh
        push edx
        push ebx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 B3 31 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 60h], 707070h
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 2ch], 21h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 6B 0F 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100ab842
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 44h]
        mov byte ptr [esp + 28h], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 96 00: add ax, 0x96
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ab866
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3A 37 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ab873
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8D 36 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 40h]
        add edx, 4
        add ebx, 0bh
        dec eax
        mov dword ptr [esp + 44h], edx
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 0F 85 2A FF FF FF: jne 0x100ab7ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 50h
        ; Exact mapped bytes E8 09 0F 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 22h
        ; Exact mapped bytes 74 1A: je 0x100ab8c1
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [esp + 34h]
        push 40h
        push 0
        push 0
        push ecx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F1 30 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100ab8c7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 34h]
        xor eax, eax
        mov dword ptr [esi + 1f0h], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        push 54h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 C1 0E 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x0e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 23h
        ; Exact mapped bytes 74 79: je 0x100ab96a
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 38fh
        ; Exact mapped bytes 7E 12: jle 0x100ab914
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ab914
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0e3ch]
        ; Exact mapped bytes EB 02: jmp 0x100ab916
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esi + 1f0h]
        push 40h
        push 0
        push 0
        push edx
        push ebp
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 80 30 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100ab966
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100ab96c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 1f8h], ecx
        ; Exact mapped bytes E8 DF 37 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 18 0E 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 24h
        ; Exact mapped bytes 74 79: je 0x100aba13
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 38eh
        ; Exact mapped bytes 7E 12: jle 0x100ab9bd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ab9bd
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0e38h]
        ; Exact mapped bytes EB 02: jmp 0x100ab9bf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esi + 1f0h]
        push 40h
        push 0
        push 0
        push edx
        push ebp
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 D7 2F 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100aba0f
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100aba15
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 1f4h], ecx
        ; Exact mapped bytes E8 36 37 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 0c44h
        mov ebp, 390h
        sub eax, esi
        mov dword ptr [esp + 44h], ebp
        lea ebx, [esi + 1fch]
        mov dword ptr [esp + 40h], eax
        push 54h
        ; Exact mapped bytes E8 55 0D 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 28h], 25h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100abae6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 19: jle 0x100aba87
        __asm _emit 0x7e
        __asm _emit 0x19
        test ebp, ebp
        ; Exact mapped bytes 7C 15: jl 0x100aba87
        __asm _emit 0x7c
        __asm _emit 0x15
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100aba87
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [esp + 40h]
        add edx, ebx
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100aba89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 1f0h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 09 2F 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100abade
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebp, dword ptr [esp + 44h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100abae8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [ebx], ecx
        ; Exact mapped bytes E8 67 36 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        add ebx, 4
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fff1h
        or edx, 1
        inc ebp
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov dword ptr [esp + 44h], ebp
        lea eax, [ebp - 390h]
        cmp eax, 20h
        ; Exact mapped bytes 0F 8C 21 FF FF FF: jl 0x100aba44
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 50h
        ; Exact mapped bytes E8 76 0C 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 26h
        ; Exact mapped bytes 74 1A: je 0x100abb54
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ebx, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5E 2E 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100abb5a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 38h]
        xor eax, eax
        mov dword ptr [esi + 27ch], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        push 54h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 2E 0C 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 27h
        ; Exact mapped bytes 74 7A: je 0x100abbfe
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 226h
        ; Exact mapped bytes 7E 12: jle 0x100abba7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100abba7
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 898h]
        ; Exact mapped bytes EB 02: jmp 0x100abba9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 27ch]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 ED 2D 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100abbfa
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100abc00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 284h], ecx
        ; Exact mapped bytes E8 4B 35 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 84 0B 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 28h
        ; Exact mapped bytes 74 7A: je 0x100abca8
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 227h
        ; Exact mapped bytes 7E 12: jle 0x100abc51
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100abc51
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 89ch]
        ; Exact mapped bytes EB 02: jmp 0x100abc53
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 27ch]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 43 2D 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100abca4
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100abcaa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 280h], ecx
        ; Exact mapped bytes E8 A1 34 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 D7 0A 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 29h
        ; Exact mapped bytes 74 42: je 0x100abd1b
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100abcfa
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100abcfa
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100abcfc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 50h]
        push edx
        mov edx, dword ptr [esp + 38h]
        add edx, 20h
        push edx
        push 9
        push ecx
        mov ecx, dword ptr [esi + 27ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 77 35 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100abd1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 2b4h], eax
        ; Exact mapped bytes E8 6E 0A 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 2ah
        ; Exact mapped bytes 74 42: je 0x100abd84
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100abd63
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100abd63
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100abd65
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 50h]
        push edx
        mov edx, dword ptr [esp + 38h]
        add edx, 70h
        push edx
        push 5
        push ecx
        mov ecx, dword ptr [esi + 27ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 0E 35 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100abd86
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 2b8h], eax
        ; Exact mapped bytes E8 08 0A 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 2bh
        ; Exact mapped bytes 74 7F: je 0x100abe29
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100abdc7
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 05: je 0x100abdc7
        __asm _emit 0x74
        __asm _emit 0x05
        add ebp, 40h
        ; Exact mapped bytes EB 02: jmp 0x100abdc9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 27ch]
        push 40h
        push 0
        lea edx, [ebx + 51h]
        push 0
        add ecx, 62h
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 C7 2B 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100abe2b
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100abe2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 288h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, dword ptr [esi + 288h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov byte ptr [esp + 28h], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100abe57
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 49 31 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100abe64
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9C 30 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 32 09 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 2ch
        ; Exact mapped bytes 74 42: je 0x100abec0
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100abe9f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100abe9f
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 8c0h]
        ; Exact mapped bytes EB 02: jmp 0x100abea1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 34h]
        add ebx, 7eh
        add ecx, 21h
        push ebx
        push ecx
        push 9
        push edx
        mov edx, dword ptr [esi + 27ch]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D2 33 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100abec2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [esi + 2b0h], eax
        lea eax, [esi + 290h]
        lea edi, [esi + 2bch]
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esp + 44h], eax
        lea ebx, [ecx + 0b6h]
        mov dword ptr [esp + 40h], edi
        mov dword ptr [esp + 3ch], 7
        ; Exact mapped bytes EB 04: jmp 0x100abef9
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 40h]
        push 0fch
        mov ebp, 0cbh
        ; Exact mapped bytes E8 98 08 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 2dh
        ; Exact mapped bytes 74 3E: je 0x100abf56
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x100abf38
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100abf38
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100abf3a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 34h]
        push ebx
        add ecx, 35h
        push ecx
        push 9
        push edx
        mov edx, dword ptr [esi + 27ch]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 3C 33 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100abf58
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [edi + 4], eax
        ; Exact mapped bytes E8 36 08 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 2eh
        ; Exact mapped bytes 74 3E: je 0x100abfb8
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x100abf9a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100abf9a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100abf9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 34h]
        push ebx
        add edx, 7ch
        push edx
        push 5
        push ecx
        mov ecx, dword ptr [esi + 27ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 DA 32 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100abfba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 D8 07 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 2fh
        ; Exact mapped bytes 74 78: je 0x100ac052
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 160h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0A: jle 0x100abff3
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 75 02: jne 0x100abff5
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 27ch]
        push 40h
        push 0
        push 0
        add edx, 6bh
        push ebx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 9E 29 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100ac054
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100ac054
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 44h]
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ecx], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, dword ptr [ecx]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ac07c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 24 2F 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ac089
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 77 2E 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esp + 44h]
        mov ecx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 3ch]
        add ebx, 0eh
        add edx, 4
        add ecx, 8
        dec eax
        mov dword ptr [esp + 44h], edx
        mov dword ptr [esp + 40h], ecx
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 85 44 FE FF FF: jne 0x100abef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 E5 06 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 30h
        ; Exact mapped bytes 74 4C: je 0x100ac117
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100ac0ef
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ac0ef
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100ac0f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [esp + 38h]
        lea ecx, [ebx + 120h]
        push ecx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 35h
        push ecx
        push 9
        push edx
        mov edx, dword ptr [esi + 27ch]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 7B 31 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100ac11d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 38h]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 2f4h], eax
        ; Exact mapped bytes E8 6E 06 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 28h], 31h
        ; Exact mapped bytes 74 48: je 0x100ac18a
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100ac166
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ac166
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100ac168
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 120h]
        push edx
        mov edx, dword ptr [esp + 38h]
        add edx, 7ch
        push edx
        push 5
        push ecx
        mov ecx, dword ptr [esi + 27ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 08 31 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ac18c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 2f8h], eax
        ; Exact mapped bytes E8 02 06 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 28h], 32h
        ; Exact mapped bytes 74 7E: je 0x100ac22e
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 160h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0A: jle 0x100ac1c9
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 75 02: jne 0x100ac1cb
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esi + 27ch]
        push 40h
        push 0
        add ebx, 120h
        push 0
        add edx, 6bh
        push ebx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 C2 27 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100ac230
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100ac230
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 2ach], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, dword ptr [esi + 2ach]
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        mov byte ptr [esp + 28h], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ac25c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 44 2D 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ac269
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 97 2C 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes 66 C7 86 FC 02 00 00 00 00: mov word ptr [esi + 0x2fc], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
