// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A940 .. +0x28E bytes.
extern "C" __declspec(naked) void FUN_5879a940_5879A940() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891bb7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0e0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, ecx
        mov eax, dword ptr [ebx + 8]
        and eax, 0ffh
        ; Exact mapped bytes 74 0E: je 0x5879a988
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 7
        ; Exact mapped bytes 0F 85 0A 02 00 00: jne 0x5879ab8d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x5879aa7e
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 20h], 7
        and dword ptr [ebp - 20h], 0fffffeffh
        push 8
        mov dword ptr [ebp - 4], 2
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes E8 4E 66 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [ebp - 34h], esi
        mov byte ptr [ebp - 4], 5
        test esi, esi
        ; Exact mapped bytes 74 29: je 0x5879a9ef
        __asm _emit 0x74
        __asm _emit 0x29
        push 30h
        mov dword ptr [esi], 0
        mov dword ptr [esi + 4], 0
        ; Exact mapped bytes E8 2A 66 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], eax
        mov dword ptr [eax + 4], eax
        mov dword ptr [eax + 8], eax
        ; Exact mapped bytes 66 C7 40 0C 01 01: mov word ptr [eax + 0xc], 0x101
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x01
        mov dword ptr [esi], eax
        ; Exact mapped bytes EB 02: jmp 0x5879a9f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebp - 28h], esi
        push ebx
        lea ecx, [ebp - 28h]
        mov dword ptr [ebp - 4], 6
        ; Exact mapped bytes E8 2C 02 00 00: call 0x5879ac30
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 20h]
        sub eax, 4
        ; Exact mapped bytes 74 34: je 0x5879aa41
        __asm _emit 0x74
        __asm _emit 0x34
        sub eax, 2
        ; Exact mapped bytes 74 05: je 0x5879aa17
        __asm _emit 0x74
        __asm _emit 0x05
        sub eax, 1
        ; Exact mapped bytes 75 3F: jne 0x5879aa56
        __asm _emit 0x75
        __asm _emit 0x3f
        mov esi, dword ptr [ebp - 28h]
        test esi, esi
        ; Exact mapped bytes 74 38: je 0x5879aa56
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [esi]
        mov ecx, esi
        push dword ptr [eax + 4]
        push esi
        ; Exact mapped bytes E8 75 D8 FF FF: call 0x587982a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        push 30h
        push dword ptr [esi]
        ; Exact mapped bytes E8 00 66 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x00
        push 8
        push esi
        ; Exact mapped bytes E8 F8 65 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x65
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 15: jmp 0x5879aa56
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 20h]
        shr eax, 8
        test al, 1
        ; Exact mapped bytes 74 0B: je 0x5879aa56
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AD EB 0B 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xeb
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov esi, dword ptr [ebp - 1ch]
        test esi, esi
        ; Exact mapped bytes 74 21: je 0x5879aa7e
        __asm _emit 0x74
        __asm _emit 0x21
        push 584a9d30h
        push 3
        push 18h
        push esi
        mov dword ptr [ebp - 4], 7
        ; Exact mapped bytes E8 86 72 09 00: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0x00
        push 48h
        push esi
        ; Exact mapped bytes E8 B9 65 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x65
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, eax
        mov dword ptr [ebp - 30h], eax
        shl ecx, 2
        or ecx, 2
        mov dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebx]
        lea eax, [ebp - 30h]
        push eax
        lea eax, [ebp - 1ch]
        mov dword ptr [ebp - 4], 8
        push eax
        ; Exact mapped bytes E8 88 DA FF FF: call 0x58798530
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [eax + 8]
        mov eax, dword ptr [ebx]
        cmp esi, dword ptr [eax]
        ; Exact mapped bytes 74 18: je 0x5879aac9
        __asm _emit 0x74
        __asm _emit 0x18
        lea eax, [ebp - 30h]
        push eax
        lea ecx, [esi + 10h]
        ; Exact mapped bytes E8 93 E5 FF FF: call 0x58799050
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 08: je 0x5879aac9
        __asm _emit 0x74
        __asm _emit 0x08
        lea eax, [esi + 18h]
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x5879ab6f
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 82 FD FF FF: call 0x5879a850
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        lea ecx, [ebp - 54h]
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 74 DC FF FF: call 0x58798750
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        lea ecx, [ebp - 4ch]
        mov byte ptr [ebp - 4], 9
        ; Exact mapped bytes E8 67 DF FF FF: call 0x58798a50
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx]
        lea eax, [ebp - 54h]
        push eax
        push esi
        lea eax, [ebp - 34h]
        mov byte ptr [ebp - 4], 0ah
        push eax
        ; Exact mapped bytes E8 63 DB FF FF: call 0x58798660
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 4ch]
        mov byte ptr [ebp - 4], 8
        mov edi, dword ptr [eax]
        ; Exact mapped bytes E8 D5 FD FF FF: call 0x5879a8e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 B4: movlpd qword ptr [ebp - 0x4c], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xb4
        test esi, esi
        ; Exact mapped bytes 74 1E: je 0x5879ab38
        __asm _emit 0x74
        __asm _emit 0x1e
        push 584a9d30h
        push 3
        push 18h
        push esi
        mov byte ptr [ebp - 4], 0bh
        ; Exact mapped bytes E8 CC 71 09 00: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        push 48h
        push esi
        ; Exact mapped bytes E8 FF 64 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5879ab51
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 50h]
        and al, 3
        cmp al, 1
        ; Exact mapped bytes 75 09: jne 0x5879ab51
        __asm _emit 0x75
        __asm _emit 0x09
        push ecx
        ; Exact mapped bytes E8 B2 EA 0B 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xea
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 30h]
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x5879ab6c
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 2ch]
        and cl, 3
        cmp cl, 1
        ; Exact mapped bytes 75 09: jne 0x5879ab6c
        __asm _emit 0x75
        __asm _emit 0x09
        push edx
        ; Exact mapped bytes E8 97 EA 0B 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xea
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        lea eax, [edi + 18h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 C9 64 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0ech]
        ; Exact mapped bytes E8 66 28 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x28
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0ech]
        mov dword ptr [ebp - 4], 0
        push 588b6fe0h
        push eax
        ; Exact mapped bytes E8 3E 9A D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x9a
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0ech]
        push eax
        ; Exact mapped bytes E8 3C 36 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x36
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 62 01 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
