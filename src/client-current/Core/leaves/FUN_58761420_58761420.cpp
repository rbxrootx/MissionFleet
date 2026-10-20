// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58761420 .. +0x31F bytes.
extern "C" __declspec(naked) void FUN_58761420_58761420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5eech], 50000h
        ; Exact mapped bytes 0F 85 4D 02 00 00: jne 0x5876168a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 65 3C D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x3c
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E2 01 00 00: je 0x58761635
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ed4h]
        xor edx, 55555555h
        cmp edx, 1
        ; Exact mapped bytes 0F 85 CA 01 00 00: jne 0x58761635
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5edch]
        xor ecx, 55555555h
        ; Exact mapped bytes 0F 85 B5 01 00 00: jne 0x58761635
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ee0h]
        xor eax, 55555555h
        cmp eax, 1
        ; Exact mapped bytes 0F 85 9E 01 00 00: jne 0x58761635
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5f34h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 AC D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        imul esi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 55 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x55
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A 45 D3 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x45
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 54 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x54
        __asm _emit 0xd2
        __asm _emit 0xff
        imul esi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 54 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x54
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1A 45 D3 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x45
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DD 9F D6 FF: call 0x584cb4f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x9f
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x587615e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5f00h], 0
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x587615e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f00h], 40000000h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x587615d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f5ch]
        ; Exact mapped bytes E8 E0 41 D3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x41
        __asm _emit 0xd3
        __asm _emit 0xff
        mov esi, eax
        push 0ddh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 35 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x35
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 6E: je 0x587615d4
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 54 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x54
        __asm _emit 0xd2
        __asm _emit 0xff
        sub eax, 190h
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C AB D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xab
        __asm _emit 0xd2
        __asm _emit 0xff
        neg eax
        add eax, 12ch
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 C6 E0 FF: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5f5ch]
        mov dword ptr [ebp - 18h], edx
        push 0ddh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 35 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x35
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8D 56 D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 40000000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF F6 FF FF: call 0x58760c90
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4F: jmp 0x58761633
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5f00h], 40000000h
        ; Exact mapped bytes 75 40: jne 0x58761633
        __asm _emit 0x75
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f00h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f5ch]
        mov dword ptr [ebp - 20h], ecx
        push 7
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 34 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 38 56 D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E F6 FF FF: call 0x58760c90
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 50: jmp 0x58761685
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5f00h], 40000000h
        ; Exact mapped bytes 75 18: jne 0x5876165c
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5f00h], 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 F6 FF FF: call 0x58760c90
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f5ch]
        mov dword ptr [ebp - 28h], eax
        push 7
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 34 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DC 55 D2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x55
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x5876172f
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5eech], 40000h
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x5876172f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f34h]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC A9 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa9
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 52 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x52
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 15 9E D6 FF: call 0x584cb4f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x9e
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58761708
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5f00h], 0
        ; Exact mapped bytes 75 1B: jne 0x58761706
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f00h], 40000000h
        push 40000000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B F5 FF FF: call 0x58760c90
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 27: jmp 0x5876172f
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5f00h], 40000000h
        ; Exact mapped bytes 75 18: jne 0x5876172f
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5f00h], 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 F5 FF FF: call 0x58760c90
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f00h]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
