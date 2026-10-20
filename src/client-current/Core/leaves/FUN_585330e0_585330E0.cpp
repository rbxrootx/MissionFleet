// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585330E0 .. +0x68B bytes.
extern "C" __declspec(naked) void FUN_585330e0_585330E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 38h], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 76 15: jbe 0x58533115
        __asm _emit 0x76
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 09: je 0x58533115
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 12118h], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 1214ch], 13h
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 12114h], 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 12150h]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8E 2D F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x2d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 12150h]
        mov dword ptr [ebp - 40h], eax
        push 0
        push 0ffffh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 53 07 00 00: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 12134h]
        mov dword ptr [ebp - 44h], edx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5A 2F F5 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 12138h]
        mov dword ptr [ebp - 48h], ecx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 41 2F F5 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x2f
        __asm _emit 0xf5
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 37 2C F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 12134h]
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 21 2C F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 12138h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 0B 2C F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 12124h], 0
        ; Exact mapped bytes 74 7B: je 0x5853325d
        __asm _emit 0x74
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 12124h]
        mov dword ptr [ebp - 58h], edx
        push 35h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 18 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x18
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 56 3A F5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 12128h]
        mov dword ptr [ebp - 60h], edx
        push 1cah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 18 F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x18
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 FB 2C F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + 1212ch]
        ; Exact mapped bytes E8 ED BA F8 FF: call 0x584bed30
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 1212ch]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 1212ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 190h
        ; Exact mapped bytes 7F 2B: jg 0x58533297
        __asm _emit 0x7f
        __asm _emit 0x2b
        cmp dword ptr [ebp - 30h], 190h
        ; Exact mapped bytes 0F 84 A1 04 00 00: je 0x5853371a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0c9h
        ; Exact mapped bytes 0F 87 B2 04 00 00: ja 0x58533738
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        movzx eax, byte ptr [edx + 585337d0h]
        ; Exact mapped bytes FF 24 85 6C 37 53 58: jmp dword ptr [eax*4 + 0x5853376c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x37
        __asm _emit 0x53
        __asm _emit 0x58
        ; Exact mapped bytes E9 9C 04 00 00: jmp 0x58533738
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a450ch
        ; Exact mapped bytes E8 45 ED FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 49 4C FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 97 04 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a4534h
        ; Exact mapped bytes E8 24 ED FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 28 4C FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 76 04 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a4558h
        ; Exact mapped bytes E8 03 ED FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 07 4C FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 55 04 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a4578h
        ; Exact mapped bytes E8 E2 EC FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E6 4B FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 34 04 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a4598h
        ; Exact mapped bytes E8 C1 EC FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C5 4B FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 13 04 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a45c4h
        ; Exact mapped bytes E8 A0 EC FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A4 4B FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 8B 91 AC 21 01 00: mov dx, word ptr [ecx + 0x121ac]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 89 90 AC 21 01 00: mov word ptr [eax + 0x121ac], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F BF 91 AC 21 01 00: movsx edx, word ptr [ecx + 0x121ac]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        cmp edx, 3
        ; Exact mapped bytes 75 24: jne 0x585333a7
        __asm _emit 0x75
        __asm _emit 0x24
        push 0ffffh
        push 588a45e4h
        ; Exact mapped bytes E8 5E EC FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 62 4B FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 12138h]
        ; Exact mapped bytes E8 5B E7 28 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe7
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 99 03 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a4600h
        ; Exact mapped bytes E8 26 EC FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2A 4B FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 78 03 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a4628h
        ; Exact mapped bytes E8 05 EC FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 09 4B FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 57 03 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 29 FC FF: call 0x584f5da0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0ffffh
        push 588a464ch
        ; Exact mapped bytes E8 D5 EB FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D9 4A FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 27 03 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a4678h
        ; Exact mapped bytes E8 B4 EB FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B8 4A FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 12118h], 0
        ; Exact mapped bytes E9 FA 02 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a46a0h
        ; Exact mapped bytes E8 87 EB FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8B 4A FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D9 02 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a46cch
        ; Exact mapped bytes E8 66 EB FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 6A 4A FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B8 02 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a46f4h
        ; Exact mapped bytes E8 45 EB FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 49 4A FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 588a471ch
        ; Exact mapped bytes E8 2A EB FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2E 4A FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 588a4744h
        ; Exact mapped bytes E8 0F EB FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 13 4A FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 61 02 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a476ch
        ; Exact mapped bytes E8 EE EA FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F2 49 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a479ch
        ; Exact mapped bytes E8 CD EA FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D1 49 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1F 02 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a47c4h
        ; Exact mapped bytes E8 AC EA FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B0 49 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a47e8h
        ; Exact mapped bytes E8 8B EA FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8F 49 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 588a481ch
        ; Exact mapped bytes E8 70 EA FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 74 49 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a4850h
        ; Exact mapped bytes E8 4F EA FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 53 49 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A1 01 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cdq
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 64h], edx
        lea eax, [ebp - 68h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 16 13 00 00: call 0x585348e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 76ch
        push ecx
        push 588a4878h
        push 80h
        push 589473d8h
        ; Exact mapped bytes E8 9E 95 FD FF: call 0x5850cba0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 24h
        push 589473d8h
        push 588a4898h
        ; Exact mapped bytes E8 DC E9 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        push 100h
        push 58947358h
        ; Exact mapped bytes E8 79 95 FD FF: call 0x5850cba0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        push 0ffffh
        push 58947358h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C4 48 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a48c0h
        ; Exact mapped bytes E8 9F E9 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A3 48 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a48f0h
        ; Exact mapped bytes E8 7E E9 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 82 48 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a490ch
        ; Exact mapped bytes E8 5D E9 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 61 48 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a492ch
        ; Exact mapped bytes E8 3C E9 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 40 48 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58533754
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 588a494ch
        ; Exact mapped bytes E8 1B E9 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1F 48 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 588a496ch
        ; Exact mapped bytes E8 00 E9 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 04 48 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 588a498ch
        ; Exact mapped bytes E8 E5 E8 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E9 47 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3A: jmp 0x58533754
        __asm _emit 0xeb
        __asm _emit 0x3a
        push 0ffffh
        push 588a49ach
        ; Exact mapped bytes E8 C7 E8 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CB 47 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x58533754
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 0ffffh
        push 588a49c8h
        ; Exact mapped bytes E8 A9 E8 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AD 47 FF FF: call 0x58527f00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 64h], 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 EB D8 2F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd8
        __asm _emit 0x2f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
