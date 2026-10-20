// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BF720 .. +0x700 bytes.
extern "C" __declspec(naked) void FUN_100bf720_100BF720() {
    __asm {
        push -1
        push 10172451h
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
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        push ebp
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 EB 7D F8 FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0xff
        xor ebx, ebx
        push 198h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 1017627ch
        ; Exact mapped bytes E8 25 D0 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xd0
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 0F: je 0x100bf79a
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101ac11ch
        mov ecx, eax
        ; Exact mapped bytes E8 28 03 04 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100bf79c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 F3 CF 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xcf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 76: je 0x100bf835
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [esi + 84h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100bf7db
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100bf7db
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100bf7dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push edx
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BA F1 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100bf82d
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
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100bf837
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 88h], ecx
        ; Exact mapped bytes E8 15 F9 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        push ebx
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes E8 BD F8 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 36 CF 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xcf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 78: je 0x100bf8f4
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 84h]
        cmp dword ptr [eax + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100bf89a
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100bf89a
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100bf89c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push ecx
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FB F0 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100bf8ec
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
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100bf8f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push ebx
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 8ch], ecx
        ; Exact mapped bytes E8 1A F8 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 87 CE 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xce
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 78: je 0x100bf9a3
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 84h]
        cmp dword ptr [eax + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x100bf949
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100bf949
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x100bf94b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push eax
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4C F0 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100bf99b
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
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100bf9a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 90h], ecx
        ; Exact mapped bytes E8 A7 F7 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        push ebx
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 90h]
        ; Exact mapped bytes E8 4F F7 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 C8 CD 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xcd
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 78: je 0x100bfa62
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 84h]
        cmp dword ptr [eax + 164h], 3
        ; Exact mapped bytes 7E 0F: jle 0x100bfa08
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100bfa08
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x100bfa0a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push edx
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8D EF 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100bfa5a
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
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100bfa64
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 94h], ecx
        ; Exact mapped bytes E8 E8 F6 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        push ebx
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 94h]
        ; Exact mapped bytes E8 90 F6 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 06 CD 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xcd
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 47: je 0x100bfaf1
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [esi + 84h]
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100bfac2
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 75 02: jne 0x100bfac4
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        mov edi, dword ptr [esp + 28h]
        push edx
        lea edx, [ebp + 7bh]
        push edx
        lea edx, [edi + 212h]
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
        ; Exact mapped bytes E8 D1 77 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100bfaf7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 28h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 95 CC 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 49: je 0x100bfb64
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 84h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100bfb39
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x100bfb39
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100bfb3b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        push edx
        lea edx, [ebp + 7bh]
        push edx
        lea edx, [edi + 24eh]
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
        ; Exact mapped bytes E8 5E 77 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100bfb66
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 98h]
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 E0 F5 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push ebx
        ; Exact mapped bytes E8 94 F5 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 101h
        ; Exact mapped bytes E8 C4 F5 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push ebx
        ; Exact mapped bytes E8 78 F5 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        push 0e8h
        ; Exact mapped bytes E8 EE CB 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xcb
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 3B: je 0x100bfbfd
        __asm _emit 0x74
        __asm _emit 0x3b
        push ebx
        push ebx
        lea ecx, [ebp + 1d2h]
        push 0ffffh
        push ecx
        lea edx, [edi + 265h]
        lea ecx, [ebp + 0ach]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [edi + 0adh]
        push edx
        mov edx, dword ptr [esi + 94h]
        push ecx
        push ebx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 55 8D F5 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8d
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100bfbff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes 66 C7 80 9C 00 00 00 47 00: mov word ptr [eax + 0x9c], 0x47
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        push ebx
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 F6 F4 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 6C CB 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xcb
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 4F: je 0x100bfc93
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 12: jle 0x100bfc65
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100bfc65
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 780h
        ; Exact mapped bytes EB 02: jmp 0x100bfc67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        push edx
        lea edx, [ebp + 0a0h]
        push edx
        lea edx, [edi + 277h]
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
        ; Exact mapped bytes E8 2F 76 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100bfc95
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 B5 F4 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push ebx
        ; Exact mapped bytes E8 69 F4 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 DF CA 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xca
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 4F: je 0x100bfd20
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1fh
        ; Exact mapped bytes 7E 12: jle 0x100bfcf2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100bfcf2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 7c0h
        ; Exact mapped bytes EB 02: jmp 0x100bfcf4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        push edx
        lea edx, [ebp + 1c9h]
        push edx
        lea edx, [edi + 277h]
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
        ; Exact mapped bytes E8 A2 75 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x75
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100bfd22
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 28 F4 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push ebx
        ; Exact mapped bytes E8 DC F3 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 52 CA 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xca
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 4F: je 0x100bfdad
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 25h
        ; Exact mapped bytes 7E 12: jle 0x100bfd7f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100bfd7f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 940h
        ; Exact mapped bytes EB 02: jmp 0x100bfd81
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        add ebp, 1efh
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add edi, 244h
        push ebp
        push edi
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
        ; Exact mapped bytes E8 15 75 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x75
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100bfdaf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 9B F3 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        ; Exact mapped bytes E8 4F F3 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        mov dword ptr [esi + 0b8h], ebx
        or ah, 5
        mov dword ptr [esi + 0bch], ebx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0c4h], ebx
        mov dword ptr [esi + 0c8h], ebx
        mov dword ptr [esi + 0c0h], 1
        mov dword ptr [esi + 0cch], ebx
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
