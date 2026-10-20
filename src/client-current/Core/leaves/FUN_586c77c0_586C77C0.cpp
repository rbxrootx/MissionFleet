// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C77C0 .. +0x481 bytes.
extern "C" __declspec(naked) void FUN_586c77c0_586C77C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 170h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        add eax, 98h
        mov dword ptr [ebp - 11ch], eax
        lea ecx, [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 84 08 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 95 F4 FE FF FF: mov word ptr [ebp - 0x10c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x586c7818
        __asm _emit 0xeb
        __asm _emit 0x11
        push 1
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 2B 0E FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 98h
        mov dword ptr [ebp - 120h], ecx
        lea edx, [ebp - 170h]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 54 09 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 88 01 DC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x586c7879
        __asm _emit 0x74
        __asm _emit 0x2a
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 D6 01 DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 2]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x586c7877
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D F4 FE FF FF: mov word ptr [ebp - 0x10c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x586c7879
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 8E: jmp 0x586c7807
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes 0F BF 95 F4 FE FF FF: movsx edx, word ptr [ebp - 0x10c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 12: je 0x586c78a1
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 118h], 1
        ; Exact mapped bytes 0F 84 C2 01 00 00: je 0x586c7a5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 90 03 00 00: jmp 0x586c7c31
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 548h], 1
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x586c7987
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 128h], ecx
        push 588b1014h
        ; Exact mapped bytes E8 1A A7 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa7
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 AF E7 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe7
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 130h], edx
        push 588b103ch
        ; Exact mapped bytes E8 DB A6 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa6
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 70 E7 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe7
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 138h], ecx
        push 588b1064h
        ; Exact mapped bytes E8 9B A6 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa6
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 30 E7 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 EF D2 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x586c7a59
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 140h], eax
        push 588b108ch
        ; Exact mapped bytes E8 44 A6 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xa6
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 D9 E6 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe6
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 2]
        cmp eax, 2c0h
        ; Exact mapped bytes 74 1E: je 0x586c79f4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 2]
        cmp edx, 2c1h
        ; Exact mapped bytes 74 0F: je 0x586c79f4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 2c2h
        ; Exact mapped bytes 75 53: jne 0x586c7a47
        __asm _emit 0x75
        __asm _emit 0x53
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 148h], ecx
        push 588b10bch
        ; Exact mapped bytes E8 D8 A5 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa5
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov edx, dword ptr [ebp - 144h]
        push edx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 6D E6 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe6
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 2C D2 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 12: jmp 0x586c7a59
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 18 D2 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D3 01 00 00: jmp 0x586c7c31
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 8]
        cmp ecx, 1
        ; Exact mapped bytes 75 20: jne 0x586c7a8a
        __asm _emit 0x75
        __asm _emit 0x20
        push 588b10f4h
        ; Exact mapped bytes E8 7C A5 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa5
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 4A: jmp 0x586c7ad4
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 8]
        cmp ecx, 2
        ; Exact mapped bytes 75 20: jne 0x586c7ab6
        __asm _emit 0x75
        __asm _emit 0x20
        push 588b1108h
        ; Exact mapped bytes E8 50 A5 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa5
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 1E: jmp 0x586c7ad4
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 588b111ch
        ; Exact mapped bytes E8 30 A5 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa5
        __asm _emit 0xe5
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
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 150h], edx
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 3F FF DB FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx eax, word ptr [eax + 8]
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 83 36 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x36
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 154h], eax
        push 1
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 B4 E3 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe3
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c7b48
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 1
        mov dword ptr [ebp - 114h], ecx
        cmp dword ptr [ebp - 114h], 3
        ; Exact mapped bytes 7D 29: jge 0x586c7b7a
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx*4 + 1dch]
        mov dword ptr [ebp - 158h], ecx
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 69 E3 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe3
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c7b39
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 15ch], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 F9 E4 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe4
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 164h], eax
        push 588b112ch
        ; Exact mapped bytes E8 25 A4 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa4
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 BA E4 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe4
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 16ch], eax
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 2D FE DB FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 8]
        mov dword ptr [ebp - 168h], ecx
        mov edx, dword ptr [ebp - 168h]
        push edx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 71 35 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x35
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        push 1
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 40 D0 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 15 94 16 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x16
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
