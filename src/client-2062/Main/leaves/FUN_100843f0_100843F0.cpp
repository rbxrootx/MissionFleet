// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100843F0 .. +0xA08 bytes.
extern "C" __declspec(naked) void FUN_100843f0_100843F0() {
    __asm {
        push -1
        push 10170072h
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
        sub esp, 8
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 24h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 38h]
        mov edi, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 79 A5 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        xor ebx, ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi], 10175e0ch
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esp + 38h], 66h
        mov eax, dword ptr [ecx + 50h]
        mov dword ptr [esp + 3ch], 198h
        mov dword ptr [esi + 60h], eax
        push 54h
        ; Exact mapped bytes E8 26 83 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 74 77: je 0x10084503
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 38h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x100844b2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100844b2
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x100844b2
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [eax + edx]
        ; Exact mapped bytes EB 02: jmp 0x100844b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E6 A4 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10084505
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
        ; Exact mapped bytes EB 02: jmp 0x10084505
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + eax - 134h], edi
        add eax, 4
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 38h]
        inc eax
        mov dword ptr [esp + 38h], eax
        add eax, -66h
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 43 FF FF FF: jl 0x10084473
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 30h]
        lea ecx, [esi + 6ch]
        mov dword ptr [esp + 34h], 2
        lea edx, [eax + 4fh]
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 3ch], edx
        lea edi, [eax + 9ch]
        push 90h
        ; Exact mapped bytes E8 42 82 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x82
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes 74 2C: je 0x1008459a
        __asm _emit 0x74
        __asm _emit 0x2c
        push ebx
        push ebx
        lea ecx, [ebp + 0beh]
        push 0ffffffh
        push ecx
        mov ecx, dword ptr [esp + 4ch]
        lea edx, [ebp + 83h]
        push edi
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E8 F5 07 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1008459c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 38h]
        add edi, 88h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 34h]
        add ecx, 4
        mov dword ptr [esp + 38h], ecx
        mov ecx, dword ptr [esp + 3ch]
        add ecx, 51h
        dec eax
        mov dword ptr [esp + 3ch], ecx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 75 8B: jne 0x10084554
        __asm _emit 0x75
        __asm _emit 0x8b
        push 0e8h
        ; Exact mapped bytes E8 CD 81 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes 74 36: je 0x10084619
        __asm _emit 0x74
        __asm _emit 0x36
        push ebx
        push ebx
        lea ecx, [ebp + 12ch]
        push 0ffffffh
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        lea edx, [ecx + 118h]
        add ecx, 53h
        push edx
        lea edx, [ebp + 0d0h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 39 43 F9 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1008461b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 77 81 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 4
        ; Exact mapped bytes 74 52: je 0x1008468d
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [esp + 2ch]
        push ebx
        push ebx
        lea edx, [ebp + 142h]
        push 0ffffffh
        lea ecx, [eax + 0c5h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 133h
        push ecx
        add eax, 4ch
        push ebp
        push eax
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 12 15 F9 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 24h], 5
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 1D 81 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x1008468f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 2ch]
        lea eax, [esi + 7ch]
        mov dword ptr [esp + 28h], eax
        mov ebp, 96h
        lea eax, [ecx + 0d6h]
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 78h], edi
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 3ch], 258h
        ; Exact mapped bytes EB 04: jmp 0x100846c2
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 38h]
        push 54h
        ; Exact mapped bytes E8 D7 80 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x80
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 6
        ; Exact mapped bytes 74 78: je 0x10084753
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 17: jle 0x100846fd
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ebp, ebx
        ; Exact mapped bytes 7C 13: jl 0x100846fd
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x100846fd
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [eax + edx]
        ; Exact mapped bytes EB 02: jmp 0x100846ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 34h]
        push 40h
        push ebx
        add eax, 157h
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 96 A2 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa2
        __asm _emit 0x07
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10084755
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
        ; Exact mapped bytes EB 02: jmp 0x10084755
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 3ch]
        mov ebp, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [ecx], edi
        add eax, 14h
        add ebp, 5
        add ecx, 4
        add edx, 23h
        cmp eax, 280h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 0F 8C 2C FF FF FF: jl 0x100846be
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 04 80 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x80
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 7
        ; Exact mapped bytes 74 51: je 0x100847fd
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 12: jle 0x100847ca
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100847ca
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [ecx + 540h]
        ; Exact mapped bytes EB 02: jmp 0x100847cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        add ecx, 157h
        push 40h
        add edx, 0d6h
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 C5 2A F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100847ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 8D 7F 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7f
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 8
        ; Exact mapped bytes 74 51: je 0x10084874
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 16h
        ; Exact mapped bytes 7E 12: jle 0x10084841
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10084841
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 580h
        ; Exact mapped bytes EB 02: jmp 0x10084843
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        push 40h
        add edx, 157h
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 0f9h
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
        ; Exact mapped bytes E8 4E 2A F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x2a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10084876
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 88h], eax
        mov eax, dword ptr [esi + 74h]
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esp + 38h], 68h
        ; Exact mapped bytes 66 C7 80 9C 00 00 00 20 00: mov word ptr [eax + 0x9c], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [esp + 3ch], 1a0h
        push 54h
        ; Exact mapped bytes E8 FD 7E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 9
        ; Exact mapped bytes 74 77: je 0x1008492c
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 38h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x100848db
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100848db
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x100848db
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x100848dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BD A0 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1008492e
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x1008492e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + eax - 114h], edi
        add eax, 4
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 38h]
        inc eax
        mov dword ptr [esp + 38h], eax
        add eax, -68h
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 43 FF FF FF: jl 0x1008489c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 94h]
        mov ebp, dword ptr [esp + 30h]
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 34h], 2
        lea ecx, [eax + 155h]
        lea edi, [eax + 198h]
        mov dword ptr [esp + 3ch], ecx
        push 90h
        ; Exact mapped bytes E8 13 7E 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7e
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0ah
        ; Exact mapped bytes 74 2C: je 0x100849c9
        __asm _emit 0x74
        __asm _emit 0x2c
        push ebx
        push ebx
        lea edx, [ebp + 0beh]
        push 0ffffffh
        push edx
        mov edx, dword ptr [esp + 4ch]
        lea ecx, [ebp + 83h]
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B9 F1 07 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100849cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 38h]
        add edi, 88h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 34h]
        add ecx, 4
        mov dword ptr [esp + 38h], ecx
        mov ecx, dword ptr [esp + 3ch]
        add ecx, 47h
        dec eax
        mov dword ptr [esp + 3ch], ecx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 75 8B: jne 0x10084983
        __asm _emit 0x75
        __asm _emit 0x8b
        push 0e8h
        ; Exact mapped bytes E8 9E 7D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0bh
        ; Exact mapped bytes 74 39: je 0x10084a4b
        __asm _emit 0x74
        __asm _emit 0x39
        push ebx
        push ebx
        lea edx, [ebp + 12ch]
        push 0ffffffh
        push edx
        mov edx, dword ptr [esp + 3ch]
        lea ecx, [edx + 21eh]
        add edx, 159h
        push ecx
        lea ecx, [ebp + 0d0h]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, eax
        push edx
        push ebx
        push esi
        ; Exact mapped bytes E8 07 3F F9 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3f
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10084a4d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 9ch], eax
        xor eax, eax
        mov dword ptr [esi + 0a0h], eax
        push 70h
        mov dword ptr [esi + 0a4h], eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 2E 7D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 0ch
        ; Exact mapped bytes 74 77: je 0x10084afb
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 3ch], ecx
        lea edx, [ebp + 142h]
        push 40h
        lea ecx, [eax + 1cbh]
        push edx
        add ebp, 133h
        push ecx
        add eax, 152h
        push ebp
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F9 9E 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 50h], edx
        mov dword ptr [edi + 64h], ebx
        mov dword ptr [edi + 68h], ebx
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], ebx
        push 80h
        mov byte ptr [esp + 24h], 0dh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 AF 7C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x10084afd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        lea eax, [esi + 0b0h]
        mov ebp, 96h
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [esp + 2ch]
        add eax, 1dch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0ach], edi
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 3ch], 258h
        ; Exact mapped bytes EB 04: jmp 0x10084b35
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 38h]
        push 54h
        ; Exact mapped bytes E8 64 7C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 0eh
        ; Exact mapped bytes 74 79: je 0x10084bc7
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 17: jle 0x10084b70
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ebp, ebx
        ; Exact mapped bytes 7C 13: jl 0x10084b70
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x10084b70
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x10084b72
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 34h]
        push 40h
        push ebx
        add edx, 157h
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 22 9E 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10084bc9
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x10084bc9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 3ch]
        mov ebp, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [ecx], edi
        add eax, 14h
        add ebp, 5
        add ecx, 4
        add edx, 23h
        cmp eax, 280h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 0F 8C 2B FF FF FF: jl 0x10084b31
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 90 7B 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x7b
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0fh
        ; Exact mapped bytes 74 51: je 0x10084c71
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [esi + 60h]
        cmp dword ptr [edx + 160h], 15h
        ; Exact mapped bytes 7E 12: jle 0x10084c3e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x10084c3e
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [edx + 540h]
        ; Exact mapped bytes EB 02: jmp 0x10084c40
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        add ecx, 157h
        push 40h
        add edx, 1dch
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 51 26 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x26
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10084c73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 19 7B 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x7b
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 10h
        ; Exact mapped bytes 74 51: je 0x10084ce8
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 16h
        ; Exact mapped bytes 7E 12: jle 0x10084cb5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10084cb5
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 580h
        ; Exact mapped bytes EB 02: jmp 0x10084cb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        push 40h
        add edx, 157h
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 1ffh
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
        ; Exact mapped bytes E8 DA 25 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x25
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10084cea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0bch], eax
        mov eax, dword ptr [esi + 9ch]
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 C7 80 9C 00 00 00 20 00: mov word ptr [eax + 0x9c], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 50 A4 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 40 A4 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ecx, 0fffdh
        lea edi, [esi + 0b0h]
        mov ebp, 2
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [edi - 34h]
        push 0fffffeffh
        ; Exact mapped bytes E8 12 A4 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 0fffffeffh
        ; Exact mapped bytes E8 06 A4 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E1: jne 0x10084d41
        __asm _emit 0x75
        __asm _emit 0xe1
        mov ecx, dword ptr [esi + 84h]
        push 101h
        ; Exact mapped bytes E8 F0 A3 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 101h
        ; Exact mapped bytes E8 E0 A3 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 101h
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 88h]
        mov dword ptr [edx + 50h], ebx
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes E8 BE A3 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 AE A3 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b8h]
        pop edi
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 0bch]
        mov eax, esi
        mov dword ptr [ecx + 50h], ebx
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and edx, 0e5f0h
        or dh, 5
        mov dword ptr [esi + 0c0h], ebx
        mov dword ptr [esi + 0c4h], ebx
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
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
        add esp, 14h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
