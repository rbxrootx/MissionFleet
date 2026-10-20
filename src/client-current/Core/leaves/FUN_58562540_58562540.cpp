// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58562540 .. +0x332 bytes.
extern "C" __declspec(naked) void FUN_58562540_58562540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 FB FF FF: call 0x58562150
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        xor eax, 55555555h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        xor edx, 55555555h
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 44 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x44
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], eax
        ; Exact mapped bytes 75 29: jne 0x585625b1
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 BD F0 F6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x585625b1
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 CB 11 00: call 0x5867f150
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 0F 85 6E 01 00 00: jne 0x5856272c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 34h], 64h
        ; Exact mapped bytes 0F 8E C8 00 00 00: jle 0x58562693
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 7C 43: jl 0x5856261c
        __asm _emit 0x7c
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 34h], 64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 FA FF FF: call 0x58562000
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 75 1B: jne 0x58562610
        __asm _emit 0x75
        __asm _emit 0x1b
        push 73h
        push 72h
        push 18h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A F6 20 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf6
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 0
        ; Exact mapped bytes EB 75: jmp 0x58562691
        __asm _emit 0xeb
        __asm _emit 0x75
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 43 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x43
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], eax
        ; Exact mapped bytes 75 53: jne 0x58562682
        __asm _emit 0x75
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 75 26: jne 0x5856265e
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 75 1D: jne 0x5856265e
        __asm _emit 0x75
        __asm _emit 0x1d
        push 71h
        push 70h
        push 17h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E F6 20 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf6
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 40000000h
        ; Exact mapped bytes EB 24: jmp 0x58562682
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 75 1B: jne 0x58562682
        __asm _emit 0x75
        __asm _emit 0x1b
        push 75h
        push 74h
        push 19h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 F5 20 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf5
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 40000000h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], edx
        ; Exact mapped bytes EB 2C: jmp 0x585626bf
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 7F 14: jg 0x585626bf
        __asm _emit 0x7f
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 0
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 60: je 0x58562727
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 33: jge 0x58562702
        __asm _emit 0x7d
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 28: jne 0x58562700
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7C 08: jl 0x585626f4
        __asm _emit 0x7c
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 06: jmp 0x585626fa
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 25: jmp 0x58562727
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 10h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7F 08: jg 0x5856271b
        __asm _emit 0x7f
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 06: jmp 0x58562721
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x585627b4
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 14h], 40000000h
        ; Exact mapped bytes 75 7C: jne 0x585627b4
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 7E 56: jle 0x58562797
        __asm _emit 0x7e
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 3D: je 0x58562795
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 8]
        sub eax, 10h
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7F 08: jg 0x58562771
        __asm _emit 0x7f
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 06: jmp 0x58562777
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 7E 0F: jle 0x58562795
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], ecx
        ; Exact mapped bytes EB 13: jmp 0x585627aa
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 F8 FF FF: call 0x58562000
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 42 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x42
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x5856285f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
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
        ; Exact mapped bytes E8 EA 41 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x41
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 2F F3 FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2f
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 7E: jne 0x5856285f
        __asm _emit 0x75
        __asm _emit 0x7e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 15: jne 0x585627fc
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 75 0C: jne 0x585627fc
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 1
        ; Exact mapped bytes EB 10: jmp 0x5856280c
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x5856280c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC D3 F3 FF: call 0x5849fc00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd3
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7C 26: jl 0x5856283f
        __asm _emit 0x7c
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 1D: jne 0x5856283f
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        push 78h
        push 18h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D F4 20 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 1
        ; Exact mapped bytes EB 20: jmp 0x5856285f
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 D3 F3 FF: call 0x5849fc00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd3
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 13: jge 0x5856285f
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 0A: je 0x5856285f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 8]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
