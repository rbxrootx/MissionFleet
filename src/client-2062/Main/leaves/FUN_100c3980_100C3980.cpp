// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C3980 .. +0x38D bytes.
extern "C" __declspec(naked) void FUN_100c3980_100C3980() {
    __asm {
        push -1
        push 101725cfh
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
        mov ebx, dword ptr [esp + 1ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 EB AF 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor ebp, ebp
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        push 198h
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esi], 101762d0h
        ; Exact mapped bytes E8 B1 8D 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 0F: je 0x100c3a0e
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebp
        push 101ac168h
        mov ecx, eax
        ; Exact mapped bytes E8 B4 C0 03 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c3a10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 81 8D 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 61: je 0x100c3a92
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 0E: jle 0x100c3a4a
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 04: je 0x100c3a4a
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebx, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100c3a4c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 40h
        push ebp
        push ebp
        push ebp
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 56 AF 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100c3a94
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebx]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100c3a94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 80h
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 78 B6 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [esi + 68h]
        mov ebx, 1
        mov dword ptr [esp + 38h], 4
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 DD 8C 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 6F: je 0x100c3b44
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100c3af7
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100c3af7
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100c3af7
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100c3af9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A5 AE 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100c3b46
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
        ; Exact mapped bytes EB 02: jmp 0x100c3b46
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        mov edi, dword ptr [esp + 38h]
        add edi, 4
        add eax, 4
        inc ebx
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 34h], eax
        lea ecx, [ebx - 1]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 4C FF FF FF: jl 0x100c3abc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        push 0fffffeffh
        ; Exact mapped bytes E8 E3 B5 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 101h
        ; Exact mapped bytes E8 D6 B5 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [esi + 70h]
        mov ebx, 3
        mov dword ptr [esp + 38h], 0ch
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 FB 8B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 6F: je 0x100c3c26
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100c3bd9
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100c3bd9
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100c3bd9
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100c3bdb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C3 AD 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100c3c28
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100c3c28
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        mov edi, dword ptr [esp + 38h]
        add edi, 4
        add eax, 4
        inc ebx
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 34h], eax
        lea edx, [ebx - 3]
        cmp edx, 2
        ; Exact mapped bytes 0F 8C 4C FF FF FF: jl 0x100c3b9e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        push 0fffffeffh
        ; Exact mapped bytes E8 01 B5 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 101h
        ; Exact mapped bytes E8 F4 B4 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 2A 8B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 4A: je 0x100c3cd0
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100c3c9d
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100c3c9f
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        add edx, 1d1h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 217h
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
        ; Exact mapped bytes E8 F2 35 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x35
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c3cd2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 7A B4 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        pop edi
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
