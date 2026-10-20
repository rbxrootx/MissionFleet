// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044A808 .. +0x54E bytes.
extern "C" __declspec(naked) void FUN_0044a808_0044A808() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b054h
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
        sub esp, 4d8h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4e4h]
        mov ecx, 136h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4dch], ecx
        lea ecx, [ebp - 3f8h]
        ; Exact mapped bytes E8 BA 66 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x66
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 106h
        ; Exact mapped bytes 0F 85 7B 01 00 00: jne 0x44a9df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 45ch]
        ; Exact mapped bytes E8 81 1B 00 00: call 0x44c3f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        push 0
        lea ecx, [ebp - 45ch]
        push ecx
        ; Exact mapped bytes E8 F1 EA 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 424h], 106h
        mov edx, dword ptr [ebp - 4dch]
        add edx, 150h
        mov esi, esp
        push edx
        lea eax, [ebp - 43ch]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 31 DF 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xdf
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 4cch]
        push ecx
        ; Exact mapped bytes E8 DC 4A 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 458h]
        ; Exact mapped bytes E8 E7 6D 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 410h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 40ch], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 8D F8 FB FF FF: mov word ptr [ebp - 0x408], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 85 FA FB FF FF: mov word ptr [ebp - 0x406], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 404h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 89 8D 00 FC FF FF: mov word ptr [ebp - 0x400], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 85 02 FC FF FF: mov word ptr [ebp - 0x3fe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 3fch], edx
        mov eax, dword ptr [ebp - 4dch]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 420h], edx
        mov eax, dword ptr [ebp - 4dch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 CE 69 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7F: je 0x44a9da
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 4dch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 B7 69 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1b0h]
        add eax, 1
        mov dword ptr [ebp - 460h], eax
        mov ecx, dword ptr [ebp - 4dch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 94 69 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 460h]
        mov dword ptr [edx + 1b0h], eax
        mov ecx, dword ptr [ebp - 460h]
        mov dword ptr [ebp - 45ch], ecx
        push 0
        push 64h
        lea edx, [ebp - 45ch]
        push edx
        push 0
        push 106h
        push 80018006h
        mov eax, dword ptr [ebp - 4dch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 51 69 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 58 C8 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 76 01 00 00: jmp 0x44ab55
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4c4h]
        ; Exact mapped bytes E8 06 1A 00 00: call 0x44c3f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        push 0
        lea ecx, [ebp - 4c4h]
        push ecx
        ; Exact mapped bytes E8 76 E9 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 48ch], 107h
        mov edx, dword ptr [ebp - 4dch]
        add edx, 150h
        mov esi, esp
        push edx
        lea eax, [ebp - 4a4h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B6 DD 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 4d0h]
        push ecx
        ; Exact mapped bytes E8 61 49 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4c0h]
        ; Exact mapped bytes E8 6C 6C 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x6c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 478h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 474h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 8D 90 FB FF FF: mov word ptr [ebp - 0x470], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 85 92 FB FF FF: mov word ptr [ebp - 0x46e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 46ch], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 89 8D 98 FB FF FF: mov word ptr [ebp - 0x468], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 85 9A FB FF FF: mov word ptr [ebp - 0x466], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 464h], edx
        mov eax, dword ptr [ebp - 4dch]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 488h], edx
        mov eax, dword ptr [ebp - 4dch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 53 68 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7F: je 0x44ab55
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 4dch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 3C 68 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1b0h]
        add eax, 1
        mov dword ptr [ebp - 4c8h], eax
        mov ecx, dword ptr [ebp - 4dch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 19 68 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 4c8h]
        mov dword ptr [edx + 1b0h], eax
        mov ecx, dword ptr [ebp - 4c8h]
        mov dword ptr [ebp - 4c4h], ecx
        push 0
        push 64h
        lea edx, [ebp - 4c4h]
        push edx
        push 0
        push 107h
        push 80018006h
        mov eax, dword ptr [ebp - 4dch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 D6 67 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 DD C6 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 9
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x44abfe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        push edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        push edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4dch]
        add eax, 150h
        push eax
        push 5b6d54h
        lea ecx, [ebp - 3f8h]
        push ecx
        ; Exact mapped bytes E8 8D 3D 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 38h
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 4d4h], esp
        lea edx, [ebp - 3f8h]
        push edx
        ; Exact mapped bytes E8 93 28 0A 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4e0h], eax
        push 0bh
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 6F 9E 00 00: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x44ac96
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4dch]
        add ecx, 150h
        push ecx
        push 5b6e48h
        lea edx, [ebp - 3f8h]
        push edx
        ; Exact mapped bytes E8 F0 3C 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 38h
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 4d8h], esp
        lea eax, [ebp - 3f8h]
        push eax
        ; Exact mapped bytes E8 F6 27 0A 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4e4h], eax
        push 0bh
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 D2 9D 00 00: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        push ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 5b6f40h
        lea edx, [ebp - 3f4h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 34h
        cmp esi, esp
        ; Exact mapped bytes E8 DC DA 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 3f4h]
        push eax
        ; Exact mapped bytes FF 15 44 24 5E 00: call dword ptr [0x5e2444]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C6 DA 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4dch]
        ; Exact mapped bytes E8 59 C9 FF FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 3f8h]
        ; Exact mapped bytes E8 15 2B 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 4e4h
        cmp ebp, esp
        ; Exact mapped bytes E8 90 DA 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
