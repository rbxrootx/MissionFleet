// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CC220 .. +0x385 bytes.
extern "C" __declspec(naked) void FUN_587cc220() {
    __asm {
        sub esp, 7d4h
        push esi
        mov esi, dword ptr [esp + 7dch]
        mov dword ptr [esp + 0ch], ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 C6 D8 13 00: call 0x58909b00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd8
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, dword ptr [esp + 7e4h]
        cmp eax, edi
        ; Exact mapped bytes 7F 3B: jg 0x587cc280
        __asm _emit 0x7f
        __asm _emit 0x3b
        ; Exact mapped bytes A1 C4 84 A2 58: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 5898ce74h
        push 5899b27ch
        push eax
        ; Exact mapped bytes FF 15 CC C3 98 58: call dword ptr [0x5898c3cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 6A FF FF: call 0x587c2c90
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 7d4h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push ebx
        push ebp
        cmp edi, 4
        ; Exact mapped bytes 0F 84 3F 02 00 00: je 0x587cc4ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 0A 03 00 00: jle 0x587cc59b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 6
        ; Exact mapped bytes 0F 8F 01 03 00 00: jg 0x587cc59b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea ecx, [esp + 120h]
        push ecx
        mov ecx, esi
        xor ebp, ebp
        ; Exact mapped bytes E8 14 D8 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd8
        __asm _emit 0x13
        __asm _emit 0x00
        cmp dword ptr [eax + 3ch], ebp
        ; Exact mapped bytes 0F 84 E6 02 00 00: je 0x587cc59b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea edx, [esp + 294h]
        push edx
        mov ecx, esi
        xor ebx, ebx
        ; Exact mapped bytes E8 F9 D7 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        cmp dword ptr [eax + 38h], ebx
        ; Exact mapped bytes 74 4B: je 0x587cc317
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 38 D8 13 00: call 0x58909b10
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd8
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [esp + 14h], eax
        push edi
        lea eax, [esp + 5f8h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D4 D7 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [eax + 38h]
        mov edx, dword ptr [esp + 14h]
        imul eax, ebp
        add eax, ebx
        lea ecx, [eax + eax*4]
        cmp dword ptr [edx + ecx*4], -1
        push edi
        mov ecx, esi
        ; Exact mapped bytes 75 36: jne 0x587cc33a
        __asm _emit 0x75
        __asm _emit 0x36
        lea eax, [esp + 294h]
        push eax
        inc ebx
        ; Exact mapped bytes E8 AE D7 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        cmp ebx, dword ptr [eax + 38h]
        ; Exact mapped bytes 75 B9: jne 0x587cc2d0
        __asm _emit 0x75
        __asm _emit 0xb9
        push edi
        lea ecx, [esp + 120h]
        push ecx
        mov ecx, esi
        inc ebp
        ; Exact mapped bytes E8 98 D7 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        cmp ebp, dword ptr [eax + 3ch]
        ; Exact mapped bytes 75 88: jne 0x587cc2b5
        __asm _emit 0x75
        __asm _emit 0x88
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 7d4h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea edx, [esp + 408h]
        push edx
        ; Exact mapped bytes E8 79 D7 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [eax + 40h]
        mov edx, dword ptr [esp + 18h]
        imul eax, ebx
        mov edx, dword ptr [edx + 8]
        lea ecx, [edi - 5]
        shl ecx, 4
        mov dword ptr [ecx + edx], eax
        mov eax, edi
        shl eax, 4
        mov dword ptr [esp + 14h], eax
        push edi
        lea eax, [esp + 310h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4A D7 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 44h]
        mov edx, dword ptr [esp + 18h]
        imul ecx, ebp
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax + edx - 4ch], ecx
        lea ecx, [ebp + 1]
        push edi
        lea edx, [esp + 218h]
        lea eax, [ebx + 1]
        mov dword ptr [esp + 20h], ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes E8 17 D7 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 7D 76: jge 0x587cc428
        __asm _emit 0x7d
        __asm _emit 0x76
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 56 D7 13 00: call 0x58909b10
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        push edi
        lea edx, [esp + 500h]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes E8 F2 D6 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [eax + 38h]
        mov ecx, dword ptr [esp + 20h]
        imul eax, ebp
        add eax, dword ptr [esp + 10h]
        push edi
        lea eax, [eax + eax*4]
        cmp dword ptr [ecx + eax*4], -1
        mov ecx, esi
        ; Exact mapped bytes 74 1C: je 0x587cc404
        __asm _emit 0x74
        __asm _emit 0x1c
        inc dword ptr [esp + 14h]
        lea edx, [esp + 218h]
        push edx
        ; Exact mapped bytes E8 C7 D6 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 7C B0: jl 0x587cc3b2
        __asm _emit 0x7c
        __asm _emit 0xb0
        ; Exact mapped bytes EB 24: jmp 0x587cc428
        __asm _emit 0xeb
        __asm _emit 0x24
        lea edx, [esp + 6f0h]
        push edx
        ; Exact mapped bytes E8 AF D6 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [eax + 40h]
        imul eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [edx + ecx - 48h], eax
        push edi
        lea edx, [esp + 0a4h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 88 D6 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        cmp ebp, dword ptr [eax + 3ch]
        ; Exact mapped bytes 0F 8D 56 01 00 00: jge 0x587cc59b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 C3 D6 13 00: call 0x58909b10
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [esp + 1ch], eax
        push edi
        lea eax, [esp + 38ch]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5F D6 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [eax + 38h]
        mov edx, dword ptr [esp + 1ch]
        imul eax, ebp
        add eax, ebx
        lea ecx, [eax + eax*4]
        cmp dword ptr [edx + ecx*4], -1
        push edi
        ; Exact mapped bytes 74 22: je 0x587cc499
        __asm _emit 0x74
        __asm _emit 0x22
        lea eax, [esp + 0a4h]
        push eax
        mov ecx, esi
        inc ebp
        ; Exact mapped bytes E8 39 D6 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        cmp ebp, dword ptr [eax + 3ch]
        ; Exact mapped bytes 7C B9: jl 0x587cc445
        __asm _emit 0x7c
        __asm _emit 0xb9
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 7d4h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [esp + 484h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 18 D6 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [eax + 44h]
        mov eax, dword ptr [esp + 18h]
        imul edx, ebp
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [esp + 14h]
        pop ebp
        pop ebx
        pop edi
        mov dword ptr [ecx + eax - 44h], edx
        pop esi
        add esp, 7d4h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 4
        lea ecx, [esp + 28h]
        push ecx
        mov ecx, esi
        xor ebp, ebp
        ; Exact mapped bytes E8 E6 D5 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x00
        cmp dword ptr [eax + 3ch], ebp
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x587cc59b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea edx, [esp + 19ch]
        push edx
        mov ecx, esi
        xor edi, edi
        ; Exact mapped bytes E8 CA D5 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x00
        cmp dword ptr [eax + 38h], edi
        ; Exact mapped bytes 74 49: je 0x587cc544
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes EB 03: jmp 0x587cc500
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        push 4
        mov ecx, esi
        ; Exact mapped bytes E8 07 D6 13 00: call 0x58909b10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        mov ebx, eax
        push 4
        lea eax, [esp + 57ch]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A4 D5 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [eax + 38h]
        imul eax, ebp
        add eax, edi
        lea ecx, [eax + eax*4]
        cmp dword ptr [ebx + ecx*4], -1
        push 4
        ; Exact mapped bytes 75 36: jne 0x587cc565
        __asm _emit 0x75
        __asm _emit 0x36
        lea edx, [esp + 19ch]
        push edx
        mov ecx, esi
        inc edi
        ; Exact mapped bytes E8 81 D5 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x00
        cmp edi, dword ptr [eax + 38h]
        ; Exact mapped bytes 75 BC: jne 0x587cc500
        __asm _emit 0x75
        __asm _emit 0xbc
        push 4
        lea eax, [esp + 28h]
        push eax
        mov ecx, esi
        inc ebp
        ; Exact mapped bytes E8 6D D5 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x00
        cmp ebp, dword ptr [eax + 3ch]
        ; Exact mapped bytes 75 8B: jne 0x587cc4e3
        __asm _emit 0x75
        __asm _emit 0x8b
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 7d4h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [esp + 674h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 4C D5 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [eax + 40h]
        imul edx, edi
        mov edi, dword ptr [esp + 18h]
        push 4
        lea eax, [esp + 76ch]
        push eax
        mov ecx, esi
        mov dword ptr [edi + 1ch], edx
        ; Exact mapped bytes E8 2E D5 13 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 44h]
        imul ecx, ebp
        mov dword ptr [edi + 20h], ecx
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 7d4h
    }
}
