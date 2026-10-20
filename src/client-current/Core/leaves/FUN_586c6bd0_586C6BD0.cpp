// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C6BD0 .. +0x43A bytes.
extern "C" __declspec(naked) void FUN_586c6bd0_586C6BD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 168h
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
        ; Exact mapped bytes E8 74 14 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x14
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
        ; Exact mapped bytes EB 11: jmp 0x586c6c28
        __asm _emit 0xeb
        __asm _emit 0x11
        push 1
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 1B 1A FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 98h
        mov dword ptr [ebp - 120h], ecx
        lea edx, [ebp - 168h]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 44 15 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 78 0D DC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x586c6c89
        __asm _emit 0x74
        __asm _emit 0x2a
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 C6 0D DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 2]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x586c6c87
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
        ; Exact mapped bytes EB 02: jmp 0x586c6c89
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 8E: jmp 0x586c6c17
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
        ; Exact mapped bytes 74 12: je 0x586c6cb1
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 118h], 1
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x586c6df6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 18 03 00 00: jmp 0x586c6fc9
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 55ch], 14h
        ; Exact mapped bytes 74 0C: je 0x586c6cc9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 55ch], 15h
        ; Exact mapped bytes 75 57: jne 0x586c6d20
        __asm _emit 0x75
        __asm _emit 0x57
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 128h], edx
        push 588b17ech
        ; Exact mapped bytes E8 02 B3 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb3
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov eax, dword ptr [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 97 F3 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf3
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 56 DF FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x586c6df1
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 130h], ecx
        push 588b180ch
        ; Exact mapped bytes E8 AB B2 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb2
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 40 F3 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 138h], edx
        push 588b1830h
        ; Exact mapped bytes E8 6C B2 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb2
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 01 F3 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf3
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 140h], ecx
        push 588b1858h
        ; Exact mapped bytes E8 2C B2 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb2
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 C1 F2 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf2
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 80 DE FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D3 01 00 00: jmp 0x586c6fc9
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 8]
        cmp ecx, 1
        ; Exact mapped bytes 75 20: jne 0x586c6e22
        __asm _emit 0x75
        __asm _emit 0x20
        push 588b1880h
        ; Exact mapped bytes E8 E4 B1 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb1
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
        ; Exact mapped bytes EB 4A: jmp 0x586c6e6c
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 8]
        cmp ecx, 2
        ; Exact mapped bytes 75 20: jne 0x586c6e4e
        __asm _emit 0x75
        __asm _emit 0x20
        push 588b1894h
        ; Exact mapped bytes E8 B8 B1 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb1
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
        ; Exact mapped bytes EB 1E: jmp 0x586c6e6c
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 588b18a8h
        ; Exact mapped bytes E8 98 B1 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb1
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
        mov dword ptr [ebp - 148h], edx
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 A7 0B DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 8]
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 EB 42 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 14ch], eax
        push 1
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 1C F0 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c6ee0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 1
        mov dword ptr [ebp - 114h], ecx
        cmp dword ptr [ebp - 114h], 3
        ; Exact mapped bytes 7D 29: jge 0x586c6f12
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx*4 + 1dch]
        mov dword ptr [ebp - 150h], ecx
        push 1
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 D1 EF DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xef
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c6ed1
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 154h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 61 F1 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf1
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 15ch], eax
        push 588b18b8h
        ; Exact mapped bytes E8 8D B0 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov ecx, dword ptr [ebp - 158h]
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 22 F1 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf1
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 164h], eax
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 95 0A DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0a
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 8]
        mov dword ptr [ebp - 160h], ecx
        mov edx, dword ptr [ebp - 160h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 D9 41 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        push 1
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 A8 DC FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 85 F4 FE FF FF: movsx eax, word ptr [ebp - 0x10c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x586c6fe8
        __asm _emit 0x74
        __asm _emit 0x14
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 5B 90 FF FF: call 0x586c0040
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 12: jmp 0x586c6ffa
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 47 90 FF FF: call 0x586c0040
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 4C A0 16 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa0
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
