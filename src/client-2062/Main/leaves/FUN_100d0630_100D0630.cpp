// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D0630 .. +0x10D7 bytes.
extern "C" __declspec(naked) void FUN_100d0630_100D0630() {
    __asm {
        push -1
        push 10173074h
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
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 24h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 38h]
        mov edi, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push edi
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 39 E3 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        xor ebx, ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi], 10176400h
        mov dword ptr [esi + 0b54h], 70h
        push 54h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esi + 0b58h], 5dh
        ; Exact mapped bytes E8 E8 C0 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 74 23: je 0x100d06ed
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 30h]
        add ecx, 0ah
        push ecx
        push ebx
        push ebx
        push edx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CE E2 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100d06ef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes E8 A3 C0 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes 74 25: je 0x100d0734
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 30h]
        add eax, 5
        push eax
        push ebx
        push ebx
        push ecx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 89 E2 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d0736
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 64h], ecx
        ; Exact mapped bytes E8 19 EA 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 49 C0 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes 74 33: je 0x100d079c
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esi + 0b58h]
        mov ecx, dword ptr [esp + 30h]
        add edx, 14h
        add eax, ecx
        mov ecx, dword ptr [esi + 0b54h]
        push edx
        push ebx
        add ecx, ebp
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1F E2 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100d079e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 F4 BF 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 4
        ; Exact mapped bytes 74 36: je 0x100d07f4
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esi + 0b58h]
        mov ecx, dword ptr [esp + 30h]
        add edx, 0fh
        add eax, ecx
        mov ecx, dword ptr [esi + 0b54h]
        push edx
        push ebx
        push ebx
        add ecx, ebp
        push eax
        mov eax, dword ptr [esi + 68h]
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 C7 E1 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100d07f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 6ch], edi
        mov ecx, dword ptr [esi + 68h]
        push 101h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 56 E9 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        mov edi, 7fffh
        push 0fffffeffh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 3D E9 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        push 0a0h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E8 6C BF 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 5
        ; Exact mapped bytes 74 35: je 0x100d0879
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        mov edi, dword ptr [esp + 30h]
        ; Exact mapped bytes 66 81 C1 E8 03: add cx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x03
        push ecx
        lea edx, [edi + 1eeh]
        lea ecx, [ebp + 20ch]
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
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
        ; Exact mapped bytes E8 49 6A F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6a
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100d087f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 30h]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 CE E8 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 FB BE 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 6
        ; Exact mapped bytes 74 31: je 0x100d08e6
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        lea ecx, [edi + 1eeh]
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        lea edx, [ebp + 266h]
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
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
        push ebx
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 DC 69 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d08e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 65 E8 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 92 BE 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 7
        ; Exact mapped bytes 74 31: je 0x100d094f
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        lea edx, [edi + 1f2h]
        ; Exact mapped bytes 66 81 C1 E8 03: add cx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x03
        push ecx
        lea ecx, [ebp + 124h]
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
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
        ; Exact mapped bytes E8 73 69 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d0951
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 FC E7 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 29 BE 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 8
        ; Exact mapped bytes 74 31: je 0x100d09b8
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        add edi, 1f2h
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        lea ecx, [ebp + 1feh]
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
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
        ; Exact mapped bytes E8 0A 69 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d09ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 90 E7 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe7
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 BD BD 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 9
        ; Exact mapped bytes 74 32: je 0x100d0a27
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov edx, dword ptr [esp + 30h]
        ; Exact mapped bytes 66 05 E8 03: add ax, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x03
        add edx, 1f2h
        push eax
        push ebx
        push ebx
        lea eax, [ebp + 124h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 96 DF 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d0a29
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 84h], ecx
        ; Exact mapped bytes E8 23 E7 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        lea edi, [esi + 0de8h]
        mov dword ptr [esp + 34h], 4
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 81 60 24 FF DF: and word ptr [eax + 0x24], 0xdfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xdf
        add ebp, 249h
        mov dword ptr [esp + 38h], ebp
        push 54h
        ; Exact mapped bytes E8 2C BD 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 14h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 20h], 0ah
        ; Exact mapped bytes 74 2C: je 0x100d0ab2
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 38h]
        ; Exact mapped bytes 66 05 4C 04: add ax, 0x44c
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x04
        push eax
        push ebx
        add ecx, 74h
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 0A DF 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100d0ab4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi - 4], ebp
        ; Exact mapped bytes E8 DE BC 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 14h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 20h], 0bh
        ; Exact mapped bytes 74 2E: je 0x100d0b02
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [esp + 38h]
        ; Exact mapped bytes 66 05 4C 04: add ax, 0x44c
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x04
        push eax
        mov eax, dword ptr [esp + 34h]
        push ebx
        add eax, 74h
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 BC DE 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100d0b04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi], ecx
        ; Exact mapped bytes E8 4C E6 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov edx, dword ptr [edi - 4]
        mov ecx, dword ptr [esi + 60h]
        push edx
        ; Exact mapped bytes E8 78 E4 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esi + 60h]
        push eax
        ; Exact mapped bytes E8 6D E4 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        add edx, 1dh
        add edi, 8
        dec eax
        mov dword ptr [esp + 38h], edx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 1D FF FF FF: jne 0x100d0a6d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 46 BC 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0ch
        ; Exact mapped bytes 74 36: je 0x100d0ba0
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        mov edx, dword ptr [esp + 30h]
        ; Exact mapped bytes 66 81 C1 B0 04: add cx, 0x4b0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xb0
        __asm _emit 0x04
        add edx, 6fh
        push ecx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 245h
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
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
        ; Exact mapped bytes E8 22 67 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x67
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d0ba2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0e04h], eax
        ; Exact mapped bytes E8 A8 E5 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e04h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov edx, dword ptr [esi + 74h]
        mov ecx, dword ptr [esi + 60h]
        push edx
        ; Exact mapped bytes E8 D0 E3 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        mov ecx, dword ptr [esi + 60h]
        push eax
        ; Exact mapped bytes E8 C4 E3 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push ecx
        mov ecx, dword ptr [esi + 60h]
        ; Exact mapped bytes E8 B8 E3 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 80h]
        mov ecx, dword ptr [esi + 60h]
        push edx
        ; Exact mapped bytes E8 A9 E3 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e04h]
        mov ecx, dword ptr [esi + 60h]
        push eax
        ; Exact mapped bytes E8 9A E3 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, dword ptr [esi + 60h]
        ; Exact mapped bytes E8 8B E3 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 107h
        and edx, 0e5f0h
        mov edi, 4dah
        or dh, 5
        mov ecx, 0bfh
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov byte ptr [esi + 42ch], bl
        mov dword ptr [esi + 428h], ebx
        mov dword ptr [esi + 434h], 1bh
        mov dword ptr [esi + 438h], 0beh
        mov dword ptr [esi + 43ch], 7bh
        mov dword ptr [esi + 440h], 118h
        mov dword ptr [esi + 444h], 0c4h
        mov dword ptr [esi + 448h], 96h
        mov edx, 93h
        mov dword ptr [esi + 44ch], 178h
        mov dword ptr [esi + 450h], edx
        mov dword ptr [esi + 454h], 21ch
        mov dword ptr [esi + 458h], eax
        mov dword ptr [esi + 45ch], 2e6h
        mov dword ptr [esi + 460h], eax
        mov dword ptr [esi + 464h], 40eh
        mov dword ptr [esi + 468h], eax
        mov dword ptr [esi + 46ch], edi
        mov dword ptr [esi + 470h], ecx
        mov dword ptr [esi + 474h], 532h
        mov dword ptr [esi + 478h], eax
        mov dword ptr [esi + 47ch], 5f9h
        mov eax, 670h
        mov dword ptr [esi + 480h], ecx
        mov dword ptr [esi + 484h], eax
        mov dword ptr [esi + 488h], ecx
        mov dword ptr [esi + 48ch], eax
        mov eax, 4ah
        mov dword ptr [esi + 490h], eax
        mov dword ptr [esi + 494h], 6e7h
        mov dword ptr [esi + 498h], 7ch
        mov dword ptr [esi + 49ch], 76eh
        mov dword ptr [esi + 4a0h], 0c0h
        mov dword ptr [esi + 4a4h], 801h
        mov dword ptr [esi + 4a8h], 0bdh
        mov dword ptr [esi + 4ach], 4d8h
        mov dword ptr [esi + 4b0h], eax
        mov dword ptr [esi + 4b4h], 3e6h
        mov dword ptr [esi + 4b8h], eax
        mov dword ptr [esi + 4bch], 768h
        mov dword ptr [esi + 4c0h], 4bh
        mov dword ptr [esi + 4c4h], 8c6h
        mov dword ptr [esi + 4c8h], 0bch
        mov ecx, 139h
        mov dword ptr [esi + 4cch], 5a4h
        mov dword ptr [esi + 4d0h], ecx
        mov dword ptr [esi + 4d4h], 614h
        mov dword ptr [esi + 4d8h], ecx
        mov ecx, 146h
        mov dword ptr [esi + 4dch], 6ceh
        mov dword ptr [esi + 4e0h], ecx
        mov dword ptr [esi + 4e8h], ecx
        mov dword ptr [esi + 4f0h], ecx
        mov ecx, 0f5h
        mov dword ptr [esi + 4f8h], edx
        mov dword ptr [esi + 5e8h], ecx
        mov dword ptr [esi + 5f0h], ecx
        mov dword ptr [esi + 5f8h], ecx
        mov ecx, 0b5h
        mov ebp, 604h
        mov edx, 65h
        mov dword ptr [esi + 4e4h], 79ah
        mov dword ptr [esi + 4ech], 892h
        mov dword ptr [esi + 4f4h], 21bh
        mov dword ptr [esi + 4fch], 49ch
        mov dword ptr [esi + 500h], eax
        mov dword ptr [esi + 504h], 55bh
        mov dword ptr [esi + 508h], eax
        mov dword ptr [esi + 50ch], 5e9h
        mov dword ptr [esi + 510h], eax
        mov dword ptr [esi + 514h], 6a8h
        mov dword ptr [esi + 518h], 105h
        mov dword ptr [esi + 5dch], 14ch
        mov dword ptr [esi + 5e0h], 3fh
        mov dword ptr [esi + 5e4h], 28ch
        mov dword ptr [esi + 5ech], 3a4h
        mov dword ptr [esi + 5f4h], 426h
        mov dword ptr [esi + 5fch], 58ch
        mov dword ptr [esi + 600h], ecx
        mov dword ptr [esi + 604h], ebp
        mov dword ptr [esi + 608h], ecx
        mov dword ptr [esi + 60ch], 67eh
        mov dword ptr [esi + 610h], ecx
        mov dword ptr [esi + 614h], 732h
        mov dword ptr [esi + 618h], ecx
        mov dword ptr [esi + 61ch], 40ch
        mov dword ptr [esi + 620h], edx
        mov dword ptr [esi + 624h], 4d4h
        mov dword ptr [esi + 628h], edx
        mov dword ptr [esi + 62ch], ebp
        mov dword ptr [esi + 630h], edx
        mov dword ptr [esi + 634h], 6e4h
        mov dword ptr [esi + 638h], 31h
        mov dword ptr [esi + 63ch], 6c4h
        mov dword ptr [esi + 640h], 75h
        mov dword ptr [esi + 644h], 81ch
        mov dword ptr [esi + 648h], 47h
        mov dword ptr [esi + 64ch], 89dh
        mov dword ptr [esi + 650h], ecx
        mov dword ptr [esi + 654h], 91bh
        mov dword ptr [esi + 658h], 6fh
        mov dword ptr [esi + 65ch], 594h
        mov dword ptr [esi + 660h], 142h
        mov ecx, 0fbh
        mov dword ptr [esi + 664h], 60bh
        mov ebp, 664h
        mov dword ptr [esi + 668h], ecx
        mov edx, 141h
        mov dword ptr [esi + 66ch], ebp
        mov dword ptr [esi + 670h], edx
        mov dword ptr [esi + 674h], 6dah
        mov dword ptr [esi + 678h], ecx
        mov dword ptr [esi + 67ch], 73ch
        mov dword ptr [esi + 680h], edx
        mov dword ptr [esi + 684h], 800h
        mov dword ptr [esi + 688h], edx
        mov dword ptr [esi + 68ch], 21ah
        mov dword ptr [esi + 690h], 9fh
        mov dword ptr [esi + 694h], ebx
        mov dword ptr [esi + 698h], ebx
        mov dword ptr [esi + 69ch], ebx
        mov dword ptr [esi + 6a0h], ebx
        mov dword ptr [esi + 76ch], 164h
        mov dword ptr [esi + 770h], 0f6h
        mov ecx, 90h
        mov dword ptr [esi + 774h], 26ch
        mov dword ptr [esi + 778h], ecx
        mov dword ptr [esi + 77ch], 328h
        mov dword ptr [esi + 780h], ecx
        mov dword ptr [esi + 784h], edi
        mov dword ptr [esi + 788h], ecx
        mov dword ptr [esi + 78ch], 5f0h
        mov dword ptr [esi + 790h], ecx
        mov dword ptr [esi + 794h], 688h
        mov dword ptr [esi + 798h], ecx
        mov dword ptr [esi + 79ch], 6d0h
        mov dword ptr [esi + 7a0h], 48h
        mov dword ptr [esi + 7a4h], 72eh
        mov dword ptr [esi + 7a8h], ecx
        mov dword ptr [esi + 7ach], 844h
        mov dword ptr [esi + 7b0h], ecx
        mov dword ptr [esi + 7b4h], 2e6h
        mov dword ptr [esi + 7b8h], eax
        mov dword ptr [esi + 7bch], 3b0h
        mov dword ptr [esi + 7c0h], eax
        mov dword ptr [esi + 7c4h], 472h
        mov edi, 536h
        mov dword ptr [esi + 7c8h], eax
        mov dword ptr [esi + 7cch], edi
        mov dword ptr [esi + 7d0h], eax
        mov dword ptr [esi + 7d4h], ebp
        mov dword ptr [esi + 7d8h], 2eh
        mov eax, 0d8h
        mov dword ptr [esi + 7dch], 476h
        mov dword ptr [esi + 7e0h], eax
        mov dword ptr [esi + 7e4h], edi
        mov dword ptr [esi + 7e8h], eax
        mov dword ptr [esi + 7ech], 600h
        mov dword ptr [esi + 7f0h], eax
        mov eax, 0d4h
        mov dword ptr [esi + 7f4h], 6d6h
        mov dword ptr [esi + 7f8h], eax
        mov dword ptr [esi + 7fch], 79eh
        mov dword ptr [esi + 800h], eax
        mov dword ptr [esi + 804h], 3dch
        mov dword ptr [esi + 808h], 9ch
        mov dword ptr [esi + 80ch], 538h
        mov dword ptr [esi + 810h], 148h
        mov dword ptr [esi + 814h], 66ah
        mov dword ptr [esi + 818h], 11eh
        mov dword ptr [esi + 81ch], 6d7h
        mov dword ptr [esi + 820h], 13eh
        mov dword ptr [esi + 824h], 742h
        mov dword ptr [esi + 828h], 11dh
        mov dword ptr [esi + 82ch], 92eh
        mov dword ptr [esi + 830h], 4ch
        mov dword ptr [esi + 8fch], 1b3h
        mov dword ptr [esi + 900h], edx
        mov dword ptr [esi + 904h], 265h
        mov dword ptr [esi + 908h], ecx
        mov eax, 0c3h
        mov dword ptr [esi + 90ch], 33ch
        mov dword ptr [esi + 910h], eax
        mov dword ptr [esi + 914h], 4d8h
        mov dword ptr [esi + 918h], eax
        mov dword ptr [esi + 91ch], 6c8h
        mov dword ptr [esi + 920h], eax
        mov dword ptr [esi + 924h], 7e5h
        mov dword ptr [esi + 928h], eax
        mov dword ptr [esi + 92ch], 4dbh
        mov dword ptr [esi + 930h], 10ch
        mov dword ptr [esi + 934h], 641h
        mov dword ptr [esi + 938h], 10dh
        mov eax, 147h
        mov dword ptr [esi + 93ch], 746h
        mov dword ptr [esi + 940h], eax
        mov dword ptr [esi + 944h], 812h
        mov dword ptr [esi + 948h], eax
        mov dword ptr [esi + 94ch], 99bh
        mov dword ptr [esi + 950h], 105h
        mov eax, 5fh
        mov dword ptr [esi + 954h], 597h
        mov dword ptr [esi + 958h], eax
        mov dword ptr [esi + 95ch], 668h
        mov dword ptr [esi + 960h], eax
        mov dword ptr [esi + 964h], 730h
        mov dword ptr [esi + 968h], eax
        mov dword ptr [esi + 96ch], 2a5h
        mov dword ptr [esi + 970h], 10bh
        mov dword ptr [esi + 974h], 40dh
        mov dword ptr [esi + 978h], 60h
        mov dword ptr [esi + 97ch], ebx
        mov dword ptr [esi + 980h], ebx
        mov dword ptr [esi + 984h], ebx
        mov dword ptr [esi + 988h], ebx
        mov dword ptr [esi + 98ch], ebx
        mov dword ptr [esi + 990h], ebx
        mov dword ptr [esi + 994h], ebx
        mov dword ptr [esi + 998h], ebx
        mov dword ptr [esi + 99ch], ebx
        mov dword ptr [esi + 9a0h], ebx
        mov dword ptr [esi + 9a4h], ebx
        mov dword ptr [esi + 9a8h], ebx
        mov dword ptr [esi + 9ach], ebx
        mov dword ptr [esi + 9b0h], ebx
        mov dword ptr [esi + 9b4h], ebx
        mov dword ptr [esi + 9b8h], ebx
        mov dword ptr [esi + 9bch], ebx
        mov dword ptr [esi + 9c0h], ebx
        mov dword ptr [esp + 38h], ebx
        lea edi, [esi + 0c3ch]
        push 58h
        ; Exact mapped bytes E8 4B B4 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 34h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 20h], 0dh
        ; Exact mapped bytes 74 2C: je 0x100d1393
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, ebp
        ; Exact mapped bytes 66 05 E8 03: add ax, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x03
        push eax
        push ebx
        push ebx
        push 258h
        push 320h
        push esi
        ; Exact mapped bytes E8 2C D6 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100d1395
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [edi], ebp
        ; Exact mapped bytes 66 81 65 24 FB FF: and word ptr [ebp + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [eax + 50h], ecx
        ; Exact mapped bytes E8 EF B3 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 34h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 20h], 0eh
        ; Exact mapped bytes 74 29: je 0x100d13ec
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [edi]
        push 3e7h
        push ebx
        push ebx
        push 258h
        push 320h
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 D2 D5 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100d13ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 0c8h], ecx
        ; Exact mapped bytes E8 5E DD 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0c8h]
        add edi, 4
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esp + 38h]
        inc eax
        cmp eax, 32h
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8C 2B FF FF FF: jl 0x100d134e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [esi + 0dd8h]
        lea ebp, [esi + 434h]
        mov dword ptr [esp + 38h], edx
        mov dword ptr [esp + 34h], 3
        push 54h
        ; Exact mapped bytes E8 5E B3 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 0fh
        ; Exact mapped bytes 74 44: je 0x100d1498
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp + 4]
        mov edx, dword ptr [esi + 0b58h]
        mov ecx, dword ptr [esp + 30h]
        add eax, edx
        mov edx, dword ptr [esp + 2ch]
        add eax, ecx
        mov ecx, dword ptr [esi + 0b54h]
        add ecx, edx
        mov edx, dword ptr [ebp]
        add ecx, edx
        mov edx, dword ptr [esp + 3ch]
        add edx, 3e8h
        push edx
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 23 D5 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100d149a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [eax - 0ch], edi
        ; Exact mapped bytes E8 F4 B2 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 10h
        ; Exact mapped bytes 74 4D: je 0x100d150b
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp + 4]
        mov edx, dword ptr [esi + 0b58h]
        mov ecx, dword ptr [esp + 30h]
        add eax, edx
        mov edx, dword ptr [esp + 2ch]
        add eax, ecx
        mov ecx, dword ptr [esi + 0b54h]
        add ecx, edx
        mov edx, dword ptr [ebp]
        add ecx, edx
        mov edx, dword ptr [esp + 3ch]
        add edx, 3e7h
        push edx
        push ebx
        push ebx
        push eax
        mov eax, dword ptr [esp + 48h]
        push ecx
        mov ecx, edi
        mov eax, dword ptr [eax - 0ch]
        push eax
        ; Exact mapped bytes E8 B2 D4 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d150d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 38h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi], ecx
        ; Exact mapped bytes E8 3F DC 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        add edi, 4
        add ebp, 8
        mov dword ptr [esp + 38h], edi
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esp + 34h]
        dec eax
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 F9 FE FF FF: jne 0x100d143b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ebp, [esi + 8ch]
        mov dword ptr [esp + 30h], 8
        push 54h
        ; Exact mapped bytes E8 49 B2 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 11h
        ; Exact mapped bytes 74 2A: je 0x100d1593
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, edi
        ; Exact mapped bytes 66 05 4C 04: add ax, 0x44c
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x04
        push eax
        push ebx
        push ebx
        push 258h
        push 320h
        push esi
        ; Exact mapped bytes E8 2A D4 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d1595
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp], ecx
        ; Exact mapped bytes E8 BA DB 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        add ebp, 4
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esp + 30h]
        dec eax
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 75 93: jne 0x100d1550
        __asm _emit 0x75
        __asm _emit 0x93
        push 54h
        ; Exact mapped bytes E8 DC B1 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 12h
        ; Exact mapped bytes 74 2A: je 0x100d1600
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, edi
        ; Exact mapped bytes 66 05 4C 04: add ax, 0x44c
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x04
        push eax
        push ebx
        push ebx
        push 258h
        push 320h
        push esi
        ; Exact mapped bytes E8 BD D3 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d1602
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 88h], ecx
        ; Exact mapped bytes E8 4A DB 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov edi, 7fffh
        push 0a0h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E8 71 B1 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 13h
        ; Exact mapped bytes 74 2D: je 0x100d166c
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 C1 B0 04: add cx, 0x4b0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xb0
        __asm _emit 0x04
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 258h
        push 320h
        push ebx
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 56 5C F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d166e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 DF DA 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        push 0c8h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E8 0E B1 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 14h
        ; Exact mapped bytes 74 10: je 0x100d16b2
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [esp + 28h]
        push ebx
        push ebx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 30 21 00 00: call 0x100d37e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d16b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0e0ch], eax
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edi, dword ptr [esi + 0e0ch]
        mov byte ptr [esp + 20h], bl
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 00 7D: mov word ptr [edi + 0x26], 0x7d00
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x7d
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100d16dd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C3 D8 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100d16ea
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 16 D8 02 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [esi + 0e08h], ebx
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
