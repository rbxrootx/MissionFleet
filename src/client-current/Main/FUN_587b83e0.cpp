// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 2859 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B83E0 .. +0x72A bytes.
extern "C" __declspec(naked) void FUN_587b83e0_segment_00() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 1d4h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 1d0h], eax
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ebp + 8]
        movzx eax, word ptr [esi + 6]
        push edi
        mov edi, ecx
        mov ecx, 8000h
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 64: jne 0x587b847b
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [esi + 4]
        cmp eax, 80000002h
        ; Exact mapped bytes 74 17: je 0x587b8438
        __asm _emit 0x74
        __asm _emit 0x17
        cmp eax, 80000003h
        ; Exact mapped bytes 0F 85 C9 0A 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 5D F5 FF FF: call 0x587b7990
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BD 0A 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 84 45 A2 58: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 64h], 40000000h
        cmp dword ptr [esi + 0ch], 80020010h
        ; Exact mapped bytes 0F 85 A3 0A 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 58a0b450h
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        inc eax
        push eax
        push 58a0b450h
        push 0
        push 0
        push 8001b101h
        mov ecx, edi
        ; Exact mapped bytes E8 FA 87 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x87
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes E9 7A 0A 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8001h
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x587b850c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 4]
        cmp esi, 8001000fh
        ; Exact mapped bytes 74 5D: je 0x587b84f1
        __asm _emit 0x74
        __asm _emit 0x5d
        cmp esi, 80010109h
        ; Exact mapped bytes 0F 85 55 0A 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 44 31 9C 58: mov edx, dword ptr [0x589c3144]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D AC 31 9C 58: mov ecx, dword ptr [0x589c31ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x31
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, eax
        push eax
        push 0d8h
        mov dword ptr [esp + 2ch], edx
        lea edx, [esp + 20h]
        push edx
        push esi
        xor ecx, 0aah
        push eax
        mov dword ptr [esp + 3ch], ecx
        push 80020010h
        mov ecx, edi
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 34h], 10060000h
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 104h], eax
        ; Exact mapped bytes E8 84 87 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes E9 04 0A 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, edi
        ; Exact mapped bytes E8 69 87 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x87
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes E9 E9 09 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8002h
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 85 DB 09 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, 8002b111h
        ; Exact mapped bytes 0F 87 98 04 00 00: ja 0x587b89c0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 7B 02 00 00: je 0x587b87a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020a00h
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x587b85dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002b101h
        ; Exact mapped bytes 0F 85 B1 09 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 0F 84 DE FE FF FF: je 0x587b842c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 B4 A0 58: mov eax, dword ptr [0x58a0b4a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 A8 45 A2 58: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 A0 B4 A0 58: mov esi, dword ptr [0x58a0b4a0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        mov ebx, dword ptr [edx + 0a0h]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x587b8576
        __asm _emit 0x74
        __asm _emit 0x0d
        movzx eax, ax
        push 0
        or eax, 30000h
        push eax
        ; Exact mapped bytes EB 10: jmp 0x587b8586
        __asm _emit 0xeb
        __asm _emit 0x10
        test esi, esi
        ; Exact mapped bytes 74 2A: je 0x587b85a4
        __asm _emit 0x74
        __asm _emit 0x2a
        movzx ecx, si
        push 0
        or ecx, 40000h
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 03 F8 FF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 74 13: je 0x587b85a4
        __asm _emit 0x74
        __asm _emit 0x13
        movzx edx, si
        push 0
        or edx, 20000h
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 EC F7 FF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 74 12: je 0x587b85ba
        __asm _emit 0x74
        __asm _emit 0x12
        movzx eax, bx
        push 0
        or eax, 10000h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 D6 F7 FF FF: call 0x587b7d90
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 29 48 0D 00: call 0x5888cdf0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 0b8h], 2
        ; Exact mapped bytes E9 19 09 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0ah]
        mov edi, 1
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 0A: jne 0x587b85f4
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 39 7E 0E: cmp word ptr [esi + 0xe], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x587b86e0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x587b867f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [esi + 0ah]
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dl, 1
        ; Exact mapped bytes 75 41: jne 0x587b864b
        __asm _emit 0x75
        __asm _emit 0x41
        cmp dword ptr [ecx + 0cch], 0
        ; Exact mapped bytes 74 13: je 0x587b8626
        __asm _emit 0x74
        __asm _emit 0x13
        push 0ffffh
        push ebx
        and eax, 0ff00h
        push eax
        ; Exact mapped bytes E8 FC 5A 06 00: call 0x5881e120
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x587b864b
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp dl, 1
        ; Exact mapped bytes 75 20: jne 0x587b864b
        __asm _emit 0x75
        __asm _emit 0x20
        cmp dword ptr [ecx + 0cch], 0
        ; Exact mapped bytes 75 17: jne 0x587b864b
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0ffffh
        push ebx
        and eax, 0ff00h
        push eax
        ; Exact mapped bytes E8 65 AB F9 FF: call 0x587531b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xab
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, ecx
        ; Exact mapped bytes 75 0B: jne 0x587b8665
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 0ch]
        mov eax, dword ptr [esi + 8]
        push ebx
        push edx
        push eax
        ; Exact mapped bytes EB 76: jmp 0x587b86db
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, ecx
        ; Exact mapped bytes 75 4B: jne 0x587b86ba
        __asm _emit 0x75
        __asm _emit 0x4b
        mov edx, dword ptr [esi + 0ch]
        mov eax, dword ptr [esi + 8]
        push ebx
        push edx
        push eax
        ; Exact mapped bytes E8 E3 D3 04 00: call 0x58805a60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 61: jmp 0x587b86e0
        __asm _emit 0xeb
        __asm _emit 0x61
        and eax, 0ff00h
        cmp eax, 800h
        ; Exact mapped bytes 75 55: jne 0x587b86e0
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 38: je 0x587b86d1
        __asm _emit 0x74
        __asm _emit 0x38
        movzx eax, word ptr [esi + 0eh]
        sub eax, 0
        ; Exact mapped bytes 74 18: je 0x587b86ba
        __asm _emit 0x74
        __asm _emit 0x18
        sub eax, edi
        ; Exact mapped bytes 75 3A: jne 0x587b86e0
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        movzx eax, word ptr [esi + 0ch]
        push eax
        push ebx
        ; Exact mapped bytes E8 D8 4C 0D 00: call 0x5888d390
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x587b86e0
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 0ch]
        mov edx, dword ptr [esi + 8]
        push edi
        push ebx
        push ecx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 B1 B7 0D 00: call 0x58893e80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x587b86e0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 0ch]
        push ebx
        push eax
        push 800h
        ; Exact mapped bytes E8 20 05 03 00: call 0x587e8c00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0ah]
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 85 08 08 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 7E 0C: cmp word ptr [esi + 0xc], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes 75 28: jne 0x587b871b
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 0cch]
        cmp eax, edi
        ; Exact mapped bytes 75 11: jne 0x587b8714
        __asm _emit 0x75
        __asm _emit 0x11
        push edi
        push ebx
        push 800h
        ; Exact mapped bytes E8 11 5A 06 00: call 0x5881e120
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 E1 07 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 64: jne 0x587b877c
        __asm _emit 0x75
        __asm _emit 0x64
        push edi
        ; Exact mapped bytes EB 4B: jmp 0x587b8766
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 85 D1 07 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 0E 00: cmp word ptr [esi + 0xe], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C6 07 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 0ah]
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp al, 1
        ; Exact mapped bytes 75 40: jne 0x587b877c
        __asm _emit 0x75
        __asm _emit 0x40
        cmp dword ptr [ecx + 0cch], 0
        ; Exact mapped bytes 74 12: je 0x587b8757
        __asm _emit 0x74
        __asm _emit 0x12
        push 0
        push ebx
        push 800h
        ; Exact mapped bytes E8 CE 59 06 00: call 0x5881e120
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 9E 07 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 75 21: jne 0x587b877c
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [ecx + 0cch], 0
        ; Exact mapped bytes 75 18: jne 0x587b877c
        __asm _emit 0x75
        __asm _emit 0x18
        push 0
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push 800h
        ; Exact mapped bytes E8 39 AA F9 FF: call 0x587531b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 79 07 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 67 07 00 00: je 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ch]
        mov eax, dword ptr [esi + 8]
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push ebx
        push edx
        push eax
        ; Exact mapped bytes E8 DC B6 0D 00: call 0x58893e80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 4C 07 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x587b88be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0eh]
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 0F: jne 0x587b87cc
        __asm _emit 0x75
        __asm _emit 0x0f
        movzx ecx, word ptr [esi + 0ch]
        mov dword ptr [edi + 184h], ecx
        ; Exact mapped bytes E9 29 07 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 1A: jne 0x587b87ec
        __asm _emit 0x75
        __asm _emit 0x1a
        movzx edx, word ptr [esi + 0ch]
        mov dword ptr [edi + 188h], edx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 57 0D 00: call 0x5888df10
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 09 07 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 1A: jne 0x587b880c
        __asm _emit 0x75
        __asm _emit 0x1a
        movzx eax, word ptr [esi + 0ch]
        mov dword ptr [edi + 18ch], eax
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 57 0D 00: call 0x5888df10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 E9 06 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 75 1A: jne 0x587b882c
        __asm _emit 0x75
        __asm _emit 0x1a
        movzx ecx, word ptr [esi + 0ch]
        mov dword ptr [edi + 190h], ecx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 56 0D 00: call 0x5888df10
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 C9 06 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 BF 06 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea ecx, [edi + 178h]
        mov edi, edi
        cmp dword ptr [ecx], -1
        ; Exact mapped bytes 74 0B: je 0x587b8850
        __asm _emit 0x74
        __asm _emit 0x0b
        inc eax
        add ecx, 4
        cmp eax, 3
        ; Exact mapped bytes 7C F2: jl 0x587b8840
        __asm _emit 0x7c
        __asm _emit 0xf2
        ; Exact mapped bytes EB 43: jmp 0x587b8893
        __asm _emit 0xeb
        __asm _emit 0x43
        mov dword ptr [edi + eax*4 + 178h], 5
        lea eax, [eax + eax*2]
        lea edx, [ebx + 18h]
        lea eax, [edi + eax*8 + 130h]
        mov esi, 18h
        sub edx, eax
        nop
        lea ecx, [esi + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x587b888b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx + eax]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x587b888b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x587b8870
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587b888f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x587b8890
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 09: jne 0x587b88aa
        __asm _emit 0x75
        __asm _emit 0x09
        lea edx, [ebx + 18h]
        push edx
        ; Exact mapped bytes E8 66 4D 03 00: call 0x587ed610
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebx, 18h
        push ebx
        ; Exact mapped bytes E8 87 5A 0D 00: call 0x5888e340
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5a
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 37 06 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 0ch]
        sub esi, 1
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x587b895a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, 1
        ; Exact mapped bytes 74 4A: je 0x587b8919
        __asm _emit 0x74
        __asm _emit 0x4a
        sub esi, 1
        ; Exact mapped bytes 0F 85 1D 06 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x587b8908
        __asm _emit 0x75
        __asm _emit 0x1d
        mov esi, dword ptr [eax + 20d34h]
        push 6464ffh
        push 5899a2d0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 88 34 15 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x34
        __asm _emit 0x15
        __asm _emit 0x00
        push 6464ffh
        push 5899a2d0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes E9 CD 05 00 00: jmp 0x587b8ee6
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x587b8949
        __asm _emit 0x75
        __asm _emit 0x1d
        mov esi, dword ptr [eax + 20d34h]
        push 6464ffh
        push 5899a2ach
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 47 34 15 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x34
        __asm _emit 0x15
        __asm _emit 0x00
        push 6464ffh
        push 5899a2ach
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes E9 8C 05 00 00: jmp 0x587b8ee6
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 28: jne 0x587b8995
        __asm _emit 0x75
        __asm _emit 0x28
        mov esi, dword ptr [eax + 20d34h]
        push 6464ffh
        push 5899a290h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 06 34 15 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x34
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB F3 FF FF: call 0x587b7d50
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 6464ffh
        push 5899a290h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 A0 48 0D 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 F3 FF FF: call 0x587b7d10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 35 05 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 7ffd4eeeh
        cmp eax, 3
        ; Exact mapped bytes 0F 87 27 05 00 00: ja 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 14 8F 7B 58: jmp dword ptr [eax*4 + 0x587b8f14]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x8f
        __asm _emit 0x7b
        __asm _emit 0x58
        movzx eax, word ptr [esi + 0eh]
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 1D: je 0x587b89fc
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 21: je 0x587b8a06
        __asm _emit 0x74
        __asm _emit 0x21
        movzx ecx, word ptr [esi + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push ebx
        ; Exact mapped bytes E8 F9 51 0D 00: call 0x5888dbf0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 F9 04 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 EF 04 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebx + 18h]
        push edx
        push ebx
        ; Exact mapped bytes E8 CA 52 0D 00: call 0x5888dce0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA 04 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 0F 84 D0 04 00 00: je 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 0eh]
        ; Exact mapped bytes 66 83 F9 02: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 3B: jne 0x587b8a6a
        __asm _emit 0x75
        __asm _emit 0x3b
        movzx edx, word ptr [esi + 0ch]
        mov eax, dword ptr [edi + 188h]
        cmp eax, edx
        ; Exact mapped bytes 75 2D: jne 0x587b8a6a
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push 2
        push 58a0b450h
        ; Exact mapped bytes E8 30 53 0D 00: call 0x5888dd80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 54 0D 00: call 0x5888df10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [edi + 188h], 0ffffffffh
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x587b8b97
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 75 3B: jne 0x587b8aab
        __asm _emit 0x75
        __asm _emit 0x3b
        movzx edx, word ptr [esi + 0ch]
        mov eax, dword ptr [edi + 18ch]
        cmp eax, edx
        ; Exact mapped bytes 75 2D: jne 0x587b8aab
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push 3
        push 58a0b450h
        ; Exact mapped bytes E8 EF 52 0D 00: call 0x5888dd80
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 54 0D 00: call 0x5888df10
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [edi + 18ch], 0ffffffffh
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x587b8b97
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 75 3B: jne 0x587b8aec
        __asm _emit 0x75
        __asm _emit 0x3b
        movzx edx, word ptr [esi + 0ch]
        mov eax, dword ptr [edi + 190h]
        cmp eax, edx
        ; Exact mapped bytes 75 2D: jne 0x587b8aec
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push 4
        push 58a0b450h
        ; Exact mapped bytes E8 AE 52 0D 00: call 0x5888dd80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 54 0D 00: call 0x5888df10
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [edi + 190h], 0ffffffffh
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x587b8b97
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x587b8b97
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi + 178h]
        xor esi, esi
        lea ebx, [edi + 130h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 06: jmp 0x587b8b10
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B8B10 .. +0x401 bytes.
extern "C" __declspec(naked) void FUN_587b83e0_segment_01() {
    __asm {
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [ecx], 5
        ; Exact mapped bytes 75 32: jne 0x587b8b4b
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [esp + 10h]
        add ecx, 18h
        mov eax, ebx
        mov dl, byte ptr [eax]
        cmp dl, byte ptr [ecx]
        ; Exact mapped bytes 75 1A: jne 0x587b8b42
        __asm _emit 0x75
        __asm _emit 0x1a
        test dl, dl
        ; Exact mapped bytes 74 12: je 0x587b8b3e
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [eax + 1]
        cmp dl, byte ptr [ecx + 1]
        ; Exact mapped bytes 75 0E: jne 0x587b8b42
        __asm _emit 0x75
        __asm _emit 0x0e
        add eax, 2
        add ecx, 2
        test dl, dl
        ; Exact mapped bytes 75 E4: jne 0x587b8b22
        __asm _emit 0x75
        __asm _emit 0xe4
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x587b8b47
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        sbb eax, -1
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x587b8b5b
        __asm _emit 0x74
        __asm _emit 0x10
        add dword ptr [esp + 14h], 4
        inc esi
        add ebx, 18h
        cmp esi, 3
        ; Exact mapped bytes 7C B7: jl 0x587b8b10
        __asm _emit 0x7c
        __asm _emit 0xb7
        ; Exact mapped bytes EB 3C: jmp 0x587b8b97
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [eax + 18h]
        push edx
        push eax
        ; Exact mapped bytes E8 01 53 0D 00: call 0x5888de70
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + esi*4 + 178h], 0ffffffffh
        lea ecx, [esi + esi*2]
        lea ecx, [edi + ecx*8 + 130h]
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], eax
        mov dword ptr [ecx + 10h], eax
        mov dword ptr [ecx + 14h], eax
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 0b8h], 2
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 3C 42 0D 00: call 0x5888cdf0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x42
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [eax + 154h]
        push 5899a274h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AB 7E FB FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 0E 03 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 2
        ; Exact mapped bytes E8 90 D0 02 00: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 63 F0 02 00: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 F3 02 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0eh]
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 1D: je 0x587b8c29
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 21: je 0x587b8c33
        __asm _emit 0x74
        __asm _emit 0x21
        movzx ecx, word ptr [esi + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push ebx
        ; Exact mapped bytes E8 5C 51 0D 00: call 0x5888dd80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 CC 02 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 C2 02 00 00: jne 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebx + 18h]
        push edx
        push ebx
        ; Exact mapped bytes E8 2D 52 0D 00: call 0x5888de70
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 AD 02 00 00: jmp 0x587b8ef5
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 0F 84 7C 02 00 00: je 0x587b8ece
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0eh]
        add eax, -2
        cmp eax, 3
        ; Exact mapped bytes 0F 87 B7 01 00 00: ja 0x587b8e19
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 24 8F 7B 58: jmp dword ptr [eax*4 + 0x587b8f24]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x8f
        __asm _emit 0x7b
        __asm _emit 0x58
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x587b8c99
        __asm _emit 0x75
        __asm _emit 0x1d
        mov esi, dword ptr [eax + 20d34h]
        push 999999h
        push 5899a254h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F7 30 15 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x30
        __asm _emit 0x15
        __asm _emit 0x00
        push 999999h
        push 5899a254h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x587b8e0e
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x587b8cde
        __asm _emit 0x75
        __asm _emit 0x1d
        mov esi, dword ptr [eax + 20d34h]
        push 999999h
        push 5899a230h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B2 30 15 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x30
        __asm _emit 0x15
        __asm _emit 0x00
        push 999999h
        push 5899a230h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x587b8e0e
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x587b8d23
        __asm _emit 0x75
        __asm _emit 0x1d
        mov esi, dword ptr [eax + 20d34h]
        push 999999h
        push 5899a20ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6D 30 15 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x30
        __asm _emit 0x15
        __asm _emit 0x00
        push 999999h
        push 5899a20ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x587b8e0e
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push 64h
        push eax
        mov dword ptr [esp + 0f8h], eax
        mov dword ptr [esp + 0fch], eax
        mov dword ptr [esp + 100h], eax
        mov dword ptr [esp + 104h], eax
        mov dword ptr [esp + 108h], eax
        mov dword ptr [esp + 10ch], eax
        lea eax, [esp + 178h]
        push eax
        ; Exact mapped bytes E8 D4 3E 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x3e
        __asm _emit 0x1c
        __asm _emit 0x00
        lea eax, [esp + 0fch]
        mov edx, ebx
        mov ecx, eax
        add esp, 0ch
        mov esi, 18h
        sub edx, ecx
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x587b8dab
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [eax + edx]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x587b8dab
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x587b8d90
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587b8daf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x587b8db0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        lea edx, [esp + 0f0h]
        push edx
        push 5899a1e8h
        mov byte ptr [eax], 0
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 178h]
        push 64h
        push eax
        ; Exact mapped bytes E8 87 2C F9 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 18: jne 0x587b8e01
        __asm _emit 0x75
        __asm _emit 0x18
        push 999999h
        lea ecx, [esp + 174h]
        push ecx
        mov ecx, dword ptr [eax + 20d34h]
        ; Exact mapped bytes E8 8F 2F 15 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2f
        __asm _emit 0x15
        __asm _emit 0x00
        push 999999h
        lea edx, [esp + 174h]
        push edx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 44 0D 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, ebx
        add ecx, 18h
        mov ebx, ecx
        lea edx, [ebx + 1]
        mov al, byte ptr [ebx]
        inc ebx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587b8e23
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ebx, edx
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x587b8ef5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], ecx
        push 65h
        lea eax, [esp + 10ch]
        push 0
        push eax
        ; Exact mapped bytes E8 01 3E 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x3e
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        cmp ebx, 64h
        ; Exact mapped bytes 7F 1A: jg 0x587b8e69
        __asm _emit 0x7f
        __asm _emit 0x1a
        mov ecx, dword ptr [esp + 10h]
        push ebx
        push ecx
        lea edx, [esp + 110h]
        push edx
        ; Exact mapped bytes E8 EA 3E 1C 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x3e
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        xor ebx, ebx
        ; Exact mapped bytes EB 1E: jmp 0x587b8e87
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [esp + 10h]
        mov esi, eax
        add eax, 64h
        mov ecx, 19h
        lea edi, [esp + 108h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [esp + 10h], eax
        sub ebx, 64h
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 18: jne 0x587b8eac
        __asm _emit 0x75
        __asm _emit 0x18
        push 999999h
        lea ecx, [esp + 10ch]
        push ecx
        mov ecx, dword ptr [eax + 20d34h]
        ; Exact mapped bytes E8 E4 2E 15 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2e
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 999999h
        lea edx, [esp + 10ch]
        push edx
        ; Exact mapped bytes E8 8C 43 0D 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x43
        __asm _emit 0x0d
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 85 6A FF FF FF: jne 0x587b8e36
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x587b8ef5
        __asm _emit 0xeb
        __asm _emit 0x27
        mov esi, dword ptr [esi + 0ch]
        sub esi, 1
        ; Exact mapped bytes 75 1F: jne 0x587b8ef5
        __asm _emit 0x75
        __asm _emit 0x1f
        push 6464ffh
        push 5899a17ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 5B 43 0D 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x43
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1dch]
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        mov eax, 1
        ; Exact mapped bytes E8 CF 3C 1C 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
