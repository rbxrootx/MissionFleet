// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871ECE0 .. +0x530 bytes.
extern "C" __declspec(naked) void FUN_5871ece0_5871ECE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888e399h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 90h
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
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 6D C4 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 55 C4 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 C0 01 00 00: mov word ptr [ecx + 0x1c0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 19ch]
        cmp eax, 4
        ; Exact mapped bytes 75 2D: jne 0x5871ed86
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 50h], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D1 0A D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 54h], ecx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 5B 70 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x70
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 58h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 F4 71 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 5ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 DE 71 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 86 42 04 00 00: jbe 0x5871f1ff
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 2
        imul eax, dword ptr [ebp - 20h], 3
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 17eh]
        test edx, edx
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x5871ee9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5871edef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 17eh]
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 7D 5D: jge 0x5871ee5b
        __asm _emit 0x7d
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 188h]
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 49: je 0x5871ee59
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 188h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 17: je 0x5871ee3f
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 60h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 A0: call dword ptr [ebp - 0x60]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa0
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5871ee46
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 188h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes EB 8B: jmp 0x5871ede6
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 188h], 0
        ; Exact mapped bytes 74 27: je 0x5871ee8e
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 188h]
        mov dword ptr [ebp - 68h], eax
        push 4
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 B6 21 11 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x21
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 188h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 7E 01 00 00: mov word ptr [ecx + 0x17e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 180h]
        test eax, eax
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x5871ef69
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5871eebe
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 180h]
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 7D 5D: jge 0x5871ef2a
        __asm _emit 0x7d
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 49: je 0x5871ef28
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 17: je 0x5871ef0e
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 6ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 55 94: call dword ptr [ebp - 0x6c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x94
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5871ef15
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes EB 8B: jmp 0x5871eeb5
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 18ch], 0
        ; Exact mapped bytes 74 27: je 0x5871ef5d
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18ch]
        mov dword ptr [ebp - 74h], ecx
        push 4
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes E8 E7 20 11 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18ch], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 80 01 00 00: mov word ptr [edx + 0x180], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 17eh
        push edx
        ; Exact mapped bytes E8 10 D9 12 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 180h
        push edx
        ; Exact mapped bytes E8 F3 D8 12 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx*2]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 182h
        push ecx
        ; Exact mapped bytes E8 D3 D8 12 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 17eh]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 63 20 11 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + 188h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 7ch], edx
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x5871f00c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 17eh]
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x5871f0b0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 27ch
        ; Exact mapped bytes E8 DB 1F 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x1f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 18: je 0x5871f054
        __asm _emit 0x74
        __asm _emit 0x18
        imul eax, dword ptr [ebp - 24h], 180h
        add eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B1 90 DD FF: call 0x584f8100
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x90
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5871f05b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 80h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 188h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 188h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 84h], eax
        push 100h
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 A1 64 09 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 180h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x5871f003
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 180h]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 73 1F 11 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [eax + 18ch], ecx
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x5871f0f9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 180h]
        cmp dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 0F 8D AF 00 00 00: jge 0x5871f1bb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 0b8h]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        shr ecx, 1
        and ecx, 1fh
        mov dword ptr [ebp - 98h], ecx
        push 0d74h
        ; Exact mapped bytes E8 BC 1E 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 1B: je 0x5871f176
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 CF FD 02 00: call 0x5874ef40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5871f17d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 94h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [eax + ecx*4], edx
        imul eax, dword ptr [ebp - 98h], 18h
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 0b8h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes E9 35 FF FF FF: jmp 0x5871f0f0
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD 0C 00 00: call 0x5871fe80
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5871f1d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 3
        ; Exact mapped bytes 7D 23: jge 0x5871f1ff
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0f0h]
        mov dword ptr [ebp - 9ch], eax
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 E4 6C D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x6c
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5871f1cd
        __asm _emit 0xeb
        __asm _emit 0xce
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
