// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58548710 .. +0xE15 bytes.
extern "C" __declspec(naked) void FUN_58548710_58548710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 214h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 128h], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 85 AC FE FF FF: mov word ptr [ebp - 0x154], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + 2f0h]
        mov dword ptr [ebp - 130h], edx
        mov dword ptr [ebp - 138h], 0ffffffffh
        mov dword ptr [ebp - 14ch], 0ffffffffh
        mov dword ptr [ebp - 140h], 0
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 3D 39 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 160h], ecx
        mov edx, dword ptr [ebp - 128h]
        cmp dword ptr [edx + 2f8h], 0
        ; Exact mapped bytes 74 25: je 0x585487af
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 75 F4 F3 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf4
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        push 0
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 32 D7 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 128h]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 30 0F FE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 12: jle 0x585487d6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 128h]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 EB 80 27 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585487f1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 12ch]
        add eax, 1
        mov dword ptr [ebp - 12ch], eax
        cmp dword ptr [ebp - 12ch], 7
        ; Exact mapped bytes 7D 37: jge 0x58548831
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ebp - 128h]
        mov ecx, dword ptr [edx + ecx*4 + 0b4h]
        ; Exact mapped bytes E8 DE 0E FE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 19: jle 0x5854882f
        __asm _emit 0x7e
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [ebp - 128h]
        mov ecx, dword ptr [ecx + eax*4 + 0b4h]
        ; Exact mapped bytes E8 92 80 27 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B1: jmp 0x585487e2
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov edx, dword ptr [ebp - 128h]
        cmp dword ptr [edx + 2fch], 0
        ; Exact mapped bytes 0F 8E D3 0C 00 00: jle 0x58549517
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + 2f0h]
        mov dword ptr [eax + 2f8h], edx
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58548877
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 12ch]
        add eax, 1
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ebp - 12ch]
        cmp edx, dword ptr [ecx + 2fch]
        ; Exact mapped bytes 0F 8D 83 09 00 00: jge 0x58549212
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes 66 89 85 AC FE FF FF: mov word ptr [ebp - 0x154], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 128h]
        movzx edx, word ptr [ecx + 26ch]
        cmp edx, 5
        ; Exact mapped bytes 0F 85 AA 04 00 00: jne 0x58548d5b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 F4 37 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x37
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        mov eax, dword ptr [ebp - 134h]
        movzx ecx, word ptr [eax + 6]
        mov dword ptr [ebp - 158h], ecx
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 2e8h]
        mov dword ptr [ebp - 210h], eax
        mov ecx, dword ptr [ebp - 158h]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 D7 46 00 00: call 0x5854cfd0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 0D: jne 0x5854890d
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 0F 85 49 04 00 00: jne 0x58548d56
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 134h]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 07: and dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        movzx eax, dx
        push eax
        ; Exact mapped bytes E8 AF 95 FD FF: call 0x58521ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588a75c8h
        lea ecx, [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 164h], eax
        push 777777h
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        lea edx, [ebp - 124h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 A6 7B 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7b
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 144h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58548996
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 144h]
        add eax, 1
        mov dword ptr [ebp - 144h], eax
        cmp dword ptr [ebp - 144h], 6
        ; Exact mapped bytes 7D 29: jge 0x585489c8
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 168h], eax
        push 1
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 1B D5 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xd5
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x58548987
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 16ch], ecx
        push 1c5h
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 BD CC 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xcc
        __asm _emit 0x26
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 170h], ecx
        push 206h
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 92 CC 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x26
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 174h], ecx
        push 233h
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 68 CC 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x26
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 178h], edx
        push 260h
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 3D CC 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x26
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 17ch], edx
        push 28dh
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 12 CC 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xcc
        __asm _emit 0x26
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + ecx + 0b4h]
        mov dword ptr [ebp - 180h], eax
        push 2d3h
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 E7 CB 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xcb
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 0C 34 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x34
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        push 588a75d0h
        lea ecx, [ebp - 24h]
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
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 184h], edx
        push 777777h
        push 0
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 08 7A 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x7a
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 134h]
        mov eax, dword ptr [ecx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, edx
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov edx, dword ptr [ebp - 134h]
        mov eax, dword ptr [edx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        push eax
        push 588a75d4h
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 188h], edx
        push 777777h
        push 0
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 94 79 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x79
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 134h]
        movzx edx, word ptr [ecx + 1eh]
        push edx
        push 588a75dch
        lea eax, [ebp - 24h]
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
        shl ecx, 1
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + ecx + 0b4h]
        mov dword ptr [ebp - 18ch], eax
        push 777777h
        push 0
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 47 79 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x79
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 FC BD F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbd
        __asm _emit 0xf3
        __asm _emit 0xff
        push eax
        push 588a75e0h
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + ecx + 0b4h]
        mov dword ptr [ebp - 190h], eax
        push 777777h
        push 0
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 F8 78 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 134h]
        movzx eax, word ptr [edx + 0a0h]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        mov edx, dword ptr [ebp - 134h]
        movzx eax, word ptr [edx + 0a0h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        push 588a75e4h
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 194h], edx
        push 777777h
        push 0
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 89 78 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 66 8B 91 9C 00 00 00: mov dx, word ptr [ecx + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        push eax
        push 588a75ech
        lea ecx, [ebp - 24h]
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
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 198h], edx
        push 777777h
        push 0
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 31 78 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 B5 33 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x33
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes 75 0C: jne 0x58548d11
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 138h], edx
        mov eax, dword ptr [ebp - 128h]
        cmp dword ptr [eax + 28ch], 0ffh
        ; Exact mapped bytes 74 24: je 0x58548d47
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 134h]
        movzx edx, word ptr [ecx + 6]
        mov eax, dword ptr [ebp - 128h]
        cmp dword ptr [eax + 28ch], edx
        ; Exact mapped bytes 75 0C: jne 0x58548d47
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 14ch], ecx
        mov edx, dword ptr [ebp - 140h]
        add edx, 1
        mov dword ptr [ebp - 140h], edx
        ; Exact mapped bytes E9 A1 04 00 00: jmp 0x585491fc
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 128h]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 8B 04 00 00: jne 0x585491fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 34 33 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x33
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov edx, dword ptr [ebp - 13ch]
        movzx eax, word ptr [edx + 6]
        mov dword ptr [ebp - 15ch], eax
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + 2e8h]
        mov dword ptr [ebp - 19ch], edx
        mov eax, dword ptr [ebp - 15ch]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 17 42 00 00: call 0x5854cfd0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 0D: jne 0x58548dcd
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 0F 85 2F 04 00 00: jne 0x585491fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        add edx, 78h
        push edx
        push 588a75f4h
        lea eax, [ebp - 124h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 1a0h], edx
        push 777777h
        mov eax, dword ptr [ebp - 130h]
        push eax
        lea ecx, [ebp - 124h]
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 04 77 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x77
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 148h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58548e38
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 148h]
        add edx, 1
        mov dword ptr [ebp - 148h], edx
        cmp dword ptr [ebp - 148h], 6
        ; Exact mapped bytes 7D 29: jge 0x58548e6a
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 148h]
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 1a4h], edx
        push 1
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 79 D0 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd0
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x58548e29
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + ecx + 0b4h]
        mov dword ptr [ebp - 1a8h], eax
        push 1c5h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 1B C8 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc8
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + ecx + 0b4h]
        mov dword ptr [ebp - 1ach], eax
        push 1fch
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 F0 C7 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc7
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + ecx + 0b4h]
        mov dword ptr [ebp - 1b0h], eax
        push 233h
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 C6 C7 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc7
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 1b4h], ecx
        push 260h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 9B C7 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc7
        __asm _emit 0x26
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 1b8h], ecx
        push 28dh
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 70 C7 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc7
        __asm _emit 0x26
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 1bch], edx
        push 2d3h
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 45 C7 26 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc7
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 6A 2F F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x2f
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        push 588a75f8h
        lea eax, [ebp - 24h]
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
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 1c0h], ecx
        push 777777h
        push 0
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 66 75 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x75
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        mov eax, dword ptr [eax + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, edx
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        push eax
        push 588a75fch
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 1c4h], edx
        push 777777h
        push 0
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 F2 74 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x74
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        movzx edx, word ptr [ecx + 1eh]
        push edx
        push 588a7604h
        lea eax, [ebp - 24h]
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
        shl ecx, 1
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + ecx + 0b4h]
        mov dword ptr [ebp - 1c8h], eax
        push 777777h
        push 0
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 A5 74 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x74
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 5A B9 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb9
        __asm _emit 0xf3
        __asm _emit 0xff
        push eax
        push 588a7608h
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + ecx + 0b4h]
        mov dword ptr [ebp - 1cch], eax
        push 777777h
        push 0
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 56 74 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x74
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        movzx eax, word ptr [edx + 0a2h]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        mov edx, dword ptr [ebp - 13ch]
        movzx eax, word ptr [edx + 0a2h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        push 588a760ch
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 1d0h], edx
        push 777777h
        push 0
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 E7 73 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x73
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        push eax
        push 588a7614h
        lea ecx, [ebp - 24h]
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
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 1d4h], edx
        push 777777h
        push 0
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 8B 73 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x73
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 0F 2F F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes 75 0C: jne 0x585491b7
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 138h], edx
        mov eax, dword ptr [ebp - 128h]
        cmp dword ptr [eax + 28ch], 0ffh
        ; Exact mapped bytes 74 24: je 0x585491ed
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 13ch]
        movzx edx, word ptr [ecx + 6]
        mov eax, dword ptr [ebp - 128h]
        cmp dword ptr [eax + 28ch], edx
        ; Exact mapped bytes 75 0C: jne 0x585491ed
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 14ch], ecx
        mov edx, dword ptr [ebp - 140h]
        add edx, 1
        mov dword ptr [ebp - 140h], edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 B9 D7 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes E9 56 F6 FF FF: jmp 0x58548868
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [eax + 300h], ecx
        cmp dword ptr [ebp - 14ch], -1
        ; Exact mapped bytes 74 0E: je 0x5854923b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 138h], edx
        ; Exact mapped bytes EB 1E: jmp 0x58549259
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [ebp - 138h], -1
        ; Exact mapped bytes 75 15: jne 0x58549259
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 300h]
        sub ecx, 1
        mov dword ptr [ebp - 138h], ecx
        mov edx, dword ptr [ebp - 128h]
        cmp dword ptr [edx + 300h], 0
        ; Exact mapped bytes 0F 85 F2 01 00 00: jne 0x5854945e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a761ch
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 1d8h], edx
        push 777777h
        push 0
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 7A 72 27 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x72
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 1f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 1B CC F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xcc
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 1e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 FC CB F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcb
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58549300
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 12ch]
        add edx, 1
        mov dword ptr [ebp - 12ch], edx
        cmp dword ptr [ebp - 12ch], 20h
        ; Exact mapped bytes 7D 3F: jge 0x58549348
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [ebp - 128h]
        cmp dword ptr [ecx + eax*4 + 1d0h], 0
        ; Exact mapped bytes 74 27: je 0x58549346
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        mov dword ptr [ebp - 1e4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 9B CB F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xcb
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A9: jmp 0x585492f1
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov dword ptr [ebp - 150h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58549363
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 150h]
        add edx, 1
        mov dword ptr [ebp - 150h], edx
        cmp dword ptr [ebp - 150h], 30h
        ; Exact mapped bytes 7D 1B: jge 0x58549387
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 150h]
        mov ecx, dword ptr [ebp - 128h]
        mov ecx, dword ptr [ecx + eax*4 + 0dch]
        ; Exact mapped bytes E8 FC 51 F8 FF: call 0x584ce580
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CD: jmp 0x58549354
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov edx, dword ptr [ebp - 128h]
        cmp dword ptr [edx + 2f8h], 0
        ; Exact mapped bytes 74 25: je 0x585493bb
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 69 E8 F3 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 26 CB F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcb
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 1ech], edx
        push 0
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 66 64 F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x64
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 1f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 97 1D 27 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x1d
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 1f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 C8 CA F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xca
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 1fch], edx
        push 588a7634h
        ; Exact mapped bytes E8 BC 8B FD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 214h], eax
        mov eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 51 CC F3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xcc
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], 0
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x58549517
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 75 30: jne 0x58549497
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 8E D0 FF FF: call 0x58546500
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 200h], edx
        push 0
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 FF 80 27 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x58549517
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 204h], ecx
        push 0
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 DA 80 27 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 3F D0 FF FF: call 0x58546500
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 208h], eax
        push 0
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 B0 80 27 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 6E CF FF FF: call 0x58546460
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 20ch], eax
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 7A 80 27 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2F 7B 2E 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7b
        __asm _emit 0x2e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
