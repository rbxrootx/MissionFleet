// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C7010 .. +0x7A2 bytes.
extern "C" __declspec(naked) void FUN_586c7010_586C7010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1a4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        add eax, 98h
        mov dword ptr [ebp - 124h], eax
        lea ecx, [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 33 10 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 95 F0 FE FF FF: mov word ptr [ebp - 0x110], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x586c7069
        __asm _emit 0xeb
        __asm _emit 0x11
        push 1
        lea eax, [ebp - 118h]
        push eax
        ; Exact mapped bytes E8 DA 15 FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 98h
        mov dword ptr [ebp - 128h], ecx
        lea edx, [ebp - 1a4h]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 03 11 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x11
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 37 09 DC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x586c7140
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 81 09 DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 2]
        cmp ecx, eax
        ; Exact mapped bytes 75 7D: jne 0x586c713b
        __asm _emit 0x75
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 F8 DB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 11: jmp 0x586c70e2
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 D4 4F DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x4f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 36: je 0x586c7121
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 EA D8 DB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd8
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 550h], ecx
        ; Exact mapped bytes 75 1A: jne 0x586c711f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 178h], eax
        mov ecx, 2
        ; Exact mapped bytes 66 89 8D F0 FE FF FF: mov word ptr [ebp - 0x110], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x586c7121
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B0: jmp 0x586c70d1
        __asm _emit 0xeb
        __asm _emit 0xb0
        ; Exact mapped bytes 0F BF 95 F0 FE FF FF: movsx edx, word ptr [ebp - 0x110]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, 2
        ; Exact mapped bytes 74 0C: je 0x586c7139
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, 1
        ; Exact mapped bytes 66 89 85 F0 FE FF FF: mov word ptr [ebp - 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x586c7140
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 18 FF FF FF: jmp 0x586c7058
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 8D F0 FE FF FF: movsx ecx, word ptr [ebp - 0x110]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], ecx
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 1F: je 0x586c7175
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 11ch], 1
        ; Exact mapped bytes 0F 84 C8 01 00 00: je 0x586c732b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11ch], 2
        ; Exact mapped bytes 0F 84 F0 03 00 00: je 0x586c7560
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2C 06 00 00: jmp 0x586c77a1
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b149ch
        mov edx, dword ptr [ebp + 8]
        add edx, 444h
        push edx
        ; Exact mapped bytes E8 57 9A 18 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9a
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 85 C1 00 00 00: jne 0x586c7255
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 130h], eax
        push 588b14a0h
        ; Exact mapped bytes E8 37 AE E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xae
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 CC EE DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 138h], ecx
        push 588b14c4h
        ; Exact mapped bytes E8 F8 AD E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xad
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 8D EE DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 13ch], eax
        push 588b14e8h
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 62 EE DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 21 DA FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x586c7326
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 144h], ecx
        push 588b14ech
        ; Exact mapped bytes E8 76 AD E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xad
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 0B EE DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xee
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 14ch], edx
        push 588b1510h
        ; Exact mapped bytes E8 37 AD E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xad
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 CC ED DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xed
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 154h], ecx
        push 588b1538h
        ; Exact mapped bytes E8 F7 AC E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xac
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov edx, dword ptr [ebp - 150h]
        push edx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 8C ED DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xed
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 4B D9 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 76 04 00 00: jmp 0x586c77a1
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 8]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x586c7404
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b1560h
        ; Exact mapped bytes E8 AB AC E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xac
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
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 CC 06 DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 8]
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 1a0h], edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 FE 3D 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 158h], edx
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 2F EB DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xeb
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c73cd
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 7D 29: jge 0x586c73ff
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 15ch], eax
        push 1
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 E4 EA DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c73be
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x586c74dd
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 8]
        cmp edx, 2
        ; Exact mapped bytes 75 23: jne 0x586c7433
        __asm _emit 0x75
        __asm _emit 0x23
        push 588b1574h
        ; Exact mapped bytes E8 D6 AB E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xab
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
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x586c74dd
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b1588h
        ; Exact mapped bytes E8 B3 AB E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xab
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 160h], eax
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 20 3D 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 164h], edx
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 51 EA DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xea
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c74ab
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 7D 29: jge 0x586c74dd
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 168h], eax
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 06 EA DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c749c
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 16ch], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 96 EB DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xeb
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 174h], edx
        push 588b159ch
        ; Exact mapped bytes E8 C2 AA E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xaa
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 57 EB DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xeb
        __asm _emit 0xdb
        __asm _emit 0xff
        push 1
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 16 D7 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 41 02 00 00: jmp 0x586c77a1
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 C5 04 DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx esi, word ptr [eax + 8]
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 E6 D4 DB FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd4
        __asm _emit 0xdb
        __asm _emit 0xff
        sub esi, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 120h], esi
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 8]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x586c764a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b15c0h
        ; Exact mapped bytes E8 50 AA E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xaa
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
        mov dword ptr [ebp - 17ch], edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 B8 3B 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x3b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 180h], edx
        push 1
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 E9 E8 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c7613
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 7D 29: jge 0x586c7645
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 184h], eax
        push 1
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 9E E8 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c7604
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x586c7723
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 8]
        cmp edx, 2
        ; Exact mapped bytes 75 23: jne 0x586c7679
        __asm _emit 0x75
        __asm _emit 0x23
        push 588b15d4h
        ; Exact mapped bytes E8 90 A9 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa9
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
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x586c7723
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b15e8h
        ; Exact mapped bytes E8 6D A9 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa9
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 188h], eax
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 DA 3A 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 18ch], edx
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 0B E8 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c76f1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 7D 29: jge 0x586c7723
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 190h], eax
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 C0 E7 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe7
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c76e2
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 194h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 50 E9 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 19ch], edx
        push 588b15f8h
        ; Exact mapped bytes E8 7C A8 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa8
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 198h], eax
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 11 E9 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 D0 D4 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 A4 98 16 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x98
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
