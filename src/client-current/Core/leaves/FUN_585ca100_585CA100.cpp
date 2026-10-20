// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CA100 .. +0x399 bytes.
extern "C" __declspec(naked) void FUN_585ca100_585CA100() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885b8ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 284h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 268h], ecx
        push 240h
        push 0
        lea eax, [ebp - 250h]
        push eax
        ; Exact mapped bytes E8 CB 2C 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x2c
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 274h], 0
        mov ecx, dword ptr [ebp - 268h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 0D B6 EC FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb6
        __asm _emit 0xec
        __asm _emit 0xff
        cdq
        and edx, 3ffh
        add eax, edx
        sar eax, 0ah
        mov dword ptr [ebp - 290h], eax
        mov edx, dword ptr [ebp - 268h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 CA B5 EC FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0xff
        cdq
        and edx, 1ffh
        add eax, edx
        sar eax, 9
        mov dword ptr [ebp - 28ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 8C 00 00: call 0x585d2dd0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 1F EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0xec
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 264h], esi
        mov dword ptr [ebp - 258h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585ca1d3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 258h]
        add eax, 1
        mov dword ptr [ebp - 258h], eax
        mov ecx, dword ptr [ebp - 258h]
        cmp ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes 0F 8D 9A 02 00 00: jge 0x585ca47f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 254h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585ca200
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 254h]
        add edx, 1
        mov dword ptr [ebp - 254h], edx
        mov eax, dword ptr [ebp - 254h]
        cmp eax, dword ptr [ebp - 290h]
        ; Exact mapped bytes 0F 8D 68 02 00 00: jge 0x585ca47a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 258h]
        add ecx, dword ptr [ebp - 264h]
        mov edx, dword ptr [ebp - 254h]
        add edx, dword ptr [ebp - 264h]
        imul ecx, edx
        add ecx, dword ptr [ebp - 264h]
        push ecx
        ; Exact mapped bytes E8 54 6A 28 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x6a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 2B 6A 28 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6a
        __asm _emit 0x28
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 24 02 00 00: jne 0x585ca475
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 260h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585ca26c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 260h]
        add edx, 1
        mov dword ptr [ebp - 260h], edx
        ; Exact mapped bytes E8 FB 69 28 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x69
        __asm _emit 0x28
        __asm _emit 0x00
        cdq
        mov ecx, 3
        idiv ecx
        cmp dword ptr [ebp - 260h], edx
        ; Exact mapped bytes 0F 8D F0 01 00 00: jge 0x585ca475
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 254h]
        mov eax, dword ptr [ebp - 258h]
        lea ecx, [eax + edx*2]
        add ecx, dword ptr [ebp - 260h]
        imul ecx, dword ptr [ebp - 264h]
        imul edx, dword ptr [ebp - 258h], 3
        add edx, dword ptr [ebp - 254h]
        add edx, dword ptr [ebp - 260h]
        imul ecx, edx
        push ecx
        ; Exact mapped bytes E8 D0 69 28 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x69
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        push 98h
        ; Exact mapped bytes E8 3A 6D 26 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6d
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 26ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 26ch], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x585ca36f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 258h]
        shl esi, 9
        ; Exact mapped bytes E8 77 69 28 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x69
        __asm _emit 0x28
        __asm _emit 0x00
        and eax, 800001ffh
        ; Exact mapped bytes 79 07: jns 0x585ca303
        __asm _emit 0x79
        __asm _emit 0x07
        dec eax
        or eax, 0fffffe00h
        inc eax
        add esi, eax
        mov dword ptr [ebp - 278h], esi
        ; Exact mapped bytes E8 5C 69 28 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x69
        __asm _emit 0x28
        __asm _emit 0x00
        and eax, 800003ffh
        ; Exact mapped bytes 79 07: jns 0x585ca31e
        __asm _emit 0x79
        __asm _emit 0x07
        dec eax
        or eax, 0fffffc00h
        inc eax
        mov ecx, dword ptr [ebp - 254h]
        shl ecx, 0ah
        add ecx, eax
        mov dword ptr [ebp - 27ch], ecx
        mov edx, dword ptr [ebp - 268h]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 280h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 278h]
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov eax, dword ptr [ebp - 280h]
        push eax
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 39 4B EF FF: call 0x584beea0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4b
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ca379
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 270h], 0
        mov ecx, dword ptr [ebp - 270h]
        mov dword ptr [ebp - 284h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 284h]
        mov dword ptr [ebp - 25ch], edx
        push 1
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 2B D0 01 00: call 0x585e73d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        push 2710h
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 CB BA EB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xba
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes E8 B2 68 28 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x00
        cdq
        mov ecx, 18h
        idiv ecx
        add edx, 8
        push edx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 8F 17 F7 FF: call 0x5853bb60
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x17
        __asm _emit 0xf7
        __asm _emit 0xff
        push 12ch
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 6F B3 01 00: call 0x585e5750
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        push 6
        ; Exact mapped bytes E8 84 68 28 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x00
        cdq
        mov ecx, 6
        idiv ecx
        push edx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 04 4D EF FF: call 0x584bf100
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4d
        __asm _emit 0xef
        __asm _emit 0xff
        push 12ch
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 84 3A FD FF: call 0x5859de90
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 268h]
        mov eax, dword ptr [edx + 20f2ch]
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp - 25ch]
        push ecx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 50 5D FF FF: call 0x585c0180
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 254h], 30h
        lea eax, [ebp + edx - 250h]
        mov ecx, dword ptr [ebp - 258h]
        mov edx, dword ptr [eax + ecx*4]
        add edx, 1
        imul eax, dword ptr [ebp - 254h], 30h
        lea ecx, [ebp + eax - 250h]
        mov eax, dword ptr [ebp - 258h]
        mov dword ptr [ecx + eax*4], edx
        mov ecx, dword ptr [ebp - 274h]
        add ecx, 1
        mov dword ptr [ebp - 274h], ecx
        ; Exact mapped bytes E9 E8 FD FF FF: jmp 0x585ca25d
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 77 FD FF FF: jmp 0x585ca1f1
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 45 FD FF FF: jmp 0x585ca1c4
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 BB 6B 26 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6b
        __asm _emit 0x26
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
