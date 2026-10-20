// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BDB80 .. +0x35A bytes.
extern "C" __declspec(naked) void FUN_100bdb80_100BDB80() {
    __asm {
        push -1
        push 1017229fh
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
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 1ch]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 2ch]
        push edi
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 20 A1 F8 FF: call 0x10047ce0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 1017622ch
        ; Exact mapped bytes E8 CD EB 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xeb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 73: je 0x100bdc58
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 72h
        ; Exact mapped bytes 7E 12: jle 0x100bdc05
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100bdc05
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1c8h]
        ; Exact mapped bytes EB 02: jmp 0x100bdc07
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push -1
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 93 0D 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100bdc54
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
        ; Exact mapped bytes EB 02: jmp 0x100bdc5a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 7ch], ecx
        ; Exact mapped bytes E8 F5 14 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 25 EB 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xeb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 73: je 0x100bdd00
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 73h
        ; Exact mapped bytes 7E 12: jle 0x100bdcad
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100bdcad
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1cch]
        ; Exact mapped bytes EB 02: jmp 0x100bdcaf
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
        ; Exact mapped bytes E8 EB 0C 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100bdcfc
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
        ; Exact mapped bytes EB 02: jmp 0x100bdd02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 80h], ecx
        ; Exact mapped bytes E8 4A 14 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 77 EA 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7F: je 0x100bddba
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9ah
        ; Exact mapped bytes 7E 12: jle 0x100bdd5e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100bdd5e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 268h]
        ; Exact mapped bytes EB 02: jmp 0x100bdd60
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        add ecx, 1eh
        push ebx
        add edx, 2b7h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 31 0C 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100bddb6
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
        ; Exact mapped bytes EB 02: jmp 0x100bddbc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 84h], ecx
        ; Exact mapped bytes E8 90 13 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 BA E9 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 4
        mov edi, 23h
        ; Exact mapped bytes 74 3F: je 0x100bde3a
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100bde1b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100bde1b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100bde1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        add edx, 5
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 28h
        push edx
        push 0ah
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 58 14 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100bde3c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 0E 13 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 44 E9 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 3F: je 0x100bdeab
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100bde8c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100bde8c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100bde8e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        add edx, 11h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 28h
        push edx
        push 0ah
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E7 13 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100bdead
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 9D 12 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
