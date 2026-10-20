// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B3DB0 .. +0x7A0 bytes.
extern "C" __declspec(naked) void FUN_100b3db0_100B3DB0() {
    __asm {
        push -1
        push 10171d99h
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
        ; Exact mapped bytes 0F BF 44 24 24: movsx eax, word ptr [esp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        push ebx
        mov ebx, dword ptr [esp + 24h]
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        push edi
        xor edi, edi
        push 40h
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 30h]
        push eax
        push ebx
        push ebp
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 3D 43 F8 FF: call 0x10038130
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x43
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        push 58h
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esi], 10176188h
        ; Exact mapped bytes E8 8C 89 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x89
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x100b3eb4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 27h
        ; Exact mapped bytes 7E 15: jle 0x100b3e4d
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100b3e4d
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 9c0h
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes EB 08: jmp 0x100b3e55
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 2ch], 0
        mov edx, dword ptr [esp + 34h]
        lea eax, [ebx - 1]
        add edx, 2
        lea ecx, [ebp - 1]
        push edx
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3F AB 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [edi], 101751f8h
        test eax, eax
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x100b3eb6
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100b3eb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 96 B2 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 BD 88 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x88
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x100b3f7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 28h
        ; Exact mapped bytes 7E 15: jle 0x100b3f1c
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100b3f1c
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 0a00h
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes EB 08: jmp 0x100b3f24
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 2ch], 0
        mov ecx, dword ptr [esp + 34h]
        inc ecx
        push ecx
        push 0
        push 0
        push ebx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 78 AA 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [edi], 101751f8h
        test eax, eax
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x100b3f7d
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100b3f7d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0c8h
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes E8 8F B1 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 60h]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 F6 87 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x100b4041
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 29h
        ; Exact mapped bytes 7E 15: jle 0x100b3fe3
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100b3fe3
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 0a40h
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes EB 08: jmp 0x100b3feb
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 2ch], 0
        mov ecx, dword ptr [esp + 34h]
        push ecx
        push 0
        push 0
        push ebx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B2 A9 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [edi], 101751f8h
        test eax, eax
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x100b4043
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100b4043
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 09 B1 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 30 87 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        xor ecx, ecx
        mov byte ptr [esp + 20h], 4
        cmp edi, ecx
        ; Exact mapped bytes 74 7B: je 0x100b40ff
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 2ah
        ; Exact mapped bytes 7E 15: jle 0x100b40a7
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [eax + 190h]
        cmp eax, ecx
        ; Exact mapped bytes 74 0B: je 0x100b40a7
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 0a80h
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes EB 04: jmp 0x100b40ab
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 2ch], ecx
        mov edx, dword ptr [esp + 34h]
        push edx
        push ecx
        push ecx
        push ebx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F4 A8 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [edi], 101751f8h
        test eax, eax
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x100b40fd
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
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
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 6ch], ecx
        ; Exact mapped bytes E8 4F B0 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        push 70h
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 76 86 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 20h], 5
        ; Exact mapped bytes 74 4B: je 0x100b4187
        __asm _emit 0x74
        __asm _emit 0x4b
        push 1
        push 0
        lea ecx, [ebx + 33h]
        push 0ffffffh
        lea edx, [ebp + 190h]
        push ecx
        lea eax, [ebx + 1bh]
        push edx
        ; Exact mapped bytes 8B 15 BC 56 1C 10: mov edx, dword ptr [0x101c56bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 26h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 19 1A F6 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x1a
        __asm _emit 0xf6
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 24h], 6
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 24 86 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100b4189
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [esi + 74h], edi
        mov ecx, dword ptr [edi + 40h]
        add eax, 0ah
        test ecx, ecx
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100b41ad
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F3 AD 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b41ba
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 46 AD 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 DF 85 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 20h], 7
        ; Exact mapped bytes 74 51: je 0x100b4224
        __asm _emit 0x74
        __asm _emit 0x51
        push 1
        push 0
        lea ecx, [ebx + 98h]
        push 0ffffffh
        lea edx, [ebp + 190h]
        push ecx
        lea eax, [ebx + 80h]
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 32h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7C 19 F6 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x19
        __asm _emit 0xf6
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 24h], 8
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 87 85 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100b4226
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 44 24 2C: mov ax, word ptr [esp + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        mov dword ptr [esi + 0c4h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 20h], 0
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100b4247
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 59 AD 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b4254
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AC AC 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 45 85 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 20h], 9
        ; Exact mapped bytes 74 51: je 0x100b42be
        __asm _emit 0x74
        __asm _emit 0x51
        push 1
        push 0
        lea ecx, [ebx + 0a5h]
        push 0ffffffh
        lea edx, [ebp + 190h]
        push ecx
        lea eax, [ebx + 8dh]
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 32h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E2 18 F6 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 24h], 0ah
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 ED 84 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100b42c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 44 24 2C: mov ax, word ptr [esp + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        mov dword ptr [esi + 0c8h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 20h], 0
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100b42e1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BF AC 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b42ee
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 12 AC 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [esi + 7ch]
        add ebx, 32h
        mov dword ptr [esp + 2ch], ecx
        mov dword ptr [esp + 28h], 10h
        push 184h
        ; Exact mapped bytes E8 96 84 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov byte ptr [esp + 20h], 0bh
        ; Exact mapped bytes 74 2E: je 0x100b4348
        __asm _emit 0x74
        __asm _emit 0x2e
        push 0
        push 0
        lea edx, [ebx + 18h]
        push 0ffffffh
        lea ecx, [ebp + 190h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 6fh]
        push ebx
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BC 42 F6 FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x42
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b434a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 34h]
        add eax, 0ah
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edx], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100b436d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 33 AC 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b437a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 86 AB 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        add ebx, 0ch
        mov eax, dword ptr [ecx]
        add ecx, 4
        mov dword ptr [esp + 2ch], ecx
        mov dword ptr [eax + 5ch], 10h
        mov eax, dword ptr [esp + 28h]
        dec eax
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes 0F 85 60 FF FF FF: jne 0x100b4300
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 F6 83 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 20h], 0ch
        mov edi, 23h
        ; Exact mapped bytes 74 41: je 0x100b4400
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100b43df
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b43df
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100b43e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        add edx, 80h
        push edx
        lea edx, [ebp + 0b4h]
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 92 AE 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b4402
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 89 83 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 20h], 0dh
        ; Exact mapped bytes 74 41: je 0x100b4468
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100b4447
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b4447
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100b4449
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        add edx, 8ch
        push edx
        lea edx, [ebp + 0b4h]
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2A AE 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b446a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 0bch]
        mov dword ptr [esi + 0c0h], eax
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [esp + 20h], 0
        mov ecx, dword ptr [edi + 40h]
        lea ebx, [eax + 0ah]
        test ecx, ecx
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100b4493
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0D AB 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b44a0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 60 AA 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0c0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b44b7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E9 AA 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b44c4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3C AA 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 8C AC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 7C AC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        xor ebx, ebx
        push 58h
        mov dword ptr [esi + 78h], ebx
        ; Exact mapped bytes E8 B0 82 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x82
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 0eh
        ; Exact mapped bytes 74 2C: je 0x100b452e
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        push ecx
        push ebx
        add edx, 0f5h
        push ebx
        add ebp, 78h
        push edx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 90 A4 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100b4530
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
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
        add esp, 14h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
