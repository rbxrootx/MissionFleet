// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F43B0 .. +0x136C bytes.
extern "C" __declspec(naked) void FUN_100f43b0_100F43B0() {
    __asm {
        push -1
        push 101742e6h
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
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 BB A5 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        xor eax, eax
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        push 54h
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esi], 1017662ch
        ; Exact mapped bytes E8 7E 83 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 7B: je 0x100f44af
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0f2h
        ; Exact mapped bytes 7E 12: jle 0x100f4457
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100f4457
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 3c8h]
        ; Exact mapped bytes EB 02: jmp 0x100f4459
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 1f4h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 40 A5 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100f44a7
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
        mov ebp, dword ptr [esp + 28h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100f44b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], ecx
        ; Exact mapped bytes E8 9D AC 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D6 82 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 75: je 0x100f4551
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3
        ; Exact mapped bytes 7E 0F: jle 0x100f44f9
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100f44f9
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x100f44fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 1feh
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 9E A4 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100f4549
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
        mov ebp, dword ptr [esp + 28h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100f4553
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0dch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], ecx
        ; Exact mapped bytes E8 BB AB 00 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 34 82 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 75: je 0x100f45f3
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 BC 57 1C 10: mov eax, dword ptr [0x101c57bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x100f459b
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100f459b
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100f459d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 3fch
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FC A3 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100f45eb
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
        mov ebp, dword ptr [esp + 28h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100f45f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes E8 59 AB 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 92 81 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 79: je 0x100f4699
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0f3h
        ; Exact mapped bytes 7E 12: jle 0x100f4643
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100f4643
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 3cch]
        ; Exact mapped bytes EB 02: jmp 0x100f4645
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 406h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 54 A3 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100f4693
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100f469b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 F3 80 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 66: je 0x100f4723
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1bh
        ; Exact mapped bytes 7E 12: jle 0x100f46de
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f46de
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 6c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f46e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 15h
        ; Exact mapped bytes 7E 0F: jle 0x100f46fe
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100f46fe
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes EB 02: jmp 0x100f4700
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edi, [ebx + 0ch]
        push 3e8h
        push edi
        lea edi, [ebp + 0aah]
        push edi
        push edx
        push esi
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 9F 2B F2 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2b
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f4725
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 118h], eax
        ; Exact mapped bytes E8 66 80 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 4F: je 0x100f4799
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 12: jle 0x100f476b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f476b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 700h
        ; Exact mapped bytes EB 02: jmp 0x100f476d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 149h]
        push 3e8h
        push edx
        lea edx, [ebp + 0b4h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 29 2B F2 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2b
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f479b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 110h], eax
        ; Exact mapped bytes E8 F0 7F 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 4F: je 0x100f480f
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1dh
        ; Exact mapped bytes 7E 12: jle 0x100f47e1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f47e1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 740h
        ; Exact mapped bytes EB 02: jmp 0x100f47e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 149h]
        push 3e8h
        push edx
        lea edx, [ebp + 92h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 B3 2A F2 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2a
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f4811
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 114h], eax
        ; Exact mapped bytes E8 7A 7F 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 45: je 0x100f487b
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D BC 57 1C 10: mov ecx, dword ptr [0x101c57bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100f4850
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100f4852
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 149h]
        push 3e8h
        push edx
        lea edx, [ebp + 61h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 47 2A F2 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2a
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f487d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 118h]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 10ch], eax
        ; Exact mapped bytes E8 C8 A8 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 110h]
        push 101h
        ; Exact mapped bytes E8 B8 A8 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        push 101h
        ; Exact mapped bytes E8 A8 A8 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 E1 7E 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 2C: je 0x100f48fd
        __asm _emit 0x74
        __asm _emit 0x2c
        push 316h
        push 0
        lea eax, [ebx + 0ech]
        push 0
        lea ecx, [ebp + 28h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C3 A0 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x100f48ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E8 92 7E 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 2C: je 0x100f494c
        __asm _emit 0x74
        __asm _emit 0x2c
        push 316h
        push 0
        lea edx, [ebx + 127h]
        push 0
        lea eax, [ebp + 2dh]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 74 A0 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x100f494e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 74h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 43 7E 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 43: je 0x100f49b0
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        test edx, edx
        ; Exact mapped bytes 7E 0E: jle 0x100f498b
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100f498b
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x100f498d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 42h]
        push 320h
        push edx
        lea edx, [ebp + 11h]
        push edx
        push ecx
        push esi
        push 0
        push 0fa0h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 B4 55 F3 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f49b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 80h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f49d0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D0 A5 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f49dd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 23 A5 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 BC 7D 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 43: je 0x100f4a37
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 164h]
        test edx, edx
        ; Exact mapped bytes 7E 0E: jle 0x100f4a12
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100f4a12
        __asm _emit 0x74
        __asm _emit 0x04
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x100f4a14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 59h]
        push 320h
        push ecx
        lea ecx, [ebp + 11h]
        push ecx
        push edx
        push esi
        push 0
        push 0fa0h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 2D 55 F3 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f4a39
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 84h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f4a57
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 49 A5 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4a64
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9C A4 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 35 7D 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 43: je 0x100f4abe
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 9
        ; Exact mapped bytes 7E 0F: jle 0x100f4a99
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100f4a99
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 24h]
        ; Exact mapped bytes EB 02: jmp 0x100f4a9b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 42h]
        push 320h
        push ecx
        lea ecx, [ebp + 11h]
        push ecx
        push edx
        push esi
        push 0
        push 0fa0h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 A6 54 F3 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x54
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f4ac0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 88h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 21 03: mov word ptr [edi + 0x26], 0x321
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x21
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f4ade
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C2 A4 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4aeb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 15 A4 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 AE 7C 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 4A: je 0x100f4b4e
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        lea edx, [ebx + 61h]
        push 0ffffffh
        lea eax, [ebp + 0ceh]
        push edx
        lea ecx, [ebx + 11h]
        push eax
        ; Exact mapped bytes A1 A8 56 1C 10: mov eax, dword ptr [0x101c56a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 14h]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 52 10 F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x10
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0fh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 5D 7C 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100f4b50
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0b0h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f4b6e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 32 A4 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4b7b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 85 A3 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 1E 7C 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 4B: je 0x100f4bdf
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0
        lea ecx, [ebx + 64h]
        push 0ffffffh
        lea edx, [ebp + 0ceh]
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebx + 21h]
        push edx
        add ebp, 32h
        push eax
        push ebp
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C1 0F F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x0f
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 11h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 CC 7B 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100f4be1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0b4h], edi
        mov ecx, dword ptr [edi + 40h]
        mov ebp, 320h
        mov byte ptr [esp + 1ch], 0
        test ecx, ecx
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100f4c02
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9E A3 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4c0f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F1 A2 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        push 68h
        ; Exact mapped bytes E8 8A 7B 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 12: je 0x100f4c38
        __asm _emit 0x74
        __asm _emit 0x12
        push 40h
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2C F4 FF FF: call 0x100f4060
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f4c3a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 8ch], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100f4c56
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4A A3 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4c63
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9D A2 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 33 7B 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 13h
        mov ebp, 23h
        ; Exact mapped bytes 74 3D: je 0x100f4cbf
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x100f4ca2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f4ca2
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 8c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f4ca4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 34h]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 64h
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D5 A5 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f4cc1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0bch], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f4cdf
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C1 A2 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4cec
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 14 A2 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 64 A4 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 8E 7A 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 40: je 0x100f4d62
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x100f4d42
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f4d42
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100f4d44
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 28h]
        lea edx, [ebx + 34h]
        push edx
        lea edx, [ebp + 96h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 32 A5 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 06: jmp 0x100f4d68
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 28h]
        xor edi, edi
        mov dword ptr [esi + 0c0h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f4d86
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1A A2 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4d93
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6D A1 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 BD A3 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        push 70h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 EA 79 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 51: je 0x100f4e19
        __asm _emit 0x74
        __asm _emit 0x51
        push 0
        push 0
        lea eax, [ebx + 0eeh]
        push 0ffffffh
        lea ecx, [ebp + 15fh]
        push eax
        lea edx, [ebx + 0d2h]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebp + 37h]
        push edx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 87 0D F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 16h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 92 79 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100f4e1b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0f0h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f4e39
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 67 A1 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4e46
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BA A0 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 50 79 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 43: je 0x100f4ea3
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f4e84
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f4e84
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f4e86
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 0eah]
        push ecx
        lea ecx, [ebp + 93h]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F1 A3 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f4ea5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0f8h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f4ec3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DD A0 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4ed0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 30 A0 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 C6 78 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 43: je 0x100f4f2d
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f4f0e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f4f0e
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f4f10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 0f6h]
        push ecx
        lea ecx, [ebp + 93h]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 67 A3 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f4f2f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0fch], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f4f4d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 53 A0 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4f5a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A6 9F 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 3F 78 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 50: je 0x100f4fc3
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        lea edx, [ebx + 12ch]
        push 0ffffffh
        lea eax, [ebp + 15fh]
        push edx
        lea ecx, [ebx + 118h]
        push eax
        ; Exact mapped bytes A1 9C 56 1C 10: mov eax, dword ptr [0x101c569c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 37h]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DD 0B F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0b
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 1ah
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 E8 77 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100f4fc5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0f4h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f4fe3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BD 9F 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f4ff0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 10 9F 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 A6 77 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 74 43: je 0x100f504d
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f502e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f502e
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f5030
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 129h]
        push ecx
        lea ecx, [ebp + 93h]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 47 A2 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f504f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 100h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f506d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 33 9F 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f507a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 86 9E 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 1C 77 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1ch
        ; Exact mapped bytes 74 43: je 0x100f50d7
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f50b8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f50b8
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f50ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 136h]
        push ecx
        lea ecx, [ebp + 89h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BD A1 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f50d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 108h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f50f7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A9 9E 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f5104
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FC 9D 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 92 76 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1dh
        ; Exact mapped bytes 74 43: je 0x100f5161
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f5142
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f5142
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f5144
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 136h]
        push ecx
        lea ecx, [ebp + 93h]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 33 A1 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f5163
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 104h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f5181
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1F 9E 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f518e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 72 9D 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 0B 76 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1eh
        ; Exact mapped bytes 74 50: je 0x100f51f7
        __asm _emit 0x74
        __asm _emit 0x50
        push 141414h
        push 0
        lea edx, [ebx + 23h]
        push 0ffffffh
        lea eax, [ebp + 0d2h]
        push edx
        lea ecx, [ebx + 11h]
        push eax
        ; Exact mapped bytes A1 98 56 1C 10: mov eax, dword ptr [0x101c5698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 87h]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A9 09 F2 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0xf2
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 1fh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 B4 75 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100f51f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0b8h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f5217
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 89 9D 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f5224
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DC 9C 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 72 75 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 20h
        ; Exact mapped bytes 74 3D: je 0x100f527b
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f5262
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f5262
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f5264
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 62h]
        push ecx
        lea ecx, [ebp + 4eh]
        push ecx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 19 A0 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f527d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d4h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f529b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 05 9D 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f52a8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 58 9C 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        push 101h
        ; Exact mapped bytes E8 A8 9E 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d4h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 D2 74 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 21h
        ; Exact mapped bytes 74 40: je 0x100f531e
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f5302
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f5302
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100f5304
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add ebx, 62h
        add ebp, 80h
        push ebx
        push ebp
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 76 9F 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f5320
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d0h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f533e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 62 9C 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f534b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B5 9B 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        push 101h
        ; Exact mapped bytes E8 05 9E 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        mov edx, dword ptr [esp + 2ch]
        lea ebp, [esi + 0c8h]
        mov dword ptr [esp + 34h], 2
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esp + 28h]
        add eax, 64h
        lea ebx, [edx + 94h]
        mov dword ptr [esp + 38h], eax
        push 0fch
        ; Exact mapped bytes E8 0C 74 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 22h
        ; Exact mapped bytes 74 3F: je 0x100f53e3
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100f53c5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f53c5
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 8c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f53c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 4bh
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B1 9E 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f53e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f5400
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A0 9B 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f540d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F3 9A 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 101h
        ; Exact mapped bytes E8 46 9D 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 73 73 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x73
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 23h
        ; Exact mapped bytes 74 3E: je 0x100f547b
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f5461
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f5461
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100f5463
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 28h]
        push ebx
        add edx, 4eh
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 19 9E 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f547d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp + 18h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f5498
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 08 9B 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f54a5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5B 9A 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 F1 72 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x72
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 24h
        ; Exact mapped bytes 74 41: je 0x100f5500
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f54e3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f54e3
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f54e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 28h]
        push ebx
        add ecx, 85h
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 94 9D 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f5502
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp + 20h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f551d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 83 9A 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f552a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D6 99 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        push 101h
        ; Exact mapped bytes E8 29 9C 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 20h]
        push 101h
        ; Exact mapped bytes E8 1C 9C 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        add edi, 32h
        add ebp, 4
        add ebx, 0eh
        dec eax
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 26 FE FF FF: jne 0x100f538a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 32 72 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x72
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 25h
        ; Exact mapped bytes 74 46: je 0x100f55c4
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f55a2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f55a2
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f55a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 87h
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 3ch
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CE 9C 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100f55c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 C5 71 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 26h
        ; Exact mapped bytes 74 46: je 0x100f5631
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100f560f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f560f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100f5611
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add edx, 0b0h
        push edx
        mov edx, dword ptr [esp + 2ch]
        add edx, 3ch
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 61 9C 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100f5633
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0d8h]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 12 9B 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        push 101h
        ; Exact mapped bytes E8 02 9B 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d8h]
        mov ebx, 320h
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f567a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 26 99 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f5687
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 79 98 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0dch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f569e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 02 99 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f56ab
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 55 98 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 EE 70 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 27h
        ; Exact mapped bytes 74 32: je 0x100f56f4
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 15 E8 57 1C 10: mov edx, dword ptr [0x101c57e8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 170h], 7
        ; Exact mapped bytes 7E 17: jle 0x100f56e8
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [edx + 194h]
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x100f56e8
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [edx + 1ch]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 CA DE 00 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x100f56f6
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor edx, edx
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 BE DE 00 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100f56f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 11ch], eax
        ; Exact mapped bytes 66 C7 86 20 01 00 00 01 00: mov word ptr [esi + 0x120], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
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
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
