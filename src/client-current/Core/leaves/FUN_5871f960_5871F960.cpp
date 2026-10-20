// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871F960 .. +0x514 bytes.
extern "C" __declspec(naked) void FUN_5871f960_5871F960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 124h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 0b8h], ecx
        mov dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5871f995
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0bch]
        add eax, 1
        mov dword ptr [ebp - 0bch], eax
        cmp dword ptr [ebp - 0bch], 3
        ; Exact mapped bytes 7D 1B: jge 0x5871f9b9
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [edx + ecx*4 + 0e4h]
        ; Exact mapped bytes E8 0A 0F 0A 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x5871f986
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 0c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 B8 B7 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 0c4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 99 B7 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [ecx + 168h]
        ; Exact mapped bytes E8 98 DF FF FF: call 0x5871d9a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 D0: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 66 89 90 78 01 00 00: mov word ptr [eax + 0x178], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5871fa34
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0bch]
        add ecx, 1
        mov dword ptr [ebp - 0bch], ecx
        mov edx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [edx + 168h]
        ; Exact mapped bytes E8 5B DF FF FF: call 0x5871d9a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes 0F 8D DC 01 00 00: jge 0x5871fc30
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [ebp - 0c8h], edx
        movzx eax, byte ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 37 4F 00 00: call 0x587249b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 588b4020h
        lea ecx, [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [ebp - 0cch], eax
        movzx ecx, byte ptr [ebp - 0bch]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 4C 4E 00 00: call 0x58724900
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        push edx
        push 588b4028h
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [ebp - 0d0h], eax
        movzx ecx, byte ptr [ebp - 0bch]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 E6 4F 00 00: call 0x58724af0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        push 0ffffffh
        push 1
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 F7 09 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 0e4h], edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ebp - 0dch], ecx
        movzx edx, byte ptr [ebp - 0bch]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 E7 4E 00 00: call 0x58724a50
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], eax
        push 0ffffffh
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        lea ecx, [ebp - 0b4h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 93 09 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 0e8h], ecx
        push 0ffffffh
        mov edx, dword ptr [ebp - 0bch]
        push edx
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 5E 09 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 0f4h], edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ebp - 0ech], ecx
        movzx edx, byte ptr [ebp - 0bch]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 07 4D 00 00: call 0x58724900
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        imul esi, eax, 32h
        mov ecx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 A0 5B D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x5b
        __asm _emit 0xd7
        __asm _emit 0xff
        add eax, esi
        mov dword ptr [ebp - 0f0h], eax
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 66 B5 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F5 FD FF FF: jmp 0x5871fa25
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 164h]
        ; Exact mapped bytes E8 7F DD FF FF: call 0x5871d9c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 C8: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 66 89 8A 7A 01 00 00: mov word ptr [edx + 0x17a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5871fc6d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0bch]
        add eax, 1
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 0b8h]
        movzx edx, word ptr [ecx + 17ah]
        cmp dword ptr [ebp - 0bch], edx
        ; Exact mapped bytes 0F 8D D3 01 00 00: jge 0x5871fe59
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 164h]
        mov dword ptr [ebp - 0f8h], ecx
        push 3
        movzx edx, byte ptr [ebp - 0bch]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 E3 7B 00 00: call 0x58727890
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 164h]
        mov dword ptr [ebp - 0fch], edx
        movzx eax, byte ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 73 79 00 00: call 0x58727650
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 588b402ch
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 100h], edx
        push 0ffffffh
        push 2
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 FF 07 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 164h]
        mov dword ptr [ebp - 104h], edx
        movzx eax, byte ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 7F 7A 00 00: call 0x587277e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 164h]
        mov dword ptr [ebp - 108h], edx
        movzx eax, byte ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 A4 79 00 00: call 0x58727730
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 70 07 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 118h], edx
        push 0ffffffh
        mov eax, dword ptr [ebp - 0bch]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 3B 07 0A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 164h]
        mov dword ptr [ebp - 11ch], edx
        movzx eax, byte ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 B4 76 00 00: call 0x587274d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        shl eax, 1
        cdq
        mov ecx, 64h
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 77 59 D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x59
        __asm _emit 0xd7
        __asm _emit 0xff
        add eax, esi
        mov dword ptr [ebp - 120h], eax
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 3D B3 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 05 FE FF FF: jmp 0x5871fc5e
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 7C D5 FF FF: call 0x5871d3e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 E0 11 11 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x11
        __asm _emit 0x11
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
