// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FE2E0 .. +0x604 bytes.
extern "C" __declspec(naked) void FUN_585fe2e0_585FE2E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58886339h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 70h
        push esi
        push edi
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
        push 20h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 90h
        push eax
        ; Exact mapped bytes E8 F4 EA 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xea
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        push ecx
        ; Exact mapped bytes E8 DE EA 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xea
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        push 0dch
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 43ch
        push edx
        ; Exact mapped bytes E8 C5 EA 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xea
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 DD E8 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xdd
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d0h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 74h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585fe37e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D DA 00 00 00: jge 0x585fe462
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 374h]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9E 14 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx*4 + 58948c34h]
        ; Exact mapped bytes E8 FE 4A FD FF: call 0x585d2eb0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x585fe442
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 374h]
        mov dword ptr [ebp - 30h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B9 7B E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 374h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 5
        push ecx
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 66 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x66
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 55 88 E8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx + 74h]
        mov dword ptr [ecx + eax*4 + 0b0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + ecx*4 + 90h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        add edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 74h], edx
        ; Exact mapped bytes EB 1B: jmp 0x585fe45d
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 374h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 34 7B E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7b
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 13 FF FF FF: jmp 0x585fe375
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 D3 FF FF: call 0x585fb840
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 10h]
        add edi, 43ch
        mov ecx, 37h
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ecx + 0d0h], 0ah
        push edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 5C 5B F0 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 3d8h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 10h]
        imul eax, dword ptr [edx + 0d0h], 0ah
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 27 5B F0 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 10h]
        imul ecx, dword ptr [eax + 0d0h], 0ah
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 F3 5A F0 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 3d8h]
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 10h]
        imul eax, dword ptr [edx + 0d0h], 0ah
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BE 5A F0 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 4fch]
        imul eax, edx, 0ah
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D8 5B F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 4fdh]
        imul edx, ecx, 0ah
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 A2 5B F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 3d8h]
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 4feh]
        imul ecx, eax, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 6D 5B F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 3d8h]
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 4ffh]
        imul ecx, eax, 0ah
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 37 5B F0 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 3b8h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 4fch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 34 CB 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xcb
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 3b8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 4fdh]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 01 CB 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xcb
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 3b8h]
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 4feh]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 CF CA 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xca
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 3b8h]
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 4ffh]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 9C CA 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xca
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 82 E8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x585fe71a
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 82 E8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B E8 E8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x585fe721
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E3 BC FF FF: call 0x585fa410
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585fe740
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes 0F 8D B0 00 00 00: jge 0x585fe802
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f8h
        ; Exact mapped bytes E8 A8 28 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x28
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 32: je 0x585fe7a1
        __asm _emit 0x74
        __asm _emit 0x32
        push 40h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        imul edx, dword ptr [ebp - 14h], 14h
        lea eax, [ecx + edx + 123h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 0a5h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B4 88 13 00: call 0x58737050
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x585fe7a8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 70h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [eax + edx*4 + 0d4h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0d4h]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 3e8h
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 96 76 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x76
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 0d4h]
        ; Exact mapped bytes E8 94 94 13 00: call 0x58737c90
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x94
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 35 FF FF FF: jmp 0x585fe737
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585fe814
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 8D B0 00 00 00: jge 0x585fe8d3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f8h
        ; Exact mapped bytes E8 D7 27 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x27
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 32: je 0x585fe872
        __asm _emit 0x74
        __asm _emit 0x32
        push 40h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        imul edx, dword ptr [ebp - 14h], 14h
        lea eax, [ecx + edx + 0bfh]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 0a0h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E3 87 13 00: call 0x58737050
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x87
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x585fe879
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 78h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + edx*4 + 2d4h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 2d4h]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 3e8h
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 C5 75 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x75
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 2d4h]
        ; Exact mapped bytes E8 C3 93 13 00: call 0x58737c90
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x93
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 38 FF FF FF: jmp 0x585fe80b
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        mov esp, ebp
        pop ebp
        ret
    }
}
