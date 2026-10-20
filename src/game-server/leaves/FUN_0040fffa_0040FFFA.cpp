// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FFFA .. +0x542 bytes.
extern "C" __declspec(naked) void FUN_0040fffa_0040FFFA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3ch]
        mov ecx, 0fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 1
        ; Exact mapped bytes 74 15: je 0x410037
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 3ch], 2
        ; Exact mapped bytes 0F 84 03 04 00 00: je 0x41042f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 3
        ; Exact mapped bytes 74 05: je 0x410037
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 F1 04 00 00: jmp 0x410528
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 118h], 0
        ; Exact mapped bytes 75 07: jne 0x41004a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E0 04 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E A3 FF FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        cmp eax, dword ptr [edx + 14h]
        ; Exact mapped bytes 75 07: jne 0x410061
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C9 04 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 04 39 FF FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 B7 0D 00 00: call 0x410e30
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7E 07: jle 0x410084
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A6 04 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f8h], 1
        ; Exact mapped bytes 75 07: jne 0x410097
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 93 04 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0fch], 8
        ; Exact mapped bytes 75 07: jne 0x4100aa
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 80 04 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 31h
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        mov dword ptr [ebp - 1ch], edx
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 EB 36 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4100e3
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 47 04 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        cmp dword ptr [ecx + eax + 16bdch], 1
        ; Exact mapped bytes 75 07: jne 0x41010c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1E 04 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        cmp dword ptr [edx + ecx + 16e4ch], -1
        ; Exact mapped bytes 75 07: jne 0x410135
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F5 03 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        ; Exact mapped bytes 66 8B 84 10 08 6C 01 00: mov ax, word ptr [eax + edx + 0x16c08]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 3
        ; Exact mapped bytes 74 07: je 0x41016a
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C0 03 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        ; Exact mapped bytes 66 8B 94 0A 06 6C 01 00: mov dx, word ptr [edx + ecx + 0x16c06]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 2
        ; Exact mapped bytes 74 07: je 0x4101a0
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8A 03 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        cmp dword ptr [ecx + eax + 16be4h], 0
        ; Exact mapped bytes 75 07: jne 0x4101c9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 61 03 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16be0h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 07: jne 0x4101f8
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 32 03 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add eax, 24h
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 74 03 00: call 0x447616
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x410217
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 13 03 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 81 E2 FF 00: and dx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x00
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov esi, dword ptr [ebp + 8]
        mov esi, dword ptr [esi + 16ch]
        imul esi, esi, 370h
        mov eax, dword ptr [eax + esi + 16e4ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ecx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp edx, ecx
        ; Exact mapped bytes 76 07: jbe 0x410276
        __asm _emit 0x76
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B4 02 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [edx + 64h]
        imul esi, esi, 3e8h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 40cc8h]
        mov ecx, dword ptr [ecx + 0ca0h]
        ; Exact mapped bytes E8 27 27 02 00: call 0x4329e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 73 07: jae 0x4102c4
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 66 02 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4102dd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 83 C1 00 00 00: jae 0x4103a8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 0ah
        ; Exact mapped bytes 66 8B 84 11 2E 01 00 00: mov ax, word ptr [ecx + edx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 5
        ; Exact mapped bytes 74 78: je 0x41039a
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 02 2E 01 00 00: mov cx, word ptr [edx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 6
        ; Exact mapped bytes 74 3C: je 0x41039a
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp - 0ch]
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
        ; Exact mapped bytes 75 09: jne 0x4103a3
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 0ah
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 2C FF FF FF: jmp 0x4102d4
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 02 30 07 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        imul eax, eax, 0ah
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 07: je 0x4103d6
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 54 01 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8b8h], 0
        ; Exact mapped bytes 75 43: jne 0x410425
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 38h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 C0 00 00 00: mov dx, word ptr [ecx + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 74 33: je 0x410425
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 38h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 C0 00 00 00: mov ax, word ptr [edx + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 8bch]
        imul edx, eax
        add edx, 2710h
        cmp dword ptr [ecx + 18h], edx
        ; Exact mapped bytes 73 07: jae 0x410425
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x41043c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0fch], 2
        ; Exact mapped bytes 74 07: je 0x41044f
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx + 30h]
        and dl, 7fh
        and edx, 0ffh
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 10ch], edx
        ; Exact mapped bytes 74 07: je 0x410470
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x41052a
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 80h
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx + 31h]
        and dl, 7fh
        and edx, 0ffh
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 1F 33 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4104ac
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7E: jmp 0x41052a
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov dword ptr [ebp - 2ch], 3
        mov dword ptr [ebp - 30h], 1
        mov eax, dword ptr [ebp + 10h]
        mov cl, byte ptr [eax + 32h]
        and cl, 0fh
        and ecx, 0ffh
        mov dword ptr [ebp - 34h], ecx
        lea edx, [ebp - 2ch]
        push edx
        lea eax, [ebp - 30h]
        push eax
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 E3 32 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4104e8
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x41052a
        __asm _emit 0xeb
        __asm _emit 0x42
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 40: mov ax, word ptr [edx + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x40
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x410521
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 40: mov cx, word ptr [eax + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 8bch]
        imul eax, ecx
        add eax, 2710h
        cmp dword ptr [edx + 18h], eax
        ; Exact mapped bytes 73 04: jae 0x410521
        __asm _emit 0x73
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x41052a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41052a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 3ch
        cmp ebp, esp
        ; Exact mapped bytes E8 AA 82 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
