// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58499AE0 .. +0x288B bytes.
extern "C" __declspec(naked) void FUN_58499ae0_58499AE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887db37h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 3ach
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
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
        mov dword ptr [ebp - 114h], ecx
        mov eax, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 20 28 00 00: je 0x5849c351
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 46ch], 0
        ; Exact mapped bytes 0F 84 4A 26 00 00: je 0x5849c18e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 84h]
        sub edx, 1
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 98h], edx
        ; Exact mapped bytes 7D 1D: jge 0x58499b7e
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 98h]
        add edx, 1
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 98h], edx
        ; Exact mapped bytes EB 10: jmp 0x58499b8e
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 52ch]
        ; Exact mapped bytes E8 F1 BC FF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x58499d09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 530h]
        mov dword ptr [ebp - 308h], edx
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, word ptr [eax + 2d8h]
        push ecx
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 8B A5 06 00: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 534h]
        mov dword ptr [ebp - 390h], eax
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 2d8h]
        push edx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 60 A5 06 00: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, word ptr [eax + 2d8h]
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 528h]
        cdq
        mov esi, 3
        idiv esi
        cmp ecx, eax
        ; Exact mapped bytes 7D 72: jge 0x58499c99
        __asm _emit 0x7d
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 530h]
        ; Exact mapped bytes E8 58 BC FF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x58499c5f
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 530h]
        mov dword ptr [ebp - 190h], eax
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 82 C2 FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + 534h]
        ; Exact mapped bytes E8 20 BC FF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 20: jne 0x58499c97
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 534h]
        mov dword ptr [ebp - 194h], ecx
        push 1
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 4A C2 FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 70: jmp 0x58499d09
        __asm _emit 0xeb
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 530h]
        ; Exact mapped bytes E8 E6 BB FF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x58499cd1
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 530h]
        mov dword ptr [ebp - 198h], edx
        push 1
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 10 C2 FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 534h]
        ; Exact mapped bytes E8 AE BB FF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x58499d09
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 534h]
        mov dword ptr [ebp - 19ch], eax
        push 0
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 D8 C1 FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 1C 98 FF FF: call 0x58493530
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        movzx eax, word ptr [ecx + 2dah]
        mov edx, dword ptr [ebp - 114h]
        imul eax, dword ptr [edx + 4b8h]
        cdq
        mov ecx, 5dch
        idiv ecx
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 328h], eax
        mov eax, dword ptr [ebp - 114h]
        mov eax, dword ptr [eax + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 33ch]
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        push ecx
        mov eax, dword ptr [ebp - 114h]
        mov eax, dword ptr [eax + 4a8h]
        cdq
        mov ecx, 5dch
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 91 B8 31 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb8
        __asm _emit 0x31
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4f8h]
        mov dword ptr [ebp - 1a0h], eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 7A 56 00 00: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 500h]
        mov dword ptr [ebp - 1a4h], eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 53 56 00 00: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 504h]
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 2C 56 00 00: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 1ach], eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 05 56 00 00: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 510h]
        mov dword ptr [ebp - 1b0h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 8]
        add edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 2
        push ecx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 BE B7 31 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb7
        __asm _emit 0x31
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 518h]
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1eh
        push ecx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 87 B7 31 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb7
        __asm _emit 0x31
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 514h]
        mov dword ptr [ebp - 1b8h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 46h
        push ecx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 50 B7 31 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb7
        __asm _emit 0x31
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [edx + 8]
        mov edx, dword ptr [ebp - 114h]
        mov edx, dword ptr [edx + 4b8h]
        and edx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x58499ef5
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffe0h
        inc edx
        mov esi, dword ptr [ebp - 114h]
        mov dword ptr [esi + edx*8 + 350h], eax
        mov dword ptr [esi + edx*8 + 354h], ecx
        mov eax, dword ptr [ebp - 114h]
        mov eax, dword ptr [eax + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        sub eax, 12ch
        push eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 AB 13 00: call 0x585d4ad0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xab
        __asm _emit 0x13
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x58499f86
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 454h], 1
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 1bch], eax
        push 271ah
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 FD BE FE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 33: jmp 0x58499fb9
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 454h], 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 1c0h], eax
        push 2706h
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 C8 BE FE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 4c4h], -1
        ; Exact mapped bytes 75 69: jne 0x5849a031
        __asm _emit 0x75
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 318h], 0
        ; Exact mapped bytes 75 5A: jne 0x5849a031
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4fch]
        mov dword ptr [ebp - 1c4h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 33ch]
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        push ecx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 F5 B5 31 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xb5
        __asm _emit 0x31
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 15 02 00 00: jmp 0x5849a246
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 454h], 0
        ; Exact mapped bytes 0F 84 94 01 00 00: je 0x5849a1d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4fch]
        mov dword ptr [ebp - 1c8h], ecx
        push 50h
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 DD B4 31 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb4
        __asm _emit 0x31
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 1cch], eax
        mov ecx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ecx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4ech]
        cdq
        mov esi, 0ah
        idiv esi
        lea eax, [ecx + eax - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 64 B5 31 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb5
        __asm _emit 0x31
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E8 AA 6B 3B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6b
        __asm _emit 0x3b
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 7D: jne 0x5849a14b
        __asm _emit 0x75
        __asm _emit 0x7d
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 4ech], 0
        ; Exact mapped bytes 7E 21: jle 0x5849a0fe
        __asm _emit 0x7e
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 4ech], 0ah
        ; Exact mapped bytes 7E 12: jle 0x5849a0fe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 4f0h], 0
        ; Exact mapped bytes EB 4D: jmp 0x5849a14b
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 4ech], 0
        ; Exact mapped bytes 7D 21: jge 0x5849a12e
        __asm _emit 0x7d
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 4ech], -0ah
        ; Exact mapped bytes 7D 12: jge 0x5849a12e
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 4f0h], 1
        ; Exact mapped bytes EB 1D: jmp 0x5849a14b
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes E8 39 6B 3B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6b
        __asm _emit 0x3b
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5849a13f
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 4f0h], eax
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 4f0h], 0
        ; Exact mapped bytes 74 3F: je 0x5849a199
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes E8 0D 6B 3B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6b
        __asm _emit 0x3b
        __asm _emit 0x00
        cdq
        mov ecx, 1eh
        idiv ecx
        mov dword ptr [ebp - 1d4h], edx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4ech]
        mov dword ptr [ebp - 1d0h], eax
        mov ecx, dword ptr [ebp - 1d0h]
        add ecx, dword ptr [ebp - 1d4h]
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 4ech], ecx
        ; Exact mapped bytes EB 3D: jmp 0x5849a1d6
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes E8 CE 6A 3B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6a
        __asm _emit 0x3b
        __asm _emit 0x00
        cdq
        mov ecx, 1eh
        idiv ecx
        mov dword ptr [ebp - 1dch], edx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4ech]
        mov dword ptr [ebp - 1d8h], eax
        mov ecx, dword ptr [ebp - 1d8h]
        sub ecx, dword ptr [ebp - 1dch]
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 4ech], ecx
        ; Exact mapped bytes EB 6E: jmp 0x5849a246
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4fch]
        mov dword ptr [ebp - 1e0h], ecx
        push 100h
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 46 B3 31 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb3
        __asm _emit 0x31
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 1e4h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ecx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 EA B3 31 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb3
        __asm _emit 0x31
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 4ech], 0
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 0F 84 52 02 00 00: je 0x5849a4a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 4C 85 2C 00: call 0x587627b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 3C 02 00 00: je 0x5849a4a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 B7 FF FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 28 02 00 00: jne 0x5849a4a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 B4 FF FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x5849a297
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        test eax, eax
        ; Exact mapped bytes 0F 85 09 02 00 00: jne 0x5849a4a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 7C 4A: jl 0x5849a2f5
        __asm _emit 0x7c
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A C7 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B3 B4 FF FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 4], eax
        ; Exact mapped bytes 7F 2D: jg 0x5849a2f5
        __asm _emit 0x7f
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 7C 21: jl 0x5849a2f5
        __asm _emit 0x7c
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 C7 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A B4 FF FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 8], eax
        ; Exact mapped bytes 0F 8E A6 00 00 00: jle 0x5849a39b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 0a4h]
        imul ecx, dword ptr [eax + 0a4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0b8h]
        push eax
        ; Exact mapped bytes E8 ED 2A 3B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x2a
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ecx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 2deh]
        imul eax, eax, 56h
        cdq
        mov esi, 64h
        idiv esi
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 2deh]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 0b8h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 3C 15 00: call 0x585ee070
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3c
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x5849a4a8
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 454h], 0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x5849a438
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ecx + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        imul eax, eax, 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1e8h], eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        sub eax, dword ptr [ebp - 1e8h]
        mov edx, dword ptr [ebp - 114h]
        sub eax, dword ptr [edx + 0b4h]
        push eax
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx + 0b0h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 3C 15 00: call 0x585ee070
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x3c
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 70: jmp 0x5849a4a8
        __asm _emit 0xeb
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ecx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 2deh]
        imul eax, eax, 56h
        cdq
        mov esi, 64h
        idiv esi
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 2deh]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 0a0h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 3B 15 00: call 0x585ee070
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 21ch], 0
        ; Exact mapped bytes 0F 84 14 03 00 00: je 0x5849a7cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F4 01 00 00: je 0x5849a6bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D C5 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E6 A4 FE FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 B3 FF FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 C4 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0F B5 FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 398h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF C4 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F8 B1 FF FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B B3 FF FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 C4 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B1 B4 FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 394h], esi
        ; Exact mapped bytes E8 F7 66 3B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        add edx, 13h
        mov dword ptr [ebp - 1ech], edx
        mov edx, dword ptr [ebp - 1ech]
        push edx
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 A4 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 60: je 0x5849a607
        __asm _emit 0x74
        __asm _emit 0x60
        push 2
        ; Exact mapped bytes F2 0F 2A 05 90 20 96 58: cvtsi2sd xmm0, dword ptr [0x58962090]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 62 6A 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x6a
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 9D 54 FC FF FF: fstp qword ptr [ebp - 0x3ac]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 85 54 FC FF FF: movsd xmm0, qword ptr [ebp - 0x3ac]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 58 05 C0 50 89 58: addsd xmm0, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 4C 73 FF FF: call 0x58491930
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E8 A4 6C 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x6c
        __asm _emit 0x39
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 394h]
        push eax
        mov ecx, dword ptr [ebp - 398h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 BA 35 0D 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x35
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE B2 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x5849a6bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 470h], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x5849a6bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 C3 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 75 79: jne 0x5849a6bc
        __asm _emit 0x75
        __asm _emit 0x79
        push 3bh
        push 38h
        push 0ah
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 77 2D 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x77
        __asm _emit 0x2d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 64: jne 0x5849a6bc
        __asm _emit 0x75
        __asm _emit 0x64
        push 22h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B A4 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes 8B 15 94 20 96 58: mov edx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f0h], edx
        mov eax, dword ptr [ebp - 1f0h]
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 37 17 32 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x17
        __asm _emit 0x32
        __asm _emit 0x00
        push 22h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA A3 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes FF 95 08 FE FF FF: call dword ptr [ebp - 0x1f8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 21ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 21ch], edx
        push 58h
        ; Exact mapped bytes E8 26 69 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x69
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5849a795
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov esi, dword ptr [ecx + 8]
        add esi, 5
        ; Exact mapped bytes E8 60 65 3B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x65
        __asm _emit 0x3b
        __asm _emit 0x00
        cdq
        mov ecx, 0ah
        idiv ecx
        sub esi, edx
        mov dword ptr [ebp - 1fch], esi
        ; Exact mapped bytes E8 4B 65 3B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x65
        __asm _emit 0x3b
        __asm _emit 0x00
        cdq
        mov ecx, 0ah
        idiv ecx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 5
        sub ecx, edx
        mov dword ptr [ebp - 200h], ecx
        push 14h
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 A3 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 C2 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        push 1770h
        mov edx, dword ptr [ebp - 1fch]
        push edx
        mov eax, dword ptr [ebp - 200h]
        push eax
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        mov edx, dword ptr [ebp - 208h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 D3 0A 32 00: call 0x587bb260
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0a
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849a79f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov eax, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 20ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 210h], ecx
        push 102h
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 E2 AD 31 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xad
        __asm _emit 0x31
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 220h], 0
        ; Exact mapped bytes 0F 8E BE 01 00 00: jle 0x5849a9a0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 470h], 0
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x5849a971
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 53ch], 0
        ; Exact mapped bytes 0F 85 69 01 00 00: jne 0x5849a971
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD C1 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A6 A1 FE FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 B0 FF FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 C1 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF B1 FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 3b4h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F C1 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B8 AE FF FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B B0 FF FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 C1 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 71 B1 FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 3b0h], esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 B0 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x5849a971
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 C0 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 74h], eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x5849a971
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 37h
        push 34h
        push 9
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 74 2D 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x74
        __asm _emit 0x2d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 63: jne 0x5849a955
        __asm _emit 0x75
        __asm _emit 0x63
        push 25h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 A1 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 9E 14 32 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x14
        __asm _emit 0x32
        __asm _emit 0x00
        push 25h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 A1 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        mov edx, dword ptr [ebp - 154h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 21ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes FF 95 E4 FD FF FF: call dword ptr [ebp - 0x21c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 53ch], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 24 00 00: call 0x5849ce50
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 220h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 220h], ecx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 508h]
        ; Exact mapped bytes E8 E3 4E 00 00: call 0x5849f880
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3E: jmp 0x5849a9de
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 220h], 0
        ; Exact mapped bytes 75 2F: jne 0x5849a9de
        __asm _emit 0x75
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 220h], eax
        push 0
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 12 B5 FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 220h], 0ffffffffh
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 45ch], 0
        ; Exact mapped bytes 0F 85 86 07 00 00: jne 0x5849b177
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 BF FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BD 9F FE FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 AE FF FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD BF FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E6 AF FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 3a0h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 BF FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF AC FF FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 AE FF FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F BF FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 88 AF FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 39ch], esi
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 51ch], 0
        ; Exact mapped bytes 74 33: je 0x5849aadb
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 51ch]
        mov dword ptr [ebp - 224h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 39ch]
        push eax
        mov ecx, dword ptr [ebp - 3a0h]
        push ecx
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 26 30 0D 00: call 0x5856db00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + eax + 2cah]
        test edx, edx
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x5849abd2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 224h], 0
        ; Exact mapped bytes 7E 67: jle 0x5849ab6f
        __asm _emit 0x7e
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 4bch], 0
        ; Exact mapped bytes 7E 1B: jle 0x5849ab32
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4bch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 4bch], eax
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 2
        ; Exact mapped bytes 74 1D: je 0x5849ab61
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 458h], 0
        ; Exact mapped bytes 74 0C: je 0x5849ab5f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 62 E9 FF FF: call 0x584994c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0C: jmp 0x5849ab6d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 54 E9 FF FF: call 0x584994c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 63: jmp 0x5849abd2
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 224h], 0
        ; Exact mapped bytes 75 54: jne 0x5849abd2
        __asm _emit 0x75
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 BE FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 75 12: jne 0x5849aba6
        __asm _emit 0x75
        __asm _emit 0x12
        push 7bh
        push 7ah
        push 1ch
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 71 2D 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x71
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 224h], 0ffffffffh
        mov byte ptr [ebp - 11dh], 61h
        lea eax, [ebp - 11dh]
        push eax
        push 5
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 6F 26 00 00: call 0x5849d240
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 458h], 0
        ; Exact mapped bytes 74 0E: je 0x5849abef
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 34 88 FF FF: call 0x58493420
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 48: jmp 0x5849ac37
        __asm _emit 0xeb
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 470h], 0
        ; Exact mapped bytes 75 39: jne 0x5849ac37
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 4c4h], 0
        ; Exact mapped bytes 74 1E: je 0x5849ac2b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 4c4h], 4
        ; Exact mapped bytes 74 0F: je 0x5849ac2b
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 4c4h], 64h
        ; Exact mapped bytes 75 0C: jne 0x5849ac37
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 2A ED FF FF: call 0x58499960
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 0F 84 30 05 00 00: je 0x5849b177
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 17 FF FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        cdq
        mov ecx, 0ch
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 15 05 00 00: jne 0x5849b177
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 50 BD FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        sub eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 18ch], eax
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 23 14 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov esi, 0bb8h
        idiv esi
        sub ecx, eax
        mov dword ptr [ebp - 188h], ecx
        mov eax, dword ptr [ebp - 18ch]
        imul eax, dword ptr [ebp - 18ch]
        mov ecx, dword ptr [ebp - 188h]
        imul ecx, dword ptr [ebp - 188h]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 48 63 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x63
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 B0 65 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x65
        __asm _emit 0x39
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 32ch], eax
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, word ptr [eax + 2dch]
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 2dah]
        imul ecx, eax
        imul eax, ecx, 19h
        cdq
        mov ecx, 5dch
        idiv ecx
        mov dword ptr [ebp - 130h], eax
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 2dch]
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 2dah]
        imul eax, edx
        imul eax, eax, 19h
        cdq
        mov ecx, 7d0h
        idiv ecx
        mov dword ptr [ebp - 15ch], eax
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 460h], 0
        ; Exact mapped bytes 0F 85 1C 04 00 00: jne 0x5849b177
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 518h]
        mov dword ptr [ebp - 228h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 130h]
        sub eax, dword ptr [edx + 328h]
        ; Exact mapped bytes 79 0C: jns 0x5849ad8d
        __asm _emit 0x79
        __asm _emit 0x0c
        mov dword ptr [ebp - 158h], 0
        ; Exact mapped bytes EB 18: jmp 0x5849ada5
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp - 130h]
        sub edx, dword ptr [ecx + 328h]
        mov dword ptr [ebp - 158h], edx
        mov eax, dword ptr [ebp - 158h]
        push eax
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 D9 03 32 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 514h]
        mov dword ptr [ebp - 22ch], edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 32ch]
        push ecx
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 AF 03 32 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 450h], 0
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x5849af2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 554h], 0
        ; Exact mapped bytes 0F 85 24 01 00 00: jne 0x5849af2c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD BB FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x5849af2c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ebp - 15ch]
        sub ecx, dword ptr [edx + 328h]
        mov eax, dword ptr [ebp - 15ch]
        cdq
        mov esi, 0ah
        idiv esi
        mov edx, dword ptr [ebp - 114h]
        add eax, dword ptr [edx + 32ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 8D D6 00 00 00: jge 0x5849af2c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 4c4h], 0
        ; Exact mapped bytes 74 22: je 0x5849ae87
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 4c4h], 1
        ; Exact mapped bytes 74 13: je 0x5849ae87
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 4c4h], 64h
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x5849af2c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 450h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E BB FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 97 15 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 9B FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 75 37: jne 0x5849aef7
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 AB FF FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 230h], ecx
        push 1
        mov edx, dword ptr [ebp - 230h]
        push edx
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 2C 5B 1F 00: call 0x58690a20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x5b
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 35: jmp 0x5849af2c
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE AA FF FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 238h], ecx
        push 1
        mov edx, dword ptr [ebp - 238h]
        push edx
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 75 9A 1E 00: call 0x586849a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9a
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ebp - 130h]
        cmp ecx, dword ptr [eax + 328h]
        ; Exact mapped bytes 0F 8D 33 02 00 00: jge 0x5849b177
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 460h], 1
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 4c4h], 0ah
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 318h], 0
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 320h], 0
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x5849b091
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 33ch]
        mov dword ptr [ebp - 240h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4ach]
        mov dword ptr [ebp - 244h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4a8h]
        mov dword ptr [ebp - 248h], edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 24ch], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 A9 FF FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F A6 FF FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        mov ecx, dword ptr [ebp - 240h]
        push ecx
        mov edx, dword ptr [ebp - 244h]
        push edx
        mov eax, dword ptr [ebp - 248h]
        push eax
        mov ecx, dword ptr [ebp - 24ch]
        push ecx
        mov edx, dword ptr [ebp - 250h]
        push edx
        mov eax, dword ptr [ebp - 254h]
        push eax
        mov ecx, dword ptr [ebp - 258h]
        push ecx
        push 58894dc8h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 24h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 25ch], eax
        ; Exact mapped bytes 8B 0D 70 20 96 58: mov ecx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 260h], ecx
        push 0
        lea edx, [ebp - 3b8h]
        push edx
        mov eax, dword ptr [ebp - 25ch]
        push eax
        lea ecx, [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 260h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 A8 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x5849b177
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 470h], 0
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x5849b177
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE B8 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x5849b177
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2fh
        push 2ah
        push 7
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 6C 2D 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x2d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x5849b177
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 29h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 99 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov edx, dword ptr [ebp - 160h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 160h]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 75 63: jne 0x5849b177
        __asm _emit 0x75
        __asm _emit 0x63
        push 29h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 99 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 264h], eax
        mov ecx, dword ptr [ebp - 264h]
        push ecx
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 7C 0C 32 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x32
        __asm _emit 0x00
        push 29h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 99 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        mov edx, dword ptr [ebp - 164h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 26ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes FF 95 94 FD FF FF: call dword ptr [ebp - 0x26c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E A7 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 83 07 00 00: jne 0x5849b90d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B B8 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 1F 83 FF FF: call 0x584934c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 61 1F FF FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 5B: jne 0x5849b21f
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 0D FF FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 B7 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 274h], ecx
        mov edx, dword ptr [ebp - 270h]
        push edx
        mov eax, dword ptr [ebp - 274h]
        push eax
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 F2 75 05 00: call 0x584f2800
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 0A: jne 0x5849b21d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 1
        ; Exact mapped bytes EB 2A: jmp 0x5849b249
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 B7 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F 1D FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 80h], eax
        ; Exact mapped bytes 74 0A: je 0x5849b249
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 1
        cmp dword ptr [ebp - 124h], 1
        ; Exact mapped bytes 0F 85 E0 00 00 00: jne 0x5849b336
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 538h], 0
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x5849b336
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 470h], 1
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x5849b336
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 B7 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 22 A7 FF FF: call 0x584959b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 134h], eax
        ; Exact mapped bytes 0F 87 9C 00 00 00: ja 0x5849b336
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B A6 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x5849b336
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 B7 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 A4 FF FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 73: jne 0x5849b336
        __asm _emit 0x75
        __asm _emit 0x73
        push 2bh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 97 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 27ch], ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 CC 0A 32 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0a
        __asm _emit 0x32
        __asm _emit 0x00
        push 2bh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 97 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov eax, dword ptr [ebp - 168h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 284h], edx
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes FF 95 7C FD FF FF: call dword ptr [ebp - 0x284]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 538h], 1
        cmp dword ptr [ebp - 124h], 1
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x5849b3ce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 54ch], 0
        ; Exact mapped bytes 75 7C: jne 0x5849b3ce
        __asm _emit 0x75
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 470h], 1
        ; Exact mapped bytes 75 6D: jne 0x5849b3ce
        __asm _emit 0x75
        __asm _emit 0x6d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 B6 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CD 10 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A6 99 FF FF: call 0x58494d20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 134h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 77 4A: ja 0x5849b3ce
        __asm _emit 0x77
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 A5 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x5849b3ce
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 B6 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B A3 FF FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x5849b3be
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push 84h
        push 22h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 67 2D 00: call 0x58771ac0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 54ch], 1
        cmp dword ptr [ebp - 124h], 1
        ; Exact mapped bytes 75 67: jne 0x5849b43e
        __asm _emit 0x75
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 538h], 1
        ; Exact mapped bytes 75 58: jne 0x5849b43e
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 470h], 1
        ; Exact mapped bytes 75 49: jne 0x5849b43e
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 B5 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 A5 FF FF: call 0x584959b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 134h], eax
        ; Exact mapped bytes 76 2F: jbe 0x5849b43e
        __asm _emit 0x76
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 A4 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x5849b43e
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 538h], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 54ch], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 B5 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 0F 85 D7 02 00 00: jne 0x5849b72f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 470h], 1
        ; Exact mapped bytes 0F 85 C4 02 00 00: jne 0x5849b72f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A A4 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 B1 02 00 00: jne 0x5849b72f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 0A FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 11: jmp 0x5849b4a2
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 94 0C FF FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 0F 84 80 02 00 00: je 0x5849b72f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], 0
        mov dword ptr [ebp - 138h], 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 52 1C FF FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 4A: jne 0x5849b51d
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 0A FF FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 288h], ecx
        mov edx, dword ptr [ebp - 288h]
        push edx
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 F4 72 05 00: call 0x584f2800
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 0A: jne 0x5849b51b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 1
        ; Exact mapped bytes EB 29: jmp 0x5849b546
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 88 1A FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 78 1A FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 0A: je 0x5849b546
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 1
        cmp dword ptr [ebp - 128h], 1
        ; Exact mapped bytes 75 3F: jne 0x5849b58e
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 E6 0E FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F 94 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 75 1D: jne 0x5849b58e
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 04 0F FF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 7C 0A: jl 0x5849b58e
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 1
        cmp dword ptr [ebp - 128h], 1
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x5849b6d6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 540h], 0
        ; Exact mapped bytes 0F 85 28 01 00 00: jne 0x5849b6d6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x5849b6d6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 F3 7E FF FF: call 0x584934c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 2deh]
        cmp eax, edx
        ; Exact mapped bytes 0F 87 F4 00 00 00: ja 0x5849b6d6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 290h], eax
        mov eax, dword ptr [ebp - 290h]
        ; Exact mapped bytes 2B 05 C0 BE 90 58: sub eax, dword ptr [0x5890bec0]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        cmp eax, 1388h
        ; Exact mapped bytes 0F 86 C4 00 00 00: jbe 0x5849b6c9
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 23h
        push 1eh
        push 5
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 67 2D 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x67
        __asm _emit 0x2d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x5849b6ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1dh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 94 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        mov ecx, dword ptr [ebp - 16ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 16ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 64: jne 0x5849b6ac
        __asm _emit 0x75
        __asm _emit 0x64
        push 1dh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 94 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 294h], ecx
        mov edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 47 07 32 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x07
        __asm _emit 0x32
        __asm _emit 0x00
        push 1dh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 93 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        mov eax, dword ptr [ebp - 170h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 29ch], edx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes FF 95 64 FD FF FF: call dword ptr [ebp - 0x29c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 540h], 1
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A3 C0 BE 90 58: mov dword ptr [0x5890bec0], eax
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes EB 66: jmp 0x5849b72f
        __asm _emit 0xeb
        __asm _emit 0x66
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A3 C0 BE 90 58: mov dword ptr [0x5890bec0], eax
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes EB 54: jmp 0x5849b72a
        __asm _emit 0xeb
        __asm _emit 0x54
        cmp dword ptr [ebp - 128h], 1
        ; Exact mapped bytes 75 4B: jne 0x5849b72a
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 540h], 1
        ; Exact mapped bytes 75 3C: jne 0x5849b72a
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 C0 7D FF FF: call 0x584934c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 2deh]
        cmp eax, edx
        ; Exact mapped bytes 77 09: ja 0x5849b71a
        __asm _emit 0x77
        __asm _emit 0x09
        cmp dword ptr [ebp - 138h], 1
        ; Exact mapped bytes 75 10: jne 0x5849b72a
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 540h], 0
        ; Exact mapped bytes E9 62 FD FF FF: jmp 0x5849b491
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 46 94 FF FF: call 0x58494b80
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 0F 84 C0 01 00 00: je 0x5849b90d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 B2 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 0F 85 A6 01 00 00: jne 0x5849b90d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 4E B2 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, eax
        mov dword ptr [ebp - 174h], ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 22 09 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 8]
        sub ecx, eax
        mov dword ptr [ebp - 178h], ecx
        mov edx, dword ptr [ebp - 174h]
        imul edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [ebp - 178h]
        imul eax, dword ptr [ebp - 178h]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 54 58 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x58
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 4C 5B 39 00: call 0x58831320
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x5b
        __asm _emit 0x39
        __asm _emit 0x00
        mov dword ptr [ebp - 184h], eax
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 2deh]
        cmp dword ptr [ebp - 184h], edx
        ; Exact mapped bytes 0F 87 E6 00 00 00: ja 0x5849b8d9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 544h], 0
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x5849b8d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF B1 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D8 9E FF FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x5849b8c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 33h
        push 30h
        push 8
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 65 2D 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x65
        __asm _emit 0x2d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x5849b8c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 92 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 17ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 64: jne 0x5849b8c7
        __asm _emit 0x75
        __asm _emit 0x64
        push 24h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 92 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2a0h], ecx
        mov edx, dword ptr [ebp - 2a0h]
        push edx
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 2C 05 32 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 91 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        mov eax, dword ptr [ebp - 180h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes FF 95 58 FD FF FF: call dword ptr [ebp - 0x2a8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 544h], 1
        ; Exact mapped bytes EB 34: jmp 0x5849b90d
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 2deh]
        cmp dword ptr [ebp - 184h], edx
        ; Exact mapped bytes 76 1F: jbe 0x5849b90d
        __asm _emit 0x76
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 544h], 1
        ; Exact mapped bytes 75 10: jne 0x5849b90d
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 544h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 B0 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 74h], eax
        ; Exact mapped bytes 0F 85 75 07 00 00: jne 0x5849c09c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 470h], 0
        ; Exact mapped bytes 0F 84 F4 02 00 00: je 0x5849bc2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 4c4h], -1
        ; Exact mapped bytes 0F 84 E1 02 00 00: je 0x5849bc2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 474h], 0
        ; Exact mapped bytes 0F 84 CE 02 00 00: je 0x5849bc2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 B0 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CE 0A FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 67 90 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 0F 85 53 01 00 00: jne 0x5849bae0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 458h], 0
        ; Exact mapped bytes 74 30: je 0x5849b9cc
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 4c4h], 0
        ; Exact mapped bytes 75 21: jne 0x5849b9cc
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A A0 FF FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        push 1
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 A7 53 1F 00: call 0x58690d70
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x53
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x5849ba02
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 A0 FF FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4c4h]
        mov dword ptr [ebp - 2b0h], edx
        mov eax, dword ptr [ebp - 2b0h]
        push eax
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 6F 53 1F 00: call 0x58690d70
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x53
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 33ch], 55730h
        ; Exact mapped bytes 7E 10: jle 0x5849ba24
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 33ch], 55730h
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 9F FF FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 33ch]
        mov dword ptr [ebp - 2b8h], ecx
        mov edx, dword ptr [ebp - 2b8h]
        push edx
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 C7 51 1F 00: call 0x58690c20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x51
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 9F FF FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, word ptr [eax + 2dch]
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 2dah]
        imul ecx, eax
        imul eax, ecx, 19h
        cdq
        mov ecx, 5dch
        idiv ecx
        mov dword ptr [ebp - 2c0h], eax
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 518h]
        ; Exact mapped bytes E8 07 9D FF FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c4h], eax
        mov eax, dword ptr [ebp - 2c0h]
        push eax
        mov ecx, dword ptr [ebp - 2c4h]
        push ecx
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 38 52 1F 00: call 0x58690d00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x52
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 9F FF FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 51 1F 00: call 0x58690c60
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x51
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x5849bc2e
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 458h], 0
        ; Exact mapped bytes 74 30: je 0x5849bb1f
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 4c4h], 0
        ; Exact mapped bytes 75 21: jne 0x5849bb1f
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 9E FF FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        push 1
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 D4 91 1E 00: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x91
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x5849bb55
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 9E FF FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4c4h]
        mov dword ptr [ebp - 2d0h], edx
        mov eax, dword ptr [ebp - 2d0h]
        push eax
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 9C 91 1E 00: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x91
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 33ch], 55730h
        ; Exact mapped bytes 7E 10: jle 0x5849bb77
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 33ch], 55730h
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 9E FF FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 33ch]
        mov dword ptr [ebp - 2d8h], ecx
        mov edx, dword ptr [ebp - 2d8h]
        push edx
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 F4 8F 1E 00: call 0x58684ba0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x8f
        __asm _emit 0x1e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 9E FF FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, word ptr [eax + 2dch]
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 2dah]
        imul ecx, eax
        imul eax, ecx, 19h
        cdq
        mov ecx, 5dch
        idiv ecx
        mov dword ptr [ebp - 2e0h], eax
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 518h]
        ; Exact mapped bytes E8 B4 9B FF FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e4h], eax
        mov eax, dword ptr [ebp - 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 2e4h]
        push ecx
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 65 90 1E 00: call 0x58684c80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x90
        __asm _emit 0x1e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 9D FF FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B3 8F 1E 00: call 0x58684be0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8f
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 518h]
        ; Exact mapped bytes E8 71 9B FF FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, eax, 64h
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 2dch]
        mov edx, dword ptr [ebp - 114h]
        movzx edx, word ptr [edx + 2dah]
        imul eax, edx
        imul eax, eax, 19h
        cdq
        mov esi, 5dch
        idiv esi
        mov esi, eax
        mov eax, ecx
        cdq
        idiv esi
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 4c4h], -1
        ; Exact mapped bytes 0F 84 4C 01 00 00: je 0x5849bdd6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], 14h
        ; Exact mapped bytes 0F 8F 3F 01 00 00: jg 0x5849bdd6
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 558h], 2
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x5849bdd6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 558h], 2
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 2f0h], ecx
        push 35h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 8D FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2ech], eax
        mov edx, dword ptr [ebp - 2ech]
        push edx
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 6F AF FE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 50ch]
        mov dword ptr [ebp - 2f8h], ecx
        push 3fch
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 8E FE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2f4h], eax
        mov edx, dword ptr [ebp - 2f4h]
        push edx
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 05 A2 FE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 510h]
        mov dword ptr [ebp - 300h], ecx
        push 37h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 8D FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        mov edx, dword ptr [ebp - 2fch]
        push edx
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 5E 3A 00 00: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 514h]
        mov dword ptr [ebp - 358h], ecx
        push 37h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 8D FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        mov edx, dword ptr [ebp - 304h]
        push edx
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 27 3A 00 00: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 518h]
        mov dword ptr [ebp - 310h], ecx
        push 37h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 8D FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        mov edx, dword ptr [ebp - 30ch]
        push edx
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 F0 39 00 00: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C6 02 00 00: jmp 0x5849c09c
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 4c4h], -1
        ; Exact mapped bytes 0F 84 59 01 00 00: je 0x5849bf42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], 32h
        ; Exact mapped bytes 0F 8F 4C 01 00 00: jg 0x5849bf42
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], 14h
        ; Exact mapped bytes 0F 8E 3F 01 00 00: jle 0x5849bf42
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 558h], 1
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x5849bf42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 558h], 1
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 318h], ecx
        push 34h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 8C FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 314h], eax
        mov edx, dword ptr [ebp - 314h]
        push edx
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 03 AE FE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 50ch]
        mov dword ptr [ebp - 320h], ecx
        push 3fbh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 8C FE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        mov edx, dword ptr [ebp - 31ch]
        push edx
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 99 A0 FE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 510h]
        mov dword ptr [ebp - 328h], ecx
        push 36h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 8C FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 324h], eax
        mov edx, dword ptr [ebp - 324h]
        push edx
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 F2 38 00 00: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 514h]
        mov dword ptr [ebp - 330h], ecx
        push 36h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 8B FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        mov edx, dword ptr [ebp - 32ch]
        push edx
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 BB 38 00 00: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 518h]
        mov dword ptr [ebp - 338h], ecx
        push 36h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 8B FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 334h], eax
        mov edx, dword ptr [ebp - 334h]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 84 38 00 00: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x5849c09c
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 4c4h], -1
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x5849c09c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], 32h
        ; Exact mapped bytes 0F 8E 3A 01 00 00: jle 0x5849c09c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 558h], 0
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x5849c09c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 558h], 0
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 340h], ecx
        push 25h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 8B FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        mov edx, dword ptr [ebp - 33ch]
        push edx
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 A4 AC FE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 50ch]
        mov dword ptr [ebp - 348h], ecx
        push 2b6h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 8B FE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        mov edx, dword ptr [ebp - 344h]
        push edx
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 3A 9F FE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 510h]
        mov dword ptr [ebp - 350h], ecx
        push 26h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 8A FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        mov edx, dword ptr [ebp - 34ch]
        push edx
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 93 37 00 00: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 514h]
        mov dword ptr [ebp - 3a4h], ecx
        push 26h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 8A FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 354h], eax
        mov edx, dword ptr [ebp - 354h]
        push edx
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 5C 37 00 00: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 518h]
        mov dword ptr [ebp - 360h], ecx
        push 26h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 8A FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 35ch], eax
        mov edx, dword ptr [ebp - 35ch]
        push edx
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 25 37 00 00: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 99 8C FF FF: call 0x58494d40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4b8h]
        add ecx, 1
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 4b8h], ecx
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 1E: je 0x5849c0ec
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0D: ja 0x5849c0ec
        __asm _emit 0x77
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 11ch], edx
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5849c189
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 11ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0C: ja 0x5849c122
        __asm _emit 0x77
        __asm _emit 0x0c
        mov dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes EB D9: jmp 0x5849c0fb
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 E3 94 FF FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 18: jne 0x5849c152
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 11ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 11ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 39: jmp 0x5849c189
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes EB 32: jmp 0x5849c184
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 B3 94 FF FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 364h], ecx
        mov edx, dword ptr [ebp - 11ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 11ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 364h]
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x5849c0fb
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x5849c351
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 A8 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 02 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 39 88 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 75 77: jne 0x5849c22e
        __asm _emit 0x75
        __asm _emit 0x77
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 98 FF FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        push 2710h
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 48 4A 1F 00: call 0x58690c20
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x4a
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 98 FF FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, word ptr [eax + 2dch]
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 2dah]
        imul ecx, eax
        imul eax, ecx, 19h
        cdq
        mov ecx, 5dch
        idiv ecx
        mov dword ptr [ebp - 36ch], eax
        mov edx, dword ptr [ebp - 36ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 D5 4A 1F 00: call 0x58690d00
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4a
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 75: jmp 0x5849c2a3
        __asm _emit 0xeb
        __asm _emit 0x75
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 97 FF FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], eax
        push 2710h
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 51 89 1E 00: call 0x58684ba0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x1e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 97 FF FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], eax
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, word ptr [eax + 2dch]
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 2dah]
        imul ecx, eax
        imul eax, ecx, 19h
        cdq
        mov ecx, 5dch
        idiv ecx
        mov dword ptr [ebp - 378h], eax
        mov edx, dword ptr [ebp - 378h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 DE 89 1E 00: call 0x58684c80
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x89
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 380h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 7ch]
        push eax
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 39 FA FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 384h], eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 F1 90 FF FF: call 0x584953d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 B6 A6 FE FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 48ch], 0
        ; Exact mapped bytes 74 12: je 0x5849c30c
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 48ch]
        ; Exact mapped bytes E8 95 A6 FE FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 140h], ecx
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 26: je 0x5849c347
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 140h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 388h], ecx
        push 1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes FF 95 78 FC FF FF: call dword ptr [ebp - 0x388]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849c351
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 38ch], 0
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
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 E7 4C 39 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4c
        __asm _emit 0x39
        __asm _emit 0x00
        mov esp, ebp
    }
}
