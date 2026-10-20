// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D99F0 .. +0x3AD bytes.
extern "C" __declspec(naked) void FUN_587d99f0() {
    __asm {
        sub esp, 104h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 100h], eax
        push esi
        push edi
        push 24h
        mov esi, ecx
        ; Exact mapped bytes E8 3F 32 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x32
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x587d9a36
        __asm _emit 0x74
        __asm _emit 0x20
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [eax + 18h], ecx
        mov dword ptr [eax + 1ch], ecx
        mov dword ptr [eax + 20h], ecx
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x587d9a38
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        xor eax, eax
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], eax
        mov dword ptr [edi + 8], eax
        mov dword ptr [edi + 0ch], eax
        mov dword ptr [edi + 10h], eax
        mov dword ptr [edi + 14h], eax
        mov dword ptr [edi + 18h], eax
        mov dword ptr [edi + 1ch], eax
        push 100h
        push eax
        mov dword ptr [edi + 20h], eax
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes E8 E4 31 1A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x31
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 120h]
        add esp, 0ch
        or ecx, dword ptr [esp + 118h]
        ; Exact mapped bytes 74 1F: je 0x587d9a96
        __asm _emit 0x74
        __asm _emit 0x1f
        lea edx, [esp + 114h]
        push edx
        push edi
        ; Exact mapped bytes E8 6B 35 1A 00: call 0x5897cff0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x35
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x587d9a96
        __asm _emit 0x75
        __asm _emit 0x0a
        add dword ptr [edi + 14h], 76ch
        inc dword ptr [edi + 10h]
        movzx eax, word ptr [esp + 110h]
        cmp eax, 3
        ; Exact mapped bytes 0F 87 D6 02 00 00: ja 0x587d9d7d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 A0 9D 7D 58: jmp dword ptr [eax*4 + 0x587d9da0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x9d
        __asm _emit 0x7d
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899ba20h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4e0h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 16 82 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x82
        __asm _emit 0xf5
        __asm _emit 0xff
        push 5899b9f8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4e4h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 00 82 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x82
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4e8h]
        push 5898c922h
        ; Exact mapped bytes E8 F0 81 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4ech]
        push 5898c922h
        ; Exact mapped bytes E8 E0 81 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4f0h]
        push 5898c922h
        ; Exact mapped bytes E8 D0 81 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4e0h]
        push 26h
        push 10eh
        ; Exact mapped bytes E8 6E 97 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x97
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4e4h]
        push 35h
        push 10eh
        ; Exact mapped bytes E8 5C 97 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x97
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4e0h]
        mov dword ptr [eax + 60h], 0d7ffh
        ; Exact mapped bytes E9 37 02 00 00: jmp 0x587d9d7d
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        mov edx, dword ptr [edi + 10h]
        mov eax, dword ptr [edi + 14h]
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push ecx
        push edx
        push eax
        push 5899b9cch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 18h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899b9a8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4e0h]
        add esp, 18h
        push eax
        ; Exact mapped bytes E8 5C 81 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        push 5899b980h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4e4h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 46 81 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4e8h]
        lea edx, [esp + 8]
        push edx
        ; Exact mapped bytes E8 36 81 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4ech]
        push 5898c922h
        ; Exact mapped bytes E8 26 81 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4f0h]
        push 5898c922h
        ; Exact mapped bytes E8 16 81 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4e0h]
        push 26h
        push 10eh
        ; Exact mapped bytes E8 B4 96 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x96
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4e4h]
        push 35h
        push 104h
        ; Exact mapped bytes E8 A2 96 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x96
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4e8h]
        push 44h
        push 0ebh
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x587d9b2f
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0ch]
        mov edx, dword ptr [edi + 10h]
        mov eax, dword ptr [edi + 14h]
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push ecx
        push edx
        push eax
        push 5899b9cch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        lea ecx, [esp + 18h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899b95ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4e0h]
        add esp, 18h
        push eax
        ; Exact mapped bytes E8 A2 80 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        push 5899b930h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4e4h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 8C 80 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        push 5899b904h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4e8h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 76 80 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        push 5899b8d8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4ech]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 60 80 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4f0h]
        lea edx, [esp + 8]
        push edx
        ; Exact mapped bytes E8 50 80 F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4e0h]
        push 26h
        push 104h
        ; Exact mapped bytes E8 EE 95 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4e4h]
        push 35h
        push 0f0h
        ; Exact mapped bytes E8 DC 95 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4e8h]
        push 44h
        push 0f0h
        ; Exact mapped bytes E8 CA 95 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4ech]
        push 53h
        push 0f0h
        ; Exact mapped bytes E8 B8 95 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4f0h]
        push 62h
        push 0e8h
        ; Exact mapped bytes E9 45 FE FF FF: jmp 0x587d9b2f
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899b8b0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4e0h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 DA 7F F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7f
        __asm _emit 0xf5
        __asm _emit 0xff
        push 5899b880h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 4e4h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 C4 7F F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4e8h]
        push 5898c922h
        ; Exact mapped bytes E8 B4 7F F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4ech]
        push 5898c922h
        ; Exact mapped bytes E8 A4 7F F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4f0h]
        push 5898c922h
        ; Exact mapped bytes E8 94 7F F5 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4e0h]
        push 26h
        push 0feh
        ; Exact mapped bytes E8 32 95 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4e4h]
        push 35h
        push 0ffh
        ; Exact mapped bytes E8 20 95 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4e0h]
        mov dword ptr [ecx + 60h], 0d7ffh
        mov ecx, esi
        ; Exact mapped bytes E8 2C D0 FF FF: call 0x587d6db0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 108h]
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 46 2E 1A 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2e
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 104h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
