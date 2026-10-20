// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878DEB0 .. +0x590 bytes.
extern "C" __declspec(naked) void FUN_5878deb0_5878DEB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ach
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 2F 4F 00 00: call 0x58792e00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5878dedc
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 54 05 00 00: jmp 0x5878e430
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 0f230h
        ; Exact mapped bytes 77 25: ja 0x5878df10
        __asm _emit 0x77
        __asm _emit 0x25
        cmp dword ptr [ebp - 3ch], 0f230h
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5878df83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 2
        ; Exact mapped bytes 74 3E: je 0x5878df3c
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp - 3ch], 0ee48h
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x5878e058
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1E 05 00 00: jmp 0x5878e42e
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 0f231h
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x5878dfd8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 0f232h
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x5878e02d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 0f233h
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x5878e02d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F2 04 00 00: jmp 0x5878e42e
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0b0h]
        ; Exact mapped bytes 75 18: jne 0x5878df62
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 8ch], 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C1 08 00 00: call 0x5878e820
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5878df7e
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0b4h]
        ; Exact mapped bytes 75 0E: jne 0x5878df7e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 AB 04 00 00: jmp 0x5878e42e
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 53 28 00 00: call 0x587907e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 58h], edx
        push 0c8h
        push 130h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 75 76 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 77 9F CF FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x9f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0a8h]
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0a8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 56 04 00 00: jmp 0x5878e42e
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 FE 27 00 00: call 0x587907e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 5ch], edx
        push 0c8h
        push 130h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 20 76 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 22 9F CF FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x9f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0ach]
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0ach]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 01 04 00 00: jmp 0x5878e42e
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 64h], eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        nop
        ; Exact mapped bytes E9 D6 03 00 00: jmp 0x5878e42e
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0a8h]
        ; Exact mapped bytes 0F 85 35 01 00 00: jne 0x5878e19f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 2
        ; Exact mapped bytes 75 07: jne 0x5878e077
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B9 03 00 00: jmp 0x5878e430
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5F 27 00 00: call 0x587907e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x5878e08f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A1 03 00 00: jmp 0x5878e430
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes E8 03 F9 F8 FF: call 0x5871d9a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x5878e0ab
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 85 03 00 00: jmp 0x5878e430
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x5878e0bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 40h]
        add eax, 1
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes E8 D5 F8 F8 FF: call 0x5871d9a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, al
        cmp dword ptr [ebp - 40h], edx
        ; Exact mapped bytes 7D 22: jge 0x5878e0f5
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 68h], ecx
        movzx edx, byte ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 64 69 F9 FF: call 0x58724a50
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp + ecx*4 - 34h], eax
        ; Exact mapped bytes EB BF: jmp 0x5878e0b4
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 0B: je 0x5878e112
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 48h], 1
        ; Exact mapped bytes 74 2C: je 0x5878e139
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x5878e19f
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 7C F8 F8 FF: call 0x5871d9a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        movzx ecx, ax
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 FA 23 00 00: call 0x58790530
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 66: jmp 0x5878e19f
        __asm _emit 0xeb
        __asm _emit 0x66
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9D 26 00 00: call 0x587907e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 6ch], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 8A 7F CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x7f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 16 68 CF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 08 68 CF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 95 71 00 00: call 0x58795320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 70h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes 0F 85 D4 01 00 00: jne 0x5878e385
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 2
        ; Exact mapped bytes 75 07: jne 0x5878e1be
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 72 02 00 00: jmp 0x5878e430
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 18 26 00 00: call 0x587907e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x5878e1d6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5A 02 00 00: jmp 0x5878e430
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 DC F7 F8 FF: call 0x5871d9c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 96 01 00 00: jle 0x5878e385
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 7ch], eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 DB 95 F9 FF: call 0x587277e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 30 FF FF: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 51: je 0x5878e271
        __asm _emit 0x74
        __asm _emit 0x51
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x5878e232
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 44h]
        add edx, 1
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 6
        ; Exact mapped bytes 7D 39: jge 0x5878e271
        __asm _emit 0x7d
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 20 68 CF FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 44h], 0ch
        movzx edx, word ptr [eax + ecx + 5ah]
        test edx, edx
        ; Exact mapped bytes 74 22: je 0x5878e26f
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 9E 8F D4 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x8f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        push 0
        push 0
        push 0
        push 1267h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 08 AB D4 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xab
        __asm _emit 0xd4
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x5878e430
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B8: jmp 0x5878e229
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 0B: je 0x5878e28e
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 50h], 1
        ; Exact mapped bytes 74 7E: je 0x5878e307
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x5878e385
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 F6 92 F9 FF: call 0x587275a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 03 00 00: call 0x5878e600
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3F: jne 0x5878e2f4
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes E8 E6 7E FF FF: call 0x587861a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        push 6
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 63 7B FF FF: call 0x58785e30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 80h]
        ; Exact mapped bytes E8 65 39 00 00: call 0x58791c40
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 33 1B 00 00: call 0x5878fe20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 3C 01 00 00: jmp 0x5878e430
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 54h]
        push ecx
        push 1
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2C 22 00 00: call 0x58790530
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7E: jmp 0x5878e385
        __asm _emit 0xeb
        __asm _emit 0x7e
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CF 24 00 00: call 0x587907e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 8ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 B6 7D CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x7d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 3F 66 CF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x66
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 2E 66 CF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x66
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 AF 6F 00 00: call 0x58795320
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 70h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 70h]
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x5878e42e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 42 24 00 00: call 0x587907e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 10h], 0ah
        ; Exact mapped bytes 75 20: jne 0x5878e3c5
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 9ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 5F 63 F9 FF: call 0x58724720
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x63
        __asm _emit 0xf9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 6B: jmp 0x5878e430
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 F0 01 00 00: call 0x5878e5c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 FF 01 00 00: call 0x5878e5e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 AE 01 00 00: call 0x5878e5a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 7D 65 CF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x65
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 33 1D 00 00: call 0x58790160
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 16 2C 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
