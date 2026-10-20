// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850EC90 .. +0x9C9 bytes.
extern "C" __declspec(naked) void FUN_5850ec90_5850EC90() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880c81h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 12ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], ecx
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 0ech], ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0f0h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F D7 F7 FF: call 0x5848c420
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd7
        __asm _emit 0xf7
        __asm _emit 0xff
        imul eax, eax, 11h
        add eax, 1fh
        mov dword ptr [ebp - 110h], eax
        push 0
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes FF 95 10 FF FF FF: call dword ptr [ebp - 0xf0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 4F 27 00 00: call 0x58511470
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], 0
        mov dword ptr [ebp - 138h], 0
        mov dword ptr [ebp - 0b4h], 0
        push 80h
        push 0
        lea eax, [ebp - 90h]
        push eax
        ; Exact mapped bytes E8 BE E0 33 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0b8h], 0
        mov dword ptr [ebp - 98h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5850ed7a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 98h]
        add ecx, 1
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 4
        ; Exact mapped bytes 7D 21: jge 0x5850eda4
        __asm _emit 0x7d
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [ebp - 0b4h]
        add ecx, dword ptr [eax + edx*4 + 818h]
        mov dword ptr [ebp - 0b4h], ecx
        ; Exact mapped bytes EB C7: jmp 0x5850ed6b
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov dword ptr [ebp - 98h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5850edbf
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 98h]
        add edx, 1
        mov dword ptr [ebp - 98h], edx
        cmp dword ptr [ebp - 98h], 20h
        ; Exact mapped bytes 0F 8D D8 02 00 00: jge 0x5850f0a4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 98h]
        movzx ecx, byte ptr [eax*4 + 58948d80h]
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 BC 02 00 00: jne 0x5850f09f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 98h]
        movzx eax, word ptr [edx*4 + 58948d82h]
        test eax, eax
        ; Exact mapped bytes 0F 84 A6 02 00 00: je 0x5850f09f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 0f4h], edx
        ; Exact mapped bytes 6B 05 28 8D 94 58 11: imul eax, dword ptr [0x58948d28], 0x11
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 98h]
        movzx edx, word ptr [ecx*4 + 58948d82h]
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 85 CE F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov dword ptr [ebp - 0bch], 0
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 57 02 00 00: je 0x5850f09f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5850ee63
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a4h]
        add ecx, 1
        mov dword ptr [ebp - 0a4h], ecx
        cmp dword ptr [ebp - 0a4h], 3
        ; Exact mapped bytes 0F 8D 0E 02 00 00: jge 0x5850f07e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [ebp - 0bch]
        add ecx, dword ptr [eax + edx*4 + 818h]
        mov dword ptr [ebp - 0bch], ecx
        mov eax, dword ptr [ebp - 9ch]
        cdq
        idiv dword ptr [ebp - 0b4h]
        cmp edx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes 0F 8D D1 01 00 00: jge 0x5850f079
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a4h]
        mov esi, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 9ch]
        cdq
        idiv dword ptr [esi + ecx*4 + 818h]
        mov dword ptr [ebp - 0ach], edx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 A2 01 00 00: je 0x5850f077
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ach]
        cmp dword ptr [ebp + eax*4 - 90h], 0
        ; Exact mapped bytes 0F 85 36 01 00 00: jne 0x5850f01f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0bch
        ; Exact mapped bytes E8 11 21 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x21
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x5850ef9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a4h]
        shl ecx, 9
        mov edx, dword ptr [ebp - 94h]
        lea eax, [edx + ecx + 18h]
        mov ecx, dword ptr [ebp - 0ach]
        mov edx, dword ptr [eax + ecx*8 + 4]
        push edx
        mov eax, dword ptr [ebp - 0a4h]
        shl eax, 9
        mov ecx, dword ptr [ebp - 94h]
        lea edx, [ecx + eax + 18h]
        mov eax, dword ptr [ebp - 0ach]
        mov ecx, dword ptr [edx + eax*8]
        push ecx
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx*4 + 58948e80h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx*4 + 58948e00h]
        push edx
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax*4 + 58948d80h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 8fch]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 DA B2 00 00: call 0x5851a270
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5850efa8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 0f8h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 0c8h], eax
        push 1f8h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 A9 6E F7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 94h]
        add ecx, 858h
        mov dword ptr [ebp - 0fch], ecx
        lea edx, [ebp - 0c8h]
        push edx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 25 92 F7 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0b8h]
        add eax, 1
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp + ecx*4 - 90h], 1
        ; Exact mapped bytes EB 5A: jmp 0x5850f077
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes EB 53: jmp 0x5850f072
        __asm _emit 0xeb
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 0ach]
        add edx, 1
        mov dword ptr [ebp - 0ach], edx
        mov ecx, dword ptr [ebp - 0a4h]
        mov esi, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 0ach]
        cdq
        idiv dword ptr [esi + ecx*4 + 818h]
        mov dword ptr [ebp - 0ach], edx
        mov ecx, dword ptr [ebp - 0a4h]
        mov esi, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 9ch]
        cdq
        idiv dword ptr [esi + ecx*4 + 818h]
        cmp dword ptr [ebp - 0ach], edx
        ; Exact mapped bytes 75 02: jne 0x5850f072
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5850f077
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 51 FE FF FF: jmp 0x5850eec8
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x5850f07e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 D6 FD FF FF: jmp 0x5850ee54
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0a4h], 3
        ; Exact mapped bytes 75 11: jne 0x5850f098
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 9ch]
        sub edx, 1
        mov dword ptr [ebp - 9ch], edx
        ; Exact mapped bytes EB 02: jmp 0x5850f09a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5850f09f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 9C FD FF FF: jmp 0x5850ee3b
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C FD FF FF: jmp 0x5850edb0
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5850f0bf
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 98h]
        add eax, 1
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 20h
        ; Exact mapped bytes 0F 8D D8 02 00 00: jge 0x5850f3a4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 98h]
        movzx edx, byte ptr [ecx*4 + 58948f00h]
        cmp edx, 5
        ; Exact mapped bytes 0F 85 BC 02 00 00: jne 0x5850f39f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 98h]
        movzx ecx, word ptr [eax*4 + 58948f02h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A6 02 00 00: je 0x5850f39f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes 6B 0D 28 8D 94 58 13: imul ecx, dword ptr [0x58948d28], 0x13
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 98h]
        movzx eax, word ptr [edx*4 + 58948f02h]
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 85 CB F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov dword ptr [ebp - 0c0h], 0
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 57 02 00 00: je 0x5850f39f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], 3
        ; Exact mapped bytes EB 0F: jmp 0x5850f163
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0a8h]
        add edx, 1
        mov dword ptr [ebp - 0a8h], edx
        cmp dword ptr [ebp - 0a8h], 4
        ; Exact mapped bytes 0F 8D 0E 02 00 00: jge 0x5850f37e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ebp - 0c0h]
        add edx, dword ptr [ecx + eax*4 + 818h]
        mov dword ptr [ebp - 0c0h], edx
        mov eax, dword ptr [ebp - 9ch]
        cdq
        idiv dword ptr [ebp - 0b4h]
        cmp edx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes 0F 8D D1 01 00 00: jge 0x5850f379
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a8h]
        mov esi, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 9ch]
        cdq
        idiv dword ptr [esi + ecx*4 + 818h]
        mov dword ptr [ebp - 0b0h], edx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 A2 01 00 00: je 0x5850f377
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b0h]
        cmp dword ptr [ebp + eax*4 - 90h], 0
        ; Exact mapped bytes 0F 85 36 01 00 00: jne 0x5850f31f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0bch
        ; Exact mapped bytes E8 11 1E 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1e
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x5850f29e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a8h]
        shl ecx, 9
        mov edx, dword ptr [ebp - 94h]
        lea eax, [edx + ecx + 18h]
        mov ecx, dword ptr [ebp - 0b0h]
        mov edx, dword ptr [eax + ecx*8 + 4]
        push edx
        mov eax, dword ptr [ebp - 0a8h]
        shl eax, 9
        mov ecx, dword ptr [ebp - 94h]
        lea edx, [ecx + eax + 18h]
        mov eax, dword ptr [ebp - 0b0h]
        mov ecx, dword ptr [edx + eax*8]
        push ecx
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx*4 + 58949000h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx*4 + 58948f80h]
        push edx
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax*4 + 58948f00h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 8fch]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 DA AF 00 00: call 0x5851a270
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5850f2a8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 104h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 0d4h], eax
        push 1f8h
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 A9 6B F7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 94h]
        add ecx, 858h
        mov dword ptr [ebp - 108h], ecx
        lea edx, [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 25 8F F7 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0b8h]
        add eax, 1
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp + ecx*4 - 90h], 1
        ; Exact mapped bytes EB 5A: jmp 0x5850f377
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes EB 53: jmp 0x5850f372
        __asm _emit 0xeb
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 0b0h]
        add edx, 1
        mov dword ptr [ebp - 0b0h], edx
        mov ecx, dword ptr [ebp - 0a8h]
        mov esi, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 0b0h]
        cdq
        idiv dword ptr [esi + ecx*4 + 818h]
        mov dword ptr [ebp - 0b0h], edx
        mov ecx, dword ptr [ebp - 0a8h]
        mov esi, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 9ch]
        cdq
        idiv dword ptr [esi + ecx*4 + 818h]
        cmp dword ptr [ebp - 0b0h], edx
        ; Exact mapped bytes 75 02: jne 0x5850f372
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5850f377
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 51 FE FF FF: jmp 0x5850f1c8
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x5850f37e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 D6 FD FF FF: jmp 0x5850f154
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0a8h], 4
        ; Exact mapped bytes 75 11: jne 0x5850f398
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 9ch]
        sub edx, 1
        mov dword ptr [ebp - 9ch], edx
        ; Exact mapped bytes EB 02: jmp 0x5850f39a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5850f39f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 9C FD FF FF: jmp 0x5850f13b
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C FD FF FF: jmp 0x5850f0b0
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 7C FC FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C0 07 00 00: call 0x5850fb80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 19 AE F9 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xae
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes 0F B7 05 20 8D 94 58: movzx eax, word ptr [0x58948d20]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 34 EC FF FF: call 0x5850e020
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 6C 8D 94 58: mov edx, dword ptr [0x58948d6c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 114h], edx
        mov dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 0F B7 05 E4 90 94 58: movzx eax, word ptr [0x589490e4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        cmp dword ptr [ebp - 98h], eax
        ; Exact mapped bytes 0F 8D 1B 02 00 00: jge 0x5850f630
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B 0D 24 8D 94 58 11: imul ecx, dword ptr [0x58948d24], 0x11
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x11
        mov dword ptr [ebp - 0d8h], ecx
        mov dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5850f43d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0a0h]
        add edx, 1
        mov dword ptr [ebp - 0a0h], edx
        cmp dword ptr [ebp - 0a0h], 3
        ; Exact mapped bytes 0F 8D E1 01 00 00: jge 0x5850f62b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 118h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        shl edx, 4
        mov eax, dword ptr [ebp - 0a0h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 94h]
        mov esi, dword ptr [ebp - 94h]
        mov edi, dword ptr [ecx + eax + 830h]
        sub edi, dword ptr [esi + edx + 828h]
        imul edx, dword ptr [ebp - 98h], 17h
        add edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [ebp - 0d8h]
        lea ecx, [eax + edx - 0dh]
        push ecx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 08 C8 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        div edi
        mov eax, dword ptr [ebp - 0a0h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 94h]
        add edx, dword ptr [ecx + eax + 828h]
        mov dword ptr [ebp - 130h], edx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 0a0h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 0a0h]
        shl edx, 4
        mov eax, dword ptr [ebp - 94h]
        mov esi, dword ptr [ebp - 94h]
        mov edi, dword ptr [eax + edx + 834h]
        sub edi, dword ptr [esi + ecx + 82ch]
        imul ecx, dword ptr [ebp - 98h], 1dh
        add ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ebp - 0d8h]
        lea eax, [edx + ecx - 11h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 8A C7 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        div edi
        mov ecx, dword ptr [ebp - 0a0h]
        shl ecx, 4
        mov eax, dword ptr [ebp - 94h]
        add edx, dword ptr [eax + ecx + 82ch]
        mov dword ptr [ebp - 120h], edx
        push 70h
        ; Exact mapped bytes E8 B7 1A 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1a
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 43: je 0x5850f5a9
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 6C 8D 94 58: mov ecx, dword ptr [0x58948d6c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 E0 90 94 58: mov edx, dword ptr [0x589490e0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 8fch]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 2F 9D 00 00: call 0x585192d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5850f5b3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 128h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 0e4h], eax
        push 0fffffde8h
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 9E 68 F7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 94h]
        add ecx, 864h
        mov dword ptr [ebp - 12ch], ecx
        lea edx, [ebp - 0e4h]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 1A 8C F7 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 98h]
        add eax, 1
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes 0F B7 0D E4 90 94 58: movzx ecx, word ptr [0x589490e4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        cmp dword ptr [ebp - 98h], ecx
        ; Exact mapped bytes 75 02: jne 0x5850f626
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5850f62b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 03 FE FF FF: jmp 0x5850f42e
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D2 FD FF FF: jmp 0x5850f402
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [edx + 870h], 0
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
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 F9 19 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x19
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
    }
}
