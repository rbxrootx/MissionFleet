// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C73D0 .. +0x1FA bytes.
extern "C" __declspec(naked) void FUN_587c73d0() {
    __asm {
        sub esp, 124h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 120h], eax
        push ebx
        push esi
        push edi
        lea eax, [esp + 0ch]
        push eax
        mov esi, ecx
        ; Exact mapped bytes FF 15 60 C1 98 58: call dword ptr [0x5898c160]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea ecx, [esp + 1ch]
        push ecx
        ; Exact mapped bytes E8 D2 DC FC FF: call 0x587950d0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [esp + 1eh]
        movzx eax, word ptr [esp + 1ch]
        movzx ecx, word ptr [esp + 1ah]
        push edx
        movzx edx, word ptr [esp + 1ch]
        push eax
        movzx eax, word ptr [esp + 1eh]
        push ecx
        movzx ecx, word ptr [esp + 1eh]
        push edx
        push eax
        movzx eax, word ptr [esp + 24h]
        push ecx
        cdq
        mov ecx, 64h
        idiv ecx
        lea edi, [esi + 0ch]
        push edx
        push 5899af78h
        push 20h
        push edi
        ; Exact mapped bytes E8 20 46 F8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, word ptr [esp + 52h]
        movzx eax, word ptr [esp + 50h]
        movzx ecx, word ptr [esp + 4eh]
        push edx
        movzx edx, word ptr [esp + 4eh]
        push eax
        movzx eax, word ptr [esp + 50h]
        push ecx
        push edx
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        push 5899af60h
        lea edx, [esp + 70h]
        push 100h
        push edx
        ; Exact mapped bytes E8 E6 45 F8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4ch
        push edi
        push 5899af40h
        lea ebx, [esi + 2ch]
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        push 80h
        push ebx
        ; Exact mapped bytes E8 C5 45 F8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x587c75b2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x587c74c1
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp eax, ecx
        ; Exact mapped bytes 75 08: jne 0x587c74c1
        __asm _emit 0x75
        __asm _emit 0x08
        push ebx
        ; Exact mapped bytes E8 B1 B5 02 00: call 0x587f2a70
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x587c74f1
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 94 45 A2 58: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x587c74dc
        __asm _emit 0x74
        __asm _emit 0x11
        cmp eax, ecx
        ; Exact mapped bytes 75 0D: jne 0x587c74dc
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0ffffffh
        push ebx
        ; Exact mapped bytes E8 56 B2 FC FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x587c74f1
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x587c74f1
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0ffffffh
        push ebx
        ; Exact mapped bytes E8 5F 5D 0C 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        cmp dword ptr [ecx + 0f8h], 0
        ; Exact mapped bytes 75 2C: jne 0x587c752c
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 23h
        ; Exact mapped bytes 7E 16: jle 0x587c7524
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587c7524
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x587c7526
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ecx + 0f8h], eax
        push 0ah
        lea eax, [esp + 30h]
        push 0
        push eax
        ; Exact mapped bytes E8 B0 5A 1B 00: call 0x5897cfea
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x5a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        add esp, 0ch
        push eax
        ; Exact mapped bytes E8 67 FB FF FF: call 0x587c70b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        mov ebx, ecx
        ; Exact mapped bytes E8 83 B9 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x13
        __asm _emit 0x00
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 EB B9 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb9
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        mov ebx, 1
        mov dword ptr [ecx + 100h], ebx
        mov edi, dword ptr [esi + 0b4h]
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 40h]
        mov edx, 1388h
        ; Exact mapped bytes 66 03 50 26: add dx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x50
        __asm _emit 0x26
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587c759b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B5 B9 13 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb9
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587c75a8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 38 B9 13 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb9
        __asm _emit 0x13
        __asm _emit 0x00
        mov esi, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 09 5E 24: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 12ch]
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 17 56 1B 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x56
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 124h
        ret
    }
}
