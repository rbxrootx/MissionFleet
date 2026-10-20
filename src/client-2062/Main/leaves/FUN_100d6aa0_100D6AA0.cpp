// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D6AA0 .. +0x1D8B bytes.
extern "C" __declspec(naked) void FUN_100d6aa0_100D6AA0() {
    __asm {
        push -1
        push 101735dbh
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
        push ebx
        mov ebx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 18h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 2ch]
        push edi
        mov edi, dword ptr [esp + 2ch]
        push ebx
        push eax
        push ecx
        push edi
        push ebp
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 CB 7E 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        xor ebp, ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        lea eax, [ebx + 1]
        push 198h
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esi], 1017648ch
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 84 5C 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 0F: je 0x100d6b3b
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebp
        push 101ac2f8h
        mov ecx, eax
        ; Exact mapped bytes E8 87 8F 02 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d6b3d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 54 5C 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 67: je 0x100d6bc5
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x100d6b79
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x100d6b79
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x100d6b7b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push ebx
        push 0
        push 0
        push 2dh
        push 63h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 24 7E 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d6bc7
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
        ; Exact mapped bytes EB 02: jmp 0x100d6bc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 CA 5B 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x5b
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 6D: je 0x100d6c55
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x100d6c03
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100d6c03
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100d6c05
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
        ; Exact mapped bytes E8 94 7D 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d6c57
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
        ; Exact mapped bytes EB 02: jmp 0x100d6c57
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 3A 5B 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x5b
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 72: je 0x100d6cea
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100d6c93
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d6c93
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100d6c95
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        add ebx, -0ah
        push ebx
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 01 7D 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d6ce6
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
        ; Exact mapped bytes EB 02: jmp 0x100d6cec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], ecx
        ; Exact mapped bytes E8 62 84 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 9B 5A 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 6E: je 0x100d6d85
        __asm _emit 0x74
        __asm _emit 0x6e
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 6
        ; Exact mapped bytes 7E 0F: jle 0x100d6d32
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d6d32
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 18h]
        ; Exact mapped bytes EB 02: jmp 0x100d6d34
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ebx, dword ptr [esp + 38h]
        mov eax, dword ptr [esi + 6ch]
        push ebx
        push 0
        push 0
        push 2dh
        push 63h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 64 7C 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 32: je 0x100d6d8b
        __asm _emit 0x74
        __asm _emit 0x32
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
        ; Exact mapped bytes EB 06: jmp 0x100d6d8b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 38h]
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], edi
        ; Exact mapped bytes E8 03 5A 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 6D: je 0x100d6e1c
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 5
        ; Exact mapped bytes 7E 0F: jle 0x100d6dca
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d6dca
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 02: jmp 0x100d6dcc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 6ch]
        lea ecx, [ebx + 1]
        push ecx
        push 0
        push 0
        push 2dh
        push 63h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 CD 7B 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d6e1e
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
        ; Exact mapped bytes EB 02: jmp 0x100d6e1e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes E8 70 59 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 6A: je 0x100d6eac
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 4
        ; Exact mapped bytes 7E 0F: jle 0x100d6e5d
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d6e5d
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes EB 02: jmp 0x100d6e5f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 6ch]
        push ebx
        push 0
        push 0
        push 2dh
        push 6dh
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 3D 7B 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d6eae
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
        ; Exact mapped bytes EB 02: jmp 0x100d6eae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 98h], edi
        ; Exact mapped bytes E8 E0 58 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 6B: je 0x100d6f3d
        __asm _emit 0x74
        __asm _emit 0x6b
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 3
        ; Exact mapped bytes 7E 0F: jle 0x100d6eed
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d6eed
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x100d6eef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 6ch]
        inc ebx
        push ebx
        push 0
        push 0
        push 2dh
        push 6dh
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 AC 7A 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d6f3f
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
        ; Exact mapped bytes EB 02: jmp 0x100d6f3f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 94h], edi
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 06 82 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 0fffffeffh
        ; Exact mapped bytes E8 F6 81 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 101h
        ; Exact mapped bytes E8 E6 81 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 0fffffeffh
        ; Exact mapped bytes E8 D6 81 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 0C 58 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        mov edi, 2ch
        ; Exact mapped bytes 74 3F: je 0x100d6fe8
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
        ; Exact mapped bytes 7E 12: jle 0x100d6fc9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d6fc9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d6fcb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8ch]
        push 0a7h
        push 27ah
        push 8
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 AA 82 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d6fea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 A4 57 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 3F: je 0x100d704b
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
        ; Exact mapped bytes 7E 12: jle 0x100d702c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d702c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d702e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0bfh
        push 27ah
        push 8
        push ecx
        mov ecx, dword ptr [esi + 8ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 47 82 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d704d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 41 57 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 3C: je 0x100d70ab
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100d708f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d708f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d7091
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8ch]
        push 5fh
        push 27fh
        push 8
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 E7 81 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d70ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 DE 56 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 3C: je 0x100d710e
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100d70f2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d70f2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d70f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 6eh
        push 27fh
        push 8
        push ecx
        mov ecx, dword ptr [esi + 8ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 84 81 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d7110
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 7E 56 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0dh
        mov ebx, 19h
        ; Exact mapped bytes 74 73: je 0x100d71ac
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0F: jle 0x100d7153
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d7153
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100d7155
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push 0
        push 0
        push 0a3h
        push 268h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 3D 78 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d71ae
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
        ; Exact mapped bytes EB 02: jmp 0x100d71ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 E3 55 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x55
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 73: je 0x100d7242
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0F: jle 0x100d71e9
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d71e9
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 64h]
        ; Exact mapped bytes EB 02: jmp 0x100d71eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push 0
        push 0
        push 0bbh
        push 268h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 A7 77 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d7244
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
        ; Exact mapped bytes EB 02: jmp 0x100d7244
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E8 4D 55 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x55
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0fh
        mov ebx, 18h
        ; Exact mapped bytes 74 73: je 0x100d72dd
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0F: jle 0x100d7284
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d7284
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 60h]
        ; Exact mapped bytes EB 02: jmp 0x100d7286
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push 0
        push 0
        push 0a3h
        push 268h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 0C 77 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d72df
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
        ; Exact mapped bytes EB 02: jmp 0x100d72df
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], edi
        ; Exact mapped bytes E8 AF 54 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 73: je 0x100d7376
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0F: jle 0x100d731d
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d731d
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 60h]
        ; Exact mapped bytes EB 02: jmp 0x100d731f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push 0
        push 0
        push 0bbh
        push 268h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 73 76 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d7378
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
        ; Exact mapped bytes EB 02: jmp 0x100d7378
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 184h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], edi
        ; Exact mapped bytes E8 13 54 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 30: je 0x100d73cd
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 8ch]
        push 0
        push 0
        push 0ffffffh
        push 79h
        push 229h
        push 6dh
        push 1d9h
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 35 12 F4 FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x12
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d73cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 BC 53 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 42: je 0x100d7436
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100d740f
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100d740f
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100d7411
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
        push 40h
        push 8ah
        push 28bh
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
        ; Exact mapped bytes E8 8C FE F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d7438
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 53 53 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 74 3E: je 0x100d749b
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100d7474
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100d7476
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push 8ah
        push 28bh
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
        ; Exact mapped bytes E8 27 FE F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d749d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 EE 52 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 45: je 0x100d7507
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x100d74e0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d74e0
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x100d74e2
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
        push 40h
        push 170h
        push 246h
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
        ; Exact mapped bytes E8 BB FD F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d7509
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 82 52 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 45: je 0x100d7573
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x100d754c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d754c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x100d754e
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
        push 40h
        push 170h
        push 246h
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
        ; Exact mapped bytes E8 4F FD F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d7575
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 16 52 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 45: je 0x100d75df
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x100d75b8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d75b8
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 80h
        ; Exact mapped bytes EB 02: jmp 0x100d75ba
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
        push 40h
        push 170h
        push 291h
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
        ; Exact mapped bytes E8 E3 FC F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfc
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d75e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 AD 51 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 17h
        mov ebx, 1ah
        ; Exact mapped bytes 74 73: je 0x100d767d
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0F: jle 0x100d7624
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d7624
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 68h]
        ; Exact mapped bytes EB 02: jmp 0x100d7626
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push 0
        push 0
        push 8ah
        push 28bh
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 6C 73 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d767f
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
        ; Exact mapped bytes EB 02: jmp 0x100d767f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d4h], edi
        ; Exact mapped bytes E8 0F 51 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 74: je 0x100d7717
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 11h
        ; Exact mapped bytes 7E 0F: jle 0x100d76be
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d76be
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 44h]
        ; Exact mapped bytes EB 02: jmp 0x100d76c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push 0
        push 0
        push 170h
        push 246h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 D2 72 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d7719
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
        ; Exact mapped bytes EB 02: jmp 0x100d7719
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d8h], edi
        ; Exact mapped bytes E8 75 50 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 74: je 0x100d77b1
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 11h
        ; Exact mapped bytes 7E 0F: jle 0x100d7758
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d7758
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 44h]
        ; Exact mapped bytes EB 02: jmp 0x100d775a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push 0
        push 0
        push 170h
        push 291h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 38 72 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d77b3
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
        ; Exact mapped bytes EB 02: jmp 0x100d77b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0dch], edi
        mov ecx, dword ptr [esi + 0d4h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 92 79 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        push 0fffffeffh
        ; Exact mapped bytes E8 82 79 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        push 0fffffeffh
        ; Exact mapped bytes E8 72 79 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 101h
        ; Exact mapped bytes E8 62 79 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 101h
        ; Exact mapped bytes E8 52 79 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 101h
        ; Exact mapped bytes E8 42 79 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 32 79 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 22 79 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        mov edi, 0fff0h
        push 0a0h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 33 4F 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 74 45: je 0x100d78c1
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x100d789a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d789a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x100d789c
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
        push 40h
        push 0a5h
        push 2bfh
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
        ; Exact mapped bytes E8 01 FA F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfa
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d78c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 C8 4E 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 74 45: je 0x100d792d
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x100d7906
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d7906
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x100d7908
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
        push 40h
        push 0adh
        push 2bfh
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
        ; Exact mapped bytes E8 95 F9 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d792f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 5C 4E 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1ch
        ; Exact mapped bytes 74 45: je 0x100d7999
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x100d7972
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d7972
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x100d7974
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
        push 40h
        push 0beh
        push 2bfh
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
        ; Exact mapped bytes E8 29 F9 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d799b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 F0 4D 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x4d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1dh
        ; Exact mapped bytes 74 45: je 0x100d7a05
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x100d79de
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d79de
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x100d79e0
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
        push 40h
        push 0c6h
        push 2bfh
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
        ; Exact mapped bytes E8 BD F8 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d7a07
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d0h], eax
        mov ecx, dword ptr [esi + 0c4h]
        push 101h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 3E 77 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push 101h
        ; Exact mapped bytes E8 2E 77 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0cch]
        push 101h
        ; Exact mapped bytes E8 1E 77 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        push 101h
        ; Exact mapped bytes E8 0E 77 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 44 4D 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1eh
        ; Exact mapped bytes 74 40: je 0x100d7aac
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100d7a8d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d7a8d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d7a8f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0a7h
        push 13bh
        push 8
        push ecx
        mov ecx, dword ptr [esi + 94h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E6 77 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d7aae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 DD 4C 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1fh
        ; Exact mapped bytes 74 40: je 0x100d7b13
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100d7af4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d7af4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d7af6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 94h]
        push 0bfh
        push 13bh
        push 8
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 7F 77 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d7b15
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 184h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 76 4C 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 20h
        ; Exact mapped bytes 74 30: je 0x100d7b6a
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 94h]
        push 0
        push 0
        push 0ffffffh
        push 79h
        push 0eah
        push 6dh
        push 9ah
        push ecx
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 98 0A F4 FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0a
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d7b6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0ach], eax
        mov eax, dword ptr [esi + 94h]
        push 90h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E8 0B 4C 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 21h
        ; Exact mapped bytes 74 34: je 0x100d7bd9
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 8ch]
        push 0
        push 0
        push 0ffffffh
        push 153h
        push 212h
        push 0e8h
        push 1dbh
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 A9 BF 02 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d7bdb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes E8 B0 4B 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 22h
        ; Exact mapped bytes 74 34: je 0x100d7c34
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 8ch]
        push 0
        push 0
        push 0ffffffh
        push 153h
        push 2a0h
        push 0e8h
        push 218h
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 4E BF 02 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d7c36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 55 4B 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 23h
        ; Exact mapped bytes 74 34: je 0x100d7c8f
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 8ch]
        push 0
        push 0
        push 0ffffffh
        push 153h
        push 2b5h
        push 0e8h
        push 2a4h
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F3 BE 02 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d7c91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes E8 FA 4A 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 24h
        ; Exact mapped bytes 74 34: je 0x100d7cea
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 94h]
        push 0
        push 0
        push 0ffffffh
        push 153h
        push 0d3h
        push 0e8h
        push 9ch
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 98 BE 02 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d7cec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0ech], eax
        ; Exact mapped bytes E8 9F 4A 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 25h
        ; Exact mapped bytes 74 34: je 0x100d7d45
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 94h]
        push 0
        push 0
        push 0ffffffh
        push 153h
        push 161h
        push 0e8h
        push 0d9h
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 3D BE 02 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d7d47
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0f0h], eax
        ; Exact mapped bytes E8 44 4A 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 26h
        ; Exact mapped bytes 74 34: je 0x100d7da0
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 94h]
        push 0
        push 0
        push 0ffffffh
        push 153h
        push 176h
        push 0e8h
        push 165h
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 E2 BD 02 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d7da2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 0f4h], eax
        lea edi, [esi + 118h]
        mov dword ptr [esp + 2ch], 0e7h
        push 58h
        ; Exact mapped bytes E8 DE 49 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebp
        test ebp, ebp
        mov byte ptr [esp + 1ch], 27h
        ; Exact mapped bytes 74 7E: je 0x100d7e52
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 12h
        ; Exact mapped bytes 7E 12: jle 0x100d7df2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d7df2
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 480h]
        ; Exact mapped bytes EB 02: jmp 0x100d7df4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push 0
        push 0
        push ecx
        push 218h
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 9E 6B 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], 0
        mov dword ptr [ebp + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x100d7e54
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebx - 4]
        mov dword ptr [ebp + 10h], eax
        mov edx, dword ptr [ebx]
        lea ecx, [ebp + 14h]
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100d7e54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi - 20h], ebp
        ; Exact mapped bytes E8 3D 49 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebp
        test ebp, ebp
        mov byte ptr [esp + 1ch], 28h
        ; Exact mapped bytes 74 7E: je 0x100d7ef3
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 12h
        ; Exact mapped bytes 7E 12: jle 0x100d7e93
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d7e93
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 480h]
        ; Exact mapped bytes EB 02: jmp 0x100d7e95
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esi + 94h]
        push 40h
        push 0
        push 0
        push ecx
        push 0d9h
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 FD 6A 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], 0
        mov dword ptr [ebp + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x100d7ef5
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebx - 4]
        mov dword ptr [ebp + 10h], eax
        mov edx, dword ptr [ebx]
        lea ecx, [ebp + 14h]
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100d7ef5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [edi], ebp
        mov eax, dword ptr [edi - 20h]
        xor ecx, ecx
        push -32h
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [edi]
        mov byte ptr [esp + 20h], 0
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [edi - 20h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [edi - 20h]
        ; Exact mapped bytes E8 3B 72 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push -32h
        ; Exact mapped bytes E8 32 72 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        add edi, 4
        add eax, 0dh
        cmp eax, 14fh
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 0F 8C 74 FE FF FF: jl 0x100d7dbb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 52 48 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        xor ebp, ebp
        mov byte ptr [esp + 1ch], 29h
        cmp edi, ebp
        ; Exact mapped bytes 74 74: je 0x100d7fd6
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 20h
        ; Exact mapped bytes 7E 12: jle 0x100d7f80
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100d7f80
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 80h]
        ; Exact mapped bytes EB 02: jmp 0x100d7f82
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push ebp
        push ebp
        push 0d2h
        push 1d1h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 12 6A 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100d7fd8
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
        ; Exact mapped bytes EB 02: jmp 0x100d7fd8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 138h], edi
        ; Exact mapped bytes E8 B6 47 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 2ah
        ; Exact mapped bytes 74 74: je 0x100d8070
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 20h
        ; Exact mapped bytes 7E 12: jle 0x100d801a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100d801a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 80h]
        ; Exact mapped bytes EB 02: jmp 0x100d801c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 94h]
        push 40h
        push ebp
        push ebp
        push 0d2h
        push 92h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 78 69 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100d8072
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100d8072
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 13ch], edi
        ; Exact mapped bytes E8 1C 47 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 2bh
        ; Exact mapped bytes 74 74: je 0x100d810a
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100d80b4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100d80b4
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes EB 02: jmp 0x100d80b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push ebp
        push ebp
        push 0ebh
        push 1dbh
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 DE 68 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100d810c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebx]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100d810c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 140h], edi
        ; Exact mapped bytes E8 82 46 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 2ch
        ; Exact mapped bytes 74 74: je 0x100d81a4
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100d814e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100d814e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes EB 02: jmp 0x100d8150
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 94h]
        push 40h
        push ebp
        push ebp
        push 0ebh
        push 9ch
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 44 68 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100d81a6
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
        ; Exact mapped bytes EB 02: jmp 0x100d81a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 144h], edi
        mov ecx, dword ptr [esi + 140h]
        push 101h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 9F 6F 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 144h]
        push 101h
        ; Exact mapped bytes E8 8F 6F 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 140h]
        mov ecx, 0fffeh
        push 0a0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 144h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 AC 45 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 2dh
        ; Exact mapped bytes 74 4B: je 0x100d824f
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100d8222
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d8222
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x100d8224
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
        push 0cfh
        push 2c2h
        push ecx
        mov ecx, dword ptr [esi + 8ch]
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
        ; Exact mapped bytes E8 73 F0 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d8251
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 148h], eax
        ; Exact mapped bytes E8 3A 45 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 2eh
        ; Exact mapped bytes 74 4B: je 0x100d82c1
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x100d8294
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d8294
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x100d8296
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8ch]
        push 40h
        push 150h
        push 2c2h
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
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 01 F0 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf0
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d82c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 14ch], eax
        ; Exact mapped bytes E8 C8 44 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 2fh
        ; Exact mapped bytes 74 4B: je 0x100d8333
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100d8306
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d8306
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x100d8308
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
        push 0cfh
        push 183h
        push ecx
        mov ecx, dword ptr [esi + 94h]
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
        ; Exact mapped bytes E8 8F EF F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d8335
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 150h], eax
        ; Exact mapped bytes E8 56 44 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 30h
        ; Exact mapped bytes 74 4B: je 0x100d83a5
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x100d8378
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d8378
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x100d837a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 94h]
        push 40h
        push 150h
        push 183h
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
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 1D EF F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d83a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 154h], eax
        ; Exact mapped bytes E8 E7 43 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 31h
        ; Exact mapped bytes 74 77: je 0x100d8442
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x100d83e9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100d83e9
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 240h]
        ; Exact mapped bytes EB 02: jmp 0x100d83eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 8ch]
        push 40h
        push ebp
        push ebp
        push 0dfh
        push 2c3h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 A9 65 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x100d8444
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100d8444
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 158h], edi
        ; Exact mapped bytes E8 4A 43 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 32h
        ; Exact mapped bytes 74 77: je 0x100d84df
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x100d8486
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100d8486
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 240h]
        ; Exact mapped bytes EB 02: jmp 0x100d8488
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 94h]
        push 40h
        push ebp
        push ebp
        push 0dfh
        push 184h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 0C 65 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        cmp ebx, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x100d84e1
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebx]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100d84e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 15ch], edi
        ; Exact mapped bytes E8 AA 42 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 33h
        ; Exact mapped bytes 74 45: je 0x100d854b
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0ch
        ; Exact mapped bytes 7E 12: jle 0x100d8524
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d8524
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 300h
        ; Exact mapped bytes EB 02: jmp 0x100d8526
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
        push 40h
        push 0b7h
        push 1d3h
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
        ; Exact mapped bytes E8 77 ED F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xed
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d854d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 190h], eax
        ; Exact mapped bytes E8 3E 42 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 34h
        ; Exact mapped bytes 74 45: je 0x100d85b7
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 12: jle 0x100d8590
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d8590
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 340h
        ; Exact mapped bytes EB 02: jmp 0x100d8592
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
        push 40h
        push 0b7h
        push 1f9h
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
        ; Exact mapped bytes E8 0B ED F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xed
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d85b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 194h], eax
        ; Exact mapped bytes E8 D2 41 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 35h
        ; Exact mapped bytes 74 45: je 0x100d8623
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x100d85fc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d85fc
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x100d85fe
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
        push 40h
        push 0b7h
        push 219h
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
        ; Exact mapped bytes E8 9F EC F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xec
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d8625
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 198h], eax
        mov eax, dword ptr [esi + 194h]
        push 13a8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes E8 5D 41 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 36h
        ; Exact mapped bytes 74 26: je 0x100d8679
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 0F BF 4E 26: movsx ecx, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0x26
        mov edx, dword ptr [esi + 60h]
        push 40h
        add ecx, 0c8h
        push ebp
        push ecx
        push 81h
        push 0e0h
        push esi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 79 47 00 00: call 0x100dcdf0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d867b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 2b8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 164h], eax
        ; Exact mapped bytes E8 10 41 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 37h
        ; Exact mapped bytes 74 23: je 0x100d86c3
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 0F BF 4E 26: movsx ecx, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0x26
        mov edx, dword ptr [esi + 60h]
        push 40h
        add ecx, 0c8h
        push ebp
        push ecx
        push 6dh
        push 0e5h
        push esi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 5F 58 00 00: call 0x100ddf20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d86c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 300h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 160h], eax
        ; Exact mapped bytes E8 C6 40 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 38h
        ; Exact mapped bytes 74 15: je 0x100d86ff
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push ebp
        push ebp
        push 1eh
        push 258h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A3 1D FD FF: call 0x100aa4a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d8701
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 144h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 16ch], eax
        ; Exact mapped bytes E8 8A 40 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 39h
        ; Exact mapped bytes 74 19: je 0x100d873f
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [esi + 60h]
        push 40h
        push ebp
        push ebp
        push 32h
        push 1cch
        push esi
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 23 70 00 00: call 0x100df760
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d8741
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 16ch]
        mov dword ptr [esi + 170h], eax
        ; Exact mapped bytes 66 C7 82 FC 02 00 00 01 00: mov word ptr [edx + 0x2fc], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        ; Exact mapped bytes 66 89 AE 9C 01 00 00: mov word ptr [esi + 0x19c], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 AE 9E 01 00 00: mov word ptr [esi + 0x19e], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 1a0h], 0
        mov ecx, eax
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp ecx, eax
        ; Exact mapped bytes 75 F5: jne 0x100d8775
        __asm _emit 0x75
        __asm _emit 0xf5
        mov eax, dword ptr [esi + 8ch]
        mov eax, dword ptr [eax + 3ch]
        mov ecx, eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp ecx, eax
        ; Exact mapped bytes 75 F5: jne 0x100d878b
        __asm _emit 0x75
        __asm _emit 0xf5
        mov ecx, dword ptr [esi + 94h]
        mov eax, dword ptr [ecx + 3ch]
        mov ecx, eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp ecx, eax
        ; Exact mapped bytes 75 F5: jne 0x100d87a1
        __asm _emit 0x75
        __asm _emit 0xf5
        mov edx, dword ptr [esi + 4]
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 1c4h], ebp
        mov dword ptr [esi + 1c8h], ebp
        mov dword ptr [esi + 1d0h], ebp
        ; Exact mapped bytes 66 89 AE 84 01 00 00: mov word ptr [esi + 0x184], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 AE 82 01 00 00: mov word ptr [esi + 0x182], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 AE 80 01 00 00: mov word ptr [esi + 0x180], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 AE 7E 01 00 00: mov word ptr [esi + 0x17e], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 AE 7C 01 00 00: mov word ptr [esi + 0x17c], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 AE 7A 01 00 00: mov word ptr [esi + 0x17a], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 AE 78 01 00 00: mov word ptr [esi + 0x178], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 1cch], ebp
        mov dword ptr [esi + 54h], 0fffffe3eh
        mov dword ptr [esi + 1d4h], ebp
        mov dword ptr [esi + 1d8h], ebp
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
