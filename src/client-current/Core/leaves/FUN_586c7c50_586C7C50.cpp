// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C7C50 .. +0x8C5 bytes.
extern "C" __declspec(naked) void FUN_586c7c50_586C7C50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1d4h
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
        mov dword ptr [ebp - 1a4h], eax
        lea ecx, [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 F4 03 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0xdc
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 95 E4 FE FF FF: mov word ptr [ebp - 0x11c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes 66 89 85 F0 FE FF FF: mov word ptr [ebp - 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x586c7cb1
        __asm _emit 0xeb
        __asm _emit 0x11
        push 1
        lea ecx, [ebp - 118h]
        push ecx
        ; Exact mapped bytes E8 92 09 FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 108h]
        add edx, 98h
        mov dword ptr [ebp - 128h], edx
        lea eax, [ebp - 1d4h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 BB 04 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 EF FC DB FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 3E: je 0x586c7d26
        __asm _emit 0x74
        __asm _emit 0x3e
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 3D FD DB FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xfd
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx edx, word ptr [eax + 2]
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 2]
        cmp edx, ecx
        ; Exact mapped bytes 75 1F: jne 0x586c7d21
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, 1
        ; Exact mapped bytes 66 89 95 E4 FE FF FF: mov word ptr [ebp - 0x11c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 6]
        sub ecx, 1
        ; Exact mapped bytes 66 89 8D F0 FE FF FF: mov word ptr [ebp - 0x110], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x586c7d26
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x586c7ca0
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 95 E4 FE FF FF: movsx edx, word ptr [ebp - 0x11c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x586c7e0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 130h], eax
        push 588b1620h
        ; Exact mapped bytes E8 96 A2 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa2
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 2B E3 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xe3
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 138h], ecx
        push 588b1640h
        ; Exact mapped bytes E8 57 A2 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa2
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 EC E2 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe2
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 140h], eax
        push 588b1664h
        ; Exact mapped bytes E8 17 A2 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa2
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 AC E2 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe2
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 6B CE FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FA 06 00 00: jmp 0x586c8505
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 20: jne 0x586c7e37
        __asm _emit 0x75
        __asm _emit 0x20
        push 588b1688h
        ; Exact mapped bytes E8 CF A1 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa1
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
        ; Exact mapped bytes EB 4A: jmp 0x586c7e81
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 8]
        cmp eax, 2
        ; Exact mapped bytes 75 20: jne 0x586c7e63
        __asm _emit 0x75
        __asm _emit 0x20
        push 588b169ch
        ; Exact mapped bytes E8 A3 A1 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa1
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
        ; Exact mapped bytes EB 1E: jmp 0x586c7e81
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 588b16b0h
        ; Exact mapped bytes E8 83 A1 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa1
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
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 148h], ecx
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 92 FB DB FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfb
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx edx, word ptr [eax + 8]
        mov dword ptr [ebp - 144h], edx
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 D6 32 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x32
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 14ch], edx
        push 1
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 07 E0 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c7ef5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 7D 29: jge 0x586c7f27
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 150h], eax
        push 1
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 BC DF DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xdf
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c7ee6
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 154h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 4C E1 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe1
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 85 F0 FE FF FF: movsx eax, word ptr [ebp - 0x110]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        cmp dword ptr [ebp - 124h], 0fh
        ; Exact mapped bytes 0F 87 96 05 00 00: ja 0x586c8505
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x96
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes FF 24 8D 18 85 6C 58: jmp dword ptr [ecx*4 + 0x586c8518]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x58
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 15ch], ecx
        push 588b16c0h
        ; Exact mapped bytes E8 50 A0 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa0
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov edx, dword ptr [ebp - 158h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 E5 E0 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe0
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 A4 CC FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 33 05 00 00: jmp 0x586c8505
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 164h], edx
        push 588b16e0h
        ; Exact mapped bytes E8 F9 9F E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9f
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 8E E0 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 16ch], ecx
        push 588b16f0h
        ; Exact mapped bytes E8 B9 9F E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9f
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov edx, dword ptr [ebp - 168h]
        push edx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 4E E0 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c806e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 7D 29: jge 0x586c80a0
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 1e8h]
        mov dword ptr [ebp - 170h], eax
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 43 DE DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xde
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c805f
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 0F BF 8D F0 FE FF FF: movsx ecx, word ptr [ebp - 0x110]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], ecx
        mov edx, dword ptr [ebp - 120h]
        sub edx, 8
        mov dword ptr [ebp - 120h], edx
        cmp dword ptr [ebp - 120h], 7
        ; Exact mapped bytes 77 3D: ja 0x586c810c
        __asm _emit 0x77
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 120h]
        ; Exact mapped bytes FF 24 85 58 85 6C 58: jmp dword ptr [eax*4 + 0x586c8558]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x58
        mov dword ptr [ebp - 114h], 4
        ; Exact mapped bytes EB 34: jmp 0x586c811c
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 114h], 5
        ; Exact mapped bytes EB 28: jmp 0x586c811c
        __asm _emit 0xeb
        __asm _emit 0x28
        mov dword ptr [ebp - 114h], 6
        ; Exact mapped bytes EB 1C: jmp 0x586c811c
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov dword ptr [ebp - 114h], 7
        ; Exact mapped bytes EB 10: jmp 0x586c811c
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 0F BF 8D F0 FE FF FF: movsx ecx, word ptr [ebp - 0x110]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        sub ecx, 1
        mov dword ptr [ebp - 114h], ecx
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 174h], eax
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, byte ptr [ecx + 5896055ch]
        push edx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 49 30 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 250h]
        mov dword ptr [ebp - 178h], ecx
        push 1
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 7A DD DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xdd
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 1
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F9 CA FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 88 03 00 00: jmp 0x586c8505
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 180h], ecx
        push 588b1710h
        ; Exact mapped bytes E8 4F 9E E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9e
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 E4 DE DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xde
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 A3 CA FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 32 03 00 00: jmp 0x586c8505
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b1730h
        ; Exact mapped bytes E8 13 9E E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x9e
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
        mov dword ptr [ebp - 188h], edx
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 22 F8 DB FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf8
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx eax, word ptr [eax + 8]
        mov dword ptr [ebp - 184h], eax
        mov ecx, dword ptr [ebp - 184h]
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 66 2F 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 18ch], eax
        push 1
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 97 DC DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xdc
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c8265
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 1
        mov dword ptr [ebp - 10ch], ecx
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 7D 29: jge 0x586c8297
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx*4 + 1dch]
        mov dword ptr [ebp - 190h], ecx
        push 1
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 4C DC DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdc
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c8256
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 194h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 DC DD DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xdd
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 19ch], eax
        push 588b1744h
        ; Exact mapped bytes E8 08 9D E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9d
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 198h], eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 9D DD DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdd
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 1bch], eax
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 10 F7 DB FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf7
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 8]
        mov dword ptr [ebp - 1a0h], ecx
        mov edx, dword ptr [ebp - 1a0h]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 54 2E 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x2e
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        push 1
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 23 C9 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B2 01 00 00: jmp 0x586c8505
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 1ach], edx
        push 588b1764h
        ; Exact mapped bytes E8 79 9C E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9c
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        mov eax, dword ptr [ebp - 1a8h]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 0E DD DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdd
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 CD C8 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5C 01 00 00: jmp 0x586c8505
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E6 A9 FF FF: call 0x586c2da0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 43 01 00 00: jne 0x586c8505
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c83dd
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10ch]
        add edx, 1
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 10ch], 0bh
        ; Exact mapped bytes 7D 2C: jge 0x586c8412
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax*4 + 1b0h]
        mov dword ptr [ebp - 1b0h], edx
        push 588b0e37h
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 91 DC DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BC: jmp 0x586c83ce
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 21ch]
        mov dword ptr [ebp - 1b4h], ecx
        push 588b0e71h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 6C DC DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xdc
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 1d0h], edx
        push 588b1784h
        ; Exact mapped bytes E8 97 9B E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9b
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1b8h], eax
        mov eax, dword ptr [ebp - 1b8h]
        push eax
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 2C DC DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xdc
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 1c4h], eax
        push 588b17a4h
        ; Exact mapped bytes E8 58 9B E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9b
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov ecx, dword ptr [ebp - 1c0h]
        push ecx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 ED DB DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xdb
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 1cch], edx
        push 588b17c8h
        ; Exact mapped bytes E8 18 9B E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9b
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov eax, dword ptr [ebp - 1c8h]
        push eax
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 AD DB DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xdb
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 6C C7 FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 41 8B 16 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x8b
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
