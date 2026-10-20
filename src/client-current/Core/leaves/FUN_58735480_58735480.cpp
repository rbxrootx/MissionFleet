// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58735480 .. +0xA54 bytes.
extern "C" __declspec(naked) void FUN_58735480_58735480() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888eb90h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 134h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        push 40h
        push 0
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C8 F4 07 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588b4780h
        push 54h
        ; Exact mapped bytes E8 25 BB 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3E: je 0x5873552d
        __asm _emit 0x74
        __asm _emit 0x3e
        push 6eh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 F6 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F8 CD D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xcd
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58735534
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 9ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ecx + eax + 50h], edx
        push 54h
        ; Exact mapped bytes E8 A7 BA 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xba
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 3E: je 0x587355ab
        __asm _emit 0x74
        __asm _emit 0x3e
        push 6fh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 F5 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 63h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7A CD D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xcd
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x587355b2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + eax + 50h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 50h]
        mov dword ptr [ebp - 0a8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 B7 FF 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 00 BA 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 3B: je 0x5873564f
        __asm _emit 0x74
        __asm _emit 0x3b
        push 25h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF F4 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf4
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 5
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 14h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 26 53 08 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58735656
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ecx + eax + 58h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 58h]
        mov dword ptr [ebp - 0b4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 13 FF 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 58h]
        mov dword ptr [ebp - 0b8h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 64h
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 BB 07 D5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x07
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 37 B9 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb9
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 26: je 0x58735703
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3dh
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 22 CC D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xcc
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5873570a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0bch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 14 9E D6 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9e
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], 0ah
        mov dword ptr [ebp - 3ch], 0ah
        push 54h
        ; Exact mapped bytes E8 B3 B8 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb8
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 26: je 0x58735787
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 3ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 9E CB D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xcb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5873578e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 0c8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 ED FD 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 39 B8 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 44: je 0x5873581f
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 1ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 182h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0bah
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 96 CB D4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58735826
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ecx + 68h], edx
        push 54h
        ; Exact mapped bytes E8 BE B7 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb7
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3B: je 0x58735891
        __asm _emit 0x74
        __asm _emit 0x3b
        push 6bh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD F2 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 94 CA D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xca
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x58735898
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [edx + ecx + 6ch], eax
        push 54h
        ; Exact mapped bytes E8 43 B7 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb7
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 3B: je 0x5873590c
        __asm _emit 0x74
        __asm _emit 0x3b
        push 6ch
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 F2 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf2
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 63h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 19 CA D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xca
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58735913
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [edx + ecx + 6ch], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 0e0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 56 FC 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 A2 B6 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb6
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 3E: je 0x587359b0
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1bh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 F1 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 96h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 65 0E D5 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x0e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x587359b7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0ech], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 67 9B D6 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9b
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0f0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 AB FB 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 F7 B5 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb5
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 46: je 0x58735a63
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 63h
        ; Exact mapped bytes 66 89 55 EE: mov word ptr [ebp - 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xee
        push 6dh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 F0 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        movzx eax, word ptr [ebp - 12h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 C2 C8 D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58735a6a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [eax + 8ch], ecx
        push 0fch
        ; Exact mapped bytes E8 74 B5 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb5
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 40: je 0x58735ae0
        __asm _emit 0x74
        __asm _emit 0x40
        push 0ceh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 F0 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 6
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 14fh
        push eax
        push 8
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 95 4E 08 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4e
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58735ae7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [eax + edx + 78h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 78h]
        mov dword ptr [ebp - 104h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 4F 03 D5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 78h]
        mov dword ptr [ebp - 108h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 5A FA 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfa
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 A3 B4 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 40: je 0x58735bb1
        __asm _emit 0x74
        __asm _emit 0x40
        push 0ceh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F EF D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1c2h
        push eax
        push 8
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 C4 4D 08 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58735bb8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [edx + ecx + 78h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 78h]
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 64h
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 7E 02 D5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 78h]
        mov dword ptr [ebp - 118h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 89 F9 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf9
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 D2 B3 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb3
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 43: je 0x58735c85
        __asm _emit 0x74
        __asm _emit 0x43
        push 0ceh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E EE D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xee
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1f9h
        push eax
        push 8
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 F3 4C 08 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58735c8f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 120h]
        mov dword ptr [edx + ecx + 78h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 78h]
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 64h
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 A6 01 D5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 78h]
        mov dword ptr [ebp - 128h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 B2 F8 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 74h
        ; Exact mapped bytes E8 FE B2 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb2
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 5D: je 0x58735d79
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 0ah
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        push 6ah
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 ED D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1c3h
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 5f5e0ffh
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 DF DC DC FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xdc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58735d83
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [eax + edx + 84h], ecx
        push 74h
        ; Exact mapped bytes E8 52 B2 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb2
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 60: je 0x58735e28
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 0ah
        ; Exact mapped bytes 66 89 45 EA: mov word ptr [ebp - 0x16], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xea
        push 0c5h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A ED D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xed
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        movzx ecx, word ptr [ebp - 16h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1c3h
        push eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 5f5e0ffh
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 30 DC DC FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xdc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58735e32
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [edx + ecx + 84h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 13ch], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 64h
        push edx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 FB FF D4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 140h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 D0 FF D4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C8 05 00 00: call 0x58736480
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
