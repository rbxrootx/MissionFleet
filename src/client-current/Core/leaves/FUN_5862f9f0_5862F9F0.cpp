// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862F9F0 .. +0x2A7 bytes.
extern "C" __declspec(naked) void FUN_5862f9f0_5862F9F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 858h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 844h], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x5862fab9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 844h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes 74 11: je 0x5862fa35
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 844h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0ach]
        ; Exact mapped bytes 75 51: jne 0x5862fa86
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 844h]
        movzx edx, byte ptr [ecx + 60h]
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x5862fa51
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 844h]
        ; Exact mapped bytes E8 A2 16 00 00: call 0x586310f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 33: jmp 0x5862fa84
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 844h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes 75 0C: jne 0x5862fa6e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 844h]
        mov byte ptr [edx + 60h], 2
        ; Exact mapped bytes EB 0A: jmp 0x5862fa78
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 844h]
        mov byte ptr [eax + 60h], 3
        mov ecx, dword ptr [ebp - 844h]
        ; Exact mapped bytes E8 6D 16 00 00: call 0x586310f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2E: jmp 0x5862fab4
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 844h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 90h]
        ; Exact mapped bytes 74 11: je 0x5862faa8
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 844h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes 75 0C: jne 0x5862fab4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 844h]
        ; Exact mapped bytes E8 CD 12 00 00: call 0x58630d80
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CC 01 00 00: jmp 0x5862fc85
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 0F 85 BF 01 00 00: jne 0x5862fc85
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 74 EA FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 85 AB 01 00 00: jne 0x5862fc85
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 844h]
        movzx eax, byte ptr [edx + 60h]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x5862fba9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 844h]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 55 1B EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1b
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 840h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 844h]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 39 1B EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1b
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 828h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 844h]
        mov ecx, dword ptr [edx + 80h]
        ; Exact mapped bytes E8 1A 1B EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1b
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 81fh]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 844h]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 FB 1A EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 807h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 844h]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 DC 1A EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 848h], eax
        mov ecx, dword ptr [ebp - 844h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 84ch], edx
        push 800h
        mov eax, dword ptr [ebp - 848h]
        push eax
        mov ecx, dword ptr [ebp - 84ch]
        push ecx
        ; Exact mapped bytes E8 EC CC 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xcc
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 6D: jmp 0x5862fc16
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 844h]
        movzx eax, byte ptr [edx + 60h]
        cmp eax, 4
        ; Exact mapped bytes 75 5E: jne 0x5862fc16
        __asm _emit 0x75
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 844h]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 87 1A EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 840h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 844h]
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 68 1A EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 81fh]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 844h]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 49 1A EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 807h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 73 EA FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F8 10 00 00: call 0x58630d20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 850h], eax
        mov ecx, dword ptr [ebp - 850h]
        push ecx
        lea edx, [ebp - 840h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 D3 F4 FF: call 0x5857d000
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd3
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 844h]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 854h], ecx
        mov edx, dword ptr [ebp - 844h]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 858h], edx
        push 0
        push 0f230h
        mov eax, dword ptr [ebp - 844h]
        push eax
        mov ecx, dword ptr [ebp - 854h]
        ; Exact mapped bytes FF 95 A8 F7 FF FF: call dword ptr [ebp - 0x858]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 BF 13 20 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x13
        __asm _emit 0x20
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
