// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 3057 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58800360 .. +0xBC7 bytes.
extern "C" __declspec(naked) void FUN_58800360_segment_00() {
    __asm {
        push -1
        push 58982775h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2bch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 2b8h], eax
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 2d0h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        xor ebx, ebx
        cmp dword ptr [esi + 10524h], ebx
        ; Exact mapped bytes 0F 84 7F 0B 00 00: je 0x58800f2a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 218d4h], ebx
        ; Exact mapped bytes A1 A4 45 A2 58: mov eax, dword ptr [0x58a245a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [eax + 88h], ebx
        mov ecx, 19h
        ; Exact mapped bytes 66 89 88 8C 00 00 00: mov word ptr [eax + 0x8c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10524h]
        mov dword ptr [esi + 218dch], ebx
        movzx ecx, byte ptr [eax + 24h]
        and ecx, 0fh
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov dword ptr [esp + 30h], ecx
        mov ecx, dword ptr [esi + 10524h]
        ; Exact mapped bytes E8 7D 28 10 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 A6 94 FE FF: call 0x587e98a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2e0h]
        mov dword ptr [esi + 20d60h], ebx
        lea ebp, [ebx + 1]
        cmp dword ptr [esi + 218c4h], ebx
        ; Exact mapped bytes 0F 84 84 02 00 00: je 0x5880069a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 218cch]
        mov eax, 589baab0h
        ; Exact mapped bytes 66 39 08: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        ; Exact mapped bytes 74 11: je 0x58800438
        __asm _emit 0x74
        __asm _emit 0x11
        add eax, 0e84h
        cmp eax, 589c2d54h
        ; Exact mapped bytes 7C EF: jl 0x58800422
        __asm _emit 0x7c
        __asm _emit 0xef
        ; Exact mapped bytes E9 49 03 00 00: jmp 0x58800781
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [eax + 0a06h]
        ; Exact mapped bytes 8B 3D C4 C3 98 58: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        dec eax
        cmp eax, 15h
        ; Exact mapped bytes 77 79: ja 0x588004c9
        __asm _emit 0x77
        __asm _emit 0x79
        movzx ecx, byte ptr [eax + 58800f78h]
        ; Exact mapped bytes FF 24 8D 54 0F 80 58: jmp dword ptr [ecx*4 + 0x58800f54]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x0f
        __asm _emit 0x80
        __asm _emit 0x58
        push 5899d364h
        lea edx, [esp + 0d0h]
        push edx
        ; Exact mapped bytes EB 57: jmp 0x588004c4
        __asm _emit 0xeb
        __asm _emit 0x57
        push 5899d34ch
        ; Exact mapped bytes EB 48: jmp 0x588004bc
        __asm _emit 0xeb
        __asm _emit 0x48
        push 5899d334h
        lea ecx, [esp + 0d0h]
        push ecx
        ; Exact mapped bytes EB 41: jmp 0x588004c4
        __asm _emit 0xeb
        __asm _emit 0x41
        push 5899d31ch
        lea edx, [esp + 0d0h]
        push edx
        ; Exact mapped bytes EB 32: jmp 0x588004c4
        __asm _emit 0xeb
        __asm _emit 0x32
        push 5899d304h
        ; Exact mapped bytes EB 23: jmp 0x588004bc
        __asm _emit 0xeb
        __asm _emit 0x23
        push 5899d2ech
        lea ecx, [esp + 0d0h]
        push ecx
        ; Exact mapped bytes EB 1C: jmp 0x588004c4
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 5899d2d4h
        lea edx, [esp + 0d0h]
        push edx
        ; Exact mapped bytes EB 0D: jmp 0x588004c4
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5899d2d4h
        lea eax, [esp + 0d0h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 8
        lea ecx, [esp + 24ch]
        push 5899d2c0h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 8
        ; Exact mapped bytes 39 1D 30 46 A2 58: cmp dword ptr [0x58a24630], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 41: jne 0x58800524
        __asm _emit 0x75
        __asm _emit 0x41
        push 198h
        ; Exact mapped bytes E8 61 C7 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc7
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 2d8h], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 13: je 0x58800512
        __asm _emit 0x74
        __asm _emit 0x13
        push ebp
        push ebx
        lea edx, [esp + 254h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 60 38 0F 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x38
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58800514
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 2d8h], 0ffffffffh
        ; Exact mapped bytes A3 30 46 A2 58: mov dword ptr [0x58a24630], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 1D 34 46 A2 58: cmp dword ptr [0x58a24634], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 13: je 0x58800544
        __asm _emit 0x74
        __asm _emit 0x13
        movzx ecx, word ptr [eax + 0a06h]
        cmp ecx, dword ptr [esi + 104dch]
        ; Exact mapped bytes 0F 84 3D 02 00 00: je 0x58800781
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [eax + 0a06h]
        dec eax
        cmp eax, 15h
        ; Exact mapped bytes 0F 87 EC 00 00 00: ja 0x58800641
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 58800fb4h]
        ; Exact mapped bytes FF 24 95 90 0F 80 58: jmp dword ptr [edx*4 + 0x58800f90]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0x0f
        __asm _emit 0x80
        __asm _emit 0x58
        lea eax, [esp + 1cch]
        push 5899d2ach
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 104dch], ebp
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x5880063e
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 1cch]
        push 5899d298h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 104dch], 2
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x5880063e
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 1cch]
        push 5899d284h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 104dch], 3
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x5880063e
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 1cch]
        push 5899d270h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 104dch], 0ah
        ; Exact mapped bytes EB 6A: jmp 0x5880063e
        __asm _emit 0xeb
        __asm _emit 0x6a
        lea ecx, [esp + 1cch]
        push 5899d25ch
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 104dch], 0fh
        ; Exact mapped bytes EB 4F: jmp 0x5880063e
        __asm _emit 0xeb
        __asm _emit 0x4f
        lea edx, [esp + 1cch]
        push 5899d248h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 104dch], 10h
        ; Exact mapped bytes EB 34: jmp 0x5880063e
        __asm _emit 0xeb
        __asm _emit 0x34
        lea eax, [esp + 1cch]
        push 5899d234h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 104dch], 16h
        ; Exact mapped bytes EB 19: jmp 0x5880063e
        __asm _emit 0xeb
        __asm _emit 0x19
        lea ecx, [esp + 1cch]
        push 5899d234h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 104dch], 5
        add esp, 8
        push 198h
        ; Exact mapped bytes E8 03 C6 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc6
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 2d8h], ebp
        cmp eax, ebx
        ; Exact mapped bytes 74 26: je 0x58800683
        __asm _emit 0x74
        __asm _emit 0x26
        push ebp
        push ebx
        lea edx, [esp + 1d4h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 02 37 0F 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x37
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [esp + 2d8h], 0ffffffffh
        ; Exact mapped bytes A3 34 46 A2 58: mov dword ptr [0x58a24634], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x58800781
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esp + 2d8h], 0ffffffffh
        ; Exact mapped bytes A3 34 46 A2 58: mov dword ptr [0x58a24634], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x58800781
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax - 2710h]
        cmp ecx, 1387h
        ; Exact mapped bytes 77 13: ja 0x588006bb
        __asm _emit 0x77
        __asm _emit 0x13
        push eax
        push 5899d218h
        lea edx, [esp + 0d4h]
        push edx
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x58800778
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax - 1388h]
        cmp ecx, 1387h
        ; Exact mapped bytes 77 13: ja 0x588006dc
        __asm _emit 0x77
        __asm _emit 0x13
        push eax
        push 5899d200h
        lea edx, [esp + 0d4h]
        push edx
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x58800778
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax - 0fa0h]
        cmp ecx, 3
        ; Exact mapped bytes 77 64: ja 0x5880074b
        __asm _emit 0x77
        __asm _emit 0x64
        cmp eax, 0fa0h
        ; Exact mapped bytes 74 45: je 0x58800733
        __asm _emit 0x74
        __asm _emit 0x45
        cmp eax, 0fa1h
        ; Exact mapped bytes 75 18: jne 0x5880070d
        __asm _emit 0x75
        __asm _emit 0x18
        lea eax, [esp + 0cch]
        push 5899d1ech
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 74: jmp 0x58800781
        __asm _emit 0xeb
        __asm _emit 0x74
        cmp eax, 0fa2h
        ; Exact mapped bytes 75 18: jne 0x5880072c
        __asm _emit 0x75
        __asm _emit 0x18
        lea ecx, [esp + 0cch]
        push 5899d1d8h
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 55: jmp 0x58800781
        __asm _emit 0xeb
        __asm _emit 0x55
        cmp eax, 0fa3h
        ; Exact mapped bytes 75 4E: jne 0x58800781
        __asm _emit 0x75
        __asm _emit 0x4e
        lea edx, [esp + 0cch]
        push 5899d1c4h
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 36: jmp 0x58800781
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp eax, 0bb8h
        ; Exact mapped bytes 75 18: jne 0x5880076a
        __asm _emit 0x75
        __asm _emit 0x18
        lea eax, [esp + 0cch]
        push 5899d1b0h
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 17: jmp 0x58800781
        __asm _emit 0xeb
        __asm _emit 0x17
        push eax
        push 5899d19ch
        lea ecx, [esp + 0d4h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 0cch]
        mov dword ptr [esp + 0c8h], 0fh
        mov dword ptr [esp + 0c4h], ebx
        mov byte ptr [esp + 0b4h], 0
        lea ecx, [eax + 1]
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x588007a5
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, ecx
        push eax
        lea edx, [esp + 0d0h]
        push edx
        lea ecx, [esp + 0b8h]
        ; Exact mapped bytes E8 3D 48 F3 FF: call 0x58735000
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0xf3
        __asm _emit 0xff
        lea eax, [esp + 0b0h]
        push eax
        lea ecx, [esp + 24h]
        lea ebx, [esi + 10504h]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 2e0h], 2
        ; Exact mapped bytes E8 88 7A F4 FF: call 0x58748270
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edi, dword ptr [eax]
        mov edx, dword ptr [ebx + 18h]
        mov ebp, dword ptr [eax + 4]
        mov eax, dword ptr [ebx]
        mov dword ptr [esp + 2ch], edx
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x588007fe
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 74 05: je 0x58800803
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 6F C4 17 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc4
        __asm _emit 0x17
        __asm _emit 0x00
        cmp ebp, dword ptr [esp + 2ch]
        ; Exact mapped bytes 74 1C: je 0x58800825
        __asm _emit 0x74
        __asm _emit 0x1c
        test edi, edi
        ; Exact mapped bytes 75 14: jne 0x58800821
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 60 C4 17 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x17
        __asm _emit 0x00
        cmp ebp, dword ptr [edi + 18h]
        ; Exact mapped bytes 75 05: jne 0x5880081c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 56 C4 17 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc4
        __asm _emit 0x17
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 28h]
        ; Exact mapped bytes EB 53: jmp 0x58800874
        __asm _emit 0xeb
        __asm _emit 0x53
        mov edi, dword ptr [edi]
        ; Exact mapped bytes EB ED: jmp 0x58800812
        __asm _emit 0xeb
        __asm _emit 0xed
        push 98h
        ; Exact mapped bytes E8 1F C4 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc4
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 2d8h], 3
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x58800855
        __asm _emit 0x74
        __asm _emit 0x13
        lea ecx, [esp + 0cch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 7F 61 F9 FF: call 0x587969d0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58800857
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov byte ptr [esp + 2d8h], 2
        test edi, edi
        ; Exact mapped bytes 74 11: je 0x58800874
        __asm _emit 0x74
        __asm _emit 0x11
        lea edx, [esp + 0b0h]
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 2E F2 FF FF: call 0x587ffaa0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], edi
        mov eax, dword ptr [esp + 2e0h]
        add eax, 0ffffec78h
        cmp eax, 1387h
        ; Exact mapped bytes 77 0C: ja 0x58800893
        __asm _emit 0x77
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 21f04h]
        push edi
        ; Exact mapped bytes E8 BD BE FC FF: call 0x587cc750
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [esi + 10524h]
        mov ecx, dword ptr [esp + 2e0h]
        push 7ch
        add edx, 70h
        push 0
        mov ebx, 80h
        push edx
        mov dword ptr [esi + 21f0ch], ecx
        lea ebp, [ebx - 60h]
        ; Exact mapped bytes E8 8D C3 17 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10524h]
        mov ecx, 64h
        mov dword ptr [eax + 0a8h], ecx
        mov ecx, 0c8h
        mov dword ptr [eax + 0ach], ecx
        mov eax, dword ptr [esi + 10524h]
        mov dword ptr [eax + 0b0h], ebx
        mov dword ptr [eax + 0b4h], ebp
        mov eax, dword ptr [esi + 10524h]
        mov dword ptr [eax + 0b8h], ebp
        mov dword ptr [eax + 0bch], 10h
        mov eax, dword ptr [esi + 10524h]
        xor ebx, ebx
        mov dword ptr [eax + 50h], ebx
        mov dword ptr [eax + 54h], ebx
        mov eax, dword ptr [esi + 10524h]
        mov ecx, 40h
        mov dword ptr [eax + 0c0h], ecx
        xor ecx, ecx
        mov dword ptr [eax + 0c4h], ecx
        mov ecx, dword ptr [esi + 10524h]
        add esp, 0ch
        ; Exact mapped bytes E8 FC 91 10 00: call 0x58909b30
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10524h]
        mov ecx, dword ptr [eax + 0f0h]
        push 61a80h
        push ebx
        push ecx
        ; Exact mapped bytes E8 FC C2 17 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc2
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ech]
        ; Exact mapped bytes 8B 1D 14 46 A2 58: mov ebx, dword ptr [0x58a24614]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 0ffffd8f0h
        add esp, 0ch
        cmp edx, 1387h
        ; Exact mapped bytes 77 0C: ja 0x58800976
        __asm _emit 0x77
        __asm _emit 0x0c
        mov ecx, edi
        ; Exact mapped bytes E8 8F 91 10 00: call 0x58909b00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        cmp eax, 0ah
        ; Exact mapped bytes 74 1F: je 0x58800995
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 2e0h]
        add eax, 0fffff830h
        cmp eax, 0bb7h
        ; Exact mapped bytes 77 1E: ja 0x588009a7
        __asm _emit 0x77
        __asm _emit 0x1e
        mov ecx, edi
        ; Exact mapped bytes E8 70 91 10 00: call 0x58909b00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        cmp eax, 0ah
        ; Exact mapped bytes 75 12: jne 0x588009a7
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes A1 24 46 A2 58: mov eax, dword ptr [0x58a24624]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 05: je 0x588009a5
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x588009a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        xor ebp, ebp
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 81 C2 17 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x17
        __asm _emit 0x00
        cdq
        mov ecx, 9
        idiv ecx
        inc edx
        cmp dword ptr [ebx + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x588009db
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x588009db
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [ebx + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x588009db
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, eax
        ; Exact mapped bytes EB 02: jmp 0x588009dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov eax, dword ptr [esi + 10524h]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ecx + ebp], edx
        add ebp, 14h
        cmp ebp, 61a80h
        ; Exact mapped bytes 7C B9: jl 0x588009b0
        __asm _emit 0x7c
        __asm _emit 0xb9
        cmp dword ptr [esp + 2e0h], 12h
        ; Exact mapped bytes 8B 2D 14 46 A2 58: mov ebp, dword ptr [0x58a24614]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes 75 06: jne 0x58800a15
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 8B 2D 18 46 A2 58: mov ebp, dword ptr [0x58a24618]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x18
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [esi + 218c4h], 0
        ; Exact mapped bytes 74 10: je 0x58800a2e
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 34 46 A2 58: mov edx, dword ptr [0x58a24634]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D 30 46 A2 58: mov ebp, dword ptr [0x58a24630]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 20h], edx
        xor eax, eax
        mov dword ptr [esi + 438h], eax
        mov dword ptr [esi + 43ch], eax
        mov dword ptr [esi + 440h], eax
        mov dword ptr [esi + 444h], eax
        mov dword ptr [esi + 448h], eax
        mov dword ptr [esi + 44ch], eax
        mov dword ptr [esi + 450h], eax
        mov ecx, edi
        mov dword ptr [esi + 454h], eax
        lea ebx, [eax + 3]
        ; Exact mapped bytes E8 96 90 10 00: call 0x58909b00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x00
        cmp eax, 0ah
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x58800b24
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10524h]
        push 0
        push 100h
        push ecx
        push 0
        push edi
        ; Exact mapped bytes E8 07 35 FC FF: call 0x587c3f90
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10524h]
        push 0
        push 100h
        push ecx
        push 1
        push edi
        ; Exact mapped bytes E8 F1 34 FC FF: call 0x587c3f90
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10524h]
        push 0
        push 100h
        push ecx
        push 2
        push edi
        ; Exact mapped bytes E8 DB 34 FC FF: call 0x587c3f90
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10524h]
        push 0
        push 100h
        push ecx
        push ebx
        push edi
        ; Exact mapped bytes E8 C6 34 FC FF: call 0x587c3f90
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10524h]
        push 0
        push 100h
        push ecx
        push 4
        push edi
        ; Exact mapped bytes E8 B0 34 FC FF: call 0x587c3f90
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10524h]
        push 101h
        push 100h
        push ecx
        push 7
        push edi
        ; Exact mapped bytes E8 97 34 FC FF: call 0x587c3f90
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 24 46 A2 58: mov eax, dword ptr [0x58a24624]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 05: je 0x58800b09
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x58800b0b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 10524h]
        push eax
        push 8
        push edi
        ; Exact mapped bytes E8 D6 32 FC FF: call 0x587c3df0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ebx, 9
        ; Exact mapped bytes E9 1E 01 00 00: jmp 0x58800c42
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 218c4h], 0
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x58800bcd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10524h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x58800bcd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 100h
        push ecx
        push ebp
        push 0
        push edi
        ; Exact mapped bytes E8 10 D2 10 00: call 0x5890dd60
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10524h]
        push 101h
        push 100h
        push ecx
        push ebp
        push 1
        push edi
        ; Exact mapped bytes E8 F6 D1 10 00: call 0x5890dd60
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 46 A2 58: mov eax, dword ptr [0x58a24614]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 10524h]
        push eax
        push 2
        push edi
        ; Exact mapped bytes E8 72 32 FC FF: call 0x587c3df0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B9 04 02 00 00 0F: cmp word ptr [ecx + 0x204], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x58800c42
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 21c4ch]
        ; Exact mapped bytes E8 83 7A F8 FF: call 0x58788620
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [esi + 21c4ch]
        mov eax, dword ptr [esi + 10524h]
        mov dword ptr [edx + 914h], eax
        mov ecx, dword ptr [esi + 21c4ch]
        ; Exact mapped bytes E8 46 68 F8 FF: call 0x58787400
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [esi + 218b5h], 0
        mov dword ptr [esi + 218b8h], 0
        ; Exact mapped bytes EB 75: jmp 0x58800c42
        __asm _emit 0xeb
        __asm _emit 0x75
        mov ecx, dword ptr [esi + 10524h]
        push 0
        push 100h
        push ecx
        push ebp
        push 0
        push edi
        ; Exact mapped bytes E8 7C D1 10 00: call 0x5890dd60
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10524h]
        mov edx, dword ptr [esp + 20h]
        push 0
        push 100h
        push ecx
        push edx
        push 1
        push edi
        ; Exact mapped bytes E8 61 D1 10 00: call 0x5890dd60
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 46 A2 58: mov eax, dword ptr [0x58a24614]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 10524h]
        push eax
        push 2
        push edi
        ; Exact mapped bytes E8 DD 31 FC FF: call 0x587c3df0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 21c4ch]
        mov edx, dword ptr [esi + 10524h]
        mov dword ptr [ecx + 914h], edx
        mov ecx, dword ptr [esi + 21c4ch]
        ; Exact mapped bytes E8 D0 67 F8 FF: call 0x58787400
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 14 46 A2 58: mov eax, dword ptr [0x58a24614]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 21c4ch]
        push eax
        push edi
        ; Exact mapped bytes E8 0E 64 F8 FF: call 0x58787050
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x64
        __asm _emit 0xf8
        __asm _emit 0xff
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 C6 8E 10 00: call 0x58909b10
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, eax
        test ebp, ebp
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x58800d95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        cmp ebx, 9
        setne cl
        push 10000h
        lea edx, [esi + 458h]
        push 0
        push edx
        dec ecx
        and ecx, 0fffffff5h
        mov dword ptr [esp + 2ch], ecx
        ; Exact mapped bytes E8 D1 BF 17 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xbf
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        push ebx
        lea eax, [esp + 38h]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes E8 31 8E 10 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x00
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 8E D1 01 00 00: jle 0x58800e6a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea ecx, [esp + 38h]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 1ch], 0
        ; Exact mapped bytes E8 0B 8E 10 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x00
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 0F 8E B3 00 00 00: jle 0x58800d72
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp], -1
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58800d51
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [esp + 20h]
        push ebx
        lea ecx, [esp + 38h]
        add edx, eax
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes E8 DC 8D 10 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [eax + 40h]
        imul edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, eax
        shl ecx, 0ah
        add ecx, dword ptr [esi + eax*4 + 438h]
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esi + ecx*8 + 458h], edx
        mov edx, dword ptr [ebp]
        push ebx
        lea ecx, [esp + 38h]
        add edx, eax
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes E8 A3 8D 10 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [eax + 44h]
        imul edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, eax
        shl ecx, 0ah
        add ecx, dword ptr [esi + eax*4 + 438h]
        mov dword ptr [esi + ecx*8 + 45ch], edx
        mov edx, dword ptr [ebp]
        add edx, dword ptr [esp + 20h]
        inc dword ptr [esi + edx*4 + 438h]
        lea eax, [esi + edx*4 + 438h]
        inc dword ptr [esp + 14h]
        push ebx
        lea eax, [esp + 38h]
        push eax
        mov ecx, edi
        add ebp, 14h
        ; Exact mapped bytes E8 5B 8D 10 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 8C 4E FF FF FF: jl 0x58800cc0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        inc dword ptr [esp + 18h]
        push ebx
        lea edx, [esp + 38h]
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 3D 8D 10 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        cmp ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 0F 8C 10 FF FF FF: jl 0x58800ca0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x58800e6a
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 458h]
        xor ebp, ebp
        mov dword ptr [esp + 14h], ecx
        lea edi, [esi + 438h]
        xor eax, eax
        mov dword ptr [edi], eax
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 1ch], ecx
        mov eax, dword ptr [esp + 20h]
        and eax, 1
        imul eax, eax, 0b4h
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esp + 28h], eax
        xor edx, edx
        ; Exact mapped bytes EB 04: jmp 0x58800dd5
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 28h]
        mov ebx, dword ptr [esp + 2e0h]
        movzx ebx, word ptr [ebx*2 + 589c3e30h]
        lea ebx, [ebp + ebx*8]
        mov ebx, dword ptr [ebx*8 + 589c31b0h]
        add ebx, edx
        add ebx, eax
        mov eax, dword ptr [esp + 2e0h]
        mov dword ptr [ecx], ebx
        movzx eax, word ptr [eax*2 + 589c3e30h]
        lea eax, [ebp + eax*8]
        mov ebx, dword ptr [eax*8 + 589c31b4h]
        mov eax, dword ptr [esp + 18h]
        add ebx, eax
        mov dword ptr [ecx + 4], ebx
        inc dword ptr [edi]
        add edx, 0b4h
        add ecx, 8
        cmp edx, 5a0h
        ; Exact mapped bytes 7C A6: jl 0x58800dd1
        __asm _emit 0x7c
        __asm _emit 0xa6
        mov ecx, dword ptr [esp + 1ch]
        inc dword ptr [esp + 20h]
        add eax, 28h
        add ecx, 100h
        cmp eax, 320h
        mov dword ptr [esp + 1ch], ecx
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 0F 8C 68 FF FF FF: jl 0x58800db7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        inc ebp
        add ecx, 2000h
        add edi, 4
        cmp ebp, 8
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 0F 8C 3D FF FF FF: jl 0x58800da7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10524h]
        mov eax, dword ptr [ecx + 0b0h]
        imul eax, dword ptr [ecx + 0a8h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 104d4h], eax
        mov eax, dword ptr [ecx + 0b4h]
        imul eax, dword ptr [ecx + 0ach]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 104d8h], eax
        mov edx, dword ptr [ecx + 0b4h]
        imul edx, dword ptr [ecx + 0ach]
        mov eax, dword ptr [ecx + 0b0h]
        imul eax, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 2c0h]
        push 0
        push 0
        push edx
        push eax
        ; Exact mapped bytes E8 FF 51 09 00: call 0x588960d0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10524h]
        mov dword ptr [esi + 10528h], 3e8h
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 20h]
        push 3e8h
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov al, byte ptr [esp + 30h]
        mov esi, dword ptr [esi + 10524h]
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        and al, 0fh
        ; Exact mapped bytes 66 0F B6 C8: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        mov eax, 0fff0h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        cmp dword ptr [esp + 0c8h], 10h
        ; Exact mapped bytes 72 10: jb 0x58800f2a
        __asm _emit 0x72
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 0b4h]
        push ecx
        ; Exact mapped bytes E8 1B BD 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xbd
        __asm _emit 0x17
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58800F2A .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58800360_segment_01() {
    __asm {
        mov ecx, dword ptr [esp + 2d0h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 2b8h]
        xor ecx, esp
        ; Exact mapped bytes E8 8F BC 17 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xbc
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 2c8h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
