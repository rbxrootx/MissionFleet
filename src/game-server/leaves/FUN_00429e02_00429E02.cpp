// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429E02 .. +0x13D3 bytes.
extern "C" __declspec(naked) void FUN_00429e02_00429E02() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a269h
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
        sub esp, 0a30h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0a3ch]
        mov ecx, 28ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0a28h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 2C: jne 0x429e6e
        __asm _emit 0x75
        __asm _emit 0x2c
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 0b0000h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB D3 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 48 13 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 83 00 00 00: jle 0x429f00
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        cmp eax, 0ffffh
        ; Exact mapped bytes 75 73: jne 0x429f00
        __asm _emit 0x75
        __asm _emit 0x73
        mov dword ptr [ebp - 9d8h], 13h
        mov dword ptr [ebp - 9dch], 2
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 26 F5 07 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9e0h], eax
        lea edx, [ebp - 9d8h]
        push edx
        lea eax, [ebp - 9dch]
        push eax
        lea ecx, [ebp - 9e0h]
        push ecx
        ; Exact mapped bytes E8 F3 98 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x429f00
        __asm _emit 0x75
        __asm _emit 0x2c
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 0b0000h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 D3 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 B6 12 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0eh
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 D4 FB FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 61 FD FF FF: call 0x429c8b
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 42 0C: movsx eax, word ptr [edx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 0F 8E 32 0C 00 00: jle 0x42ab6f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x32
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        cmp edx, 0ffffh
        ; Exact mapped bytes 0F 85 B0 04 00 00: jne 0x42a402
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x42a002
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 18h]
        cmp eax, dword ptr [edx + 4ch]
        ; Exact mapped bytes 0F 8C 8E 00 00 00: jl 0x42a002
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a28h]
        mov esi, dword ptr [ecx + 40004h]
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 FC FC FF FF: call 0x429c8b
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        cmp dword ptr [ecx + eax*4], 0
        ; Exact mapped bytes 7E 6A: jle 0x42a002
        __asm _emit 0x7e
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 0a28h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffffh
        imul ecx, ecx, 368h
        mov edx, dword ptr [eax + 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 0A 48 03 00 00: mov ax, word ptr [edx + ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0a28h]
        push edx
        ; Exact mapped bytes E8 3F 76 00 00: call 0x431610
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x42a015
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 0a28h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 10h]
        and edx, 0ffffh
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 10 48 03 00 00: mov cx, word ptr [eax + edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 74 13: je 0x42a015
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 908h], 1
        ; Exact mapped bytes 74 07: je 0x42a015
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A1 11 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 9e4h], 31h
        mov dword ptr [ebp - 9e8h], 0
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 9ech], eax
        lea ecx, [ebp - 9e4h]
        push ecx
        lea edx, [ebp - 9e8h]
        push edx
        lea eax, [ebp - 9ech]
        push eax
        ; Exact mapped bytes E8 74 97 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 A4 03 00 00: je 0x42a3fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 370h
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        push ecx
        ; Exact mapped bytes E8 F3 F2 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push -1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16e4ch]
        push edx
        ; Exact mapped bytes E8 CA F2 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push -1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 14h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16ecch]
        push eax
        ; Exact mapped bytes E8 A1 F2 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 370h
        mov dword ptr [edx + eax + 16bdch], 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 370h
        mov dword ptr [edx + eax + 16bdch], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 89 94 01 04 6C 01 00: mov word ptr [ecx + eax + 0x16c04], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 370h
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 54h]
        mov dword ptr [edx + eax + 16be4h], ecx
        mov esi, dword ptr [ebp - 18h]
        add esi, 368h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, ecx, 370h
        lea edi, [eax + ecx + 16c3ch]
        mov ecx, 33h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp + 14h]
        and edx, 3fffffh
        shl edx, 0ah
        mov eax, dword ptr [eax + ecx + 16be0h]
        and eax, 3ffh
        or eax, edx
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 16be0h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 14h]
        imul edx, edx, 370h
        mov eax, dword ptr [ecx + edx + 16be0h]
        and al, 0c1h
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 16be0h], eax
        mov esi, esp
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 5b5878h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bech]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 BC E5 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        push 80h
        push -1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16e4ch]
        push edx
        ; Exact mapped bytes E8 26 F1 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push -1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 14h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16ecch]
        push eax
        ; Exact mapped bytes E8 FD F0 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf0
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 18h]
        sub ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 8B 42 4E: mov ax, word ptr [edx + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x4e
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 89 42 4E: mov word ptr [edx + 0x4e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x4e
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 74 3A: je 0x42a316
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 0a28h]
        mov esi, dword ptr [ecx + 40004h]
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 94 F9 FF FF: call 0x429c8b
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        lea edx, [ecx + eax*4]
        mov dword ptr [ebp - 0a2ch], edx
        mov eax, dword ptr [ebp - 0a2ch]
        mov ecx, dword ptr [eax]
        sub ecx, 1
        mov edx, dword ptr [ebp - 0a2ch]
        mov dword ptr [edx], ecx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        or eax, 0a0000h
        push eax
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 CE 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xce
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        shl ecx, 10h
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        or ecx, eax
        mov dword ptr [ebp - 24h], ecx
        push 0
        push 5ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 14h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16be0h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        push 80000520h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 CE 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xce
        __asm _emit 0x05
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0a28h]
        mov ecx, dword ptr [eax + 40008h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 0F 83 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a28h]
        mov edx, dword ptr [ecx + 40008h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 EA 82 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes 66 8B 55 14: mov dx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40c98h]
        ; Exact mapped bytes E8 04 1F 01 00: call 0x43c2f5
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 BB 0D 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 B4 0D 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 9f0h], 32h
        mov dword ptr [ebp - 9f4h], 0
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        mov dword ptr [ebp - 9f8h], ecx
        lea edx, [ebp - 9f0h]
        push edx
        lea eax, [ebp - 9f4h]
        push eax
        lea ecx, [ebp - 9f8h]
        push ecx
        ; Exact mapped bytes E8 81 93 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 20 07 00 00: je 0x42ab6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 B7 84 00 00: call 0x43291e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x42a472
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 44 0D 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 6B F6 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 07: jne 0x42a491
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 25 0D 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16c04h]
        push edx
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 30 F6 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 07: jne 0x42a4cc
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EA 0C 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [eax + 168h]
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ecx + 4ch]
        sub eax, dword ptr [edx + 4ch]
        push eax
        ; Exact mapped bytes E8 49 FA 07 00: call 0x4a9f30
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfa
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [esi + 18h], eax
        ; Exact mapped bytes 7C 24: jl 0x42a513
        __asm _emit 0x7c
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0a28h]
        mov esi, dword ptr [ecx + 40004h]
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 81 F7 FF FF: call 0x429c8b
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        cmp dword ptr [ecx + eax*4], 0
        ; Exact mapped bytes 7F 13: jg 0x42a526
        __asm _emit 0x7f
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 908h], 1
        ; Exact mapped bytes 74 07: je 0x42a526
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 90 0C 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x42a538
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 3ch]
        add eax, 1
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 20h
        ; Exact mapped bytes 0F 8D 81 01 00 00: jge 0x42a6c3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 9fch], 63h
        mov dword ptr [ebp - 0a00h], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + eax*4 + 270h]
        mov dword ptr [ebp - 0a04h], ecx
        lea edx, [ebp - 9fch]
        push edx
        lea eax, [ebp - 0a00h]
        push eax
        lea ecx, [ebp - 0a04h]
        push ecx
        ; Exact mapped bytes E8 21 92 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x42a6be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 71 0A: mov si, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea edx, [edx + esi + 16bdch]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [edx + ecx*4 + 270h]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        and ah, 0fh
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        lea edx, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [edx + ecx*4 + 270h]
        imul edx, edx, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + edx + 234h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 71 0A: mov si, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea edx, [edx + esi + 16bdch]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [edx + ecx*4 + 270h]
        imul edx, edx, 37ch
        mov dword ptr [eax + edx + 2bch], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ecx + edx*4 + 270h]
        shl eax, 10h
        or al, 4
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0a28h]
        mov ecx, dword ptr [eax + 40008h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 F7 7F 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 6C FE FF FF: jmp 0x42a52f
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [edx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 DF 0A 00 00: call 0x42b1d5
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18h]
        add ecx, eax
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16be0h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 0a28h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c98h]
        ; Exact mapped bytes E8 21 1E 01 00: call 0x43c586
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 4C 0A 00 00: call 0x42b1d5
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [eax + 18h]
        sub edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        mov edx, dword ptr [ebp - 0a28h]
        mov esi, dword ptr [edx + 40004h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 9C F4 FF FF: call 0x429c8b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 30h]
        lea eax, [edx + eax*4]
        mov dword ptr [ebp - 0a30h], eax
        mov ecx, dword ptr [ebp - 0a30h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp - 0a30h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bech]
        push edx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 A2 30 0C 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 370h
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        push ecx
        ; Exact mapped bytes E8 07 EB 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push -1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16e4ch]
        push eax
        ; Exact mapped bytes E8 D8 EA 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push -1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16ecch]
        push edx
        ; Exact mapped bytes E8 A9 EA 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xea
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        mov dword ptr [ecx + eax + 16bdch], 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        ; Exact mapped bytes 66 89 94 31 04 6C 01 00: mov word ptr [ecx + esi + 0x16c04], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 4ch]
        add esi, 368h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edi, [edx + ecx + 16c3ch]
        mov ecx, 33h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        mov ecx, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ecx + 54h]
        mov dword ptr [eax + edx + 16be4h], ecx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 71 0A: mov si, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0a
        imul esi, esi, 370h
        and eax, 3fffffh
        shl eax, 0ah
        mov edx, dword ptr [edx + esi + 16be0h]
        and edx, 3ffh
        or edx, eax
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + ecx + 16be0h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        mov dword ptr [edx + ecx + 16bdch], 0
        push 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 0B 36 0C 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bech]
        push eax
        ; Exact mapped bytes E8 2D F4 07 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 168h]
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [edx + 4ch]
        sub ecx, dword ptr [eax + 4ch]
        push ecx
        ; Exact mapped bytes E8 FF F4 07 00: call 0x4a9f30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [esi + 18h]
        sub edx, eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 0a28h]
        mov esi, dword ptr [edx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 1C F2 FF FF: call 0x429c8b
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        lea edx, [ecx + eax*4]
        mov dword ptr [ebp - 0a34h], edx
        mov eax, dword ptr [ebp - 0a34h]
        mov ecx, dword ptr [eax]
        sub ecx, 1
        mov edx, dword ptr [ebp - 0a34h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 C7 40 0C 00 00: mov word ptr [eax + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 5ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16be0h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80000520h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5C C7 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40c98h]
        ; Exact mapped bytes E8 F6 17 01 00: call 0x43c2f5
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0a28h]
        mov ecx, dword ptr [eax + 40008h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 99 7B 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        shl eax, 10h
        or al, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0a28h]
        mov eax, dword ptr [edx + 40008h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 6F 7B 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0a08h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 ED 2C 0C 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x2c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a08h]
        ; Exact mapped bytes E9 4C 06 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 45 06 00 00: jmp 0x42b1b4
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 51 0C: movsx edx, word ptr [ecx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x0c
        test edx, edx
        ; Exact mapped bytes 0F 8D 36 06 00 00: jge 0x42b1b4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0ch], 31h
        mov dword ptr [ebp - 0a10h], 0
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a14h], ecx
        lea edx, [ebp - 0a0ch]
        push edx
        lea eax, [ebp - 0a10h]
        push eax
        lea ecx, [ebp - 0a14h]
        push ecx
        ; Exact mapped bytes E8 05 8C FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x42abc9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 ED 05 00 00: jmp 0x42b1b6
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        cmp dword ptr [eax + edx + 16bdch], 0
        ; Exact mapped bytes 0F 85 C5 05 00 00: jne 0x42b1b4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 9c4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x42ac0a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 9c4h]
        add eax, 1
        mov dword ptr [ebp - 9c4h], eax
        cmp dword ptr [ebp - 9c4h], 20h
        ; Exact mapped bytes 0F 8D 96 01 00 00: jge 0x42adad
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a18h], 63h
        mov dword ptr [ebp - 0a1ch], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 9c4h]
        mov ecx, dword ptr [edx + eax*4 + 270h]
        mov dword ptr [ebp - 0a20h], ecx
        lea edx, [ebp - 0a18h]
        push edx
        lea eax, [ebp - 0a1ch]
        push eax
        lea ecx, [ebp - 0a20h]
        push ecx
        ; Exact mapped bytes E8 49 8B FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x42ada8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 71 0A: mov si, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea edx, [edx + esi + 16bdch]
        mov ecx, dword ptr [ebp - 9c4h]
        mov edx, dword ptr [edx + ecx*4 + 270h]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        and ah, 0fh
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        lea edx, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 9c4h]
        mov edx, dword ptr [edx + ecx*4 + 270h]
        imul edx, edx, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + edx + 234h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 71 0A: mov si, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea edx, [edx + esi + 16bdch]
        mov ecx, dword ptr [ebp - 9c4h]
        mov edx, dword ptr [edx + ecx*4 + 270h]
        imul edx, edx, 37ch
        mov dword ptr [eax + edx + 2bch], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        mov edx, dword ptr [ebp - 9c4h]
        mov eax, dword ptr [ecx + edx*4 + 270h]
        shl eax, 10h
        or al, 4
        mov dword ptr [ebp - 9b4h], eax
        mov ecx, dword ptr [ebp - 9b4h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0a28h]
        mov ecx, dword ptr [eax + 40008h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 0D 79 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 4E FE FF FF: jmp 0x42abfb
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 9cch]
        ; Exact mapped bytes E8 4F 61 10 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x61
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 964h
        push 0
        lea edx, [ebp - 9b0h]
        push edx
        ; Exact mapped bytes E8 9E E5 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 9bch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 DA EC FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 9b8h], eax
        mov edx, dword ptr [ebp - 9b8h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 48 03 00 00: mov ax, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1fh
        cmp eax, 1
        ; Exact mapped bytes 0F 8E 67 01 00 00: jle 0x42af9a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 9b8h], 0
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x42af9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 9d0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x42ae5b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 9d0h]
        add ecx, 1
        mov dword ptr [ebp - 9d0h], ecx
        mov edx, dword ptr [ebp - 0a28h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 9d0h]
        cmp ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes 0F 83 1F 01 00 00: jae 0x42af98
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a28h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 9d0h]
        imul ecx, ecx, 368h
        mov edx, dword ptr [eax + 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 0A 48 03 00 00: mov ax, word ptr [edx + ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffe0h
        mov ecx, dword ptr [ebp - 9b8h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0ffe0h
        cmp eax, edx
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x42af93
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a28h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 9d0h]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 10 48 03 00 00: mov cx, word ptr [eax + edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 9b8h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 48 03 00 00: mov ax, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x42af93
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a28h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 9d0h]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 9b8h]
        mov edx, dword ptr [edx + 4ch]
        sub edx, dword ptr [ecx + eax + 4ch]
        push edx
        ; Exact mapped bytes E8 FB EF 07 00: call 0x4a9f30
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9d4h], eax
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [eax + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 73 02 00 00: call 0x42b1d5
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18h]
        add ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        sub eax, dword ptr [ebp - 9d4h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 18h], eax
        ; Exact mapped bytes EB 05: jmp 0x42af98
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 B4 FE FF FF: jmp 0x42ae4c
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 35: jmp 0x42afcf
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [eax + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 17 02 00 00: call 0x42b1d5
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18h]
        add ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 9c0h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16be0h]
        mov dword ptr [ebp - 9c8h], edx
        mov eax, dword ptr [ebp - 9c0h]
        push eax
        mov ecx, dword ptr [ebp - 9bch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 9c8h]
        push edx
        mov eax, dword ptr [ebp - 0a28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40c98h]
        ; Exact mapped bytes E8 43 15 01 00: call 0x43c586
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 74 56: je 0x42b0a5
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 0a28h]
        mov esi, dword ptr [ecx + 40004h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp - 0a28h]
        ; Exact mapped bytes E8 05 EC FF FF: call 0x429c8b
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        lea edx, [ecx + eax*4]
        mov dword ptr [ebp - 0a38h], edx
        mov eax, dword ptr [ebp - 0a38h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp - 0a38h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        mov dword ptr [ecx + eax + 16bdch], 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 4E: mov ax, word ptr [edx + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x4e
        test eax, eax
        ; Exact mapped bytes 7E 34: jle 0x42b10f
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 8B 42 4E: mov ax, word ptr [edx + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x4e
        ; Exact mapped bytes 66 89 85 C6 F5 FF FF: mov word ptr [ebp - 0xa3a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 8B 42 4E: mov ax, word ptr [edx + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x4e
        ; Exact mapped bytes 66 2D 01 00: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 89 42 4E: mov word ptr [edx + 0x4e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x4e
        ; Exact mapped bytes EB 18: jmp 0x42b127
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 C7 41 4E 00 00: mov word ptr [ecx + 0x4e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 C6 F5 FF FF 00 00: mov word ptr [ebp - 0xa3a], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 16ch], eax
        ; Exact mapped bytes 75 0D: jne 0x42b148
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 16ch], 0ffffffffh
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a28h]
        mov edx, dword ptr [ecx + 40008h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 50 75 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        shl ecx, 10h
        or ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0a28h]
        mov ecx, dword ptr [eax + 40008h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 25 75 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0a24h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 9cch]
        ; Exact mapped bytes E8 A0 26 0C 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x26
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a24h]
        ; Exact mapped bytes EB 02: jmp 0x42b1b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
        add esp, 0a3ch
        cmp ebp, esp
        ; Exact mapped bytes E8 11 D6 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
