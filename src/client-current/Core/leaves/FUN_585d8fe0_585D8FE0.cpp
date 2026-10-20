// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D8FE0 .. +0x422 bytes.
extern "C" __declspec(naked) void FUN_585d8fe0_585D8FE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 88h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB D9 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd9
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E1 03 00 00: je 0x585d93ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 D9 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd9
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 86 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0xef
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 C4 03 00 00: jne 0x585d93ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 0f00h
        ; Exact mapped bytes 0F 85 AC 03 00 00: jne 0x585d93ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], 40h
        mov dword ptr [ebp - 94h], 46h
        mov dword ptr [ebp - 98h], 40h
        mov dword ptr [ebp - 9ch], 96h
        mov edx, dword ptr [ebp - 88h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0fh
        ; Exact mapped bytes 75 28: jne 0x585d90a4
        __asm _emit 0x75
        __asm _emit 0x28
        mov dword ptr [ebp - 90h], 6eh
        mov dword ptr [ebp - 94h], 23h
        mov dword ptr [ebp - 98h], 5ah
        mov dword ptr [ebp - 9ch], 2dh
        mov ecx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ecx + 106e4h]
        cdq
        mov ecx, 19h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 2E 03 00 00: jne 0x585d93ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 D8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EE D8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 90h]
        ; Exact mapped bytes 7C 7C: jl 0x585d9156
        __asm _emit 0x7c
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB D8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 D8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 71 C6 EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc6
        __asm _emit 0xeb
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 94h]
        cmp esi, eax
        ; Exact mapped bytes 7F 4D: jg 0x585d9156
        __asm _emit 0x7f
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC D8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 2F EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2f
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 98h]
        ; Exact mapped bytes 7C 33: jl 0x585d9156
        __asm _emit 0x7c
        __asm _emit 0x33
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 D8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7B 2F EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 08 C6 EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc6
        __asm _emit 0xeb
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 9ch]
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 3E 02 00 00: jle 0x585d9394
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        cmp dword ptr [ecx + 106dch], 0fh
        ; Exact mapped bytes 0F 8E 12 01 00 00: jle 0x585d927b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A D8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 8E ED 00 00: call 0x585e7f10
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 1067ch], 1
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 0fffffffh
        or ecx, 20000000h
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 10678h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF D7 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 78 32 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x32
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 BE EC FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 D7 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 29 95 FF FF: call 0x585d2710
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 76 FF FF FF: mov word ptr [ebp - 0x8a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE D7 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 27 C4 EB FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 74 FF FF FF: mov word ptr [ebp - 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 10694h]
        mov dword ptr [ebp - 0a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        movzx edx, word ptr [ebp - 8ah]
        push edx
        movzx eax, word ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 45 FA FF: call 0x5857d770
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 10da0h]
        mov dword ptr [ebp - 0a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 6B CC EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x585d9367
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, 0fh
        sub edx, dword ptr [ecx + 106dch]
        mov dword ptr [ebp - 0ach], edx
        push 588ad0c0h
        ; Exact mapped bytes E8 54 8D F4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 20f10h]
        mov dword ptr [ebp - 0b4h], ecx
        push 0a0bec8h
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 E4 C1 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x1e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 26ch]
        mov dword ptr [ebp - 0b8h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 B0 2A 1E 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x2a
        __asm _emit 0x1e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 26ch]
        mov dword ptr [ebp - 0bch], ecx
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 26ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 40 FF FF FF: call dword ptr [ebp - 0xc0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 10da0h]
        mov dword ptr [ebp - 0c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 7A CB EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 106dch]
        add eax, 1
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 106dch], eax
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 106e0h], 0
        ; Exact mapped bytes EB 5A: jmp 0x585d93ee
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 106dch], 0
        ; Exact mapped bytes 7E 1B: jle 0x585d93be
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 106dch]
        sub edx, 1
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [eax + 106dch], edx
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 106e0h], 1
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 10da0h]
        mov dword ptr [ebp - 0c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 F3 CA EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xca
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov eax, 1
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 52 7C 25 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7c
        __asm _emit 0x25
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
