// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DDF20 .. +0x703 bytes.
extern "C" __declspec(naked) void FUN_100ddf20_100DDF20() {
    __asm {
        push -1
        push 1017381ch
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
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 34h]
        push edi
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebp
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 4B 0A 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor eax, eax
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov ecx, dword ptr [esp + 24h]
        push 54h
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esi], 101764e0h
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes E8 0D E8 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 70: je 0x100de015
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 31h
        ; Exact mapped bytes 7E 12: jle 0x100ddfc3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ddfc3
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0c4h]
        ; Exact mapped bytes EB 02: jmp 0x100ddfc5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D7 09 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100de00f
        __asm _emit 0x74
        __asm _emit 0x29
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
        mov ebx, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100de017
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes E8 7A E7 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe7
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 70: je 0x100de0a8
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 30h
        ; Exact mapped bytes 7E 12: jle 0x100de056
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100de056
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes EB 02: jmp 0x100de058
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 44 09 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100de0a2
        __asm _emit 0x74
        __asm _emit 0x29
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
        mov ebx, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100de0aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 E7 E6 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe6
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 70: je 0x100de13b
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 33h
        ; Exact mapped bytes 7E 12: jle 0x100de0e9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100de0e9
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0cch]
        ; Exact mapped bytes EB 02: jmp 0x100de0eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B1 08 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100de135
        __asm _emit 0x74
        __asm _emit 0x29
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
        mov ebx, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100de13d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 54 E6 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe6
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 70: je 0x100de1ce
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 32h
        ; Exact mapped bytes 7E 12: jle 0x100de17c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100de17c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes EB 02: jmp 0x100de17e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1E 08 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100de1c8
        __asm _emit 0x74
        __asm _emit 0x29
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
        mov ebx, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100de1d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 70h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 7B 0F 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 0fffffeffh
        ; Exact mapped bytes E8 6E 0F 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 101h
        ; Exact mapped bytes E8 61 0F 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 9A E5 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 76: je 0x100de28e
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 35h
        ; Exact mapped bytes 7E 12: jle 0x100de236
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100de236
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 0d4h]
        ; Exact mapped bytes EB 02: jmp 0x100de238
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        lea edx, [ebp + 37h]
        push 0
        add eax, 17h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5E 07 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100de288
        __asm _emit 0x74
        __asm _emit 0x29
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
        mov ebx, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100de290
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0b4h
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 7C 0E 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 F2 E4 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 49: je 0x100de307
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0ah
        ; Exact mapped bytes 7E 12: jle 0x100de2dc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100de2dc
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 280h
        ; Exact mapped bytes EB 02: jmp 0x100de2de
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 9fh]
        push 40h
        push edx
        lea edx, [ebx + 111h]
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
        ; Exact mapped bytes E8 BB 8F F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8f
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100de309
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 82 E4 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 49: je 0x100de377
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 12: jle 0x100de34c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100de34c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100de34e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 9fh]
        push 40h
        push edx
        lea edx, [ebx + 141h]
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
        ; Exact mapped bytes E8 4B 8F F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8f
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100de379
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 12 E4 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 46: je 0x100de3e4
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x100de3bc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100de3bc
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x100de3be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 33h]
        push 40h
        push edx
        lea edx, [ebx + 173h]
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
        ; Exact mapped bytes E8 DE 8E F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8e
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100de3e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 A5 E3 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 49: je 0x100de454
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x100de429
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100de429
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x100de42b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 93h]
        push 40h
        push edx
        lea edx, [ebx + 173h]
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
        ; Exact mapped bytes E8 6E 8E F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8e
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100de456
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 35 E3 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 30: je 0x100de4ab
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0
        lea ecx, [ebp + 94h]
        push 0ffffffh
        push ecx
        lea edx, [ebx + 0d1h]
        lea ecx, [ebp + 39h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 44h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D7 56 02 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100de4ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 2ach], eax
        ; Exact mapped bytes E8 DE E2 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 33: je 0x100de505
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        lea edx, [ebp + 94h]
        push 0ffffffh
        push edx
        lea ecx, [ebx + 15eh]
        lea edx, [ebp + 39h]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, 0d7h
        push edx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7D 56 02 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100de507
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add ebp, 38h
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 2b0h], eax
        lea ebx, [esi + 78h]
        mov dword ptr [esp + 3ch], ebp
        mov dword ptr [esp + 38h], 7
        push 54h
        ; Exact mapped bytes E8 75 E2 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 76: je 0x100de5b3
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 3eh
        ; Exact mapped bytes 7E 12: jle 0x100de55b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100de55b
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0f8h]
        ; Exact mapped bytes EB 02: jmp 0x100de55d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 3ch]
        push 40h
        push 0
        push 0
        add eax, 1fh
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 38 04 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100de5af
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
        ; Exact mapped bytes EB 02: jmp 0x100de5b5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebx], ecx
        ; Exact mapped bytes E8 9A 0B 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [esp + 3ch]
        add ebx, 4
        add ecx, 0dh
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 38h]
        dec eax
        mov dword ptr [esp + 3ch], ecx
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 39 FF FF FF: jne 0x100de524
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        mov byte ptr [esi + 0a4h], 0
        or ah, 5
        mov dword ptr [esi + 2a8h], 0
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
