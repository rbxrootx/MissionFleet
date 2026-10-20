// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E1CD0 .. +0x430 bytes.
extern "C" __declspec(naked) void FUN_100e1cd0_100E1CD0() {
    __asm {
        push -1
        push 10173aadh
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
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        mov edx, dword ptr [esp + 30h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 9B CC 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10176518h
        ; Exact mapped bytes E8 74 AA 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xaa
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 74: je 0x100e1db2
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 18 58 1C 10: mov eax, dword ptr [0x101c5818]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 111h
        ; Exact mapped bytes 7E 12: jle 0x100e1d61
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e1d61
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 444h]
        ; Exact mapped bytes EB 02: jmp 0x100e1d63
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push 96h
        push 0e6h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 37 CC 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100e1db4
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
        ; Exact mapped bytes EB 02: jmp 0x100e1db4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes E8 DE A9 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa9
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 49: je 0x100e1e1d
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ffffffh
        push 154h
        push 1aeh
        push 145h
        push 12dh
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 82 3D F3 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3d
        __asm _emit 0xf3
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 8D A9 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x100e1e1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [esi + 60h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 1ch], bl
        lea ebp, [eax + 1]
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100e1e3e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 62 D1 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e1e4b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B5 D0 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 4B A9 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 3F: je 0x100e1ea4
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cch
        ; Exact mapped bytes 7E 12: jle 0x100e1e89
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ecx + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x100e1e89
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 3300h
        ; Exact mapped bytes EB 02: jmp 0x100e1e8b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 159h
        push 12dh
        push -1
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F0 D3 01 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100e1ea6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 64h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100e1ebe
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E2 D0 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100e1ecb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 35 D0 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 CE A8 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 6D: je 0x100e1f51
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes A1 18 58 1C 10: mov eax, dword ptr [0x101c5818]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100e1efb
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ebp, dword ptr [eax + 190h]
        cmp ebp, ebx
        ; Exact mapped bytes 75 02: jne 0x100e1efd
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push 118h
        push 19bh
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 9D CA 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e1f4d
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x100e1f53
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 68h], ecx
        ; Exact mapped bytes E8 FC D1 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 35 A8 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 73: je 0x100e1ff0
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 18 58 1C 10: mov eax, dword ptr [0x101c5818]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100e1f9a
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100e1f9a
        __asm _emit 0x74
        __asm _emit 0x05
        lea ebp, [eax + 40h]
        ; Exact mapped bytes EB 02: jmp 0x100e1f9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push 118h
        push 19bh
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FE C9 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e1fec
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
        ; Exact mapped bytes EB 02: jmp 0x100e1ff2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 6ch], ecx
        ; Exact mapped bytes E8 5D D1 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 93 A7 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 48: je 0x100e2065
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 25h
        ; Exact mapped bytes 7E 12: jle 0x100e203e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100e203e
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 940h
        ; Exact mapped bytes EB 02: jmp 0x100e2040
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 18eh
        push 1b6h
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
        ; Exact mapped bytes E8 5D 52 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e2067
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 28 A7 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 48: je 0x100e20d0
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 24h
        ; Exact mapped bytes 7E 12: jle 0x100e20a9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100e20a9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 900h
        ; Exact mapped bytes EB 02: jmp 0x100e20ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 18eh
        push 1e8h
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
        ; Exact mapped bytes E8 F2 51 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x51
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e20d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and edx, 0e5fch
        mov dword ptr [esi + 74h], eax
        or dh, 5
        mov dword ptr [esi + 78h], ebx
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
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
