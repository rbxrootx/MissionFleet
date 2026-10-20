// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100AF820 .. +0xDD9 bytes.
extern "C" __declspec(naked) void FUN_100af820_100AF820() {
    __asm {
        push -1
        push 10171b06h
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
        mov ebx, dword ptr [esp + 2ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 30h]
        push ebx
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 EB 7C F9 FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x7c
        __asm _emit 0xf9
        __asm _emit 0xff
        push 54h
        mov dword ptr [esp + 20h], 0
        mov dword ptr [esi], 10176118h
        ; Exact mapped bytes E8 26 CF 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcf
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 72: je 0x100af8fe
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x100af8a9
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100af8a9
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100af8ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        lea edx, [ebx + 5]
        push edx
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EB F0 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100af900
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
        ; Exact mapped bytes EB 02: jmp 0x100af900
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], edi
        ; Exact mapped bytes E8 8E CE 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 72: je 0x100af996
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100af941
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100af941
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100af943
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        lea ecx, [ebx + 0ah]
        push ecx
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 53 F0 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100af998
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
        ; Exact mapped bytes EB 02: jmp 0x100af998
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes E8 F6 CD 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 6F: je 0x100afa2b
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x100af9d9
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100af9d9
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x100af9db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push ebx
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BE EF 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100afa2d
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
        ; Exact mapped bytes EB 02: jmp 0x100afa2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 88h]
        push 0c8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], edi
        ; Exact mapped bytes E8 D8 F6 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        push 0fffffeffh
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov ecx, dword ptr [esi + 90h]
        ; Exact mapped bytes E8 FC F6 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 29 CD 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 2F: je 0x100afab8
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        lea ecx, [ebx + 0fh]
        add edx, 0a1h
        push ecx
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 07 EF 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100afaba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 94h], edi
        ; Exact mapped bytes E8 D4 CC 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 72: je 0x100afb50
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 4
        ; Exact mapped bytes 7E 0F: jle 0x100afafb
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100afafb
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes EB 02: jmp 0x100afafd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        add ebx, 0fh
        push ebx
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 99 EE 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100afb52
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
        ; Exact mapped bytes EB 02: jmp 0x100afb52
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 94h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 98h], edi
        ; Exact mapped bytes E8 F3 F5 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 101h
        ; Exact mapped bytes E8 E3 F5 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, 7fffh
        push 300h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 00 CC 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 1B: je 0x100afbcb
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ebp, dword ptr [esp + 24h]
        push 40h
        push 0
        push 0
        push 1eh
        push 28ah
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 D7 A8 FF FF: call 0x100aa4a0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100afbd1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 24h]
        xor eax, eax
        mov ebx, 0dfffh
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov edi, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 C4 09: add ax, 0x9c4
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x09
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100afc04
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9C F3 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100afc11
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EF F2 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        push 20c4h
        ; Exact mapped bytes E8 85 CB 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 14: je 0x100afc3f
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 13 3C FF FF: call 0x100a3850
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100afc41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 B8 0B: add ax, 0xbb8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x0b
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100afc6f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 31 F3 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100afc7c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 84 F2 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0ch
        ; Exact mapped bytes 7E 0F: jle 0x100afc99
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100afc99
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 30h]
        ; Exact mapped bytes EB 02: jmp 0x100afc9b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        push eax
        push 0
        ; Exact mapped bytes E8 97 7A F9 FF: call 0x10047740
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0e10h
        ; Exact mapped bytes E8 ED CA 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xca
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 14: je 0x100afcd7
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 5B 09 02 00: call 0x100d0630
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100afcd9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 B8 0B: add ax, 0xbb8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x0b
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100afd07
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 99 F2 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100afd14
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EC F1 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        push 494h
        ; Exact mapped bytes E8 82 CA 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xca
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 17: je 0x100afd45
        __asm _emit 0x74
        __asm _emit 0x17
        push 40h
        push 0
        push 0
        push 50h
        push 12ch
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 2D 93 FF FF: call 0x100a9070
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100afd47
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 B8 0B: add ax, 0xbb8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x0b
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100afd75
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2B F2 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100afd82
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7E F1 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        push 4ach
        ; Exact mapped bytes E8 14 CA 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xca
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 17: je 0x100afdb3
        __asm _emit 0x74
        __asm _emit 0x17
        push 40h
        push 0
        push 0
        push 50h
        push 12ch
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 0F 78 FF FF: call 0x100a75c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100afdb5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0ach]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 B8 0B: add ax, 0xbb8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x0b
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100afde3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BD F1 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100afdf0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 10 F1 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 A6 C9 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc9
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 5C: je 0x100afe66
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100afe2b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100afe2b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100afe2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        mov edi, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        lea edx, [edi + 9eh]
        push edx
        lea edx, [ebp + 0cfh]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 5C 74 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x74
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x100afe70
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 D9 F2 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov ebx, 7fffh
        push 0a0h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 00 C9 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc9
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 54: je 0x100aff04
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 17h
        ; Exact mapped bytes 7E 12: jle 0x100afed1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100afed1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x100afed3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        lea edx, [edi + 9eh]
        push edx
        lea edx, [ebp + 115h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 BE 73 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x73
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100aff06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 43 F2 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        push 0a0h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 6F C8 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 54: je 0x100aff95
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x100aff62
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100aff62
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x100aff64
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        lea edx, [edi + 9eh]
        push edx
        lea edx, [ebp + 159h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 2D 73 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x73
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100aff97
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 B2 F1 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 DC C7 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0eh
        mov ebx, 0fh
        ; Exact mapped bytes 74 53: je 0x100b002c
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100afff9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100afff9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x100afffb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        lea edx, [edi + 0a4h]
        push edx
        lea edx, [ebp + 189h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 96 72 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x72
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b002e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 1B F1 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 45 C7 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 1ch], bl
        mov ebx, 10h
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x100b00c2
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100b008f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b008f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 400h
        ; Exact mapped bytes EB 02: jmp 0x100b0091
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        lea edx, [edi + 0a4h]
        push edx
        lea edx, [ebp + 1bbh]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 00 72 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x72
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b00c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 85 F0 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b8h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 AF C6 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 74 51: je 0x100b0151
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x100b0121
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b0121
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x100b0123
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        lea edx, [edi + 25h]
        push edx
        lea edx, [ebp + 1cbh]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 71 71 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x71
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b0153
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 38 C6 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 3F: je 0x100b01b7
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, 0bh
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100b019d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b019d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100b019f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0a8h]
        push edx
        lea edx, [ebp + 33h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DB F0 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x100b01be
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        mov ebx, 0bh
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 CD C5 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 3A: je 0x100b021d
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100b0203
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b0203
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100b0205
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0a8h]
        push edx
        lea edx, [ebp + 57h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 75 F0 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b021f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 6C C5 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xc5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 74 3D: je 0x100b0281
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100b0264
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b0264
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100b0266
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add edi, 0a8h
        add ebp, 96h
        push edi
        push ebp
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 11 F0 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b0283
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 0d0h]
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100b02ad
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F3 EC 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b02ba
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 46 EC 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b02d9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C7 EC 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b02e6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1A EC 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b0305
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9B EC 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b0312
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EE EB 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        push 7ch
        ; Exact mapped bytes E8 87 C4 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 19: je 0x100b0342
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 0
        push 0
        push 64h
        push 0fah
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D2 9E FF FF: call 0x100aa210
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b0344
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov dword ptr [esi + 0cch], edi
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 B8 0B: add ax, 0xbb8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x0b
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100b0368
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 38 EC 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b0375
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8B EB 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        push 50h
        ; Exact mapped bytes E8 24 C4 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 14: je 0x100b03a0
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 12 E6 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b03a2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 0e0h], eax
        xor edi, edi
        lea ebp, [esi + 0e4h]
        mov ebx, 0fff0h
        push 64h
        ; Exact mapped bytes E8 DF C3 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 25: je 0x100b03f6
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        mov edx, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 81 C1 F4 01: add cx, 0x1f4
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xf4
        __asm _emit 0x01
        push ecx
        push 0fffffda8h
        push 0fffffce0h
        push edi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 5C 95 F7 FF: call 0x10029950
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x95
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b03f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        inc edi
        add ebp, 4
        cmp edi, 5
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 7C AD: jl 0x100b03ba
        __asm _emit 0x7c
        __asm _emit 0xad
        cmp edi, 20h
        ; Exact mapped bytes 0F 8D 96 00 00 00: jge 0x100b04ac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi*8]
        lea eax, [edi + edi*4]
        sub edx, edi
        mov ebp, 122h
        lea ecx, [eax*8 + 0beh]
        mov eax, 20h
        shl edx, 1
        sub ebp, edx
        sub eax, edi
        mov dword ptr [esp + 28h], ecx
        lea ebx, [esi + edi*4 + 0e4h]
        mov dword ptr [esp + 2ch], eax
        push 64h
        ; Exact mapped bytes E8 51 C3 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 21: je 0x100b0480
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        mov edx, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 81 C1 F4 01: add cx, 0x1f4
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xf4
        __asm _emit 0x01
        push ecx
        mov ecx, dword ptr [esi + 0e0h]
        push ebp
        push edx
        push edi
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D2 94 F7 FF: call 0x10029950
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x94
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b0482
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [ebx], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        inc edi
        add ebx, 4
        sub ebp, 0eh
        add ecx, 28h
        dec eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 75 9C: jne 0x100b0448
        __asm _emit 0x75
        __asm _emit 0x9c
        xor ebx, ebx
        lea eax, [esi + 166h]
        xor edx, edx
        ; Exact mapped bytes 66 89 9E 72 01 00 00: mov word ptr [esi + 0x172], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 74 01 00 00: mov word ptr [esi + 0x174], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 164h], bl
        mov byte ptr [esi + 165h], bl
        mov dword ptr [esi + 16ch], ebx
        mov dword ptr [esi + 17ch], ebx
        mov dword ptr [eax], edx
        push 20h
        mov byte ptr [eax + 4], dl
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e5f0h
        mov dword ptr [esi + 84h], ebx
        or ch, 5
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E8 A1 C2 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 32: je 0x100b0541
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D E8 57 1C 10: mov ecx, dword ptr [0x101c57e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 9
        ; Exact mapped bytes 7E 17: jle 0x100b0535
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ecx + 194h]
        cmp edx, ebx
        ; Exact mapped bytes 74 0D: je 0x100b0535
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [edx + 24h]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 CD 83 F9 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x100b0543
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor edx, edx
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 C1 83 F9 FF: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b0543
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 60h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes A3 44 CE 1A 10: mov dword ptr [0x101ace44], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes E8 4C C2 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 10: je 0x100b0574
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push -0ah
        push ebx
        push ebx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 BE 91 F7 FF: call 0x10029730
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x91
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b0576
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 7ch
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes A3 40 CE 1A 10: mov dword ptr [0x101ace40], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes E8 19 C2 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1ah
        ; Exact mapped bytes 74 1E: je 0x100b05b5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [esp + 24h]
        push 2328h
        push ebx
        push ebx
        push 50h
        push 12ch
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 1F 17 03 00: call 0x100e1cd0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b05b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 180h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 10 27: mov word ptr [edi + 0x26], 0x2710
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x27
        ; Exact mapped bytes 74 06: je 0x100b05d5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CB E9 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b05e2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1E E9 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe9
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
