// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A84F0 .. +0x276 bytes.
extern "C" __declspec(naked) void FUN_587a84f0_587A84F0() {
    __asm {
        sub esp, 18h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 14h], eax
        push ebx
        mov ebx, dword ptr [esp + 24h]
        push esi
        mov esi, dword ptr [esp + 24h]
        push edi
        mov al, byte ptr [esi + 153h]
        cmp al, 3
        ; Exact mapped bytes 75 3B: jne 0x587a854e
        __asm _emit 0x75
        __asm _emit 0x3b
        test byte ptr [esi + 74h], 2
        ; Exact mapped bytes 75 2E: jne 0x587a8547
        __asm _emit 0x75
        __asm _emit 0x2e
        push 0
        push dword ptr [esp + 34h]
        push esi
        ; Exact mapped bytes E8 0B 14 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b9720h
        push esi
        ; Exact mapped bytes E8 50 67 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 14h]
        xor ecx, esp
        ; Exact mapped bytes E8 0D 8B 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 18h
        ret
        mov edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x587a8559
        __asm _emit 0xeb
        __asm _emit 0x0b
        movzx edi, al
        and edi, 2
        or edi, 1
        add edi, edi
        mov eax, dword ptr [esp + 30h]
        cmp eax, edi
        ; Exact mapped bytes 74 2B: je 0x587a858c
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0
        push eax
        push esi
        ; Exact mapped bytes E8 C6 13 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b974ch
        push esi
        ; Exact mapped bytes E8 0B 67 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 14h]
        xor ecx, esp
        ; Exact mapped bytes E8 C8 8A 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 18h
        ret
        push edi
        lea eax, [esp + 1ch]
        push eax
        push esi
        ; Exact mapped bytes E8 58 ED FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        lea eax, [esp + 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 0C 70 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push esi
        ; Exact mapped bytes E8 82 13 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 0F 85 7A FF FF FF: jne 0x587a8533
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [esi + 153h]
        cmp al, 3
        ; Exact mapped bytes 75 7A: jne 0x587a863d
        __asm _emit 0x75
        __asm _emit 0x7a
        mov cl, byte ptr [esp + 18h]
        mov byte ptr [esp + 0ch], cl
        test ebx, ebx
        ; Exact mapped bytes 74 5E: je 0x587a862d
        __asm _emit 0x74
        __asm _emit 0x5e
        movzx edx, word ptr [ebx + 14h]
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 55: je 0x587a862d
        __asm _emit 0x74
        __asm _emit 0x55
        movzx eax, cl
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 72 22: jb 0x587a8602
        __asm _emit 0x72
        __asm _emit 0x22
        push 588b9840h
        push esi
        ; Exact mapped bytes E8 95 66 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 14h]
        xor ecx, esp
        ; Exact mapped bytes E8 52 8A 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 18h
        ret
        movzx eax, cl
        lea ecx, [eax + eax*2]
        add ecx, dword ptr [esi + 140h]
        movzx eax, byte ptr [ecx]
        ; Exact mapped bytes 66 89 44 24 0E: mov word ptr [esp + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0e
        movzx eax, byte ptr [ecx + 1]
        ; Exact mapped bytes 66 89 44 24 10: mov word ptr [esp + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        movzx eax, byte ptr [ecx + 2]
        ; Exact mapped bytes 66 89 44 24 12: mov word ptr [esp + 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x587a8739
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 66 89 44 24 0E: mov word ptr [esp + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0e
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x587a8739
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esi + 154h]
        test al, 2
        ; Exact mapped bytes 75 70: jne 0x587a86b7
        __asm _emit 0x75
        __asm _emit 0x70
        mov ch, byte ptr [esp + 18h]
        cmp cl, 8
        ; Exact mapped bytes 77 36: ja 0x587a8686
        __asm _emit 0x77
        __asm _emit 0x36
        test ch, ch
        ; Exact mapped bytes 75 10: jne 0x587a8664
        __asm _emit 0x75
        __asm _emit 0x10
        movzx eax, byte ptr [esp + 19h]
        mov edx, 1
        shl edx, cl
        cmp eax, edx
        ; Exact mapped bytes 72 22: jb 0x587a8686
        __asm _emit 0x72
        __asm _emit 0x22
        push 588b9850h
        push esi
        ; Exact mapped bytes E8 11 66 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 14h]
        xor ecx, esp
        ; Exact mapped bytes E8 CE 89 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 18h
        ret
        movzx ecx, ch
        mov eax, 100h
        imul ecx, eax
        movzx eax, byte ptr [esp + 19h]
        mov byte ptr [esp + 0ch], 0
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4C 24 14: mov word ptr [esp + 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 4C 24 12: mov word ptr [esp + 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 66 89 4C 24 10: mov word ptr [esp + 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 4C 24 0E: mov word ptr [esp + 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0e
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x587a8740
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [esp + 1ch]
        mov dh, byte ptr [esp + 1ah]
        mov al, byte ptr [esp + 18h]
        cmp cl, 8
        ; Exact mapped bytes 77 2E: ja 0x587a86f6
        __asm _emit 0x77
        __asm _emit 0x2e
        test al, al
        ; Exact mapped bytes 75 08: jne 0x587a86d4
        __asm _emit 0x75
        __asm _emit 0x08
        test dh, dh
        ; Exact mapped bytes 75 04: jne 0x587a86d4
        __asm _emit 0x75
        __asm _emit 0x04
        test dl, dl
        ; Exact mapped bytes 74 22: je 0x587a86f6
        __asm _emit 0x74
        __asm _emit 0x22
        push 588b9864h
        push esi
        ; Exact mapped bytes E8 A1 65 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 14h]
        xor ecx, esp
        ; Exact mapped bytes E8 5E 89 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 18h
        ret
        movzx ecx, al
        mov edi, 100h
        movzx eax, byte ptr [esp + 19h]
        imul ecx, edi
        mov byte ptr [esp + 0ch], 0
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        movzx eax, byte ptr [esp + 1bh]
        ; Exact mapped bytes 66 89 4C 24 0E: mov word ptr [esp + 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0e
        movzx ecx, dh
        imul ecx, edi
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        movzx eax, byte ptr [esp + 1dh]
        ; Exact mapped bytes 66 89 4C 24 10: mov word ptr [esp + 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        movzx ecx, dl
        imul ecx, edi
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4C 24 12: mov word ptr [esp + 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x12
        xor eax, eax
        ; Exact mapped bytes 66 89 44 24 14: mov word ptr [esp + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        lea eax, [esp + 0ch]
        push eax
        push ebx
        push esi
        ; Exact mapped bytes E8 64 87 FF FF: call 0x587a0eb0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        add esp, 0ch
        mov eax, 3
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 EE 88 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 18h
        ret
    }
}
