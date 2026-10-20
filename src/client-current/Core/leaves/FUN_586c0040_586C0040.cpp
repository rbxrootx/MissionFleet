// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C0040 .. +0x9F5 bytes.
extern "C" __declspec(naked) void FUN_586c0040_586C0040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ech
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 0ddh
        ; Exact mapped bytes 74 21: je 0x586c0089
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 2]
        cmp eax, 0deh
        ; Exact mapped bytes 74 13: je 0x586c0089
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 2]
        cmp edx, 0dfh
        ; Exact mapped bytes 0F 85 9A 09 00 00: jne 0x586c0a23
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 114h], ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 0A C0 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc0
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 1cdh
        mov dword ptr [ebp - 1b4h], eax
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 6D 56 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x56
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 11ch], ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E0 68 DC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 2b2h
        mov dword ptr [ebp - 118h], eax
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 B3 55 0F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x55
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 124h], ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 96 BF DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xbf
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 1c2h
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 F9 55 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x55
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c0153
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 7D 44: jge 0x586c01a0
        __asm _emit 0x7d
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 30 BF DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xbf
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 1c9h
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 93 55 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x55
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A4: jmp 0x586c0144
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c01bb
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10ch]
        add edx, 1
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 10ch], 0bh
        ; Exact mapped bytes 7D 52: jge 0x586c0216
        __asm _emit 0x7d
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax*4 + 1b0h]
        mov dword ptr [ebp - 130h], edx
        push 588b11c4h
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 B3 5E DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax*4 + 1b0h]
        mov dword ptr [ebp - 134h], edx
        push 1
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 CD 5C DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x5c
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 96: jmp 0x586c01ac
        __asm _emit 0xeb
        __asm _emit 0x96
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 2B 07 00 00: je 0x586c094b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c023b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 2
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x586c02d9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 258h]
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 9
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 CA F5 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx*4 + 258h]
        mov dword ptr [ebp - 13ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 44 5C DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x5c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx*4 + 258h]
        mov dword ptr [ebp - 140h], ecx
        imul edx, dword ptr [ebp - 10ch], 14h
        add edx, 18bh
        push edx
        push 208h
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 4D 53 0F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x586c022c
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 148h], eax
        push 588b11c8h
        ; Exact mapped bytes E8 F2 1C E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1c
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 87 5D DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 14ch], ecx
        push 588b0dffh
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 5C 5D DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 154h], ecx
        push 588b11e4h
        ; Exact mapped bytes E8 88 1C E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1c
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov edx, dword ptr [ebp - 150h]
        push edx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 1D 5D DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x5d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 15ch], eax
        push 588b1200h
        ; Exact mapped bytes E8 48 1C E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov ecx, dword ptr [ebp - 158h]
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 DD 5C DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 164h], ecx
        push 588b121ch
        ; Exact mapped bytes E8 08 1C E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1c
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov edx, dword ptr [ebp - 160h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 9D 5C DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x5c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 168h], eax
        push 588b0e12h
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 72 5C DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x5c
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c044a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 1
        mov dword ptr [ebp - 10ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + eax + 60h]
        ; Exact mapped bytes E8 4F 53 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x53
        __asm _emit 0xdd
        __asm _emit 0xff
        cmp dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x586c04ed
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 16ch], edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 D9 34 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 170h], eax
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 36 5A DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x5a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 174h], ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 9C 34 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 178h], eax
        push 1
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 F9 58 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x58
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x586c043b
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b1238h
        ; Exact mapped bytes E8 F9 1A E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x1a
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov ecx, 4
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 17ch], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 68 5B DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x5b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 180h], eax
        push 1
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 80 59 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x59
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 2]
        mov dword ptr [ebp - 110h], edx
        cmp dword ptr [ebp - 110h], 0ddh
        ; Exact mapped bytes 74 25: je 0x586c059f
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [ebp - 110h], 0deh
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x586c0662
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 110h], 0dfh
        ; Exact mapped bytes 0F 84 38 02 00 00: je 0x586c07d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A0 03 00 00: jmp 0x586c093f
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c05ba
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + ecx + 60h]
        ; Exact mapped bytes E8 DF 51 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x51
        __asm _emit 0xdd
        __asm _emit 0xff
        cmp dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x586c065d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 184h], edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 69 33 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 188h], eax
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 C6 58 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x58
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 18ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 2C 33 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 190h], eax
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 89 57 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x586c05ab
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E4 02 00 00: jmp 0x586c0946
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 194h], edx
        push 588b124ch
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 13 5A DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 198h], eax
        push 588b1260h
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 E8 59 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 19ch], eax
        push 588b1278h
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 BD 59 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x59
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 1a0h], ecx
        push 588b1298h
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 92 59 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x59
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c072a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10ch]
        add edx, 1
        mov dword ptr [ebp - 10ch], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + eax + 60h]
        ; Exact mapped bytes E8 6F 50 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x50
        __asm _emit 0xdd
        __asm _emit 0xff
        cmp dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x586c07cd
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 1a4h], ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 F9 31 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1a8h], eax
        push 1
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 56 57 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x57
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 1ach], edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 BC 31 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b0h], eax
        push 1
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 19 56 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x56
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x586c071b
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 74 01 00 00: jmp 0x586c0946
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 1d0h], ecx
        push 588b12b4h
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 A3 58 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 1b8h], edx
        push 588b12c8h
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 78 58 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x58
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 3
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 1bch], edx
        push 588b12e0h
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 4D 58 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x58
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 1c0h], eax
        push 588b12f8h
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 22 58 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x58
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c089a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 1
        mov dword ptr [ebp - 10ch], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 60h]
        ; Exact mapped bytes E8 FF 4E DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        cmp dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x586c093d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 1c4h], eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 89 30 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1c8h], eax
        push 1
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 E6 55 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x55
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 1cch], ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 4C 30 00 00: call 0x586c3970
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ech], eax
        push 1
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 A9 54 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x54
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x586c088b
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x586c0946
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x586c0a25
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x586c0a1c
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 1d8h], eax
        push 588b1310h
        ; Exact mapped bytes E8 80 16 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1d4h], eax
        mov ecx, dword ptr [ebp - 1d4h]
        push ecx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 15 57 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x57
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 1e0h], ecx
        push 588b1338h
        ; Exact mapped bytes E8 41 16 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x16
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1dch], eax
        mov edx, dword ptr [ebp - 1dch]
        push edx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 D6 56 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x56
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 1e8h], eax
        push 588b1360h
        ; Exact mapped bytes E8 01 16 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x16
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1e4h], eax
        mov ecx, dword ptr [ebp - 1e4h]
        push ecx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 96 56 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x56
        __asm _emit 0xdc
        __asm _emit 0xff
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 55 42 00 00: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x586c0a25
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 21 06 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
