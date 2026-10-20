// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586290 .. +0x4C7 bytes.
extern "C" __declspec(naked) void FUN_58586290_58586290() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883d45h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ach
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x585862c8
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 76 04 00 00: jmp 0x5858673e
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0b8h]
        push eax
        push 18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 9C 40 89 58: call dword ptr [0x5889409c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x585862e6
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 58 04 00 00: jmp 0x5858673e
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 48h], eax
        push 2ch
        push 0
        lea ecx, [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 0B 6B 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6b
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 3ch], 28h
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 48h]
        neg eax
        mov dword ptr [ebp - 34h], eax
        mov ecx, 1
        ; Exact mapped bytes 66 89 4D D0: mov word ptr [ebp - 0x30], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd0
        mov edx, 20h
        ; Exact mapped bytes 66 89 55 D2: mov word ptr [ebp - 0x2e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd2
        mov dword ptr [ebp - 2ch], 0
        lea ecx, [ebp - 65h]
        ; Exact mapped bytes E8 82 11 F0 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 5ch]
        imul eax, dword ptr [ebp - 48h]
        shl eax, 2
        push eax
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 2E F5 FF FF: call 0x58585880
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        ; Exact mapped bytes FF 15 EC 44 89 58: call dword ptr [0x588944ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], eax
        push 0
        lea ecx, [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 9B E3 FA FF: call 0x58534710
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe3
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 48h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 D0 40 89 58: call dword ptr [0x588940d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 88h], eax
        mov edx, dword ptr [ebp - 84h]
        push edx
        push 0
        ; Exact mapped bytes FF 15 E8 44 89 58: call dword ptr [0x588944e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 75 1B: jne 0x585863c7
        __asm _emit 0x75
        __asm _emit 0x1b
        mov byte ptr [ebp - 49h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 B1 F7 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp - 49h]
        ; Exact mapped bytes E9 77 03 00 00: jmp 0x5858673e
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 66h]
        ; Exact mapped bytes E8 F1 10 F0 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x10
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 5ch]
        imul eax, dword ptr [ebp - 48h]
        imul ecx, eax, 3
        push ecx
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 9D F4 FF FF: call 0x58585880
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x585863f9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 44h]
        add edx, 1
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 5ch]
        imul eax, dword ptr [ebp - 48h]
        cmp dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x5858648e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        lea edx, [ecx*4 + 2]
        push edx
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 94 F8 FF FF: call 0x58585cb0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [eax]
        mov byte ptr [ebp - 4ah], al
        imul ecx, dword ptr [ebp - 44h], 3
        push ecx
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 82 F8 FF FF: call 0x58585cb0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dl, byte ptr [ebp - 4ah]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 44h]
        lea ecx, [eax*4 + 1]
        push ecx
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 6A F8 FF FF: call 0x58585cb0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dl, byte ptr [eax]
        mov byte ptr [ebp - 4bh], dl
        imul eax, dword ptr [ebp - 44h], 3
        add eax, 1
        push eax
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 55 F8 FF FF: call 0x58585cb0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ebp - 4bh]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 44h]
        shl edx, 2
        push edx
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 41 F8 FF FF: call 0x58585cb0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [eax]
        mov byte ptr [ebp - 4ch], al
        imul ecx, dword ptr [ebp - 44h], 3
        add ecx, 2
        push ecx
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 2C F8 FF FF: call 0x58585cb0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dl, byte ptr [ebp - 4ch]
        mov byte ptr [eax], dl
        ; Exact mapped bytes E9 62 FF FF FF: jmp 0x585863f0
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], 0
        push 588aab84h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 58h]
        push ecx
        ; Exact mapped bytes E8 6E AE 2C 00: call 0x58851315
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xae
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 27: jne 0x585864d7
        __asm _emit 0x75
        __asm _emit 0x27
        mov byte ptr [ebp - 4dh], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 B0 F6 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 A1 F6 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp - 4dh]
        ; Exact mapped bytes E9 67 02 00 00: jmp 0x5858673e
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 588aab88h
        ; Exact mapped bytes E8 C9 77 21 00: call 0x5879dcb0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x77
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 33: jne 0x58586526
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 85 AF 2C 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov byte ptr [ebp - 4eh], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 61 F6 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 52 F6 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp - 4eh]
        ; Exact mapped bytes E9 18 02 00 00: jmp 0x5858673e
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 31 96 21 00: call 0x5879fb60
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 75 41: jne 0x5858657c
        __asm _emit 0x75
        __asm _emit 0x41
        push 0
        lea ecx, [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 2A 78 21 00: call 0x5879dd70
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x78
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 2F AF 2C 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xaf
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov byte ptr [ebp - 4fh], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 0B F6 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 FC F5 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp - 4fh]
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x5858673e
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        push 5884ec9bh
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 E4 8D 21 00: call 0x5879f370
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 588e438ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5884d32eh
        push 3
        push eax
        ; Exact mapped bytes E8 0B 87 2C 00: call 0x5884ecb0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x585865ef
        __asm _emit 0x74
        __asm _emit 0x43
        lea edx, [ebp - 64h]
        push edx
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 B7 77 21 00: call 0x5879dd70
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x77
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes E8 BC AE 2C 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xae
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov byte ptr [ebp - 50h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 98 F5 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 89 F5 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp - 50h]
        ; Exact mapped bytes E9 4F 01 00 00: jmp 0x5858673e
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 E4 A3 21 00: call 0x587a09e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa3
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 8
        push 0
        push 0
        push 0
        push 2
        push 8
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 42 A6 21 00: call 0x587a0c60
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xa6
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 24h
        push 9
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 44 78 21 00: call 0x5879de70
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x78
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 8
        push 0f8h
        push 0
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 51 78 21 00: call 0x5879de90
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x78
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 41 7F 21 00: call 0x5879e590
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7f
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 67h]
        ; Exact mapped bytes E8 66 0E F0 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x0e
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        lea ecx, [ebp - 0a0h]
        ; Exact mapped bytes E8 56 F2 FF FF: call 0x585858c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 60h], 0
        ; Exact mapped bytes EB 09: jmp 0x5858667d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 1
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 60h]
        cmp edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 7D 32: jge 0x585866b7
        __asm _emit 0x7d
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 60h]
        imul eax, dword ptr [ebp - 5ch]
        imul ecx, eax, 3
        push ecx
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 18 F6 FF FF: call 0x58585cb0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 60h]
        push edx
        lea ecx, [ebp - 0a0h]
        ; Exact mapped bytes E8 63 13 F0 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x13
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB BD: jmp 0x58586674
        __asm _emit 0xeb
        __asm _emit 0xbd
        lea ecx, [ebp - 0a0h]
        ; Exact mapped bytes E8 4E E0 FA FF: call 0x58534710
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        ; Exact mapped bytes E8 CC 7A 21 00: call 0x5879e1b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7a
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 8
        push 0
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 1E 79 21 00: call 0x5879e010
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x79
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 8
        lea eax, [ebp - 64h]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 6E 76 21 00: call 0x5879dd70
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x76
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 73 AD 2C 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xad
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov byte ptr [ebp - 51h], 1
        lea ecx, [ebp - 0a0h]
        ; Exact mapped bytes E8 C0 10 F0 FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x10
        __asm _emit 0xf0
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 44 F4 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 35 F4 FF FF: call 0x58585b70
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp - 51h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 FD A8 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
