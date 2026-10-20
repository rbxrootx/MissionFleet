// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5872B4A0 .. +0xD1C bytes.
extern "C" __declspec(naked) void FUN_5872b4a0_5872B4A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 170h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 140h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 140h]
        ; Exact mapped bytes E8 B9 4B 02 00: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 144h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 140h]
        ; Exact mapped bytes E8 FF 94 D5 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 FE A2 D6 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa2
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 140h]
        ; Exact mapped bytes E8 CD A2 D6 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa2
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 140h]
        ; Exact mapped bytes E8 5C E5 E5 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xe5
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 6B 7F DF FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 140h]
        ; Exact mapped bytes E8 7A 71 EA FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x71
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 140h]
        ; Exact mapped bytes E8 89 71 EA FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + edx + 18h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 65 95 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a0h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CE B6 D5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 B4 94 D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E2 AA D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xaa
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 33ch
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C4 AA D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xaa
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 B1 9A D7 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 82 FB 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 5E FB 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 140h]
        ; Exact mapped bytes E8 FB 5D E1 FF: call 0x58541450
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x5d
        __asm _emit 0xe1
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 24 FB 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 00 FB 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 5C: je 0x5872b6f3
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 78h
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 EE A9 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 1ch]
        movzx edx, word ptr [ecx + 9ah]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 BF FA 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, word ptr [edx + 98h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A0 FA 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 55: jmp 0x5872b748
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 70h], edx
        push 588b4148h
        ; Exact mapped bytes E8 E7 68 DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x68
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 85 A9 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 74h], edx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 5F FA 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 78h], ecx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 49 FA 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 71: je 0x5872b7bf
        __asm _emit 0x74
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 78h
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 37 A9 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 98h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 09 FA 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 140h]
        ; Exact mapped bytes E8 8C 69 E3 FF: call 0x58562130
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x69
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 D4 F9 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6D: jmp 0x5872b82c
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 90h], edx
        push 588b4168h
        ; Exact mapped bytes E8 18 68 DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x68
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 AD A8 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa8
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 81 F9 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 65 F9 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x5872b9b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 140h]
        ; Exact mapped bytes E8 1C 92 D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x92
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 40: mov ax, word ptr [eax + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 78h
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 2A A8 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa8
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 140h]
        ; Exact mapped bytes E8 C4 91 D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x91
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx eax, word ptr [eax + 40h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 D0 F8 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 140h]
        ; Exact mapped bytes E8 7A 91 D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x91
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx eax, word ptr [eax + 40h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0a8h], edx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 86 F8 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0fch]
        mov dword ptr [ebp - 0b0h], eax
        movzx eax, word ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 120h]
        imul eax, edx
        mov ecx, dword ptr [ebp - 20h]
        imul eax, dword ptr [ecx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 41 F8 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10ch]
        mov dword ptr [ebp - 0b4h], edx
        movzx eax, word ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 120h]
        imul eax, edx
        mov ecx, dword ptr [ebp - 20h]
        imul eax, dword ptr [ecx + 70h]
        movzx edx, word ptr [ebp - 0ch]
        imul ecx, edx, 12h
        movzx edx, word ptr [ebp - 0ch]
        movzx esi, word ptr [ebp - 0ch]
        add esi, 1
        imul edx, esi
        add ecx, edx
        imul eax, ecx
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 E2 F7 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x5872ba86
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d4h]
        mov dword ptr [ebp - 0bch], edx
        push 588b4188h
        ; Exact mapped bytes E8 1A 66 DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 AF A6 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 0c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 7A F7 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ech]
        mov dword ptr [ebp - 0c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 55 F7 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0fch]
        mov dword ptr [ebp - 0c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 30 F7 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10ch]
        mov dword ptr [ebp - 0cch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 0B F7 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x5872bc0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 140h]
        ; Exact mapped bytes E8 C2 8F D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8f
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 42: mov ax, word ptr [eax + 0x42]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x42
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d4h]
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 78h
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 D0 A5 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa5
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 140h]
        ; Exact mapped bytes E8 6A 8F D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8f
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx eax, word ptr [eax + 42h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0d4h], eax
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 76 F6 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ech]
        mov dword ptr [ebp - 0e0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 20 8F D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8f
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx eax, word ptr [eax + 42h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0dch], edx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 2C F6 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0fch]
        mov dword ptr [ebp - 0e4h], edx
        movzx eax, word ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 11eh]
        imul eax, edx
        mov ecx, dword ptr [ebp - 24h]
        imul eax, dword ptr [ecx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 E7 F5 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10ch]
        mov dword ptr [ebp - 0e8h], ecx
        movzx eax, word ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        movzx ecx, word ptr [edx + 11eh]
        imul eax, ecx
        mov edx, dword ptr [ebp - 24h]
        imul eax, dword ptr [edx + 70h]
        movzx ecx, word ptr [ebp - 10h]
        imul edx, ecx, 12h
        movzx ecx, word ptr [ebp - 10h]
        movzx esi, word ptr [ebp - 10h]
        add esi, 1
        imul ecx, esi
        add edx, ecx
        imul eax, edx
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 88 F5 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x5872bce0
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        mov dword ptr [ebp - 0f0h], ecx
        push 588b41a8h
        ; Exact mapped bytes E8 C0 63 DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x63
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 55 A4 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa4
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 0f4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 20 F5 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ech]
        mov dword ptr [ebp - 0f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 FB F4 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0fch]
        mov dword ptr [ebp - 0fch], edx
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 D6 F4 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10ch]
        mov dword ptr [ebp - 100h], edx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 B1 F4 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x5872bdf0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 68 8D D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 46: mov cx, word ptr [eax + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x46
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        mov dword ptr [ebp - 104h], ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, 78h
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 77 A3 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa3
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 140h]
        ; Exact mapped bytes E8 11 8D D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx edx, word ptr [eax + 46h]
        mov dword ptr [ebp - 108h], edx
        mov eax, dword ptr [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 25 F4 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0fch]
        mov dword ptr [ebp - 110h], eax
        movzx eax, word ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 124h]
        imul eax, edx
        mov ecx, dword ptr [ebp - 28h]
        imul eax, dword ptr [ecx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 E1 F3 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf3
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10ch]
        mov dword ptr [ebp - 114h], ecx
        movzx edx, word ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 124h]
        imul edx, ecx
        mov eax, dword ptr [ebp - 28h]
        imul edx, dword ptr [eax + 70h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 A6 F3 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf3
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x5872be9a
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d4h]
        mov dword ptr [ebp - 11ch], eax
        push 588b41c8h
        ; Exact mapped bytes E8 DF 61 DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x61
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 74 A2 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa2
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f4h]
        mov dword ptr [ebp - 120h], edx
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 3F F3 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0fch]
        mov dword ptr [ebp - 124h], edx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 1B F3 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf3
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10ch]
        mov dword ptr [ebp - 128h], edx
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 F7 F2 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x5872bfd0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 140h]
        ; Exact mapped bytes E8 AE 8B D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x8b
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 44: mov cx, word ptr [eax + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x44
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d4h]
        mov dword ptr [ebp - 12ch], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 BC A1 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 140h]
        ; Exact mapped bytes E8 56 8B D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x8b
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx edx, word ptr [eax + 44h]
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 6A F2 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0fch]
        mov dword ptr [ebp - 138h], ecx
        movzx eax, word ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        movzx ecx, word ptr [edx + 122h]
        imul eax, ecx
        mov edx, dword ptr [ebp - 2ch]
        imul eax, dword ptr [edx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 25 F2 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10ch]
        mov dword ptr [ebp - 13ch], edx
        movzx eax, word ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 122h]
        imul eax, edx
        mov ecx, dword ptr [ebp - 2ch]
        imul eax, dword ptr [ecx + 70h]
        movzx edx, word ptr [ebp - 14h]
        imul ecx, edx, 12h
        movzx edx, word ptr [ebp - 14h]
        movzx esi, word ptr [ebp - 14h]
        add esi, 1
        imul edx, esi
        add ecx, edx
        imul eax, ecx
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 C6 F1 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x5872c07d
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d4h]
        mov dword ptr [ebp - 144h], edx
        push 588b41e8h
        ; Exact mapped bytes E8 FE 5F DF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5f
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 93 A0 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 148h], eax
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 5E F1 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0fch]
        mov dword ptr [ebp - 14ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 39 F1 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10ch]
        mov dword ptr [ebp - 150h], edx
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 14 F1 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B E8 FF FF: call 0x5872a8a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x5872c113
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 148h], 0
        ; Exact mapped bytes 75 10: jne 0x5872c0ac
        __asm _emit 0x75
        __asm _emit 0x10
        push 32h
        push 1cch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 AD D8 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 154h], edx
        push 1
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 1B 9E D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x9e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 158h], ecx
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 02 9E D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9e
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 15ch], eax
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 E9 9D D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 160h], edx
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 D0 9D D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7E: jmp 0x5872c191
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 148h], 0
        ; Exact mapped bytes 75 0D: jne 0x5872c12c
        __asm _emit 0x75
        __asm _emit 0x0d
        push 32h
        push 0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 AD D8 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 164h], edx
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 9B 9D D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 168h], ecx
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 82 9D D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 16ch], eax
        push 1
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 69 9D D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 170h], edx
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 50 9D D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 148h], 0
        ; Exact mapped bytes 74 18: je 0x5872c1b5
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 54h], eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
