// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10056910 .. +0x18FF bytes.
extern "C" __declspec(naked) void FUN_10056910_10056910() {
    __asm {
        push -1
        push 1016f09ah
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
        mov ebx, dword ptr [esp + 28h]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 40h]
        mov edi, dword ptr [esp + 38h]
        push eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 59 80 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        xor ebx, ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 198h
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esi], 10175c10h
        ; Exact mapped bytes E8 19 5E 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x5e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes 74 0F: je 0x100569a6
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101aabd0h
        mov ecx, eax
        ; Exact mapped bytes E8 1C 91 0A 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100569a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes A3 C4 57 1C 10: mov dword ptr [0x101c57c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 E5 5D 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 2
        ; Exact mapped bytes 74 0F: je 0x100569da
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101aabbch
        mov ecx, eax
        ; Exact mapped bytes E8 E8 90 0A 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100569dc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes A3 C8 57 1C 10: mov dword ptr [0x101c57c8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B1 5D 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x5d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 3
        ; Exact mapped bytes 74 0F: je 0x10056a0e
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101aaba8h
        mov ecx, eax
        ; Exact mapped bytes E8 B4 90 0A 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x90
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10056a10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 124h
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes A3 B4 57 1C 10: mov dword ptr [0x101c57b4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 7D 5D 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x5d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 4
        ; Exact mapped bytes 74 16: je 0x10056a49
        __asm _emit 0x74
        __asm _emit 0x16
        push 40h
        push ebx
        push ebx
        push 0fffffeach
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6B D9 09 00: call 0x100f43b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10056a4b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d40h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 C7 47 26 26 04: mov word ptr [edi + 0x26], 0x426
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x26
        __asm _emit 0x04
        ; Exact mapped bytes 74 06: je 0x10056a68
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 38 85 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056a75
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8B 84 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d40h]
        mov ebp, 0fff0h
        push 418h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 12 5D 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 5
        ; Exact mapped bytes 74 14: je 0x10056ab2
        __asm _emit 0x74
        __asm _emit 0x14
        push 17dh
        push 320h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 60 04 0A 00: call 0x100f6f10
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10056ab4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d50h], eax
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        and ecx, 0e5ffh
        mov byte ptr [esp + 28h], bl
        or ch, 5
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0d50h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 28 04: mov word ptr [edi + 0x26], 0x428
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x28
        __asm _emit 0x04
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056ae8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B8 84 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056af5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0B 84 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d50h]
        push 198h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 97 5C 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x5c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 6
        ; Exact mapped bytes 74 0F: je 0x10056b28
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101aab8ch
        mov ecx, eax
        ; Exact mapped bytes E8 9A 8F 0A 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8f
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10056b2a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 310h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 62 5C 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 7
        ; Exact mapped bytes 74 17: je 0x10056b65
        __asm _emit 0x74
        __asm _emit 0x17
        push 40h
        push ebx
        push ebx
        push 0fffffe70h
        push 69h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AF DF FD FF: call 0x10034b10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10056b67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d44h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 C7 47 26 38 2B: mov word ptr [edi + 0x26], 0x2b38
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x38
        __asm _emit 0x2b
        ; Exact mapped bytes 74 06: je 0x10056b84
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1C 84 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056b91
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6F 83 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d44h]
        push 184h
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0e5ffh
        or dh, 5
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d44h]
        mov eax, dword ptr [esi + 90h]
        mov dword ptr [ecx + 68h], eax
        mov eax, dword ptr [esi + 0d44h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 D5 5B 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x5b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 8
        ; Exact mapped bytes 74 1A: je 0x10056bf5
        __asm _emit 0x74
        __asm _emit 0x1a
        push 40h
        push ebx
        push ebx
        push 17dh
        push 320h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2F 8C 05 00: call 0x100af820
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10056bf7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d48h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 C7 47 26 28 04: mov word ptr [edi + 0x26], 0x428
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x28
        __asm _emit 0x04
        ; Exact mapped bytes 74 06: je 0x10056c14
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8C 83 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056c21
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DF 82 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebp, 0ch
        cmp dword ptr [eax + 170h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x10056c42
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x10056c42
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 30h]
        ; Exact mapped bytes EB 02: jmp 0x10056c44
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0d48h]
        push eax
        push ebx
        ; Exact mapped bytes E8 EF 0A FF FF: call 0x10047740
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a8h
        ; Exact mapped bytes E8 45 5B 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x5b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 9
        ; Exact mapped bytes 74 1A: je 0x10056c85
        __asm _emit 0x74
        __asm _emit 0x1a
        push 40h
        push ebx
        push ebx
        push 14ah
        push 384h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4F D7 07 00: call 0x100d43d0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd7
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10056c87
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d4ch], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 C7 47 26 5A 04: mov word ptr [edi + 0x26], 0x45a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x5a
        __asm _emit 0x04
        ; Exact mapped bytes 74 06: je 0x10056ca4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FC 82 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056cb1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4F 82 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x10056ccd
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x10056ccd
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 30h]
        ; Exact mapped bytes EB 02: jmp 0x10056ccf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0d4ch]
        push eax
        push ebx
        ; Exact mapped bytes E8 64 0A FF FF: call 0x10047740
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0d4ch]
        mov ebp, 0fff0h
        push 0cch
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 AB 5A 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0ah
        ; Exact mapped bytes 74 18: je 0x10056d1d
        __asm _emit 0x74
        __asm _emit 0x18
        push 45ah
        push 28h
        push 320h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 97 D0 05 00: call 0x100b3db0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10056d1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d54h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 C7 47 26 FA 13: mov word ptr [edi + 0x26], 0x13fa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0x13
        ; Exact mapped bytes 74 06: je 0x10056d3c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 64 82 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056d49
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B7 81 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d54h]
        push 1bch
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 43 5A 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0bh
        ; Exact mapped bytes 74 15: je 0x10056d82
        __asm _emit 0x74
        __asm _emit 0x15
        push 61ch
        push 32h
        push 32h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C2 26 02 00: call 0x10079440
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10056d84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d5ch], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 C7 47 26 38 2B: mov word ptr [edi + 0x26], 0x2b38
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x38
        __asm _emit 0x2b
        ; Exact mapped bytes 74 06: je 0x10056da1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FF 81 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056dae
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 52 81 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d5ch]
        push 94h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 DE 59 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0ch
        ; Exact mapped bytes 74 1E: je 0x10056df0
        __asm _emit 0x74
        __asm _emit 0x1e
        push 40h
        push ebx
        push 61ch
        push 300h
        push 400h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F4 50 08 00: call 0x100dbee0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10056df2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d3ch], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 C7 47 26 8C 04: mov word ptr [edi + 0x26], 0x48c
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x8c
        __asm _emit 0x04
        ; Exact mapped bytes 74 06: je 0x10056e0f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 91 81 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056e1c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E4 80 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d3ch]
        push 684h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 70 59 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0dh
        ; Exact mapped bytes 74 12: je 0x10056e52
        __asm _emit 0x74
        __asm _emit 0x12
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 02 1D 04 00: call 0x10098b50
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10056e54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d60h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 C7 47 26 20 2F: mov word ptr [edi + 0x26], 0x2f20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x2f
        ; Exact mapped bytes 74 06: je 0x10056e71
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2F 81 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056e7e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 82 80 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 1B 59 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0eh
        ; Exact mapped bytes 74 1A: je 0x10056eaf
        __asm _emit 0x74
        __asm _emit 0x1a
        push 40h
        push ebx
        push ebx
        push 0f0h
        push 154h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 75 8C 07 00: call 0x100cfb20
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10056eb1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d64h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 C7 47 26 D8 3A: mov word ptr [edi + 0x26], 0x3ad8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xd8
        __asm _emit 0x3a
        ; Exact mapped bytes 74 06: je 0x10056ece
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D2 80 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056edb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 25 80 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0e8h
        ; Exact mapped bytes E8 BB 58 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x58
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 0fh
        ; Exact mapped bytes 74 16: je 0x10056f0b
        __asm _emit 0x74
        __asm _emit 0x16
        push 40h
        push ebx
        push ebx
        push ebx
        push 258h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A9 05 04 00: call 0x100974b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10056f0d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d68h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 66 C7 47 26 D4 2A: mov word ptr [edi + 0x26], 0x2ad4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xd4
        __asm _emit 0x2a
        ; Exact mapped bytes 74 06: je 0x10056f2a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 76 80 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10056f37
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C9 7F 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 5F 58 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x58
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 10h
        mov ebp, 19h
        ; Exact mapped bytes 74 5F: je 0x10056fb5
        __asm _emit 0x74
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x10056f72
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 04: je 0x10056f72
        __asm _emit 0x74
        __asm _emit 0x04
        mov edi, ecx
        ; Exact mapped bytes EB 02: jmp 0x10056f74
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x10056f91
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x10056f91
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x10056f93
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 121h
        push 1b8h
        push 0cfh
        push edi
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 0D 03 FC FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10056fb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 54ch], eax
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 28h], bl
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x10056fdf
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x10056fdf
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x10056fe1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 15 09 FC FF: call 0x10017900
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 AB 57 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x57
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 11h
        ; Exact mapped bytes 74 65: je 0x1005706a
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x10057026
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10057026
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 80h]
        ; Exact mapped bytes EB 02: jmp 0x10057028
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
        cmp dword ptr [ecx + 170h], 17h
        ; Exact mapped bytes 7E 0F: jle 0x10057046
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x10057046
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes EB 02: jmp 0x10057048
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 121h
        push 140h
        push 20dh
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 58 02 FC FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1005706c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 548h], eax
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 28h], bl
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x10057097
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10057097
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x10057099
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5D 08 FC FF: call 0x10017900
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 F3 56 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x56
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 12h
        ; Exact mapped bytes 74 64: je 0x10057121
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2bh
        ; Exact mapped bytes 7E 12: jle 0x100570de
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100570de
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 0ac0h]
        ; Exact mapped bytes EB 02: jmp 0x100570e0
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
        cmp dword ptr [ecx + 170h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x100570fd
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100570fd
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100570ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 121h
        push 1a9h
        push 1cch
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A1 01 FC FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10057123
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 544h], eax
        ; Exact mapped bytes E8 6C 56 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x56
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 13h
        ; Exact mapped bytes 74 7F: je 0x100571c5
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x10057166
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10057166
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 0b00h]
        ; Exact mapped bytes EB 02: jmp 0x10057168
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 544h]
        push 121h
        push ebx
        push ebx
        push 1a9h
        push 1cch
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 29 78 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100571c1
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100571c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 550h], ecx
        ; Exact mapped bytes E8 85 7F 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 550h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 550h]
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E8 A6 55 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x55
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 14h
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x10057291
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B8 57 1C 10: mov edx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 544h]
        mov ebp, dword ptr [edx + 164h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        cmp ebp, 115h
        ; Exact mapped bytes 7E 12: jle 0x10057242
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 18ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x10057242
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [edx + 454h]
        ; Exact mapped bytes EB 02: jmp 0x10057244
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 126h
        push ebx
        add ecx, 3
        push ebx
        push ecx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 58 77 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x77
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10057293
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
        ; Exact mapped bytes EB 02: jmp 0x10057293
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 568h], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 568h]
        push 101h
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes E8 AD 7E 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E6 54 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 15h
        ; Exact mapped bytes 74 7B: je 0x10057347
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 15 B8 57 1C 10: mov edx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 548h]
        mov ebp, dword ptr [edx + 164h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        cmp ebp, 13h
        ; Exact mapped bytes 7E 0F: jle 0x100572f8
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 18ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 05: je 0x100572f8
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [edx + 4ch]
        ; Exact mapped bytes EB 02: jmp 0x100572fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 126h
        push ebx
        add ecx, 3
        push ebx
        push ecx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A2 76 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10057349
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
        ; Exact mapped bytes EB 02: jmp 0x10057349
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 560h], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 560h]
        push 101h
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes E8 F7 7D 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 560h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 24 54 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 16h
        ; Exact mapped bytes 74 7C: je 0x1005740a
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 15 B8 57 1C 10: mov edx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 54ch]
        mov ebp, dword ptr [edx + 164h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        cmp ebp, 0ch
        ; Exact mapped bytes 7E 0F: jle 0x100573ba
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 18ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 05: je 0x100573ba
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [edx + 30h]
        ; Exact mapped bytes EB 02: jmp 0x100573bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 126h
        push ebx
        add ecx, 5
        push ebx
        inc eax
        push ecx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DF 75 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1005740c
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
        ; Exact mapped bytes EB 02: jmp 0x1005740c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 564h], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 564h]
        push 101h
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes E8 34 7D 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 564h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 5E 53 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x53
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 17h
        ; Exact mapped bytes 74 4B: je 0x1005749d
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D BC 57 1C 10: mov ecx, dword ptr [0x101c57bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x10057473
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10057473
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x10057475
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 427h
        push 0b6h
        push 9dh
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 25 FE FB FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1005749f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 554h], eax
        ; Exact mapped bytes E8 AB 7C 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 554h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 D5 52 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x52
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 18h
        ; Exact mapped bytes 74 48: je 0x10057523
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x100574fc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100574fc
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x100574fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 3e8h
        push 163h
        push 14h
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 9F FD FB FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10057525
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebx
        mov ecx, eax
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 558h], eax
        ; Exact mapped bytes E8 E9 7B 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 558h]
        mov ebp, 0bfffh
        push 0a0h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 50 52 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x52
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 19h
        ; Exact mapped bytes 74 48: je 0x100575a8
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x10057581
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10057581
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x10057583
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 3e8h
        push 1bdh
        push 6eh
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 1A FD FB FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100575aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebx
        mov ecx, eax
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 55ch], eax
        ; Exact mapped bytes E8 64 7B 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 55ch]
        push 90h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 D0 51 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x51
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1ah
        ; Exact mapped bytes 74 3C: je 0x1005761c
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x10057601
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10057601
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x10057603
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0feh
        push 1e6h
        push 42h
        push ecx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 66 B9 FC FF: call 0x10022f80
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb9
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1005761e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 56ch], eax
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 56ch]
        push 5ch
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 5E 51 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x51
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1bh
        ; Exact mapped bytes 74 3D: je 0x1005768f
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 29h
        ; Exact mapped bytes 7E 12: jle 0x10057673
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10057673
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x10057675
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3c4h
        push 10eh
        push 15eh
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 63 1A 0B 00: call 0x101090f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1a
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10057691
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 460h], eax
        ; Exact mapped bytes E8 B9 7A 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 460h]
        mov edi, 7fffh
        push 90h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 460h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 D4 50 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x50
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1ch
        ; Exact mapped bytes 74 19: je 0x100576f5
        __asm _emit 0x74
        __asm _emit 0x19
        push 4ah
        push 168h
        push 190h
        push ebx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 8D B8 FC FF: call 0x10022f80
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100576f7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        push 90h
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes E8 91 50 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x50
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1dh
        ; Exact mapped bytes 74 19: je 0x10057738
        __asm _emit 0x74
        __asm _emit 0x19
        push 4fh
        push 168h
        push 190h
        push ebx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 4A B8 FC FF: call 0x10022f80
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1005773a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        push 58h
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes E8 4F 50 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x50
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 1eh
        ; Exact mapped bytes 74 31: je 0x10057794
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 8B 41 26: mov ax, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 0A 00: add ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push 258h
        push 0fffffce0h
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 2A 72 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10057796
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 90h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 328h], edi
        ; Exact mapped bytes E8 F6 4F 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x4f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 1fh
        ; Exact mapped bytes 74 26: je 0x100577e0
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 8B 4A 26: mov cx, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C1 0A: add cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0a
        push ecx
        push 258h
        push 320h
        push ebx
        push edx
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 A2 B7 FC FF: call 0x10022f80
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100577e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 32ch], eax
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 32ch]
        push ebx
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 32ch]
        ; Exact mapped bytes E8 18 79 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x79
        __asm _emit 0x0a
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 91 4F 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4f
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 20h
        ; Exact mapped bytes 74 24: je 0x10057845
        __asm _emit 0x74
        __asm _emit 0x24
        push 50h
        push ebx
        push ebx
        push 168h
        push 190h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 79 71 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10057847
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 90h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 0a4h], edi
        ; Exact mapped bytes E8 45 4F 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 21h
        ; Exact mapped bytes 74 19: je 0x10057884
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 168h
        push 190h
        push ebx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 FE B6 FC FF: call 0x10022f80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10057886
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, 7fffh
        mov dword ptr [esi + 338h], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 338h]
        mov ebp, 0fff0h
        push 90h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes E8 EE 4E 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 44h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 22h
        ; Exact mapped bytes 74 19: je 0x100578db
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 168h
        push 190h
        push ebx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 A7 B6 FC FF: call 0x10022f80
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100578dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 33ch], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 33ch]
        push 58h
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 A4 4E 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x4e
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 23h
        ; Exact mapped bytes 74 2A: je 0x10057938
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 0a0h]
        push 40h
        push ebx
        push ebx
        push 258h
        push 0fffffce0h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 86 70 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1005793a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 440h], edi
        ; Exact mapped bytes 66 21 6F 24: and word ptr [edi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6f
        __asm _emit 0x24
        mov byte ptr [esp + 28h], bl
        lea edi, [esi + 2a8h]
        mov dword ptr [esp + 44h], 20h
        mov ecx, esi
        ; Exact mapped bytes E8 E3 5A 00 00: call 0x1005d440
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        mov dword ptr [edi + 214h], eax
        ; Exact mapped bytes E8 36 4E 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x4e
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 40h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 28h], 24h
        ; Exact mapped bytes 74 34: je 0x100579b0
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 8B 41 26: mov ax, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 09 00: add ax, 9
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push 258h
        push 0fffffce0h
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 11 70 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100579b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [edi], ecx
        ; Exact mapped bytes E8 9E 77 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x77
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 CF 4D 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4d
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 40h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 28h], 25h
        ; Exact mapped bytes 74 34: je 0x10057a17
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [esi + 0a0h]
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 14 00: add ax, 0x14
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push 258h
        push 0fffffce0h
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 A8 6F 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10057a19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 5ch
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [edi - 80h], ebp
        ; Exact mapped bytes E8 79 4D 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 26h
        ; Exact mapped bytes 74 24: je 0x10057a5b
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        mov ecx, eax
        ; Exact mapped bytes 66 83 C2 3E: add dx, 0x3e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x3e
        push edx
        push 258h
        push 0fffffce0h
        push ebx
        push esi
        ; Exact mapped bytes E8 97 16 0B 00: call 0x101090f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10057a5d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [edi - 200h], eax
        ; Exact mapped bytes E8 ED 76 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi - 200h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [edi - 200h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 0E 4D 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4d
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 40h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 28h], 27h
        ; Exact mapped bytes 74 28: je 0x10057acc
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [edi - 200h]
        push 40h
        push ebx
        push ebx
        push 230h
        push 0fffffcafh
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 F0 6E 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10057ace
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 0fffffeffh
        mov ecx, ebp
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [edi - 100h], ebp
        ; Exact mapped bytes E8 7C 76 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi - 100h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 A9 4C 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x4c
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 40h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 28h], 28h
        ; Exact mapped bytes 74 2A: je 0x10057b33
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [edi - 200h]
        push 40h
        push ebx
        push ebx
        push 230h
        push 0fffffcafh
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 8B 6E 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x10057b35
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [edi - 180h], ecx
        ; Exact mapped bytes E8 17 76 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi - 180h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 44 4C 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4c
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 40h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 28h], 29h
        ; Exact mapped bytes 74 3A: je 0x10057ba8
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 0a0h]
        mov ecx, dword ptr [esi + 33ch]
        ; Exact mapped bytes 66 8B 40 26: mov ax, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 09 00: add ax, 9
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push 258h
        push 0fffffce0h
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 19 6E 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x10057baa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [edi + 118h], ecx
        ; Exact mapped bytes E8 A2 75 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi + 118h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [edi + 118h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 C3 4B 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x4b
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 40h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 28h], 2ah
        ; Exact mapped bytes 74 38: je 0x10057c27
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 8B 41 26: mov ax, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 118h]
        ; Exact mapped bytes 66 05 14 00: add ax, 0x14
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push 258h
        push 0fffffce0h
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 98 6D 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10057c29
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi + 98h], ebp
        ; Exact mapped bytes 66 81 65 24 F0 FF: and word ptr [ebp + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        add edi, 4
        dec eax
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esp + 44h], eax
        ; Exact mapped bytes 0F 85 0B FD FF FF: jne 0x10057956
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 4E 4B 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x4b
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 2bh
        ; Exact mapped bytes 74 1C: je 0x10057c80
        __asm _emit 0x74
        __asm _emit 0x1c
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 3E 6D 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10057c82
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 444h], edi
        ; Exact mapped bytes E8 0D 4B 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x4b
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 2ch
        ; Exact mapped bytes 74 1E: je 0x10057cc3
        __asm _emit 0x74
        __asm _emit 0x1e
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 FD 6C 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10057cc5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 448h], ecx
        ; Exact mapped bytes E8 87 74 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 C0 4A 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x4a
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 2dh
        ; Exact mapped bytes 74 1C: je 0x10057d0e
        __asm _emit 0x74
        __asm _emit 0x1c
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 B0 6C 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10057d10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 44ch], edi
        ; Exact mapped bytes E8 7F 4A 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x4a
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 2eh
        ; Exact mapped bytes 74 1C: je 0x10057d4f
        __asm _emit 0x74
        __asm _emit 0x1c
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 6F 6C 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10057d51
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 450h], edi
        mov dword ptr [esp + 3ch], 0dch
        lea ebp, [esi + 52ch]
        mov dword ptr [esp + 40h], 370h
        push 54h
        ; Exact mapped bytes E8 28 4A 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4a
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 2fh
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x10057e13
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0f4h
        ; Exact mapped bytes 7E 16: jle 0x10057db5
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x10057db5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [eax + 3d0h]
        mov dword ptr [esp + 44h], edx
        ; Exact mapped bytes EB 04: jmp 0x10057db9
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 44h], ebx
        mov eax, dword ptr [ebp]
        push 41ah
        push ebx
        push ebx
        push 258h
        push 0fffffce0h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 DB 6B 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi], 1017523ch
        cmp eax, ebx
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x10057e0f
        __asm _emit 0x74
        __asm _emit 0x29
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10057e15
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [ebp + 54h], ecx
        ; Exact mapped bytes E8 3A 73 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 54h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 6A 49 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x49
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        cmp edi, ebx
        mov byte ptr [esp + 28h], 30h
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x10057ed5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 3ch]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1B: jle 0x10057e79
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp eax, ebx
        ; Exact mapped bytes 7C 17: jl 0x10057e79
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0D: je 0x10057e79
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 40h]
        mov edx, dword ptr [ecx + eax]
        mov dword ptr [esp + 44h], edx
        ; Exact mapped bytes EB 04: jmp 0x10057e7d
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 44h], ebx
        mov eax, dword ptr [ebp]
        push 44ch
        push ebx
        push ebx
        push 258h
        push 0fffffce0h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 17 6B 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi], 1017523ch
        cmp eax, ebx
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x10057ed7
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
        ; Exact mapped bytes EB 02: jmp 0x10057ed7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 40h]
        mov dword ptr [ebp + 44h], edi
        mov edi, dword ptr [esp + 3ch]
        add eax, 8
        add edi, 2
        add ebp, 4
        cmp eax, 390h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esp + 40h], eax
        mov dword ptr [esp + 3ch], edi
        ; Exact mapped bytes 0F 8C 6F FE FF FF: jl 0x10057d71
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 37 55 00 00: call 0x1005d440
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esi + 53ch], eax
        ; Exact mapped bytes E8 2A 55 00 00: call 0x1005d440
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 540h], eax
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 8
        ; Exact mapped bytes 7E 0F: jle 0x10057f39
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x10057f39
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 20h]
        ; Exact mapped bytes EB 02: jmp 0x10057f3b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 88h], eax
        mov dword ptr [esi + 8ch], ebx
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 464h], ebx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [esi + 468h], ebx
        mov dword ptr [esi + 0d1ch], ebx
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        or eax, 0ffffffffh
        and ecx, 0e5ffh
        mov dword ptr [esi + 0ca8h], eax
        or ch, 5
        ; Exact mapped bytes 66 89 86 8C 0D 00 00: mov word ptr [esi + 0xd8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov dword ptr [esi + 50h], edx
        lea ecx, [esp + 14h]
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 58h], 100h
        push ecx
        mov dword ptr [esi + 0d20h], ebx
        mov dword ptr [esi + 0d24h], ebx
        mov dword ptr [esi + 0d28h], ebx
        mov dword ptr [esi + 0d2ch], ebx
        mov dword ptr [esi + 0d30h], ebx
        mov dword ptr [esi + 0d38h], ebx
        mov dword ptr [esi + 0d34h], ebx
        mov dword ptr [esi + 0d18h], ebx
        mov dword ptr [esi + 598h], 0ffffffceh
        mov dword ptr [esi + 5a0h], 32h
        mov dword ptr [esi + 59ch], 0ffffffe2h
        mov dword ptr [esi + 5a4h], 1eh
        mov dword ptr [esi + 0d0ch], ebx
        mov dword ptr [esi + 0d7ch], ebx
        mov dword ptr [esi + 0d90h], ebx
        mov dword ptr [esi + 458h], ebx
        mov dword ptr [esi + 45ch], ebx
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esp + 18h], 1
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes FF 15 34 50 17 10: call dword ptr [0x10175034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 0c0c0c0h
        push 1
        push 3
        mov dword ptr [esi + 590h], eax
        ; Exact mapped bytes FF 15 50 50 17 10: call dword ptr [0x10175050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 594h], eax
        mov dword ptr [esi + 0d78h], ebx
        mov dword ptr [esi + 0d80h], ebx
        mov dword ptr [esi + 0d84h], ebx
        mov dword ptr [esi + 0d88h], ebx
        ; Exact mapped bytes A1 E4 7D 1A 10: mov eax, dword ptr [0x101a7de4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, ebx
        mov dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 74 39: je 0x100580a7
        __asm _emit 0x74
        __asm _emit 0x39
        push 30h
        ; Exact mapped bytes E8 2B 47 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x47
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 31h
        ; Exact mapped bytes 74 17: je 0x1005809c
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 15 B8 7D 1A 10: mov edx, dword ptr [0x101a7db8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 ED C9 0A 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes EB 39: jmp 0x100580d5
        __asm _emit 0xeb
        __asm _emit 0x39
        xor eax, eax
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes EB 2E: jmp 0x100580d5
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes A1 08 58 1C 10: mov eax, dword ptr [0x101c5808]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ebx
        ; Exact mapped bytes 74 22: je 0x100580d2
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 7E 12: jle 0x100580cb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100580cb
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes EB 0A: jmp 0x100580d5
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes EB 03: jmp 0x100580d5
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 64h], ebx
        push 30h
        ; Exact mapped bytes E8 C4 46 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 32h
        ; Exact mapped bytes 74 10: je 0x100580fc
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D CC 7D 1A 10: mov ecx, dword ptr [0x101a7dcc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 86 C9 0A 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc9
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100580fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 30h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 94 46 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 33h
        ; Exact mapped bytes 74 10: je 0x1005812c
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 D0 7D 1A 10: mov edx, dword ptr [0x101a7dd0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 56 C9 0A 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc9
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1005812e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 30h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 64 46 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x46
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 34h
        ; Exact mapped bytes 74 10: je 0x1005815c
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D D4 7D 1A 10: mov ecx, dword ptr [0x101a7dd4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 26 C9 0A 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc9
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1005815e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 30h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 34 46 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x46
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 35h
        ; Exact mapped bytes 74 10: je 0x1005818c
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 D8 7D 1A 10: mov edx, dword ptr [0x101a7dd8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 F6 C8 0A 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1005818e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 74h], eax
        xor edi, edi
        lea ebp, [esi + 78h]
        push 20h
        ; Exact mapped bytes E8 FF 45 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x45
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 28h], 36h
        ; Exact mapped bytes 74 35: je 0x100581e6
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D F4 58 1C 10: mov ecx, dword ptr [0x101c58f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], edi
        ; Exact mapped bytes 7E 1B: jle 0x100581da
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp edi, ebx
        ; Exact mapped bytes 7C 17: jl 0x100581da
        __asm _emit 0x7c
        __asm _emit 0x17
        mov edx, dword ptr [ecx + 194h]
        cmp edx, ebx
        ; Exact mapped bytes 74 0D: je 0x100581da
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [edx + edi*4]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 28 07 FF FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x100581e8
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor edx, edx
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 1C 07 FF FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100581e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        inc edi
        add ebp, 4
        cmp edi, 4
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes 75 A2: jne 0x1005819a
        __asm _emit 0x75
        __asm _emit 0xa2
        mov ecx, dword ptr [esp + 20h]
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
