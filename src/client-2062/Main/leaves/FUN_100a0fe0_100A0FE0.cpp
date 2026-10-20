// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0FE0 .. +0x14B3 bytes.
extern "C" __declspec(naked) void FUN_100a0fe0_100A0FE0() {
    __asm {
        push -1
        push 10171252h
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
        ; Exact mapped bytes E8 EB D9 FF FF: call 0x1009ea10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10176018h
        ; Exact mapped bytes E8 68 B7 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 7A: je 0x100a10c4
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100a1065
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100a1065
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100a1067
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 2ch]
        add eax, 7d0h
        push eax
        push ebx
        push ebx
        add edx, 0bah
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 25 D9 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a10c6
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
        ; Exact mapped bytes EB 02: jmp 0x100a10c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0a8h], edi
        ; Exact mapped bytes E8 C9 B6 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 7D: je 0x100a1166
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100a1106
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100a1106
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100a1108
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 2ch]
        add edx, 7d0h
        push edx
        push ebx
        push ebx
        add ecx, 0bah
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 83 D8 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1168
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
        ; Exact mapped bytes EB 02: jmp 0x100a1168
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0a8h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0ach], edi
        ; Exact mapped bytes E8 DE DF 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xdf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 96h
        ; Exact mapped bytes E8 8E DF 05 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xdf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push 96h
        ; Exact mapped bytes E8 7E DF 05 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xdf
        __asm _emit 0x05
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 F7 B5 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 77: je 0x100a1232
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x100a11d8
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100a11d8
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x100a11da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        add ecx, 0bb8h
        push ecx
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B7 D7 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd7
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1234
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
        ; Exact mapped bytes EB 02: jmp 0x100a1234
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0b0h], edi
        ; Exact mapped bytes E8 5B B5 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xb5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 76: je 0x100a12cd
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3
        ; Exact mapped bytes 7E 0F: jle 0x100a1274
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100a1274
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x100a1276
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        add eax, 0bb8h
        push eax
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1C D7 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd7
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a12cf
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
        ; Exact mapped bytes EB 02: jmp 0x100a12cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0b0h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0b4h], edi
        ; Exact mapped bytes E8 77 DE 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 B0 B4 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100a1389
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x100a1326
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a1326
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 3c0h]
        ; Exact mapped bytes EB 02: jmp 0x100a1328
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        add edx, 0c1ch
        push edx
        push ebx
        add eax, 1dh
        push ebx
        add ecx, 37h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 63 D6 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a138b
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x100a138b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0b8h], edi
        ; Exact mapped bytes E8 04 B4 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100a1435
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x100a13d2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a13d2
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 380h]
        ; Exact mapped bytes EB 02: jmp 0x100a13d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        add ecx, 0c1ch
        push ecx
        push ebx
        add edx, 1dh
        push ebx
        add eax, 37h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B7 D5 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1437
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100a1437
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0b8h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0bch], edi
        ; Exact mapped bytes E8 0F DD 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 FF DC 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b8h]
        mov ecx, 0fffbh
        push 58h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 06 B3 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x100a1532
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0dh
        ; Exact mapped bytes 7E 12: jle 0x100a14d0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a14d0
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 340h]
        ; Exact mapped bytes EB 02: jmp 0x100a14d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        add eax, 0c1ch
        push eax
        push ebx
        add ecx, 1dh
        push ebx
        add edx, 37h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BA D4 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1534
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100a1534
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0c0h], edi
        ; Exact mapped bytes E8 5B B2 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xb2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100a15de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0ch
        ; Exact mapped bytes 7E 12: jle 0x100a157b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a157b
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 300h]
        ; Exact mapped bytes EB 02: jmp 0x100a157d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        add edx, 0c1ch
        push edx
        push ebx
        add eax, 1dh
        push ebx
        add ecx, 37h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0E D4 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a15e0
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x100a15e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0c0h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0c4h], edi
        ; Exact mapped bytes E8 66 DB 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 101h
        ; Exact mapped bytes E8 56 DB 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, 0fffbh
        push 58h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 76 B1 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100a16c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 13h
        ; Exact mapped bytes 7E 12: jle 0x100a1660
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a1660
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 4c0h]
        ; Exact mapped bytes EB 02: jmp 0x100a1662
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        add ecx, 0c1ch
        push ecx
        push ebx
        add edx, 1dh
        push ebx
        add eax, 37h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 29 D3 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a16c5
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100a16c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0c8h], edi
        ; Exact mapped bytes E8 CA B0 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x100a176e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 12h
        ; Exact mapped bytes 7E 12: jle 0x100a170c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a170c
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 480h]
        ; Exact mapped bytes EB 02: jmp 0x100a170e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        add eax, 0c1ch
        push eax
        push ebx
        add ecx, 1dh
        push ebx
        add edx, 37h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7E D2 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1770
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100a1770
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0c8h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0cch], edi
        ; Exact mapped bytes E8 D6 D9 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0cch]
        push 101h
        ; Exact mapped bytes E8 C6 D9 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        mov ecx, 0fffbh
        push 58h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 CD AF 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100a186c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 11h
        ; Exact mapped bytes 7E 12: jle 0x100a1809
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a1809
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 440h]
        ; Exact mapped bytes EB 02: jmp 0x100a180b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        add edx, 0c1ch
        push edx
        push ebx
        add eax, 1dh
        push ebx
        add ecx, 37h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 80 D1 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd1
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a186e
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x100a186e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0d0h], edi
        ; Exact mapped bytes E8 21 AF 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100a1918
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 10h
        ; Exact mapped bytes 7E 12: jle 0x100a18b5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a18b5
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 400h]
        ; Exact mapped bytes EB 02: jmp 0x100a18b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        add ecx, 0c1ch
        push ecx
        push ebx
        add edx, 1dh
        push ebx
        add eax, 37h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D4 D0 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a191a
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100a191a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0d0h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0d4h], edi
        ; Exact mapped bytes E8 2C D8 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        push 101h
        ; Exact mapped bytes E8 1C D8 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        mov ecx, 0fffbh
        push 58h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 3C AE 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xae
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100a19ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 15h
        ; Exact mapped bytes 7E 12: jle 0x100a199a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a199a
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 540h]
        ; Exact mapped bytes EB 02: jmp 0x100a199c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        add eax, 0c1ch
        push eax
        push ebx
        add ecx, 7
        push ebx
        add edx, 0c8h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 ED CF 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1a01
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100a1a01
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0d8h], edi
        ; Exact mapped bytes E8 8E AD 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xad
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x100a1aae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 14h
        ; Exact mapped bytes 7E 12: jle 0x100a1a48
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a1a48
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 500h]
        ; Exact mapped bytes EB 02: jmp 0x100a1a4a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        add edx, 0c1ch
        push edx
        push ebx
        add eax, 7
        push ebx
        add ecx, 0c8h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3E CF 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1ab0
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x100a1ab0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0d8h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0dch], edi
        ; Exact mapped bytes E8 96 D6 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        push 101h
        ; Exact mapped bytes E8 86 D6 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        push 96h
        ; Exact mapped bytes E8 36 D6 05 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        push 96h
        ; Exact mapped bytes E8 26 D6 05 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d8h]
        mov ecx, 0fffbh
        push 58h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 86 AC 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100a1bb5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 17h
        ; Exact mapped bytes 7E 12: jle 0x100a1b50
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a1b50
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 5c0h]
        ; Exact mapped bytes EB 02: jmp 0x100a1b52
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        add ecx, 0c1ch
        push ecx
        push ebx
        add edx, 7
        push ebx
        add eax, 0cdh
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 37 CE 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xce
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1bb7
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100a1bb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0e0h], edi
        ; Exact mapped bytes E8 D8 AB 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xab
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100a1c63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 16h
        ; Exact mapped bytes 7E 12: jle 0x100a1bfe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a1bfe
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 580h]
        ; Exact mapped bytes EB 02: jmp 0x100a1c00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        add eax, 0c1ch
        push eax
        push ebx
        add ecx, 7
        push ebx
        add edx, 0cdh
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 89 CD 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xcd
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1c65
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100a1c65
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0e0h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0e4h], edi
        ; Exact mapped bytes E8 E1 D4 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        push 101h
        ; Exact mapped bytes E8 D1 D4 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        push 96h
        ; Exact mapped bytes E8 81 D4 05 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        push 96h
        ; Exact mapped bytes E8 71 D4 05 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e0h]
        mov ecx, 0fffbh
        push 58h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 D1 AA 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xaa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x100a1d6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 19h
        ; Exact mapped bytes 7E 12: jle 0x100a1d05
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a1d05
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 640h]
        ; Exact mapped bytes EB 02: jmp 0x100a1d07
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        add edx, 0c1ch
        push edx
        push ebx
        add eax, 59h
        push ebx
        add ecx, 0cdh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 81 CC 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1d6d
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x100a1d6d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0e8h], edi
        ; Exact mapped bytes E8 22 AA 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xaa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100a1e19
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 18h
        ; Exact mapped bytes 7E 12: jle 0x100a1db4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a1db4
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 600h]
        ; Exact mapped bytes EB 02: jmp 0x100a1db6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        add ecx, 0c1ch
        push ecx
        push ebx
        add edx, 59h
        push ebx
        add eax, 0cdh
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D3 CB 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcb
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1e1b
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100a1e1b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 0e8h]
        mov ecx, 0fffbh
        mov dword ptr [esi + 0ech], edi
        push 58h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 5B A9 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100a1ee0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 19h
        ; Exact mapped bytes 7E 12: jle 0x100a1e7b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a1e7b
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 640h]
        ; Exact mapped bytes EB 02: jmp 0x100a1e7d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        add eax, 0c1ch
        push eax
        push ebx
        add ecx, 59h
        push ebx
        add edx, 0f4h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0C CB 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcb
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1ee2
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100a1ee2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0f0h], edi
        ; Exact mapped bytes E8 AD A8 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa8
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x100a1f8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 57 1C 10: mov eax, dword ptr [0x101c57b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 18h
        ; Exact mapped bytes 7E 12: jle 0x100a1f29
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a1f29
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 600h]
        ; Exact mapped bytes EB 02: jmp 0x100a1f2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        add edx, 0c1ch
        push edx
        push ebx
        add eax, 59h
        push ebx
        add ecx, 0f4h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5D CA 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a1f91
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x100a1f91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 0f0h]
        mov ebp, dword ptr [esp + 38h]
        mov ecx, 0fffbh
        mov dword ptr [esi + 0f4h], edi
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f4h]
        push 74h
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 E1 A7 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 54: je 0x100a2023
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100a1fed
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100a1fed
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100a1fef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0fa0h]
        push edx
        mov edx, dword ptr [esp + 2ch]
        add edx, 134h
        push 30ch
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esp + 34h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5F B2 F6 FF: call 0x1000d280
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb2
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a2025
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0f8h], eax
        ; Exact mapped bytes E8 67 A7 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 53: je 0x100a209c
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x100a206a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a206a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x100a206c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 2ch]
        lea edx, [ebp + 0dach]
        push edx
        lea edx, [edi + 20h]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1dh
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
        ; Exact mapped bytes E8 A6 59 F7 FF: call 0x10017a40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x59
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100a20a2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0fch], eax
        ; Exact mapped bytes E8 EA A6 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa6
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 52: je 0x100a2118
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x100a20e7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a20e7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x100a20e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0dach]
        push edx
        lea edx, [edi + 20h]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 8fh
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
        ; Exact mapped bytes E8 2A 59 F7 FF: call 0x10017a40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x59
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a211a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 100h], eax
        ; Exact mapped bytes E8 72 A6 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa6
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 4F: je 0x100a218d
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x100a215f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a215f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x100a2161
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0dach]
        push edx
        lea edx, [edi + 75h]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 39h
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
        ; Exact mapped bytes E8 B5 58 F7 FF: call 0x10017a40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x58
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a218f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes E8 FD A5 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 4F: je 0x100a2202
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x100a21d4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a21d4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x100a21d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0dach]
        push edx
        lea edx, [edi + 76h]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 6eh
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
        ; Exact mapped bytes E8 40 58 F7 FF: call 0x10017a40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a2204
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 108h], eax
        ; Exact mapped bytes E8 88 A5 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1ah
        ; Exact mapped bytes 74 52: je 0x100a227a
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0ah
        ; Exact mapped bytes 7E 12: jle 0x100a2249
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a2249
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 280h
        ; Exact mapped bytes EB 02: jmp 0x100a224b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0dach]
        push edx
        lea edx, [edi + 50h]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 114h
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
        ; Exact mapped bytes E8 C8 57 F7 FF: call 0x10017a40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a227c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 10ch], eax
        ; Exact mapped bytes E8 10 A5 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 74 52: je 0x100a22f2
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 12: jle 0x100a22c1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a22c1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100a22c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0dach]
        push edx
        lea edx, [edi + 74h]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 114h
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
        ; Exact mapped bytes E8 50 57 F7 FF: call 0x10017a40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x57
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a22f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 110h], eax
        ; Exact mapped bytes E8 98 A4 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1ch
        ; Exact mapped bytes 74 55: je 0x100a236d
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100a2339
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a2339
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x100a233b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0dach]
        push edx
        lea edx, [edi + 8ch]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 0cch
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
        ; Exact mapped bytes E8 D5 56 F7 FF: call 0x10017a40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x56
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a236f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 114h], eax
        ; Exact mapped bytes E8 1D A4 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1dh
        ; Exact mapped bytes 74 52: je 0x100a23e5
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x100a23b4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a23b4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x100a23b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0dach]
        push edx
        lea edx, [edi + 39h]
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 0cah
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
        ; Exact mapped bytes E8 5D 56 F7 FF: call 0x10017a40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x56
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a23e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 118h], eax
        ; Exact mapped bytes E8 A5 A3 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1eh
        ; Exact mapped bytes 74 4E: je 0x100a2459
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 10: jle 0x100a242a
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a242a
        __asm _emit 0x74
        __asm _emit 0x06
        lea ebx, [ecx + 240h]
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 0dach
        add edi, 39h
        push ebp
        add ecx, 0f0h
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E9 55 F7 FF: call 0x10017a40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a245b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and edx, 0e5f0h
        mov dword ptr [esi + 11ch], eax
        or dh, 5
        mov dword ptr [esi + 120h], 1
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
