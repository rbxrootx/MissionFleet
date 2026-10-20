// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047E3AE .. +0xDF0 bytes.
extern "C" __declspec(naked) void FUN_0047e3ae_0047E3AE() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c2a0h
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
        sub esp, 52ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 538h]
        mov ecx, 14bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 528h], ecx
        ; Exact mapped bytes 66 C7 45 E0 00 00: mov word ptr [ebp - 0x20], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 EC 00 00: mov word ptr [ebp - 0x14], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 F0 00 00: mov word ptr [ebp - 0x10], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x47e413
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ecx + 38h]
        ; Exact mapped bytes 7D 7B: jge 0x47e49c
        __asm _emit 0x7d
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 6
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 34h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 02: mov cx, word ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x02
        cmp ecx, 1
        ; Exact mapped bytes 75 0E: jne 0x47e449
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 55 E0: mov dx, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 E0: mov word ptr [ebp - 0x20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes EB 4E: jmp 0x47e497
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 6
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 34h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 02: mov cx, word ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x02
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x47e471
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 55 EC: mov dx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes EB 26: jmp 0x47e497
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 6
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 34h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 02: mov cx, word ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x02
        cmp ecx, 3
        ; Exact mapped bytes 75 0C: jne 0x47e497
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 F0: mov dx, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x47e40a
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 7E 32: jle 0x47e4da
        __asm _emit 0x7e
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 168h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 50: mov cx, word ptr [eax + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 20h]
        and edx, 0ffffh
        add ecx, edx
        cmp ecx, 32h
        ; Exact mapped bytes 7E 0D: jle 0x47e4da
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax], 3
        xor eax, eax
        ; Exact mapped bytes E9 A5 0C 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 0F 8E E3 02 00 00: jle 0x47e7ce
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 528h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 4E: mov dx, word ptr [ecx + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        add edx, eax
        cmp edx, 0fh
        ; Exact mapped bytes 7E 0D: jle 0x47e51c
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx], 4
        xor eax, eax
        ; Exact mapped bytes E9 63 0C 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 5
        push 0
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 47 AE 02 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x47e53e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 32h
        ; Exact mapped bytes 0F 8D D2 00 00 00: jge 0x47e61a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, ecx, 370h
        cmp dword ptr [eax + ecx + 16bdch], 0
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x47e615
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 528h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 44 B5 FA FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0e000h
        sar edx, 0dh
        mov dword ptr [ebp - 3ch], edx
        mov dword ptr [ebp - 4ech], 4
        mov dword ptr [ebp - 4f0h], 0
        lea eax, [ebp - 4ech]
        push eax
        lea ecx, [ebp - 4f0h]
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 A2 78 F9 FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x78
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x47e608
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 3ch]
        mov cl, byte ptr [ebp + eax - 30h]
        add cl, 1
        mov edx, dword ptr [ebp - 3ch]
        mov byte ptr [ebp + edx - 30h], cl
        ; Exact mapped bytes EB 0D: jmp 0x47e615
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax], 5
        xor eax, eax
        ; Exact mapped bytes E9 6A 0B 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1B FF FF FF: jmp 0x47e535
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x47e62c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 528h]
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [edx + 38h]
        ; Exact mapped bytes 0F 8D 5B 01 00 00: jge 0x47e799
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, ecx, 6
        mov edx, dword ptr [ebp - 528h]
        mov eax, dword ptr [edx + 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 08: mov dx, word ptr [eax + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 2
        ; Exact mapped bytes 0F 85 38 01 00 00: jne 0x47e794
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 6
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 34h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 02 02: mov cx, word ptr [edx + eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x02
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 4f4h], 31h
        mov dword ptr [ebp - 4f8h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 4fch], edx
        lea eax, [ebp - 4f4h]
        push eax
        lea ecx, [ebp - 4f8h]
        push ecx
        lea edx, [ebp - 4fch]
        push edx
        ; Exact mapped bytes E8 14 51 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x47e794
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 40h]
        imul edx, edx, 370h
        cmp dword ptr [ecx + edx + 16bdch], 0
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x47e794
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 40h]
        imul edx, edx, 370h
        lea esi, [ecx + edx + 16be0h]
        mov ecx, 17h
        lea edi, [ebp - 0a0h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea eax, [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 D1 B3 FA FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0e000h
        sar edx, 0dh
        mov dword ptr [ebp - 0a4h], edx
        mov dword ptr [ebp - 500h], 4
        mov dword ptr [ebp - 504h], 0
        lea eax, [ebp - 500h]
        push eax
        lea ecx, [ebp - 504h]
        push ecx
        lea edx, [ebp - 0a4h]
        push edx
        ; Exact mapped bytes E8 29 77 F9 FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x77
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x47e787
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0a4h]
        mov cl, byte ptr [ebp + eax - 30h]
        add cl, 1
        mov edx, dword ptr [ebp - 0a4h]
        mov byte ptr [ebp + edx - 30h], cl
        ; Exact mapped bytes EB 0D: jmp 0x47e794
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax], 5
        xor eax, eax
        ; Exact mapped bytes E9 EB 09 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8A FE FF FF: jmp 0x47e623
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x47e7ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 1
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 5
        ; Exact mapped bytes 7D 1D: jge 0x47e7ce
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 34h]
        xor eax, eax
        mov al, byte ptr [ebp + edx - 30h]
        cmp eax, 6
        ; Exact mapped bytes 7E 0D: jle 0x47e7cc
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx], 5
        xor eax, eax
        ; Exact mapped bytes E9 B3 09 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D4: jmp 0x47e7a2
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 528h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 50: mov dx, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 20h]
        and eax, 0ffffh
        add edx, eax
        cmp edx, 63h
        ; Exact mapped bytes 7E 2C: jle 0x47e81e
        __asm _emit 0x7e
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 168h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 4E: mov cx, word ptr [eax + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        add ecx, edx
        cmp ecx, 63h
        ; Exact mapped bytes 7E 07: jle 0x47e81e
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 61 09 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x47e853
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 20h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 7E 15: jle 0x47e84c
        __asm _emit 0x7e
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 528h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 73 07: jae 0x47e853
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 2C 09 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x47e888
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 7E 15: jle 0x47e881
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 168h]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 7D 07: jge 0x47e888
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F7 08 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D E0: mov cx, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 66 89 4D E4: mov word ptr [ebp - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 8B 55 EC: mov dx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 66 89 55 E6: mov word ptr [ebp - 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe6
        ; Exact mapped bytes 66 8B 45 F0: mov ax, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp - 528h]
        ; Exact mapped bytes E8 C2 11 00 00: call 0x47fa6d
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 528h]
        ; Exact mapped bytes E8 BF 12 00 00: call 0x47fb75
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 528h]
        add ecx, 3ch
        ; Exact mapped bytes E8 FC 26 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x26
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x47e8dc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 528h]
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 8D 8C 08 00 00: jge 0x47f17a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 6
        mov eax, dword ptr [ebp - 528h]
        mov ecx, dword ptr [eax + 34h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 11: mov ax, word ptr [ecx + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x11
        cmp eax, 1
        ; Exact mapped bytes 0F 85 EC 04 00 00: jne 0x47edf8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, ecx, 6
        mov edx, dword ptr [ebp - 528h]
        mov eax, dword ptr [edx + 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 08 02: mov dx, word ptr [eax + ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x02
        mov dword ptr [ebp - 0a8h], edx
        mov dword ptr [ebp - 508h], 63h
        mov dword ptr [ebp - 50ch], 0
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 510h], eax
        lea ecx, [ebp - 508h]
        push ecx
        lea edx, [ebp - 50ch]
        push edx
        lea eax, [ebp - 510h]
        push eax
        ; Exact mapped bytes E8 5E 4E F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 7F 04 00 00: je 0x47edec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0a8h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 52 04 00 00: je 0x47edec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0a8h]
        imul ecx, ecx, 37ch
        cmp dword ptr [eax + ecx + 2bch], -1
        ; Exact mapped bytes 0F 85 2F 04 00 00: jne 0x47edec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0a8h]
        imul ecx, ecx, 37ch
        cmp dword ptr [eax + ecx + 2e4h], 0
        ; Exact mapped bytes 0F 85 0C 04 00 00: jne 0x47edec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0a8h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 5
        ; Exact mapped bytes 0F 82 DE 03 00 00: jb 0x47edec
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0a8h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 1
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x47eb80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0a8h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 4dh
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x47eb80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0a8h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 4eh
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x47eb80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0a8h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 4fh
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x47eb80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0a8h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        test ecx, ecx
        ; Exact mapped bytes 75 2A: jne 0x47eb12
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0a8h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 5
        ; Exact mapped bytes 73 6E: jae 0x47eb80
        __asm _emit 0x73
        __asm _emit 0x6e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0a8h]
        imul edx, edx, 37ch
        lea esi, [ecx + edx + 224h]
        mov ecx, 0dfh
        lea edi, [ebp - 424h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 37ch
        lea eax, [ebp - 424h]
        push eax
        mov ecx, dword ptr [ebp - 528h]
        add ecx, 3ch
        ; Exact mapped bytes E8 71 24 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x24
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 414h]
        shr ecx, 4
        and ecx, 0ffh
        imul ecx, ecx, 32h
        mov edx, dword ptr [ebp - 528h]
        mov eax, dword ptr [edx + 2ch]
        add eax, ecx
        mov ecx, dword ptr [ebp - 528h]
        mov dword ptr [ecx + 2ch], eax
        ; Exact mapped bytes E9 6A 02 00 00: jmp 0x47edea
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 470h]
        ; Exact mapped bytes E8 7C 23 0B 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0a8h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        mov dword ptr [ebp - 52ch], edx
        mov eax, dword ptr [ebp - 52ch]
        sub eax, 1
        mov dword ptr [ebp - 52ch], eax
        cmp dword ptr [ebp - 52ch], 4eh
        ; Exact mapped bytes 0F 87 A5 00 00 00: ja 0x47ec7d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 52ch]
        xor ecx, ecx
        mov cl, byte ptr [edx + 47f1b2h]
        ; Exact mapped bytes FF 24 8D 9E F1 47 00: jmp dword ptr [ecx*4 + 0x47f19e]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xf1
        __asm _emit 0x47
        __asm _emit 0x00
        push 5c4388h
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        push 5c4390h
        lea ecx, [ebp - 470h]
        push ecx
        ; Exact mapped bytes E8 50 FD 04 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 6C: jmp 0x47ec7d
        __asm _emit 0xeb
        __asm _emit 0x6c
        push 5c43ach
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 5c43b4h
        lea eax, [ebp - 470h]
        push eax
        ; Exact mapped bytes E8 2B FD 04 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 47: jmp 0x47ec7d
        __asm _emit 0xeb
        __asm _emit 0x47
        push 5c43d0h
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        push 5c43d8h
        lea edx, [ebp - 470h]
        push edx
        ; Exact mapped bytes E8 06 FD 04 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 22: jmp 0x47ec7d
        __asm _emit 0xeb
        __asm _emit 0x22
        push 5c43f4h
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        push 5c4400h
        lea ecx, [ebp - 470h]
        push ecx
        ; Exact mapped bytes E8 E2 FC 04 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        lea ecx, [ebp - 46ch]
        ; Exact mapped bytes E8 98 29 00 00: call 0x481620
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        push 48h
        push 0
        lea edx, [ebp - 46ch]
        push edx
        ; Exact mapped bytes E8 D8 A6 02 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 434h], 105h
        lea eax, [ebp - 514h]
        push eax
        ; Exact mapped bytes E8 E6 06 05 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 468h]
        ; Exact mapped bytes E8 F1 29 0B 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x29
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        lea edx, [ebp - 44ch]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 03 9B 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 42ch], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0a8h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        mov byte ptr [ebp - 428h], al
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 430h], eax
        mov ecx, dword ptr [ebp - 528h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 ED 25 F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x25
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7F: je 0x47edbb
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 528h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 D6 25 F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x25
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1b0h]
        add ecx, 1
        mov dword ptr [ebp - 474h], ecx
        mov edx, dword ptr [ebp - 474h]
        mov dword ptr [ebp - 46ch], edx
        mov eax, dword ptr [ebp - 528h]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 A7 25 F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x25
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ebp - 474h]
        mov dword ptr [ecx + 1b0h], edx
        push 0
        push 48h
        lea eax, [ebp - 46ch]
        push eax
        push 0
        push 103h
        push 80018006h
        mov ecx, dword ptr [ebp - 528h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 70 25 F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x25
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 77 84 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 88 FC FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 470h]
        ; Exact mapped bytes E8 6D EA 06 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 518h]
        ; Exact mapped bytes E9 95 03 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x47edf3
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8C 03 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7D 03 00 00: jmp 0x47f175
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 6
        mov eax, dword ptr [ebp - 528h]
        mov ecx, dword ptr [eax + 34h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 11: mov ax, word ptr [ecx + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x11
        cmp eax, 2
        ; Exact mapped bytes 0F 85 3F 03 00 00: jne 0x47f155
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, ecx, 6
        mov edx, dword ptr [ebp - 528h]
        mov eax, dword ptr [edx + 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 08 02: mov dx, word ptr [eax + ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x02
        mov dword ptr [ebp - 478h], edx
        mov dword ptr [ebp - 51ch], 31h
        mov dword ptr [ebp - 520h], 0
        mov eax, dword ptr [ebp - 478h]
        mov dword ptr [ebp - 524h], eax
        lea ecx, [ebp - 51ch]
        push ecx
        lea edx, [ebp - 520h]
        push edx
        lea eax, [ebp - 524h]
        push eax
        ; Exact mapped bytes E8 54 49 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x49
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 D8 02 00 00: je 0x47f14f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 478h]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 0
        ; Exact mapped bytes 0F 85 B5 02 00 00: jne 0x47f14f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4e8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x47eeb5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4e8h]
        add ecx, 1
        mov dword ptr [ebp - 4e8h], ecx
        cmp dword ptr [ebp - 4e8h], 20h
        ; Exact mapped bytes 7D 35: jge 0x47eef3
        __asm _emit 0x7d
        __asm _emit 0x35
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 478h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 4e8h]
        cmp dword ptr [edx + eax*4 + 270h], -1
        ; Exact mapped bytes 74 07: je 0x47eef1
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8E 02 00 00: jmp 0x47f17f
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B3: jmp 0x47eea6
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 478h]
        imul eax, eax, 370h
        lea esi, [edx + eax + 16be0h]
        mov ecx, 17h
        lea edi, [ebp - 4e4h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 478h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 528h]
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 8E 44 00 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 530h], eax
        mov edx, dword ptr [ebp - 530h]
        and edx, 1fh
        shl edx, 1
        mov eax, dword ptr [ebp - 4e4h]
        and al, 0c1h
        or eax, edx
        mov dword ptr [ebp - 4e4h], eax
        push 5ch
        lea ecx, [ebp - 4e4h]
        push ecx
        mov ecx, dword ptr [ebp - 528h]
        add ecx, 3ch
        ; Exact mapped bytes E8 53 20 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x20
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 488h], 0
        ; Exact mapped bytes EB 0F: jmp 0x47ef8e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 488h]
        add edx, 1
        mov dword ptr [ebp - 488h], edx
        cmp dword ptr [ebp - 488h], 20h
        ; Exact mapped bytes 0F 8D F6 00 00 00: jge 0x47f091
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 478h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 488h]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 66 8B 94 08 2E 01 00 00: mov dx, word ptr [eax + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 5
        ; Exact mapped bytes 74 78: je 0x47f04f
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 478h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 488h]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 66 8B 94 08 2E 01 00 00: mov dx, word ptr [eax + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 6
        ; Exact mapped bytes 74 3C: je 0x47f04f
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 478h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 488h]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 66 8B 94 08 2E 01 00 00: mov dx, word ptr [eax + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 0dh
        ; Exact mapped bytes 75 3D: jne 0x47f08c
        __asm _emit 0x75
        __asm _emit 0x3d
        push 0ah
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 478h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 488h]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 12eh]
        push edx
        mov ecx, dword ptr [ebp - 528h]
        add ecx, 3ch
        ; Exact mapped bytes E8 3A 1F F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1f
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 EE FE FF FF: jmp 0x47ef7f
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 4c0h]
        push eax
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 3A AA FA FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 480h], eax
        lea ecx, [ebp - 4beh]
        push ecx
        mov edx, dword ptr [ebp - 528h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40cc8h]
        mov ecx, dword ptr [ecx + 0ca0h]
        ; Exact mapped bytes E8 13 AA FA FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 47ch], eax
        lea edx, [ebp - 4bch]
        push edx
        mov eax, dword ptr [ebp - 528h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 40cc8h]
        mov ecx, dword ptr [edx + 0ca0h]
        ; Exact mapped bytes E8 EC A9 FA FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xa9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 484h], eax
        cmp dword ptr [ebp - 480h], 0
        ; Exact mapped bytes 74 3E: je 0x47f14d
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 480h]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 538h], ecx
        mov dword ptr [ebp - 534h], 0
        ; Exact mapped bytes DF AD C8 FA FF FF: fild qword ptr [ebp - 0x538]
        __asm _emit 0xdf
        __asm _emit 0xad
        __asm _emit 0xc8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D D0 1C 58 00: fmul dword ptr [0x581cd0]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 C3 A3 02 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 528h]
        mov ecx, dword ptr [edx + 28h]
        add ecx, eax
        mov edx, dword ptr [ebp - 528h]
        mov dword ptr [edx + 28h], ecx
        ; Exact mapped bytes EB 04: jmp 0x47f153
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2C: jmp 0x47f17f
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes EB 20: jmp 0x47f175
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 6
        mov ecx, dword ptr [ebp - 528h]
        mov edx, dword ptr [ecx + 34h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 02: mov cx, word ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x02
        cmp ecx, 3
        ; Exact mapped bytes 75 02: jne 0x47f171
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 04: jmp 0x47f175
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x47f17f
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes E9 59 F7 FF FF: jmp 0x47e8d3
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
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
        add esp, 538h
        cmp ebp, esp
        ; Exact mapped bytes E8 48 96 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
