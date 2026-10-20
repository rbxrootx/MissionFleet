// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014EB0 .. +0x4C5 bytes.
extern "C" __declspec(naked) void FUN_10014eb0_10014EB0() {
    __asm {
        push -1
        push 1016d3cbh
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
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 24h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 38h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        push ebp
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 BB 9A 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9a
        __asm _emit 0x0e
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        ; Exact mapped bytes 66 8B 54 24 24: mov dx, word ptr [esp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10175400h
        ; Exact mapped bytes 66 89 96 A8 00 00 00: mov word ptr [esi + 0xa8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        ; Exact mapped bytes E8 82 78 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 23: je 0x10014f53
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        lea eax, [ebp + 2fh]
        push ebx
        add ecx, 22h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 68 9A 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x9a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10014f55
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 58h], edi
        ; Exact mapped bytes E8 3D 78 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 23: je 0x10014f98
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push ebx
        lea edx, [ebp + 2fh]
        push ebx
        add eax, 22h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 23 9A 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10014f9a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 5ch], edi
        ; Exact mapped bytes E8 F8 77 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x77
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 53: je 0x1001500d
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes A1 40 58 1C 10: mov eax, dword ptr [0x101c5840]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x10014fd5
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 75 04: jne 0x10014fd9
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [esp + 24h], ebx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        lea ecx, [ebp + 40h]
        push ebx
        add edx, 22h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BF 99 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x99
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov ecx, edi
        push eax
        mov byte ptr [esp + 20h], 4
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes E8 35 0B 00 00: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1001500f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes E8 83 77 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x77
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 5B: je 0x1001508a
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0bh
        ; Exact mapped bytes 7E 15: jle 0x10015052
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0B: je 0x10015052
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 2c0h
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes EB 04: jmp 0x10015056
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 24h], ebx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        lea ecx, [ebp + 3ah]
        push ebx
        add edx, 15h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 42 99 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x99
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov ecx, edi
        push eax
        mov byte ptr [esp + 20h], 6
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes E8 B8 0A 00 00: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1001508c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 06 77 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x77
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 5B: je 0x10015107
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0ah
        ; Exact mapped bytes 7E 15: jle 0x100150cf
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0B: je 0x100150cf
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 280h
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes EB 04: jmp 0x100150d3
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 24h], ebx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        lea ecx, [ebp + 3ah]
        push ebx
        add edx, 15h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C5 98 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov ecx, edi
        push eax
        mov byte ptr [esp + 20h], 8
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes E8 3B 0A 00 00: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10015109
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 89 76 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x76
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 59: je 0x10015182
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 41h
        ; Exact mapped bytes 7E 16: jle 0x1001514d
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x1001514d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [esp + 24h], ecx
        ; Exact mapped bytes EB 04: jmp 0x10015151
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 24h], ebx
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push ebx
        lea edx, [ebp + 2ch]
        push ebx
        add eax, 1fh
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 47 98 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        mov byte ptr [esp + 1ch], 0ah
        push ecx
        mov ecx, edi
        mov dword ptr [edi], 1017523ch
        ; Exact mapped bytes E8 80 09 00 00: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10015184
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 58h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 C8 9F 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov ecx, 0fffbh
        push 70h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 EE 75 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x75
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 4B: je 0x1001520f
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [esp + 2ch]
        push ebx
        push ebx
        lea edx, [ebp + 3ah]
        push 0ffd997h
        push edx
        lea ecx, [eax + 0a0h]
        lea edx, [ebp + 2eh]
        push ecx
        add eax, 3ah
        push edx
        push eax
        ; Exact mapped bytes A1 98 56 1C 10: mov eax, dword ptr [0x101c5698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, edi
        push eax
        push esi
        ; Exact mapped bytes E8 90 09 00 00: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        mov byte ptr [esp + 20h], 0ch
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 9B 75 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x75
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x10015211
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes E8 81 75 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x75
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 4B: je 0x1001527c
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [esp + 2ch]
        push ebx
        push ebx
        lea ecx, [ebp + 48h]
        push 0ffffffh
        lea edx, [eax + 0a0h]
        push ecx
        add ebp, 3dh
        push edx
        add eax, 3ah
        push ebp
        push eax
        ; Exact mapped bytes A1 98 56 1C 10: mov eax, dword ptr [0x101c5698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, edi
        push eax
        push esi
        ; Exact mapped bytes E8 23 09 00 00: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        mov byte ptr [esp + 20h], 0eh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 2E 75 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x75
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x1001527e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 88h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 74h], edi
        mov dword ptr [esi + 78h], ebx
        mov dword ptr [esi + 7ch], ebx
        ; Exact mapped bytes 66 89 9E 9C 00 00 00: mov word ptr [esi + 0x9c], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 9E 00 00 00: mov word ptr [esi + 0x9e], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0a4h], ebx
        ; Exact mapped bytes E8 F7 74 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x74
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 14: je 0x100152cd
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 18h]
        mov edx, dword ptr [esi + 14h]
        push ecx
        push edx
        push 0ah
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F5 C5 FF FF: call 0x100118c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100152cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0ach], eax
        mov dword ptr [eax + 80h], esi
        mov edi, dword ptr [esi + 0ach]
        mov byte ptr [esp + 1ch], bl
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 D0 07: mov word ptr [edi + 0x26], 0x7d0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x07
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100152f8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A8 9C 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x9c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10015305
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FB 9B 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        pop edi
        mov dword ptr [eax + 78h], 64h
        mov eax, dword ptr [esi + 0ach]
        mov dword ptr [eax + 6ch], 78h
        mov dword ptr [eax + 70h], 82h
        mov ecx, dword ptr [esi + 0ach]
        mov dword ptr [ecx + 68h], 12ch
        mov edx, dword ptr [esi + 0ach]
        lea ecx, [esi + 14h]
        ; Exact mapped bytes 66 C7 42 7C 14 00: mov word ptr [edx + 0x7c], 0x14
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x7c
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        add eax, 14h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esp + 10h]
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
