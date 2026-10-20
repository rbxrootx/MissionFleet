// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C39F .. +0x340F bytes.
extern "C" __declspec(naked) void FUN_0040c39f_0040C39F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579a22h
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
        mov eax, 1bb0h
        ; Exact mapped bytes E8 FF D3 09 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1bbch]
        mov ecx, 6ech
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 1b84h], ecx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x40c3f3
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 97 33 00 00: jmp 0x40f78a
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8001h
        ; Exact mapped bytes 0F 85 F7 30 00 00: jne 0x40f4fe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1b88h], edx
        mov eax, dword ptr [ebp - 1b88h]
        add eax, 7ffef100h
        mov dword ptr [ebp - 1b88h], eax
        cmp dword ptr [ebp - 1b88h], 0a3h
        ; Exact mapped bytes 0F 87 C5 30 00 00: ja 0x40f4f9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc5
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1b88h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 40f812h]
        ; Exact mapped bytes FF 24 8D AE F7 40 00: jmp dword ptr [ecx*4 + 0x40f7ae]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0x40
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 39: je 0x40c48e
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        ; Exact mapped bytes E8 6A CF 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 0
        push 0
        push 80010f00h
        mov eax, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes E8 A4 AD 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xad
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 66 30 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0A: jne 0x40c4c1
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x40c56c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 2F: jne 0x40c4f6
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 C3 18 01 00: call 0x41dd9c
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x40c4f4
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E AD 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xad
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 74: jmp 0x40c56a
        __asm _emit 0xeb
        __asm _emit 0x74
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 41: je 0x40c53d
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 2A 19 01 00: call 0x41de38
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 8F 92 06 00: call 0x4757af
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x40c53b
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 AC 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 2D: jmp 0x40c56a
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 60 92 06 00: call 0x4757af
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x40c56a
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 AC 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40c583
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF AC 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 71 2F 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ab0h], 18h
        mov dword ptr [ebp - 1ab4h], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 2B CE 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ab8h], eax
        lea ecx, [ebp - 1ab0h]
        push ecx
        lea edx, [ebp - 1ab4h]
        push edx
        lea eax, [ebp - 1ab8h]
        push eax
        ; Exact mapped bytes E8 F8 71 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 CE 01 00 00: je 0x40c7a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [edx + 28h]
        ; Exact mapped bytes E8 C7 2A 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 0F 84 89 01 00 00: je 0x40c781
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        add ecx, 150h
        push ecx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C8 C1 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 61 01 00 00: jne 0x40c781
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0cch]
        add edx, 150h
        mov esi, esp
        push edx
        push 5a0d2ch
        lea eax, [ebp - 0c7h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 95 C1 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx + 168h]
        add edx, 3ch
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov al, byte ptr [edx + 0ch]
        mov byte ptr [ebp - 0c8h], al
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 0F BF 42 5C: movsx eax, word ptr [edx + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x5c
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 1abch], 31h
        mov dword ptr [ebp - 1ac0h], 0
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx + 16ch]
        mov dword ptr [ebp - 1ac4h], edx
        lea eax, [ebp - 1abch]
        push eax
        lea ecx, [ebp - 1ac0h]
        push ecx
        lea edx, [ebp - 1ac4h]
        push edx
        ; Exact mapped bytes E8 F0 70 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x40c741
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16c04h]
        push ecx
        mov edx, dword ptr [ebp - 1b84h]
        mov eax, dword ptr [edx + 28h]
        mov ecx, dword ptr [eax + 40cc8h]
        mov ecx, dword ptr [ecx + 0ca0h]
        ; Exact mapped bytes E8 D5 D3 01 00: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], eax
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 13: je 0x40c739
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes 66 8B 82 48 03 00 00: mov ax, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes EB 06: jmp 0x40c73f
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 45 E4 00 00: mov word ptr [ebp - 0x1c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x40c747
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 45 E4 00 00: mov word ptr [ebp - 0x1c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0afh]
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov ecx, dword ptr [ebp - 1b84h]
        ; Exact mapped bytes E8 56 31 00 00: call 0x40f8b6
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0b4h
        lea eax, [ebp - 0c8h]
        push eax
        push 0
        push 1
        push 80020f02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 AA 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x40c79f
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        push 0
        push 80020f02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 AA 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x40c7bf
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        push 0
        push 80020f02h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 AA 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 35 2D 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 0F 84 ED 07 00 00: je 0x40cfbe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        imul eax, eax, 18h
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 0F 85 D8 07 00 00: jne 0x40cfbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 9fh
        push 5a0cc8h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        imul eax, eax, 60h
        push eax
        ; Exact mapped bytes E8 34 08 0E 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ac8h], eax
        mov ecx, dword ptr [ebp - 1ac8h]
        mov dword ptr [ebp - 0d4h], ecx
        mov dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x40c82f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0d8h]
        add edx, 1
        mov dword ptr [ebp - 0d8h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 0d8h]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 0F 83 24 07 00 00: jae 0x40cf65
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 140h], 0
        mov edx, dword ptr [ebp - 0d8h]
        imul edx, edx, 18h
        mov eax, dword ptr [ebp + 10h]
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 28h]
        ; Exact mapped bytes E8 44 28 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], eax
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 0F 84 78 06 00 00: je 0x40cef3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0d8h]
        imul edx, edx, 18h
        mov eax, dword ptr [ebp + 10h]
        add eax, edx
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 150h
        push ecx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3A BF 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 45 06 00 00: jne 0x40cef3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 60h
        push 0
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes E8 B2 CA 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 13ch]
        add eax, 150h
        mov esi, esp
        push eax
        push 5a0d30h
        lea ecx, [ebp - 137h]
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
        ; Exact mapped bytes E8 F5 BE 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov al, byte ptr [edx + 8]
        mov byte ptr [ebp - 138h], al
        push 24h
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 168h]
        add edx, 54h
        push edx
        lea eax, [ebp - 0fch]
        push eax
        ; Exact mapped bytes E8 0B C7 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 168h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 42: je 0x40c96c
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 168h]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 30: je 0x40c96c
        __asm _emit 0x74
        __asm _emit 0x30
        lea edx, [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 BD 06 01 00: call 0x41d018
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0C: jne 0x40c96c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 0e0h], edx
        lea eax, [ebp - 11eh]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 1b84h]
        ; Exact mapped bytes E8 E5 30 00 00: call 0x40fa6a
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1acch], 31h
        mov dword ptr [ebp - 1ad0h], 0
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 16ch]
        mov dword ptr [ebp - 1ad4h], eax
        lea ecx, [ebp - 1acch]
        push ecx
        lea edx, [ebp - 1ad0h]
        push edx
        lea eax, [ebp - 1ad4h]
        push eax
        ; Exact mapped bytes E8 FB 6D FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 10 05 00 00: je 0x40cee0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        mov edx, dword ptr [edx + ecx + 16e50h]
        mov dword ptr [ebp - 144h], edx
        cmp dword ptr [ebp - 144h], -1
        ; Exact mapped bytes 0F 84 C5 04 00 00: je 0x40cecd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bech]
        mov esi, esp
        push ecx
        push 5a0d34h
        lea edx, [ebp - 11ch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 94 BD 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 144h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 0ah
        ; Exact mapped bytes 72 3C: jb 0x40cab4
        __asm _emit 0x72
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 144h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 11h
        ; Exact mapped bytes 73 0F: jae 0x40cab4
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes E9 17 04 00 00: jmp 0x40cecb
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 144h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 0ah
        ; Exact mapped bytes 72 3B: jb 0x40cb1c
        __asm _emit 0x72
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 144h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 18h
        ; Exact mapped bytes 73 0F: jae 0x40cb1c
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp - 104h], 1
        ; Exact mapped bytes E9 AF 03 00 00: jmp 0x40cecb
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 144h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 18h
        ; Exact mapped bytes 72 3C: jb 0x40cb85
        __asm _emit 0x72
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 144h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 1fh
        ; Exact mapped bytes 73 0F: jae 0x40cb85
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp - 104h], 2
        ; Exact mapped bytes E9 46 03 00 00: jmp 0x40cecb
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 144h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 1fh
        ; Exact mapped bytes 72 3C: jb 0x40cbed
        __asm _emit 0x72
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 144h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 26h
        ; Exact mapped bytes 73 0F: jae 0x40cbed
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp - 104h], 3
        ; Exact mapped bytes E9 DE 02 00 00: jmp 0x40cecb
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 144h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 26h
        ; Exact mapped bytes 72 3B: jb 0x40cc55
        __asm _emit 0x72
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 144h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 2fh
        ; Exact mapped bytes 73 0F: jae 0x40cc55
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp - 104h], 4
        ; Exact mapped bytes E9 76 02 00 00: jmp 0x40cecb
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 144h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 2fh
        ; Exact mapped bytes 72 3C: jb 0x40ccbe
        __asm _emit 0x72
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 144h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 38h
        ; Exact mapped bytes 73 0F: jae 0x40ccbe
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp - 104h], 5
        ; Exact mapped bytes E9 0D 02 00 00: jmp 0x40cecb
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 144h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 38h
        ; Exact mapped bytes 72 3C: jb 0x40cd26
        __asm _emit 0x72
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 144h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 41h
        ; Exact mapped bytes 73 0F: jae 0x40cd26
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp - 104h], 6
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x40cecb
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 144h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 41h
        ; Exact mapped bytes 72 3B: jb 0x40cd8e
        __asm _emit 0x72
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 144h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 4ch
        ; Exact mapped bytes 73 0F: jae 0x40cd8e
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp - 104h], 7
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x40cecb
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 144h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 4ch
        ; Exact mapped bytes 72 3C: jb 0x40cdf7
        __asm _emit 0x72
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 144h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 57h
        ; Exact mapped bytes 73 0F: jae 0x40cdf7
        __asm _emit 0x73
        __asm _emit 0x0f
        mov dword ptr [ebp - 104h], 8
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x40cecb
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 144h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 57h
        ; Exact mapped bytes 72 39: jb 0x40ce5c
        __asm _emit 0x72
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 144h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 62h
        ; Exact mapped bytes 73 0C: jae 0x40ce5c
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 104h], 9
        ; Exact mapped bytes EB 6F: jmp 0x40cecb
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 144h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 62h
        ; Exact mapped bytes 72 38: jb 0x40cec1
        __asm _emit 0x72
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 144h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 7dh
        ; Exact mapped bytes 73 0C: jae 0x40cec1
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 104h], 0ah
        ; Exact mapped bytes EB 0A: jmp 0x40cecb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes EB 11: jmp 0x40cede
        __asm _emit 0xeb
        __asm _emit 0x11
        mov byte ptr [ebp - 11ch], 0
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes EB 11: jmp 0x40cef1
        __asm _emit 0xeb
        __asm _emit 0x11
        mov byte ptr [ebp - 11ch], 0
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes EB 4F: jmp 0x40cf42
        __asm _emit 0xeb
        __asm _emit 0x4f
        push 60h
        push 0
        lea ecx, [ebp - 138h]
        push ecx
        ; Exact mapped bytes E8 6D C4 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov edx, dword ptr [ebp - 0d8h]
        imul edx, edx, 18h
        mov eax, dword ptr [ebp + 10h]
        add eax, edx
        push eax
        lea ecx, [ebp - 137h]
        push ecx
        ; Exact mapped bytes E8 FD C0 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 11fh], 0
        ; Exact mapped bytes 66 C7 85 E2 FE FF FF 00 00: mov word ptr [ebp - 0x11e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov al, byte ptr [edx + 8]
        mov byte ptr [ebp - 138h], al
        mov ecx, dword ptr [ebp - 0d8h]
        imul ecx, ecx, 60h
        mov edi, dword ptr [ebp - 0d4h]
        add edi, ecx
        mov ecx, 18h
        lea esi, [ebp - 138h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes E9 BB F8 FF FF: jmp 0x40c820
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        imul eax, eax, 60h
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 1
        push 80020f03h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 A2 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa2
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 25: je 0x40cfbc
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 1ad8h], ecx
        mov edx, dword ptr [ebp - 1ad8h]
        push edx
        ; Exact mapped bytes E8 5A 04 0E 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes EB 1E: jmp 0x40cfdc
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        push 0
        push 80020f03h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 A2 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa2
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 18 25 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1adch], 17h
        mov dword ptr [ebp - 1ae0h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 1ae4h], ecx
        lea edx, [ebp - 1adch]
        push edx
        lea eax, [ebp - 1ae0h]
        push eax
        lea ecx, [ebp - 1ae4h]
        push ecx
        ; Exact mapped bytes E8 A5 67 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x40d0e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A1 B7 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        push 5a0d38h
        lea ecx, [ebp - 174h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 79 B7 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 66 B7 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 5a0d3ch
        lea ecx, [ebp - 15ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 43 B7 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 15dh], 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        mov byte ptr [ebp + eax - 143h], 0
        mov ecx, dword ptr [ebp - 1b84h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 22: je 0x40d0e0
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        push 30h
        lea edx, [ebp - 174h]
        push edx
        push 0
        push 0
        push 80010f04h
        mov eax, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes E8 52 A1 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x40d100
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        push 0
        push 80020f03h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 A1 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 F4 23 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ae8h], 17h
        mov dword ptr [ebp - 1aech], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 1af0h], edx
        lea eax, [ebp - 1ae8h]
        push eax
        lea ecx, [ebp - 1aech]
        push ecx
        lea edx, [ebp - 1af0h]
        push edx
        ; Exact mapped bytes E8 81 66 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x40d1f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 78 C2 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        push 5a0d40h
        lea edx, [ebp - 1a4h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 5C B6 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 43 C2 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 5a0d44h
        lea edx, [ebp - 18ch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 2D B6 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 18dh], 0
        mov byte ptr [ebp - 175h], 0
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 22: je 0x40d1ef
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        push 30h
        lea ecx, [ebp - 1a4h]
        push ecx
        push 0
        push 0
        push 80010f05h
        mov edx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [edx + 2ch]
        ; Exact mapped bytes E8 43 A0 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x40d20f
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        push 0
        push 80020f05h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 A0 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 E5 22 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1af4h], 19h
        mov dword ptr [ebp - 1af8h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 1afch], ecx
        lea edx, [ebp - 1af4h]
        push edx
        lea eax, [ebp - 1af8h]
        push eax
        lea ecx, [ebp - 1afch]
        push ecx
        ; Exact mapped bytes E8 72 65 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x40d35c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea edx, [ebp - 1bch]
        push edx
        ; Exact mapped bytes E8 07 C1 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 1
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 1bch]
        push eax
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 50 B5 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        lea ecx, [ebp - 1bch]
        push ecx
        mov edx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [edx + 28h]
        ; Exact mapped bytes E8 07 1E 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 1c0h], eax
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x40d35c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3dh
        lea ecx, [ebp - 1e4h]
        ; Exact mapped bytes E8 CB 3B 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 24h
        mov eax, dword ptr [ebp - 1c0h]
        mov ecx, dword ptr [eax + 168h]
        add ecx, 54h
        push ecx
        lea ecx, [ebp - 1e4h]
        ; Exact mapped bytes E8 DD 3C 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 1bch]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E1 B4 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 1bch]
        push eax
        lea ecx, [ebp - 1e4h]
        ; Exact mapped bytes E8 B1 3C 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 1e4h]
        ; Exact mapped bytes E8 6E D1 FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1e4h]
        ; Exact mapped bytes E8 42 D1 FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80020fa0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 9E 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1e4h]
        ; Exact mapped bytes E8 E4 3B 00 00: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 98 21 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 1e8h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 1ech], edx
        cmp dword ptr [ebp - 1ech], 0
        ; Exact mapped bytes 75 0D: jne 0x40d38f
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x40d46b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ech], 0
        ; Exact mapped bytes 75 6B: jne 0x40d403
        __asm _emit 0x75
        __asm _emit 0x6b
        lea eax, [ebp - 270h]
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 9F 06 01 00: call 0x41da4f
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 2B: jne 0x40d3e0
        __asm _emit 0x75
        __asm _emit 0x2b
        push 0
        push 84h
        lea edx, [ebp - 270h]
        push edx
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        push 80020f06h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 9E 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x40d401
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 1ech]
        push edx
        mov eax, dword ptr [ebp - 1e8h]
        push eax
        push 80020f06h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 31 9E 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 66: jmp 0x40d469
        __asm _emit 0xeb
        __asm _emit 0x66
        lea ecx, [ebp - 2c4h]
        push ecx
        mov edx, dword ptr [ebp - 1ech]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 D5 7D 06 00: call 0x4751f0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 28: jne 0x40d448
        __asm _emit 0x75
        __asm _emit 0x28
        push 0
        push 54h
        lea eax, [ebp - 2c4h]
        push eax
        mov ecx, dword ptr [ebp - 1ech]
        push ecx
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        push 80020f06h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC 9D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x40d469
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        push 80020f06h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 9D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x40d48c
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 1ech]
        push edx
        mov eax, dword ptr [ebp - 1e8h]
        push eax
        push 80020f06h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 9D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 68 20 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1b84h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 41: je 0x40d4de
        __asm _emit 0x74
        __asm _emit 0x41
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 28 B3 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 80010fa3h
        mov eax, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes E8 54 9D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 16 20 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 2c8h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 2cch], ecx
        cmp dword ptr [ebp - 2cch], 0
        ; Exact mapped bytes 75 0D: jne 0x40d511
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 2c8h], 0
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x40d5f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2cch], 0
        ; Exact mapped bytes 75 6E: jne 0x40d588
        __asm _emit 0x75
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 2c8h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 E5 12 01 00: call 0x41e810
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 56: jne 0x40d586
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 4A: je 0x40d586
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 89 B2 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 0
        mov eax, dword ptr [ebp - 2c8h]
        push eax
        push 80010f07h
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 B1 9C 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 73 1F 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6C: jmp 0x40d5f4
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 2cch]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 15 8F 06 00: call 0x4764ae
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 56: jne 0x40d5f4
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 4A: je 0x40d5f4
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1B B2 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        mov eax, dword ptr [ebp - 2cch]
        push eax
        push 0
        push 80010f07h
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 43 9C 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 05 1F 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020f07h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 9C 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 DF 1E 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2d4h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 75 0F: jne 0x40d642
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 26: je 0x40d668
        __asm _emit 0x74
        __asm _emit 0x26
        mov dword ptr [ebp - 2d4h], 0
        push 0
        push 4
        lea ecx, [ebp - 2d4h]
        push ecx
        push 0
        push 0
        push 80020f08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA 9B 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 2d0h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 2d8h], edx
        cmp dword ptr [ebp - 2d8h], 0
        ; Exact mapped bytes 75 0D: jne 0x40d696
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 2d0h], 0
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x40d820
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2d8h], 0
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x40d763
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 2d0h]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 73 0D 01 00: call 0x41e430
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 76: jne 0x40d738
        __asm _emit 0x75
        __asm _emit 0x76
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 05 B1 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        push ecx
        mov edx, dword ptr [ebp - 2d0h]
        push edx
        push 80020f08h
        mov eax, dword ptr [ebp - 2d0h]
        push eax
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 3F 05 01 00: call 0x41dc4b
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x40d736
        __asm _emit 0x75
        __asm _emit 0x26
        mov dword ptr [ebp - 2d4h], 0
        push 0
        push 4
        lea ecx, [ebp - 2d4h]
        push ecx
        push 0
        push 0
        push 80020f08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 9A 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x40d75e
        __asm _emit 0xeb
        __asm _emit 0x26
        mov dword ptr [ebp - 2d4h], 1
        push 0
        push 4
        lea edx, [ebp - 2d4h]
        push edx
        push 0
        push 0
        push 80020f08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 9A 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x40d81e
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 BA 88 06 00: call 0x476037
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 76: jne 0x40d7f8
        __asm _emit 0x75
        __asm _emit 0x76
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 45 B0 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        push ecx
        mov edx, dword ptr [ebp - 2d0h]
        push edx
        push 80020f08h
        mov eax, dword ptr [ebp - 2d8h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 78 7B 06 00: call 0x475344
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x40d7f6
        __asm _emit 0x75
        __asm _emit 0x26
        mov dword ptr [ebp - 2d4h], 0
        push 0
        push 4
        lea ecx, [ebp - 2d4h]
        push ecx
        push 0
        push 0
        push 80020f08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C 9A 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x40d81e
        __asm _emit 0xeb
        __asm _emit 0x26
        mov dword ptr [ebp - 2d4h], 1
        push 0
        push 4
        lea edx, [ebp - 2d4h]
        push edx
        push 0
        push 0
        push 80020f08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 9A 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x40d850
        __asm _emit 0xeb
        __asm _emit 0x30
        mov dword ptr [ebp - 2d4h], 0
        push 0
        push 4
        lea eax, [ebp - 2d4h]
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        push ecx
        mov edx, dword ptr [ebp - 2d0h]
        push edx
        push 80020f08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 99 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 A4 1C 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 2dch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 2e0h], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 10h], 30h
        ; Exact mapped bytes 74 26: je 0x40d89c
        __asm _emit 0x74
        __asm _emit 0x26
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 2e0h]
        push edx
        mov eax, dword ptr [ebp - 2dch]
        push eax
        push 80020f09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B 99 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 5D 1C 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2dch], 0
        ; Exact mapped bytes 75 0D: jne 0x40d8b2
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 2e0h], 0
        ; Exact mapped bytes 0F 84 07 04 00 00: je 0x40dcb9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 310h]
        push edx
        ; Exact mapped bytes E8 5C B7 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 2e0h], 0
        ; Exact mapped bytes 0F 85 F4 01 00 00: jne 0x40dac8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2dch]
        push eax
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 2B 0F 01 00: call 0x41e810
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 B4 01 00 00: jne 0x40daa2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 2f8h]
        push ecx
        mov edx, dword ptr [ebp - 2dch]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 62 07 01 00: call 0x41e068
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 7A 01 00 00: jne 0x40da89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x40da66
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 23eh
        push 5a0cc8h
        push 24h
        ; Exact mapped bytes E8 03 F7 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1b04h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1b04h], 0
        ; Exact mapped bytes 74 15: je 0x40d95e
        __asm _emit 0x74
        __asm _emit 0x15
        push 49h
        mov ecx, dword ptr [ebp - 1b04h]
        ; Exact mapped bytes E8 3A 35 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x40d968
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8ch], 0
        mov ecx, dword ptr [ebp - 1b8ch]
        mov dword ptr [ebp - 1b00h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 1b00h]
        mov dword ptr [ebp - 314h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 3B BA 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 15 36 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        lea edx, [ebp - 310h]
        push edx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 01 36 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 BE CA FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 92 CA FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 2dch]
        push ecx
        push 80010f09h
        mov edx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [edx + 2ch]
        ; Exact mapped bytes E8 32 98 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp - 314h], 0
        ; Exact mapped bytes 74 58: je 0x40da61
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [ebp - 1b0ch], eax
        mov ecx, dword ptr [ebp - 1b0ch]
        mov dword ptr [ebp - 1b08h], ecx
        cmp dword ptr [ebp - 1b08h], 0
        ; Exact mapped bytes 74 23: je 0x40da4d
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 1b08h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1b08h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 9B AD 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 1b90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40da57
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b90h], 0
        mov dword ptr [ebp - 314h], 0
        ; Exact mapped bytes E9 93 1A 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov edx, dword ptr [ebp - 2dch]
        push edx
        push 80020f09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB 97 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40daa0
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 97 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x40dac3
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 2dch]
        push ecx
        push 80020f09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 97 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 EF 01 00 00: jmp 0x40dcb7
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2e0h]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 D5 89 06 00: call 0x4764ae
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 B4 01 00 00: jne 0x40dc96
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 2f8h]
        push eax
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 2F 7F 06 00: call 0x475a29
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 7A 01 00 00: jne 0x40dc7d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1b84h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x40dc5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 261h
        push 5a0cc8h
        push 24h
        ; Exact mapped bytes E8 0F F5 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1b14h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1b14h], 0
        ; Exact mapped bytes 74 15: je 0x40db52
        __asm _emit 0x74
        __asm _emit 0x15
        push 49h
        mov ecx, dword ptr [ebp - 1b14h]
        ; Exact mapped bytes E8 46 33 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40db5c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b94h], 0
        mov eax, dword ptr [ebp - 1b94h]
        mov dword ptr [ebp - 1b10h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1b10h]
        mov dword ptr [ebp - 318h], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        ; Exact mapped bytes E8 46 B8 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 21 34 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        lea ecx, [ebp - 310h]
        push ecx
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 0D 34 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 CA C8 FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 9E C8 FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 2e0h]
        push edx
        mov eax, dword ptr [ebp - 2dch]
        push eax
        push 80010f09h
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 3E 96 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp - 318h], 0
        ; Exact mapped bytes 74 58: je 0x40dc55
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 318h]
        mov dword ptr [ebp - 1b1ch], edx
        mov eax, dword ptr [ebp - 1b1ch]
        mov dword ptr [ebp - 1b18h], eax
        cmp dword ptr [ebp - 1b18h], 0
        ; Exact mapped bytes 74 23: je 0x40dc41
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 1b18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1b18h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 A7 AB 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 1b98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40dc4b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b98h], 0
        mov dword ptr [ebp - 318h], 0
        ; Exact mapped bytes E9 9F 18 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 2dch]
        push ecx
        push 80020f09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 95 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40dc94
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 95 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x40dcb7
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 2e0h]
        push edx
        mov eax, dword ptr [ebp - 2dch]
        push eax
        push 80020f09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 95 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x40dcda
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov edx, dword ptr [ebp - 2dch]
        push edx
        push 80020f09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 95 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 1A 18 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 31ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 320h], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 10h], 30h
        ; Exact mapped bytes 74 26: je 0x40dd26
        __asm _emit 0x74
        __asm _emit 0x26
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 320h]
        push edx
        mov eax, dword ptr [ebp - 31ch]
        push eax
        push 80020f0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 95 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 D3 17 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 31ch], 0
        ; Exact mapped bytes 75 0D: jne 0x40dd3c
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 320h], 0
        ; Exact mapped bytes 0F 84 8E 03 00 00: je 0x40e0ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 350h]
        push edx
        ; Exact mapped bytes E8 D2 B2 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 320h], 0
        ; Exact mapped bytes 0F 85 B7 01 00 00: jne 0x40df15
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 338h]
        push eax
        mov ecx, dword ptr [ebp - 31ch]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 F2 02 01 00: call 0x41e068
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 7A 01 00 00: jne 0x40def9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1b84h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x40ded6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2abh
        push 5a0cc8h
        push 24h
        ; Exact mapped bytes E8 93 F2 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1b24h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 1b24h], 0
        ; Exact mapped bytes 74 15: je 0x40ddce
        __asm _emit 0x74
        __asm _emit 0x15
        push 49h
        mov ecx, dword ptr [ebp - 1b24h]
        ; Exact mapped bytes E8 CA 30 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x40ddd8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b9ch], 0
        mov eax, dword ptr [ebp - 1b9ch]
        mov dword ptr [ebp - 1b20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1b20h]
        mov dword ptr [ebp - 354h], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        ; Exact mapped bytes E8 CA B5 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 A5 31 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        lea ecx, [ebp - 350h]
        push ecx
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 91 31 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 4E C6 FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 22 C6 FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 320h]
        push edx
        mov eax, dword ptr [ebp - 31ch]
        push eax
        push 80010f0ah
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 C2 93 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp - 354h], 0
        ; Exact mapped bytes 74 58: je 0x40ded1
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 354h]
        mov dword ptr [ebp - 1b2ch], edx
        mov eax, dword ptr [ebp - 1b2ch]
        mov dword ptr [ebp - 1b28h], eax
        cmp dword ptr [ebp - 1b28h], 0
        ; Exact mapped bytes 74 23: je 0x40debd
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 1b28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1b28h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 2B A9 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 1ba0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40dec7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ba0h], 0
        mov dword ptr [ebp - 354h], 0
        ; Exact mapped bytes E9 23 16 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 31ch]
        push ecx
        push 80020f0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 93 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40df10
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 93 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 B3 01 00 00: jmp 0x40e0c8
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 338h]
        push edx
        mov eax, dword ptr [ebp - 320h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 FC 7A 06 00: call 0x475a29
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 7B 01 00 00: jne 0x40e0b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1b84h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 0F 84 48 01 00 00: je 0x40e08e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2c7h
        push 5a0cc8h
        push 24h
        ; Exact mapped bytes E8 DC F0 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1b34h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 1b34h], 0
        ; Exact mapped bytes 74 15: je 0x40df85
        __asm _emit 0x74
        __asm _emit 0x15
        push 49h
        mov ecx, dword ptr [ebp - 1b34h]
        ; Exact mapped bytes E8 13 2F 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ba4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40df8f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ba4h], 0
        mov edx, dword ptr [ebp - 1ba4h]
        mov dword ptr [ebp - 1b30h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1b30h]
        mov dword ptr [ebp - 358h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        ; Exact mapped bytes E8 13 B4 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 ED 2F 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        lea eax, [ebp - 350h]
        push eax
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 D9 2F 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 96 C4 FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 6A C4 FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 320h]
        push ecx
        mov edx, dword ptr [ebp - 31ch]
        push edx
        push 80010f0ah
        mov eax, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes E8 0A 92 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x92
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp - 358h], 0
        ; Exact mapped bytes 74 58: je 0x40e089
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 358h]
        mov dword ptr [ebp - 1b3ch], ecx
        mov edx, dword ptr [ebp - 1b3ch]
        mov dword ptr [ebp - 1b38h], edx
        cmp dword ptr [ebp - 1b38h], 0
        ; Exact mapped bytes 74 23: je 0x40e075
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1b38h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1b38h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 73 A7 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 1ba8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40e07f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ba8h], 0
        mov dword ptr [ebp - 358h], 0
        ; Exact mapped bytes E9 6B 14 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 31ch]
        push ecx
        push 80020f0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 91 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e0c8
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 91 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x40e0eb
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 320h]
        push edx
        mov eax, dword ptr [ebp - 31ch]
        push eax
        push 80020f0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 91 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 09 14 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 35ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 360h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 54h]
        cmp ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes 75 14: jne 0x40e130
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 58h]
        cmp ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes 74 26: je 0x40e156
        __asm _emit 0x74
        __asm _emit 0x26
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 360h]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        push eax
        push 80020f0bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 90 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 A3 13 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 35ch], 0
        ; Exact mapped bytes 75 0D: jne 0x40e16c
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 360h], 0
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x40e25d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 360h], 0
        ; Exact mapped bytes 75 76: jne 0x40e1eb
        __asm _emit 0x75
        __asm _emit 0x76
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        mov edx, dword ptr [ebp - 35ch]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 EC 06 01 00: call 0x41e87c
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 54: jne 0x40e1e9
        __asm _emit 0x75
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 48: je 0x40e1e9
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        ; Exact mapped bytes E8 1E B2 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        mov eax, dword ptr [ebp - 360h]
        push eax
        mov ecx, dword ptr [ebp - 35ch]
        push ecx
        push 80010f0bh
        mov edx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [edx + 2ch]
        ; Exact mapped bytes E8 4E 90 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 13 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 72: jmp 0x40e25d
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 360h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 15 83 06 00: call 0x47651a
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 53: jne 0x40e25d
        __asm _emit 0x75
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 1b84h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 74 47: je 0x40e25d
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 AA B1 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        mov edx, dword ptr [ebp - 360h]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        push eax
        push 80010f0bh
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 DA 8F 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 9C 12 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 360h]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        push eax
        push 80020f0bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B4 8F 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 76 12 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 10h], 8
        ; Exact mapped bytes 77 1C: ja 0x40e2a8
        __asm _emit 0x77
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8F 8F 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 51 12 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        push 0
        lea edx, [ebp - 380h]
        push edx
        ; Exact mapped bytes E8 B8 B0 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        lea eax, [ebp - 388h]
        push eax
        ; Exact mapped bytes E8 A5 B0 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        lea ecx, [ebp - 378h]
        push ecx
        ; Exact mapped bytes E8 92 B0 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 8
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 380h]
        push eax
        ; Exact mapped bytes E8 2D AD 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 8
        push ecx
        lea edx, [ebp - 378h]
        push edx
        ; Exact mapped bytes E8 15 AD 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 361h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 388h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 384h], eax
        cmp dword ptr [ebp - 380h], 0
        ; Exact mapped bytes 74 1B: je 0x40e351
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 37ch], 0
        ; Exact mapped bytes 75 12: jne 0x40e351
        __asm _emit 0x75
        __asm _emit 0x12
        cmp dword ptr [ebp - 388h], 0
        ; Exact mapped bytes 75 09: jne 0x40e351
        __asm _emit 0x75
        __asm _emit 0x09
        cmp dword ptr [ebp - 384h], 0
        ; Exact mapped bytes 75 1C: jne 0x40e36d
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA 8E 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 11 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 378h]
        push edx
        mov eax, dword ptr [ebp - 384h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 29 82 06 00: call 0x4765b2
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 4F: jne 0x40e3dd
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 384h]
        push ecx
        mov edx, dword ptr [ebp - 380h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 6E 05 01 00: call 0x41e914
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 32: jne 0x40e3dd
        __asm _emit 0x75
        __asm _emit 0x32
        push 8
        lea eax, [ebp - 380h]
        push eax
        mov ecx, dword ptr [ebp - 384h]
        push ecx
        mov edx, dword ptr [ebp - 388h]
        push edx
        push 80020f0ch
        mov eax, dword ptr [ebp - 380h]
        push eax
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 73 F8 00 00: call 0x41dc4b
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1C 11 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E 8E 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 00 11 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 3b0h]
        push edx
        ; Exact mapped bytes E8 15 AC 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov eax, dword ptr [ebp + 10h]
        add eax, 8
        push eax
        lea ecx, [ebp - 3a8h]
        push ecx
        ; Exact mapped bytes E8 FD AB 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 38ch], eax
        mov ecx, dword ptr [ebp - 3ach]
        mov dword ptr [ebp - 390h], ecx
        cmp dword ptr [ebp - 390h], 0
        ; Exact mapped bytes 75 0D: jne 0x40e454
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x40e52b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 3a8h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 FC FB 00 00: call 0x41e068
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x40e512
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 390h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 CE 02 01 00: call 0x41e75a
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 69: je 0x40e4f9
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 1b84h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 74 44: je 0x40e4e0
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 24 AF 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xaf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        mov edx, dword ptr [ebp - 390h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80010f0dh
        mov edx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [edx + 2ch]
        ; Exact mapped bytes E8 54 8D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e4f7
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0dh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 8D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e510
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0dh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 8D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e529
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0dh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 8D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e542
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f0dh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 8C 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 B2 0F 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 3b4h], ecx
        push 8
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 3d8h]
        push eax
        ; Exact mapped bytes E8 BB AA 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 8
        push ecx
        lea edx, [ebp - 3d0h]
        push edx
        ; Exact mapped bytes E8 A3 AA 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 3d4h]
        mov dword ptr [ebp - 3b8h], eax
        cmp dword ptr [ebp - 3b4h], 0
        ; Exact mapped bytes 74 58: je 0x40e5ed
        __asm _emit 0x74
        __asm _emit 0x58
        cmp dword ptr [ebp - 3b8h], 0
        ; Exact mapped bytes 74 4F: je 0x40e5ed
        __asm _emit 0x74
        __asm _emit 0x4f
        lea ecx, [ebp - 3d0h]
        push ecx
        mov edx, dword ptr [ebp - 3b4h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 B2 FA 00 00: call 0x41e068
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x40e5ed
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 27: je 0x40e5ed
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 3b8h]
        push ecx
        mov edx, dword ptr [ebp - 3b4h]
        push edx
        push 80010f0eh
        mov eax, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes E8 45 8C 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 07 0F 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 3dch], edx
        push 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 400h]
        push ecx
        ; Exact mapped bytes E8 10 AA 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov edx, dword ptr [ebp + 10h]
        add edx, 8
        push edx
        lea eax, [ebp - 3f8h]
        push eax
        ; Exact mapped bytes E8 F8 A9 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 3fch]
        mov dword ptr [ebp - 3e0h], ecx
        cmp dword ptr [ebp - 3e0h], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x40e6d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 3f8h]
        push edx
        mov eax, dword ptr [ebp - 3e0h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 CD 73 06 00: call 0x475a29
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x40e6b5
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 1b84h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 29: je 0x40e695
        __asm _emit 0x74
        __asm _emit 0x29
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 3e0h]
        push edx
        mov eax, dword ptr [ebp - 3dch]
        push eax
        push 80010f0fh
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 9F 8B 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x40e6b3
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 80010f0fh
        mov edx, dword ptr [ebp - 3e0h]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 91 6C 06 00: call 0x475344
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x40e6d3
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 80010f0fh
        mov eax, dword ptr [ebp - 3e0h]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 71 6C 06 00: call 0x475344
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 21 0E 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1b84h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 0F 84 0E 02 00 00: je 0x40e8f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 0F 84 E8 01 00 00: je 0x40e8dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 10h], 839h
        ; Exact mapped bytes 0F 85 BF 01 00 00: jne 0x40e8c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 404h], ecx
        mov esi, esp
        mov edx, dword ptr [ebp - 404h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BC A0 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 7F 01 00 00: je 0x40e8ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 404h]
        add eax, 21h
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9B A0 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 45 01 00 00: je 0x40e892
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        cmp dword ptr [edx + 18h], 0f4240h
        ; Exact mapped bytes 0F 8C 16 01 00 00: jl 0x40e879
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 DF 79 06 00: call 0x476153
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1eh
        ; Exact mapped bytes 0F 8C E3 00 00 00: jl 0x40e860
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 852h
        push 0
        lea edx, [ebp - 0c58h]
        push edx
        ; Exact mapped bytes E8 E0 AB 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 2F AC 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        lea edx, [ebp - 0c58h]
        push edx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 18 A0 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        push 839h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov esi, esp
        lea ecx, [ebp - 0c58h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F9 9F 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9f
        __asm _emit 0x09
        __asm _emit 0x00
        lea edx, [ebp + eax - 0c57h]
        push edx
        ; Exact mapped bytes E8 2C A8 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 0f4240h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [eax + 28h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 86 3E 07 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3e
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 852h
        lea edx, [ebp - 0c58h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80010f14h
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 D4 89 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e877
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 89 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e890
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 3
        push 0
        push 80020f14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 89 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e8a9
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 3
        push 0
        push 80020f14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 89 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e8c2
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 3
        push 0
        push 80020f14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 89 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e8db
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 89 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e8f4
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E 89 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40e90d
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 89 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 E7 0B 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1b84h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 0F 84 0B 02 00 00: je 0x40eb2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 85 E5 01 00 00: jne 0x40eb14
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0c5ch], ecx
        mov esi, esp
        mov edx, dword ptr [ebp - 0c5ch]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 92 9E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 01 00 00: je 0x40eafb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c5ch]
        add eax, 18h
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 71 9E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x40eae2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c5ch]
        add ecx, 21h
        mov esi, esp
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 50 9E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 31 01 00 00: je 0x40eac9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 10h], 839h
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x40eab0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        cmp dword ptr [ecx + 18h], 30d40h
        ; Exact mapped bytes 0F 8C D9 00 00 00: jl 0x40ea97
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 852h
        push 0
        lea edx, [ebp - 14b0h]
        push edx
        ; Exact mapped bytes E8 9F A9 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 EE A9 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        lea edx, [ebp - 14b0h]
        push edx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D7 9D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        push 839h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov esi, esp
        lea ecx, [ebp - 14b0h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B8 9D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        lea edx, [ebp + eax - 14afh]
        push edx
        ; Exact mapped bytes E8 EB A5 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa5
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 30d40h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [eax + 28h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 45 3C 07 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 852h
        lea edx, [ebp - 14b0h]
        push edx
        push 0
        push 0
        push 80010f10h
        mov eax, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes E8 9D 87 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40eaae
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 3
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 87 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40eac7
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 87 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40eae0
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 52 87 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40eaf9
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 87 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40eb12
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 87 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40eb2b
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 07 87 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40eb44
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EE 86 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 B0 09 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 14b4h], edx
        mov dword ptr [ebp - 153ch], 0
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x40ebfa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1538h]
        push ecx
        mov edx, dword ptr [ebp - 14b4h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 C8 EE 00 00: call 0x41da4f
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x40ebfa
        __asm _emit 0x74
        __asm _emit 0x6f
        cmp dword ptr [ebp - 1530h], 0
        ; Exact mapped bytes 75 2B: jne 0x40ebbf
        __asm _emit 0x75
        __asm _emit 0x2b
        push 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 14b4h]
        push eax
        push 80010fa1h
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 75 86 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 3B: jmp 0x40ebfa
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        cmp dword ptr [eax + 18h], 0f4240h
        ; Exact mapped bytes 7C 29: jl 0x40ebfa
        __asm _emit 0x7c
        __asm _emit 0x29
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 14b4h]
        push ecx
        push 80010fa1h
        mov edx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [edx + 2ch]
        ; Exact mapped bytes E8 38 86 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 FA 08 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b40h], 86bh
        mov dword ptr [ebp - 1b44h], 839h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 1b48h], ecx
        lea edx, [ebp - 1b40h]
        push edx
        lea eax, [ebp - 1b44h]
        push eax
        lea ecx, [ebp - 1b48h]
        push ecx
        ; Exact mapped bytes E8 87 4B FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 46 04 00 00: je 0x40f08a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 1540h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 1544h], edx
        cmp dword ptr [ebp - 1540h], 0
        ; Exact mapped bytes 75 0D: jne 0x40ec72
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 1544h], 0
        ; Exact mapped bytes 0F 84 FF 03 00 00: je 0x40f071
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea eax, [ebp - 155ch]
        push eax
        ; Exact mapped bytes E8 EE A6 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 839h
        mov esi, esp
        push ecx
        push 5a0d48h
        lea edx, [ebp - 155ch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 33 9B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 1544h], 0
        ; Exact mapped bytes 0F 85 DD 01 00 00: jne 0x40ee97
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 155ch]
        push eax
        mov ecx, dword ptr [ebp - 1540h]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 96 F3 00 00: call 0x41e068
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A0 01 00 00: jne 0x40ee7b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4e3h
        push 5a0cc8h
        push 24h
        ; Exact mapped bytes E8 47 E3 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1b50h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 1b50h], 0
        ; Exact mapped bytes 74 18: je 0x40ed1d
        __asm _emit 0x74
        __asm _emit 0x18
        push 86bh
        mov ecx, dword ptr [ebp - 1b50h]
        ; Exact mapped bytes E8 7B 21 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1bach], eax
        ; Exact mapped bytes EB 0A: jmp 0x40ed27
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bach], 0
        mov edx, dword ptr [ebp - 1bach]
        mov dword ptr [ebp - 1b4ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1b4ch]
        mov dword ptr [ebp - 1560h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 81 9A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        mov ecx, dword ptr [ebp - 1560h]
        ; Exact mapped bytes E8 4E 22 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push 839h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 1560h]
        ; Exact mapped bytes E8 3A 22 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 155ch]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3E 9A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 155ch]
        push edx
        mov ecx, dword ptr [ebp - 1560h]
        ; Exact mapped bytes E8 0E 22 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 3D: je 0x40ee01
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0
        mov ecx, dword ptr [ebp - 1560h]
        ; Exact mapped bytes E8 BF B6 FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 1560h]
        ; Exact mapped bytes E8 93 B6 FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 1544h]
        push ecx
        mov edx, dword ptr [ebp - 1540h]
        push edx
        push 80010f11h
        mov eax, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes E8 33 84 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40ee18
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 84 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp - 1560h], 0
        ; Exact mapped bytes 74 58: je 0x40ee79
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 1560h]
        mov dword ptr [ebp - 1b58h], ecx
        mov edx, dword ptr [ebp - 1b58h]
        mov dword ptr [ebp - 1b54h], edx
        cmp dword ptr [ebp - 1b54h], 0
        ; Exact mapped bytes 74 23: je 0x40ee65
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1b54h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1b54h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 83 99 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 1bb0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40ee6f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bb0h], 0
        mov dword ptr [ebp - 1560h], 0
        ; Exact mapped bytes EB 17: jmp 0x40ee92
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 83 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 D8 01 00 00: jmp 0x40f06f
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 155ch]
        push eax
        mov ecx, dword ptr [ebp - 1544h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 7A 6B 06 00: call 0x475a29
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A0 01 00 00: jne 0x40f058
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 500h
        push 5a0cc8h
        push 24h
        ; Exact mapped bytes E8 6A E1 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1b60h], eax
        mov dword ptr [ebp - 4], 6
        cmp dword ptr [ebp - 1b60h], 0
        ; Exact mapped bytes 74 18: je 0x40eefa
        __asm _emit 0x74
        __asm _emit 0x18
        push 86bh
        mov ecx, dword ptr [ebp - 1b60h]
        ; Exact mapped bytes E8 9E 1F 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1bb4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40ef04
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bb4h], 0
        mov edx, dword ptr [ebp - 1bb4h]
        mov dword ptr [ebp - 1b5ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1b5ch]
        mov dword ptr [ebp - 1564h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A4 98 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        mov ecx, dword ptr [ebp - 1564h]
        ; Exact mapped bytes E8 71 20 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        push 839h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 1564h]
        ; Exact mapped bytes E8 5D 20 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 155ch]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 61 98 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 155ch]
        push edx
        mov ecx, dword ptr [ebp - 1564h]
        ; Exact mapped bytes E8 31 20 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 3D: je 0x40efde
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0
        mov ecx, dword ptr [ebp - 1564h]
        ; Exact mapped bytes E8 E2 B4 FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 1564h]
        ; Exact mapped bytes E8 B6 B4 FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 1544h]
        push ecx
        mov edx, dword ptr [ebp - 1540h]
        push edx
        push 80010f11h
        mov eax, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes E8 56 82 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40eff5
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D 82 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp - 1564h], 0
        ; Exact mapped bytes 74 58: je 0x40f056
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 1564h]
        mov dword ptr [ebp - 1b68h], ecx
        mov edx, dword ptr [ebp - 1b68h]
        mov dword ptr [ebp - 1b64h], edx
        cmp dword ptr [ebp - 1b64h], 0
        ; Exact mapped bytes 74 23: je 0x40f042
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1b64h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1b64h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 A6 97 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 1bb8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40f04c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bb8h], 0
        mov dword ptr [ebp - 1564h], 0
        ; Exact mapped bytes EB 17: jmp 0x40f06f
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 81 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f088
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA 81 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f0a1
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 81 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 53 04 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b6ch], 18h
        mov dword ptr [ebp - 1b70h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 1b74h], ecx
        lea edx, [ebp - 1b6ch]
        push edx
        lea eax, [ebp - 1b70h]
        push eax
        lea ecx, [ebp - 1b74h]
        push ecx
        ; Exact mapped bytes E8 E0 46 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 63 03 00 00: je 0x40f44e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 1568h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 156ch], edx
        cmp dword ptr [ebp - 1568h], 0
        ; Exact mapped bytes 75 0D: jne 0x40f119
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 156ch], 0
        ; Exact mapped bytes 0F 84 1C 03 00 00: je 0x40f435
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        push 0
        lea eax, [ebp - 15a4h]
        push eax
        ; Exact mapped bytes E8 47 A2 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        add edx, 1
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 15a4h]
        push ecx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 96 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        lea eax, [ebp - 1588h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 70 96 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1570h], ecx
        cmp dword ptr [ebp - 156ch], 0
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x40f2df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 1588h]
        push edx
        mov eax, dword ptr [ebp - 1568h]
        push eax
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 29 F3 00 00: call 0x41e4c7
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x40f2c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 15a4h]
        push ecx
        mov edx, dword ptr [ebp - 1568h]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 AA EE 00 00: call 0x41e068
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x40f2aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x40f291
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 32h
        lea ecx, [ebp - 15c8h]
        ; Exact mapped bytes E8 AD 1C 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 7
        mov esi, esp
        lea ecx, [ebp - 1588h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E0 95 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x95
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 1588h]
        push edx
        lea ecx, [ebp - 15c8h]
        ; Exact mapped bytes E8 B0 1D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 15a4h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B4 95 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x95
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 15a4h]
        push ecx
        lea ecx, [ebp - 15c8h]
        ; Exact mapped bytes E8 84 1D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 15c8h]
        ; Exact mapped bytes E8 41 B2 FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 15c8h]
        ; Exact mapped bytes E8 15 B2 FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 156ch]
        push edx
        mov eax, dword ptr [ebp - 1568h]
        push eax
        push 80010f13h
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 B5 7F 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 15c8h]
        ; Exact mapped bytes E8 B1 1C 00 00: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f2a8
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A 7F 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f2c1
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 7F 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f2da
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 7F 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 54 01 00 00: jmp 0x40f433
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 1588h]
        push edx
        mov eax, dword ptr [ebp - 156ch]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 E6 6E 06 00: call 0x4761dd
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x40f41c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 15a4h]
        push ecx
        mov edx, dword ptr [ebp - 156ch]
        push edx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 12 67 06 00: call 0x475a29
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x40f403
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1b84h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x40f3ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 32h
        lea ecx, [ebp - 15ech]
        ; Exact mapped bytes E8 54 1B 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 8
        mov esi, esp
        lea ecx, [ebp - 1588h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 87 94 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 1588h]
        push edx
        lea ecx, [ebp - 15ech]
        ; Exact mapped bytes E8 57 1C 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 15a4h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5B 94 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 15a4h]
        push ecx
        lea ecx, [ebp - 15ech]
        ; Exact mapped bytes E8 2B 1C 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 15ech]
        ; Exact mapped bytes E8 E8 B0 FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 15ech]
        ; Exact mapped bytes E8 BC B0 FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 156ch]
        push edx
        mov eax, dword ptr [ebp - 1568h]
        push eax
        push 80010f13h
        mov ecx, dword ptr [ebp - 1b84h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 5C 7E 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 15ech]
        ; Exact mapped bytes E8 58 1B 00 00: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f401
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 31 7E 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f41a
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 7E 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7e
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f433
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 7D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f44c
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 7D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f465
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 7D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x40f4f9
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 8], 1
        ; Exact mapped bytes 75 2E: jne 0x40f4a1
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020f12h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 2B EA 00 00: call 0x41deca
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 58: jmp 0x40f4f9
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 2E: jne 0x40f4d8
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020f12h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 FD 63 06 00: call 0x4758d3
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x40f4f9
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020f12h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 7D 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 02 00 00: jmp 0x40f78a
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8002h
        ; Exact mapped bytes 0F 85 77 02 00 00: jne 0x40f78a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1bbch], eax
        cmp dword ptr [ebp - 1bbch], 80020f00h
        ; Exact mapped bytes 74 25: je 0x40f550
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [ebp - 1bbch], 80020f04h
        ; Exact mapped bytes 0F 84 BB 01 00 00: je 0x40f6f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1bbch], 80020f05h
        ; Exact mapped bytes 0F 84 F6 01 00 00: je 0x40f741
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3A 02 00 00: jmp 0x40f78a
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 0ch], 1
        ; Exact mapped bytes 0F 85 7D 01 00 00: jne 0x40f6da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 15f4h]
        ; Exact mapped bytes E8 9F 19 12 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 9
        mov dword ptr [ebp - 15f0h], 0
        push 4b1h
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 1aach]
        push eax
        ; Exact mapped bytes E8 92 9A 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 15f8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x40f5ac
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 15f8h]
        add ecx, 1
        mov dword ptr [ebp - 15f8h], ecx
        cmp dword ptr [ebp - 15f8h], 32h
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x40f64a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b78h], 17h
        mov dword ptr [ebp - 1b7ch], 4
        mov edx, dword ptr [ebp - 15f8h]
        imul edx, edx, 18h
        lea eax, [ebp + edx - 1aabh]
        push eax
        ; Exact mapped bytes E8 ED 9D 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b80h], eax
        lea ecx, [ebp - 1b78h]
        push ecx
        lea edx, [ebp - 1b7ch]
        push edx
        lea eax, [ebp - 1b80h]
        push eax
        ; Exact mapped bytes E8 BA 41 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x40f645
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 15f8h]
        imul ecx, ecx, 18h
        lea edx, [ebp + ecx - 1aabh]
        push edx
        lea ecx, [ebp - 15f4h]
        ; Exact mapped bytes E8 2C E9 0D 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x00
        push 3bh
        lea ecx, [ebp - 15f4h]
        ; Exact mapped bytes E8 7A E9 0D 00: call 0x4edfb0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 15f0h]
        add eax, 1
        mov dword ptr [ebp - 15f0h], eax
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x40f59d
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 15f0h], 0
        ; Exact mapped bytes 74 1C: je 0x40f66f
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        lea ecx, [ebp - 15f4h]
        ; Exact mapped bytes E8 00 19 12 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        sub eax, 1
        push eax
        lea ecx, [ebp - 15f4h]
        ; Exact mapped bytes E8 69 EE 0D 00: call 0x4ee4d8
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xee
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp dword ptr [ebp - 15f0h], 0
        ; Exact mapped bytes 74 37: je 0x40f6af
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        lea ecx, [ebp - 15f4h]
        ; Exact mapped bytes E8 DB 18 12 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x18
        __asm _emit 0x12
        __asm _emit 0x00
        add eax, 1
        push eax
        push 0
        lea ecx, [ebp - 15f4h]
        ; Exact mapped bytes E8 62 E9 0D 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 15f0h]
        push ecx
        push 0
        push 80020f00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 7B 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f6c6
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C 7B 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 15f4h]
        ; Exact mapped bytes E8 74 E1 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe1
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f6f1
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f04h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 7B 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x40f78a
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 0ch], 1
        ; Exact mapped bytes 75 29: jne 0x40f728
        __asm _emit 0x75
        __asm _emit 0x29
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 C6 9C 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        push 0
        push 80020f04h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 7B 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f73f
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f04h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 7A 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x40f78a
        __asm _emit 0xeb
        __asm _emit 0x49
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 0ch], 1
        ; Exact mapped bytes 75 29: jne 0x40f773
        __asm _emit 0x75
        __asm _emit 0x29
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 7B 9C 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        push 0
        push 80020f05h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 7A 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40f78a
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020f05h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 7A 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
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
        add esp, 1bbch
        cmp ebp, esp
        ; Exact mapped bytes E8 38 90 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
