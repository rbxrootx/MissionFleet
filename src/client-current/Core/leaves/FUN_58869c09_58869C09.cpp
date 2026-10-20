// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58869C09 .. +0x3B0 bytes.
extern "C" __declspec(naked) void FUN_58869c09_58869C09() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 2e4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ebp + 10h]
        push edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2c8h], ebx
        ; Exact mapped bytes E8 6B EF FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 278h
        mov dword ptr [ebp - 2dch], eax
        lea eax, [ebp - 2c4h]
        push eax
        push 55h
        lea eax, [ebp - 2b8h]
        push eax
        push 83h
        lea eax, [ebp - 10ch]
        push eax
        push esi
        ; Exact mapped bytes E8 80 F6 FF FF: call 0x588692e2
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 0F 84 BE 02 00 00: je 0x58869f2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebx + 2]
        mov dword ptr [ebp - 2cch], 4
        add esi, esi
        lea eax, [ebp - 10ch]
        mov edx, dword ptr [edi + esi*8]
        mov ecx, edx
        ; Exact mapped bytes 66 8B 18: mov bx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x18
        and dword ptr [ebp - 2bch], 0
        ; Exact mapped bytes 66 3B 19: cmp bx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x19
        mov ebx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes 75 35: jne 0x58869cd1
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x58869cc9
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 66 8B 58 02: mov bx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 59 02: cmp bx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x59
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 9D 42 FD FF FF: mov word ptr [ebp - 0x2be], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes 75 18: jne 0x58869cd1
        __asm _emit 0x75
        __asm _emit 0x18
        add eax, 4
        add ecx, 4
        ; Exact mapped bytes 66 83 BD 42 FD FF FF 00: cmp word ptr [ebp - 0x2be], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 75 BE: jne 0x58869c87
        __asm _emit 0x75
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 2bch]
        ; Exact mapped bytes EB 05: jmp 0x58869cd6
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        or eax, 1
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58869ce1
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, edx
        ; Exact mapped bytes E9 4C 02 00 00: jmp 0x58869f2d
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10ch]
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 44 FD FF FF: cmp ax, word ptr [ebp - 0x2bc]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x58869cea
        __asm _emit 0x75
        __asm _emit 0xf1
        sub ecx, edx
        sar ecx, 1
        lea eax, [ecx + 1]
        mov dword ptr [ebp - 2c0h], eax
        lea eax, [eax*2 + 4]
        push eax
        ; Exact mapped bytes E8 BD 31 00 00: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2d4h], eax
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 09 02 00 00: je 0x58869f2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*8]
        add eax, 4
        mov dword ptr [ebp - 2d0h], ecx
        mov ecx, dword ptr [edi + ebx*4 + 0a0h]
        mov dword ptr [ebp - 2e0h], ecx
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [ebp - 2e4h], ecx
        lea ecx, [ebp - 10ch]
        push ecx
        push dword ptr [ebp - 2c0h]
        mov dword ptr [ebp - 2d8h], eax
        push eax
        ; Exact mapped bytes E8 23 D2 FF FF: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 41 02 00 00: jne 0x58869fa9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BD F4 FE FF FF 43: cmp word ptr [ebp - 0x10c], 0x43
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 2d8h]
        mov dword ptr [edi + esi*8], eax
        ; Exact mapped bytes 75 12: jne 0x58869d8d
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 BD F6 FE FF FF 00: cmp word ptr [ebp - 0x10a], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x58869d8d
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 2bch]
        ; Exact mapped bytes EB 0D: jmp 0x58869d9a
        __asm _emit 0xeb
        __asm _emit 0x0d
        lea eax, [ebp - 2b8h]
        push eax
        ; Exact mapped bytes E8 DB F2 FF FF: call 0x58869074
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [edi + ebx*4 + 0a0h], eax
        cmp ebx, 2
        ; Exact mapped bytes 0F 85 0C 01 00 00: jne 0x58869eb6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 2dch]
        mov eax, dword ptr [ebp - 2c4h]
        mov edx, dword ptr [ebp - 2bch]
        mov dword ptr [edi + 8], eax
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [esi + 24h]
        mov dword ptr [ebp - 2c0h], eax
        mov dword ptr [ebp - 2c4h], ecx
        mov eax, dword ptr [edi + 8]
        cmp eax, dword ptr [esi + edx*8]
        ; Exact mapped bytes 74 34: je 0x58869e0d
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [esi + edx*8]
        mov ebx, dword ptr [ebp - 2c0h]
        mov ecx, dword ptr [esi + edx*8 + 4]
        mov dword ptr [esi + edx*8], ebx
        mov ebx, dword ptr [ebp - 2c4h]
        mov dword ptr [esi + edx*8 + 4], ebx
        inc edx
        mov ebx, dword ptr [ebp - 2c8h]
        mov dword ptr [ebp - 2c0h], eax
        mov dword ptr [ebp - 2c4h], ecx
        cmp edx, 5
        ; Exact mapped bytes 7C C6: jl 0x58869dd1
        __asm _emit 0x7c
        __asm _emit 0xc6
        ; Exact mapped bytes EB 23: jmp 0x58869e30
        __asm _emit 0xeb
        __asm _emit 0x23
        test edx, edx
        ; Exact mapped bytes 74 1F: je 0x58869e30
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esi + edx*8]
        mov ecx, dword ptr [esi + edx*8 + 4]
        mov dword ptr [esi], eax
        mov eax, dword ptr [ebp - 2c0h]
        mov dword ptr [esi + 4], ecx
        mov dword ptr [esi + edx*8], eax
        mov eax, dword ptr [ebp - 2c4h]
        mov dword ptr [esi + edx*8 + 4], eax
        cmp edx, 5
        ; Exact mapped bytes 75 79: jne 0x58869eae
        __asm _emit 0x75
        __asm _emit 0x79
        push 1
        push dword ptr [edi + 8]
        lea eax, [ebp - 20ch]
        push eax
        push 7fh
        push 588c4d08h
        push 1
        push dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 09 9D 00 00: call 0x58873b5e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x58869e98
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 2bch]
        mov ecx, 1ffh
        ; Exact mapped bytes 66 21 8C 45 F4 FD FF FF: and word ptr [ebp + eax*2 - 0x20c], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        inc eax
        cmp eax, 7fh
        ; Exact mapped bytes 72 ED: jb 0x58869e62
        __asm _emit 0x72
        __asm _emit 0xed
        push 0feh
        ; Exact mapped bytes FF 35 5C 74 90 58: push dword ptr [0x5890745c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 C6 35 FE FF: call 0x5884d452
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        xor ecx, ecx
        add esp, 0ch
        test eax, eax
        sete cl
        ; Exact mapped bytes EB 06: jmp 0x58869e9e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 2bch]
        mov eax, dword ptr [ebp - 2cch]
        mov edx, esi
        mov dword ptr [edx + eax], ecx
        mov eax, dword ptr [edi + 8]
        mov dword ptr [esi], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [edi + 18h], eax
        ; Exact mapped bytes EB 1E: jmp 0x58869ed4
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp ebx, 1
        ; Exact mapped bytes 75 0B: jne 0x58869ec6
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 2c4h]
        mov dword ptr [edi + 10h], eax
        ; Exact mapped bytes EB 0E: jmp 0x58869ed4
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp ebx, 5
        ; Exact mapped bytes 75 09: jne 0x58869ed4
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2c4h]
        mov dword ptr [edi + 14h], eax
        imul eax, ebx, 0ch
        push edi
        mov esi, dword ptr [eax + 588c4d90h]
        mov ecx, esi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        pop ecx
        mov ecx, dword ptr [ebp - 2d0h]
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x58869f3c
        __asm _emit 0x74
        __asm _emit 0x49
        lea eax, [ebx + 2]
        add eax, eax
        mov dword ptr [edi + eax*8], ecx
        push dword ptr [edi + ebx*4 + 0a0h]
        ; Exact mapped bytes E8 09 2D 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2e0h]
        mov dword ptr [edi + ebx*4 + 0a0h], eax
        mov eax, dword ptr [ebp - 2d4h]
        push eax
        ; Exact mapped bytes E8 F0 2C 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2e4h]
        pop ecx
        pop ecx
        mov dword ptr [edi + 8], eax
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 16 71 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
        cmp ecx, 58907520h
        ; Exact mapped bytes 74 47: je 0x58869f8b
        __asm _emit 0x74
        __asm _emit 0x47
        mov esi, ebx
        or ecx, 0ffffffffh
        add esi, esi
        mov eax, dword ptr [edi + esi*8 + 28h]
        ; Exact mapped bytes F0 0F C1 08: lock xadd dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes 75 36: jne 0x58869f8b
        __asm _emit 0x75
        __asm _emit 0x36
        push dword ptr [edi + esi*8 + 28h]
        ; Exact mapped bytes E8 B2 2C 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [edi + esi*8 + 24h]
        ; Exact mapped bytes E8 A9 2C 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [edi + ebx*4 + 0a0h]
        ; Exact mapped bytes E8 9D 2C 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2bch]
        lea eax, [ebx + 2]
        add esp, 0ch
        add eax, eax
        mov dword ptr [edi + eax*8], ecx
        mov dword ptr [edi + ebx*4 + 0a0h], ecx
        mov eax, dword ptr [ebp - 2d4h]
        mov ecx, ebx
        add ecx, ecx
        mov dword ptr [eax], 1
        mov dword ptr [edi + ecx*8 + 28h], eax
        lea eax, [ebx + 2]
        add eax, eax
        mov eax, dword ptr [edi + eax*8]
        ; Exact mapped bytes EB 84: jmp 0x58869f2d
        __asm _emit 0xeb
        __asm _emit 0x84
        mov eax, dword ptr [ebp - 2bch]
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 20 70 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
