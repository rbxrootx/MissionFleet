// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100312D0 .. +0x37F bytes.
extern "C" __declspec(naked) void FUN_100312d0_100312D0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 0a024h]
        mov dword ptr [esi + 9fe0h], edi
        mov dword ptr [esi + 0a010h], 13h
        mov dword ptr [esi + 9fdch], edi
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 0a024h]
        mov dword ptr [eax + 6ch], 0ffffh
        mov dword ptr [eax + 70h], edi
        mov ecx, dword ptr [esi + 9ffch]
        mov eax, 0ffffffh
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [esi + 0a000h]
        mov ecx, 2
        mov dword ptr [edx + 60h], eax
        mov eax, dword ptr [esi + 9ffch]
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a000h]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 35h
        ; Exact mapped bytes 7E 11: jle 0x1003135b
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, edi
        ; Exact mapped bytes 74 07: je 0x1003135b
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0d40h
        ; Exact mapped bytes EB 02: jmp 0x1003135d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9fech]
        cmp eax, edi
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10031392
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1cah
        ; Exact mapped bytes 7E 12: jle 0x100313b5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100313b5
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 728h]
        ; Exact mapped bytes EB 02: jmp 0x100313b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9ff0h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100313ec
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 9ff4h]
        mov dword ptr [eax + 28h], 100h
        mov dword ptr [eax + 84h], edi
        mov dword ptr [eax + 8ch], 40000000h
        mov ecx, dword ptr [esi + 9ff4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esp + 0ch]
        cmp eax, 61h
        ; Exact mapped bytes 0F 8F DD 01 00 00: jg 0x100315fe
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C1 01 00 00: je 0x100315e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0bh
        ; Exact mapped bytes 0F 87 DD 01 00 00: ja 0x1003160d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 50 16 03 10: jmp dword ptr [eax*4 + 0x10031650]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x10
        push 0ffffh
        push edi
        push 1019845ch
        mov ecx, dword ptr [esi + 0a024h]
        ; Exact mapped bytes E8 63 28 0D 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        ; Exact mapped bytes E8 38 33 0D 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x33
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        mov eax, dword ptr [ecx + 88h]
        dec eax
        push eax
        ; Exact mapped bytes E8 E5 32 0D 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x32
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffffh
        push edi
        push 10198444h
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x100315ba
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push edi
        push 1019841ch
        ; Exact mapped bytes EB B5: jmp 0x10031442
        __asm _emit 0xeb
        __asm _emit 0xb5
        push 0ffffh
        push edi
        push 101983f0h
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x100315ba
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push edi
        push 101983b8h
        ; Exact mapped bytes EB 98: jmp 0x10031442
        __asm _emit 0xeb
        __asm _emit 0x98
        mov ecx, dword ptr [esi + 0a024h]
        push 0ffffh
        push edi
        push 10198390h
        ; Exact mapped bytes E8 F0 27 0D 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x27
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        ; Exact mapped bytes E8 C5 32 0D 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x32
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        mov edx, dword ptr [ecx + 88h]
        dec edx
        push edx
        ; Exact mapped bytes E8 72 32 0D 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x32
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 86 78 A0 00 00: inc word ptr [esi + 0xa078]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 78 A0 00 00 03: cmp word ptr [esi + 0xa078], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 3C: jne 0x1003152b
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 0a024h]
        push 0ffffh
        push edi
        push 10198348h
        ; Exact mapped bytes E8 AB 27 0D 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x27
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        ; Exact mapped bytes E8 80 32 0D 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x32
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        mov eax, dword ptr [ecx + 88h]
        dec eax
        push eax
        ; Exact mapped bytes E8 2D 32 0D 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x32
        __asm _emit 0x0d
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0a000h]
        ; Exact mapped bytes E8 9A 46 0D 00: call 0x10105bd0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x46
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffffh
        push edi
        push 10198318h
        ; Exact mapped bytes EB 72: jmp 0x100315ba
        __asm _emit 0xeb
        __asm _emit 0x72
        push 0ffffh
        push edi
        push 10198300h
        ; Exact mapped bytes E9 EA FE FF FF: jmp 0x10031442
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BD 3C FF FF: call 0x10025220
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push edi
        push 101982b8h
        ; Exact mapped bytes EB 4A: jmp 0x100315ba
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [esi + 0a024h]
        push 0ffffh
        push edi
        push 10198268h
        ; Exact mapped bytes E8 2A 27 0D 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x27
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        ; Exact mapped bytes E8 FF 31 0D 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x31
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        mov eax, dword ptr [ecx + 88h]
        dec eax
        push eax
        ; Exact mapped bytes E8 AC 31 0D 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x31
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi + 9fe0h], edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffffh
        push edi
        push 10198240h
        mov ecx, dword ptr [esi + 0a024h]
        ; Exact mapped bytes E8 EB 26 0D 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x26
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        ; Exact mapped bytes E8 C0 31 0D 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x31
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        mov edx, dword ptr [ecx + 88h]
        dec edx
        push edx
        ; Exact mapped bytes E8 6D 31 0D 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x31
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffffh
        push 10180b00h
        mov ecx, esi
        ; Exact mapped bytes E8 F7 04 00 00: call 0x10031af0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        sub eax, 62h
        ; Exact mapped bytes 74 36: je 0x10031639
        __asm _emit 0x74
        __asm _emit 0x36
        dec eax
        ; Exact mapped bytes 74 33: je 0x10031639
        __asm _emit 0x74
        __asm _emit 0x33
        sub eax, 12dh
        ; Exact mapped bytes 74 16: je 0x10031623
        __asm _emit 0x74
        __asm _emit 0x16
        push 0ffffh
        push 10198220h
        mov ecx, esi
        ; Exact mapped bytes E8 D2 04 00 00: call 0x10031af0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffffh
        push 101981cch
        mov ecx, esi
        ; Exact mapped bytes E8 BC 04 00 00: call 0x10031af0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffffh
        push 101981b4h
        mov ecx, esi
        ; Exact mapped bytes E8 A6 04 00 00: call 0x10031af0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
