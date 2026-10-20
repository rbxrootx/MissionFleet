// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B57C0 .. +0x7AC bytes.
extern "C" __declspec(naked) void FUN_100b57c0_100B57C0() {
    __asm {
        push -1
        push 10171eb4h
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
        ; Exact mapped bytes E8 AB 91 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor eax, eax
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov ecx, dword ptr [esp + 3ch]
        push 54h
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esi], 101761bch
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes E8 6D 6F 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 74: je 0x100b58b9
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 41h
        ; Exact mapped bytes 7E 12: jle 0x100b5863
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b5863
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 104h]
        ; Exact mapped bytes EB 02: jmp 0x100b5865
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 28h]
        push edx
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 34 91 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100b58b3
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100b58bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 91 98 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 CA 6E 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 74: je 0x100b595c
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 42h
        ; Exact mapped bytes 7E 12: jle 0x100b5906
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b5906
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 108h]
        ; Exact mapped bytes EB 02: jmp 0x100b5908
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 28h]
        push eax
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 91 90 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100b5956
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
        ; Exact mapped bytes EB 02: jmp 0x100b595e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0c8h
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 AE 97 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 27 6E 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 24: je 0x100b59af
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 38h]
        push ecx
        push 0
        push 0
        push ebx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 12 90 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100b59b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], ecx
        ; Exact mapped bytes E8 9D 97 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D6 6D 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 24: je 0x100b5a00
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [esp + 38h]
        mov ecx, edi
        push edx
        push 0
        push 0
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes E8 C1 8F 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100b5a02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], ecx
        ; Exact mapped bytes E8 4C 97 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 85 6D 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 7A: je 0x100b5aa7
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 47h
        ; Exact mapped bytes 7E 12: jle 0x100b5a4b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b5a4b
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 11ch]
        ; Exact mapped bytes EB 02: jmp 0x100b5a4d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 28h]
        push eax
        push 0
        lea ecx, [ebx + 10h]
        push 0
        add edx, 6ah
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 46 8F 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100b5aa1
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100b5aa9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 A3 96 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 D9 6C 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 46: je 0x100b5b1d
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x100b5af5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b5af5
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x100b5af7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 38h]
        lea edx, [ebx + 10h]
        push edi
        push edx
        lea edx, [ebp + 6ah]
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
        ; Exact mapped bytes E8 A5 17 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100b5b23
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 38h]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 29 96 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 5F 6C 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 42: je 0x100b5b93
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x100b5b6f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b5b6f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x100b5b71
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 21h]
        push edi
        push edx
        lea edx, [ebp + 6ah]
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
        ; Exact mapped bytes E8 2F 17 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b5b95
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 B7 95 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 ED 6B 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 42: je 0x100b5c05
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x100b5be1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b5be1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x100b5be3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 32h]
        push edi
        push edx
        lea edx, [ebp + 6ah]
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
        ; Exact mapped bytes E8 BD 16 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b5c07
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 42 95 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 78 6B 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 42: je 0x100b5c7a
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x100b5c56
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b5c56
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x100b5c58
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 43h]
        push edi
        push edx
        lea edx, [ebp + 6ah]
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
        ; Exact mapped bytes E8 48 16 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b5c7c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 CD 94 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 03 6B 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 42: je 0x100b5cef
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x100b5ccb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b5ccb
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x100b5ccd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, 54h
        push edi
        add ebp, 6ah
        push ebx
        push ebp
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
        ; Exact mapped bytes E8 D3 15 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x15
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b5cf1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 58 94 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov ebx, 64h
        add eax, 13h
        mov dword ptr [esp + 34h], 190h
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 2ch], eax
        push 54h
        ; Exact mapped bytes E8 75 6A 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x6a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 7D: je 0x100b5dba
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b5d61
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b5d61
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b5d61
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 34h]
        mov ebp, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x100b5d63
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 2ch]
        push edx
        push 0
        push 0
        add ecx, 74h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2F 8C 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b5dbc
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100b5dbc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 11h
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + eax - 104h], edi
        add eax, 4
        inc ebx
        mov dword ptr [esp + 2ch], ecx
        mov dword ptr [esp + 34h], eax
        lea ecx, [ebx - 64h]
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 39 FF FF FF: jne 0x100b5d24
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 30h]
        lea ebx, [esi + 9ch]
        mov dword ptr [esp + 2ch], 5
        push 70h
        ; Exact mapped bytes E8 9C 69 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x69
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 4E: je 0x100b5e64
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [esp + 28h]
        push 0
        push 0
        lea edx, [ebp + 0bh]
        push 0ffffffh
        lea ecx, [eax + 0bdh]
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        add eax, 85h
        push ebp
        push eax
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3C FD F5 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xf5
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0dh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 47 69 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x69
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100b5e66
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 44 24 38: mov ax, word ptr [esp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        mov dword ptr [ebx], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 1ch], 0
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100b5e83
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1D 91 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b5e90
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 70 90 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [esp + 2ch]
        add ebx, 4
        add ebp, 11h
        dec eax
        mov dword ptr [ecx + 54h], 6
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 0F 85 4F FF FF FF: jne 0x100b5dfd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100b5ece
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101abdb0h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100b5ece
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0a0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100b5ee8
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101abda8h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100b5ee8
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0a4h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100b5f02
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101abda0h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100b5f02
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0a8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100b5f1c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101abd98h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100b5f1c
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0ach]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100b5f36
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101abd90h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100b5f36
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 89 86 B0 00 00 00: mov word ptr [esi + 0xb0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        pop edi
        and eax, 0e5f0h
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, esi
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
