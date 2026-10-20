// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10085A00 .. +0x43A bytes.
extern "C" __declspec(naked) void FUN_10085a00_10085A00() {
    __asm {
        push -1
        push 10170115h
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
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebp
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 6B 8F 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor eax, eax
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi], 10175e28h
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 34h], 73h
        mov eax, dword ptr [ecx + 50h]
        mov dword ptr [esp + 38h], 1cch
        mov dword ptr [esi + 60h], eax
        push 54h
        ; Exact mapped bytes E8 18 6D 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 7E: je 0x10085b18
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 34h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1B: jle 0x10085ac4
        __asm _emit 0x7e
        __asm _emit 0x1b
        test ecx, ecx
        ; Exact mapped bytes 7C 17: jl 0x10085ac4
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10085ac4
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [edx + eax]
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes EB 08: jmp 0x10085acc
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 30h], 0
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D4 8E 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x10085b1a
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10085b1a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + eax - 168h], edi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 34h]
        inc eax
        mov dword ptr [esp + 34h], eax
        add eax, -73h
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3B FF FF FF: jl 0x10085a81
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        push 0fffffeffh
        ; Exact mapped bytes E8 0D 96 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 101h
        ; Exact mapped bytes E8 00 96 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 39 6C 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 54: je 0x10085bcd
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        push 0
        lea ecx, [ebp + 0a7h]
        push 0ffffffh
        lea edx, [ebx + 20dh]
        push ecx
        lea eax, [ebp + 9ah]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 182h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D3 FF F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 DE 6B 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10085bcf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 C2 6B 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 54: je 0x10085c44
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        push 0
        lea eax, [ebp + 0bbh]
        push 0ffffffh
        lea ecx, [ebx + 20dh]
        push eax
        lea edx, [ebp + 0aeh]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebx + 182h]
        push edx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5C FF F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 5
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 67 6B 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10085c46
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes E8 4B 6B 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 53: je 0x10085cba
        __asm _emit 0x74
        __asm _emit 0x53
        push 0
        push 0
        lea edx, [ebp + 0e9h]
        push 0ffffffh
        lea eax, [ebx + 20dh]
        push edx
        lea ecx, [ebp + 0dch]
        push eax
        ; Exact mapped bytes A1 9C 56 1C 10: mov eax, dword ptr [0x101c569c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 182h]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E6 FE F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 7
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 F1 6A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10085cbc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 D5 6A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 54: je 0x10085d31
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        push 0
        lea ecx, [ebp + 0fdh]
        push 0ffffffh
        lea edx, [ebx + 20dh]
        push ecx
        lea eax, [ebp + 0f0h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 182h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6F FE F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 9
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 7A 6A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10085d33
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 5B 6A 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 49: je 0x10085d9e
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 12: jle 0x10085d73
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10085d73
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 540h
        ; Exact mapped bytes EB 02: jmp 0x10085d75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 157h]
        push 40h
        push edx
        lea edx, [ebx + 1dch]
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
        ; Exact mapped bytes E8 24 15 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10085da0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 EE 69 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x69
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 49: je 0x10085e0b
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 16h
        ; Exact mapped bytes 7E 12: jle 0x10085de0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10085de0
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 580h
        ; Exact mapped bytes EB 02: jmp 0x10085de2
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
        add ebp, 157h
        push 40h
        add ebx, 1ffh
        push ebp
        push ebx
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
        ; Exact mapped bytes E8 B7 14 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x14
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10085e0d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        or ah, 5
        pop edi
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
