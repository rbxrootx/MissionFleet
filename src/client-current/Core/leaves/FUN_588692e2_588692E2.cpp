// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588692E2 .. +0x3D5 bytes.
extern "C" __declspec(naked) void FUN_588692e2_588692E2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1f8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 1ch]
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1e4h], eax
        xor eax, eax
        mov dword ptr [ebp - 1e8h], ebx
        push edi
        mov edi, dword ptr [ebp + 14h]
        test esi, esi
        ; Exact mapped bytes 0F 84 80 03 00 00: je 0x5886969c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3E 43: cmp word ptr [esi], 0x43
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x43
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes 75 2C: jne 0x58869354
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 66 39 46 02: cmp word ptr [esi + 2], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x02
        ; Exact mapped bytes 75 26: jne 0x58869354
        __asm _emit 0x75
        __asm _emit 0x26
        push 588c4e64h
        push dword ptr [ebp + 10h]
        push ebx
        ; Exact mapped bytes E8 44 DC FF FF: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 64 03 00 00: jne 0x588696ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1e4h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 46 03 00 00: jmp 0x5886969a
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 47 F8 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 50h
        push eax
        push dword ptr [ebp + 18h]
        lea ecx, [eax + 18h]
        mov dword ptr [ebp - 1d8h], ecx
        lea ebx, [eax + 122h]
        lea ecx, [eax + 1ch]
        mov dword ptr [ebp - 1d4h], ebx
        mov dword ptr [ebp - 1dch], ecx
        lea ecx, [ebp - 1f8h]
        push edi
        ; Exact mapped bytes E8 8F FA FF FF: call 0x58868e19
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, esi
        xor edx, edx
        lea ecx, [edi + 2]
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        add edi, 2
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 F5: jne 0x58869391
        __asm _emit 0x75
        __asm _emit 0xf5
        sub edi, ecx
        sar edi, 1
        cmp edi, 83h
        ; Exact mapped bytes 73 72: jae 0x5886941a
        __asm _emit 0x73
        __asm _emit 0x72
        mov ecx, esi
        mov eax, ebx
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 11: cmp dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x11
        ; Exact mapped bytes 75 1E: jne 0x588693d2
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 15: je 0x588693ce
        __asm _emit 0x74
        __asm _emit 0x15
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
        ; Exact mapped bytes 75 0F: jne 0x588693d2
        __asm _emit 0x75
        __asm _emit 0x0f
        add eax, 4
        add ecx, 4
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 DE: jne 0x588693ac
        __asm _emit 0x75
        __asm _emit 0xde
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x588693d7
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        or eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 84 02 00 00: je 0x58869663
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1dch]
        mov ecx, esi
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 11: cmp dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x11
        ; Exact mapped bytes 75 1E: jne 0x5886940d
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 15: je 0x58869409
        __asm _emit 0x74
        __asm _emit 0x15
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
        ; Exact mapped bytes 75 0F: jne 0x5886940d
        __asm _emit 0x75
        __asm _emit 0x0f
        add eax, 4
        add ecx, 4
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 DE: jne 0x588693e7
        __asm _emit 0x75
        __asm _emit 0xde
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58869412
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        or eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 49 02 00 00: je 0x58869663
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AC 65 00 00: call 0x5886f9cb
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, al
        lea eax, [ebp - 1d0h]
        push esi
        push eax
        ; Exact mapped bytes E8 48 FD FF FF: call 0x58869176
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 78: jne 0x588694ac
        __asm _emit 0x75
        __asm _emit 0x78
        lea eax, [ebp - 1d0h]
        test bl, bl
        mov ebx, dword ptr [ebp - 1d8h]
        push eax
        push ebx
        push eax
        ; Exact mapped bytes 75 07: jne 0x5886944e
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 C2 EB 00 00: call 0x5887800e
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x58869453
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 3D E2 00 00: call 0x58877690
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x588694b2
        __asm _emit 0x74
        __asm _emit 0x58
        mov ebx, dword ptr [ebp - 1d4h]
        lea eax, [ebp - 1d0h]
        push eax
        push 83h
        push ebx
        ; Exact mapped bytes E8 94 FC FF FF: call 0x58869106
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 0b0h]
        add esp, 0ch
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 20 FE FF FF: cmp ax, word ptr [ebp - 0x1e0]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x5886947e
        __asm _emit 0x75
        __asm _emit 0xf1
        sub ecx, edx
        sar ecx, 1
        lea eax, [ecx + 1]
        push eax
        lea eax, [ebp - 0b0h]
        push eax
        lea ecx, [ebp - 1f8h]
        ; Exact mapped bytes E8 98 FB FF FF: call 0x5886903f
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x5886962e
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 1d8h]
        push esi
        ; Exact mapped bytes E8 87 63 00 00: call 0x5886f83f
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588694ff
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes E8 F8 0A 00 00: call 0x58869fba
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, ax
        mov dword ptr [ebx], eax
        lea ebx, [edi + 1]
        push ebx
        push esi
        push 83h
        push dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 94 CA FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 0F 85 C4 01 00 00: jne 0x588696ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        lea ecx, [ebp - 1f8h]
        ; Exact mapped bytes E8 07 FB FF FF: call 0x58868ffb
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x5886962e
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1d0h]
        push eax
        ; Exact mapped bytes E8 DE 0A 00 00: call 0x58869fe9
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 0F 84 76 01 00 00: je 0x5886968b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0b0h]
        push eax
        ; Exact mapped bytes E8 1E 63 00 00: call 0x5886f83f
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 62 01 00 00: je 0x5886968b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 85 30 FF FF FF: mov ax, word ptr [ebp - 0xd0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x588695c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, ax
        push 38h
        lea eax, [edx - 41h]
        cmp eax, 19h
        lea ecx, [edx + 20h]
        pop eax
        cmova ecx, edx
        cmp ecx, 75h
        ; Exact mapped bytes 75 49: jne 0x58869599
        __asm _emit 0x75
        __asm _emit 0x49
        movzx edx, word ptr [ebp - 0ceh]
        push 38h
        lea eax, [edx - 41h]
        cmp eax, 19h
        lea ecx, [edx + 20h]
        cmova ecx, edx
        cmp ecx, 74h
        ; Exact mapped bytes 75 2E: jne 0x58869598
        __asm _emit 0x75
        __asm _emit 0x2e
        movzx edx, word ptr [ebp - 0cch]
        lea eax, [edx - 41h]
        cmp eax, 19h
        lea ecx, [edx + 20h]
        pop eax
        cmova ecx, edx
        cmp ecx, 66h
        ; Exact mapped bytes 75 16: jne 0x58869599
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 66 39 85 36 FF FF FF: cmp word ptr [ebp - 0xca], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 0D: jne 0x58869599
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 66 83 BD 38 FF FF FF 00: cmp word ptr [ebp - 0xc8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 74 2C: je 0x588695c2
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes EB 01: jmp 0x58869599
        __asm _emit 0xeb
        __asm _emit 0x01
        pop eax
        ; Exact mapped bytes 66 83 BD 36 FF FF FF 2D: cmp word ptr [ebp - 0xca], 0x2d
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x2d
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x5886968b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 85 38 FF FF FF: cmp word ptr [ebp - 0xc8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x5886968b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BD 3A FF FF FF 00: cmp word ptr [ebp - 0xc6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x5886968b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0fde9h
        ; Exact mapped bytes EB 0D: jmp 0x588695d6
        __asm _emit 0xeb
        __asm _emit 0x0d
        lea eax, [ebp - 0b0h]
        push eax
        ; Exact mapped bytes E8 E5 09 00 00: call 0x58869fba
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        movzx eax, ax
        mov dword ptr [ebx], eax
        lea eax, [edi + 1]
        mov ebx, dword ptr [ebp - 1d4h]
        push eax
        push esi
        push 83h
        push ebx
        ; Exact mapped bytes E8 7F C9 FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x588696ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0b0h]
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 20 FE FF FF: cmp ax, word ptr [ebp - 0x1e0]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x58869605
        __asm _emit 0x75
        __asm _emit 0xf1
        sub ecx, edx
        sar ecx, 1
        lea eax, [ecx + 1]
        push eax
        lea eax, [ebp - 0b0h]
        push eax
        lea ecx, [ebp - 1f8h]
        ; Exact mapped bytes E8 CD F9 FF FF: call 0x58868ffb
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes 66 39 06: cmp word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x06
        ; Exact mapped bytes 74 23: je 0x58869658
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, 83h
        cmp edi, ecx
        ; Exact mapped bytes 73 1A: jae 0x58869658
        __asm _emit 0x73
        __asm _emit 0x1a
        lea eax, [edi + 1]
        push eax
        push esi
        push ecx
        push dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 21 C9 FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 55: jne 0x588696ab
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes EB 0B: jmp 0x58869663
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1dch]
        xor ecx, ecx
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1d8h]
        mov ecx, dword ptr [ebp - 1e4h]
        push ebx
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [eax]
        push dword ptr [ebp - 1e8h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E8 FE D8 FF FF: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x588696ab
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes EB 04: jmp 0x5886968f
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        mov ebx, eax
        lea ecx, [ebp - 1f8h]
        ; Exact mapped bytes E8 C9 F7 FF FF: call 0x58868e63
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ebx
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 A7 79 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 22 79 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
