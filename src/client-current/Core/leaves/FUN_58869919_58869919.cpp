// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58869919 .. +0x2EF bytes.
extern "C" __declspec(naked) void FUN_58869919_58869919() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1d0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 10h]
        push edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1c8h], edi
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x58869965
        __asm _emit 0x74
        __asm _emit 0x21
        test esi, esi
        ; Exact mapped bytes 74 10: je 0x58869958
        __asm _emit 0x74
        __asm _emit 0x10
        push esi
        push eax
        push edi
        ; Exact mapped bytes E8 B9 02 00 00: call 0x58869c09
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 90 02 00 00: jmp 0x58869be8
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 2
        add eax, eax
        mov eax, dword ptr [edi + eax*8]
        ; Exact mapped bytes E9 83 02 00 00: jmp 0x58869be8
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [ebp - 1c4h], 1
        mov dword ptr [ebp - 1d0h], eax
        mov ebx, eax
        mov dword ptr [ebp - 1bch], ebx
        test esi, esi
        ; Exact mapped bytes 0F 84 5A 02 00 00: je 0x58869be1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3E 4C: cmp word ptr [esi], 0x4c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x4c
        ; Exact mapped bytes 0F 85 68 01 00 00: jne 0x58869af9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 02 43: cmp word ptr [esi + 2], 0x43
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x43
        ; Exact mapped bytes 0F 85 5D 01 00 00: jne 0x58869af9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 04 5F: cmp word ptr [esi + 4], 0x5f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x5f
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x58869af9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588c4e4ch
        push esi
        ; Exact mapped bytes E8 AE D5 00 00: call 0x58876f60
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        mov dword ptr [ebp - 1cch], ebx
        pop ecx
        pop ecx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x58869af2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, esi
        sar eax, 1
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x58869af2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 3bh
        pop eax
        ; Exact mapped bytes 66 39 03: cmp word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x58869af2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 1c4h]
        mov ebx, 588c4d94h
        mov dword ptr [ebp - 1c0h], 1
        push edi
        push esi
        push dword ptr [ebx]
        ; Exact mapped bytes E8 22 D6 FF FF: call 0x58867020
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x58869a21
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebx]
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 30 FE FF FF: cmp ax, word ptr [ebp - 0x1d0]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x58869a0a
        __asm _emit 0x75
        __asm _emit 0xf1
        sub ecx, edx
        sar ecx, 1
        cmp edi, ecx
        ; Exact mapped bytes 74 11: je 0x58869a32
        __asm _emit 0x74
        __asm _emit 0x11
        inc dword ptr [ebp - 1c0h]
        add ebx, 0ch
        cmp ebx, 588c4dc4h
        ; Exact mapped bytes 7E C3: jle 0x588699f5
        __asm _emit 0x7e
        __asm _emit 0xc3
        mov ebx, dword ptr [ebp - 1cch]
        add ebx, 2
        push 588c4e54h
        push ebx
        ; Exact mapped bytes E8 CA D4 00 00: call 0x58876f10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 1c8h]
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 0C: jne 0x58869a60
        __asm _emit 0x75
        __asm _emit 0x0c
        push 3bh
        pop eax
        ; Exact mapped bytes 66 39 03: cmp word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x58869af2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1c0h], 5
        ; Exact mapped bytes 7F 5F: jg 0x58869ac8
        __asm _emit 0x7f
        __asm _emit 0x5f
        push esi
        push ebx
        lea eax, [ebp - 10ch]
        push 83h
        push eax
        ; Exact mapped bytes E8 F4 C4 FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 75 01 00 00: jne 0x58869bfc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + esi]
        cmp eax, 106h
        ; Exact mapped bytes 0F 83 62 01 00 00: jae 0x58869bf7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8C 05 F4 FE FF FF: mov word ptr [ebp + eax - 0x10c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 10ch]
        push eax
        push dword ptr [ebp - 1c0h]
        push edi
        ; Exact mapped bytes E8 57 01 00 00: call 0x58869c09
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1bch]
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58869ace
        __asm _emit 0x74
        __asm _emit 0x0f
        inc ecx
        mov dword ptr [ebp - 1bch], ecx
        ; Exact mapped bytes EB 06: jmp 0x58869ace
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 1bch]
        lea esi, [ebx + esi*2]
        movzx eax, word ptr [esi]
        mov edx, eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 06: je 0x58869ae1
        __asm _emit 0x74
        __asm _emit 0x06
        add esi, 2
        movzx edx, word ptr [esi]
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 BD FE FF FF: jne 0x588699a7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test ecx, ecx
        ; Exact mapped bytes 0F 85 EF 00 00 00: jne 0x58869be1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x58869be8
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1cch]
        push eax
        push 55h
        lea eax, [ebp - 1b8h]
        push eax
        push 83h
        lea eax, [ebp - 10ch]
        push eax
        push esi
        ; Exact mapped bytes E8 C7 F7 FF FF: call 0x588692e2
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x58869be8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [edi + 20h]
        mov esi, ecx
        mov dword ptr [ebp - 1bch], edx
        test esi, esi
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58869bbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx]
        lea eax, [ebp - 10ch]
        ; Exact mapped bytes 66 8B 38: mov di, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x38
        ; Exact mapped bytes 66 3B 39: cmp di, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x39
        mov edi, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes 75 33: jne 0x58869b84
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x58869b7e
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 66 8B 50 02: mov dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 51 02: cmp dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 95 42 FE FF FF: mov word ptr [ebp - 0x1be], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes 75 16: jne 0x58869b84
        __asm _emit 0x75
        __asm _emit 0x16
        add eax, 4
        add ecx, 4
        ; Exact mapped bytes 66 83 BD 42 FE FF FF 00: cmp word ptr [ebp - 0x1be], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 75 C5: jne 0x58869b43
        __asm _emit 0x75
        __asm _emit 0xc5
        xor ecx, ecx
        mov eax, ecx
        ; Exact mapped bytes EB 07: jmp 0x58869b8b
        __asm _emit 0xeb
        __asm _emit 0x07
        sbb eax, eax
        or eax, 1
        xor ecx, ecx
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x58869bbb
        __asm _emit 0x74
        __asm _emit 0x2c
        lea eax, [ebp - 10ch]
        push eax
        push esi
        push edi
        ; Exact mapped bytes E8 6C 00 00 00: call 0x58869c09
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1bch]
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58869baf
        __asm _emit 0x74
        __asm _emit 0x05
        inc ebx
        xor ecx, ecx
        ; Exact mapped bytes EB 0D: jmp 0x58869bbc
        __asm _emit 0xeb
        __asm _emit 0x0d
        xor ecx, ecx
        mov eax, ecx
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 07: jmp 0x58869bc2
        __asm _emit 0xeb
        __asm _emit 0x07
        inc ebx
        mov eax, dword ptr [ebp - 1c4h]
        inc esi
        add edx, 10h
        mov dword ptr [ebp - 1bch], edx
        cmp esi, 5
        ; Exact mapped bytes 0F 8E 5E FF FF FF: jle 0x58869b33
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x58869be1
        __asm _emit 0x75
        __asm _emit 0x08
        test ebx, ebx
        ; Exact mapped bytes 75 04: jne 0x58869be1
        __asm _emit 0x75
        __asm _emit 0x04
        mov eax, ecx
        ; Exact mapped bytes EB 07: jmp 0x58869be8
        __asm _emit 0xeb
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes E8 95 FB FF FF: call 0x5886977c
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 5B 74 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
        ; Exact mapped bytes E8 AD 75 FC FF: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xff
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 D1 73 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
