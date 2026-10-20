// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586310F0 .. +0x453 bytes.
extern "C" __declspec(naked) void FUN_586310f0_586310F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 60h]
        cmp ecx, 1
        ; Exact mapped bytes 74 10: je 0x58631115
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 60h]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 E7 01 00 00: jne 0x586312fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 30 05 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 4
        ; Exact mapped bytes 7D 31: jge 0x5863115d
        __asm _emit 0x7d
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 C9 F3 E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf3
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E8 B4 60 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x60
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 1f4h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1E 7C EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 04 04 00 00: jmp 0x5863155c
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6C 01 00 00: jmp 0x586312c9
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 E8 04 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 4
        ; Exact mapped bytes 7D 31: jge 0x586311a5
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 81 F3 E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E8 6C 60 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x60
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 1f5h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D6 7B EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7b
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BC 03 00 00: jmp 0x5863155c
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x586312c9
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 9D 04 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes E8 8C 04 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5863121b
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes E8 29 09 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 1B 09 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E8 F6 5F EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x5f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 1f6h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 60 7B EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7b
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 46 03 00 00: jmp 0x5863155c
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x586312c9
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 80h]
        ; Exact mapped bytes E8 27 04 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 4
        ; Exact mapped bytes 7C 1A: jl 0x5863124f
        __asm _emit 0x7c
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 0D 04 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 4
        ; Exact mapped bytes 7D 3F: jge 0x5863128e
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 80h]
        ; Exact mapped bytes E8 B3 08 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 A5 08 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x08
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E8 80 5F EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 1f7h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EA 7A EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x7a
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D0 02 00 00: jmp 0x5863155c
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3B: jmp 0x586312c9
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 B4 03 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 7D 21: jge 0x586312c9
        __asm _emit 0x7d
        __asm _emit 0x21
        ; Exact mapped bytes E8 43 5F EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x5f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 1f8h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AD 7A EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x7a
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 93 02 00 00: jmp 0x5863155c
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 60h]
        cmp edx, 1
        ; Exact mapped bytes 75 1E: jne 0x586312f3
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 16 5F EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        push 0
        push 131h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D0 04 EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x586312fc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C5 FA FF FF: call 0x58630dc0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 60h]
        cmp ecx, 3
        ; Exact mapped bytes 74 10: je 0x58631318
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 60h]
        cmp eax, 4
        ; Exact mapped bytes 0F 85 44 02 00 00: jne 0x5863155c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 2A 03 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 4
        ; Exact mapped bytes 7D 34: jge 0x58631366
        __asm _emit 0x7d
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 C0 F1 E9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf1
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E8 AB 5E EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x5e
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 226h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 15 7A EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7a
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FB 01 00 00: jmp 0x5863155c
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x5863148a
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 DC 02 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes E8 CB 02 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x586313dc
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes E8 68 07 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0a4h]
        ; Exact mapped bytes E8 5A 07 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x07
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E8 35 5E EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x5e
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        push 0
        push 1f6h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9F 79 EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x79
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 85 01 00 00: jmp 0x5863155c
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x5863148a
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 66 02 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 4
        ; Exact mapped bytes 7C 1A: jl 0x58631410
        __asm _emit 0x7c
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes E8 4C 02 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 4
        ; Exact mapped bytes 7D 3F: jge 0x5863144f
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 F2 06 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 E4 06 19 00: call 0x587c1b10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x06
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF 5D EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x5d
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        push 0
        push 1f7h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 29 79 EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x79
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x5863155c
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3B: jmp 0x5863148a
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes E8 F3 01 EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 7D 21: jge 0x5863148a
        __asm _emit 0x7d
        __asm _emit 0x21
        ; Exact mapped bytes E8 82 5D EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x5d
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        push 0
        push 0
        push 1f8h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 EC 78 EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x78
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x5863155c
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 60h]
        cmp eax, 3
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x58631553
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 34 E5 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 1E E9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1e
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        add eax, 5890bfd0h
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 34 E5 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 1E E9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        imul edx, ecx, 0e0h
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes 66 8B 48 40: mov cx, word ptr [eax + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x40
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        cmp eax, 4eh
        ; Exact mapped bytes 74 09: je 0x58631517
        __asm _emit 0x74
        __asm _emit 0x09
        movzx ecx, word ptr [ebp - 4]
        cmp ecx, 4fh
        ; Exact mapped bytes 75 1E: jne 0x58631535
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 D4 5C EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x5c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 0
        push 0
        push 0
        push 132h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 8E 02 EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x58631551
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 B6 5C EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x5c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        push 0
        push 0
    }
}
