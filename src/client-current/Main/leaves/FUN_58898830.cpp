// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58898830 .. +0x44C bytes.
extern "C" __declspec(naked) void FUN_58898830() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 4
        ; Exact mapped bytes 0F 84 18 04 00 00: je 0x58898c58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        push ebx
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 E9 01 00 00: jne 0x58898a44
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        cmp eax, 8ch
        ; Exact mapped bytes 7D 03: jge 0x58898871
        __asm _emit 0x7d
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 05: jmp 0x58898876
        __asm _emit 0xeb
        __asm _emit 0x05
        push 8ch
        ; Exact mapped bytes E8 65 A4 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 6
        cmp edx, 0fah
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x58898958
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        mov edx, dword ptr [eax + 28h]
        add edx, 6
        push edx
        ; Exact mapped bytes E8 3B A4 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        push eax
        ; Exact mapped bytes E8 29 A4 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 6
        push edx
        ; Exact mapped bytes E8 17 A4 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        lea edi, [esi + 98h]
        mov ebx, 3
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 28h]
        sub eax, 6
        push eax
        ; Exact mapped bytes E8 FE A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EA: jne 0x588988d4
        __asm _emit 0x75
        __asm _emit 0xea
        lea edi, [esi + 0a4h]
        mov ebx, 0fh
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 28h]
        add edx, 6
        push edx
        ; Exact mapped bytes E8 DD A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EA: jne 0x588988f5
        __asm _emit 0x75
        __asm _emit 0xea
        mov ecx, dword ptr [esi + 0e0h]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        push eax
        ; Exact mapped bytes E8 C3 A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 6
        push edx
        ; Exact mapped bytes E8 B1 A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        push eax
        ; Exact mapped bytes E8 9F A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 6
        push edx
        ; Exact mapped bytes E8 8D A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 FF 02 00 00: jmp 0x58898c57
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffh
        ; Exact mapped bytes E8 7E A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 0ffh
        ; Exact mapped bytes E8 6E A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 0ffh
        ; Exact mapped bytes E8 5E A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        lea edi, [esi + 98h]
        mov ebx, 3
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 0ffh
        ; Exact mapped bytes E8 44 A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EC: jne 0x58898990
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 0a4h]
        mov ebx, 0fh
        nop
        mov ecx, dword ptr [edi]
        push 0ffh
        ; Exact mapped bytes E8 24 A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EC: jne 0x588989b0
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esi + 0e0h]
        push 0ffh
        ; Exact mapped bytes E8 0C A3 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        push 0ffh
        ; Exact mapped bytes E8 FC A2 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push 0ffh
        ; Exact mapped bytes E8 EC A2 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        push 0ffh
        ; Exact mapped bytes E8 DC A2 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 8ch
        ; Exact mapped bytes E8 CC A2 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 128h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4E FC FF FF: call 0x58898670
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e2ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x58898c57
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 B4 01 00 00: jne 0x58898c0d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        mov eax, dword ptr [ecx + 28h]
        add eax, -6
        test eax, eax
        ; Exact mapped bytes 7E 03: jle 0x58898a6c
        __asm _emit 0x7e
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 02: jmp 0x58898a6e
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        ; Exact mapped bytes E8 6D A2 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 6
        test edx, edx
        ; Exact mapped bytes 0F 8E CC 00 00 00: jle 0x58898b53
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        mov edx, dword ptr [eax + 28h]
        sub edx, 6
        push edx
        ; Exact mapped bytes E8 47 A2 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, 6
        push eax
        ; Exact mapped bytes E8 35 A2 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 6
        push edx
        ; Exact mapped bytes E8 23 A2 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        lea edi, [esi + 98h]
        mov ebx, 3
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 28h]
        sub eax, 6
        push eax
        ; Exact mapped bytes E8 0A A2 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EA: jne 0x58898ac8
        __asm _emit 0x75
        __asm _emit 0xea
        lea edi, [esi + 0a4h]
        mov ebx, 0fh
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 6
        push edx
        ; Exact mapped bytes E8 E2 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EA: jne 0x58898af0
        __asm _emit 0x75
        __asm _emit 0xea
        mov ecx, dword ptr [esi + 0e0h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, 6
        push eax
        ; Exact mapped bytes E8 C8 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 6
        push edx
        ; Exact mapped bytes E8 B6 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        push eax
        ; Exact mapped bytes E8 A4 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 6
        push edx
        ; Exact mapped bytes E8 92 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x58898c57
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 86 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 0
        ; Exact mapped bytes E8 79 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 0
        ; Exact mapped bytes E8 6C A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        lea edi, [esi + 0a4h]
        mov ebx, 0fh
        nop
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 57 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EF: jne 0x58898b80
        __asm _emit 0x75
        __asm _emit 0xef
        lea edi, [esi + 98h]
        mov ebx, 3
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 37 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EF: jne 0x58898ba0
        __asm _emit 0x75
        __asm _emit 0xef
        mov ecx, dword ptr [esi + 0e0h]
        push ebx
        ; Exact mapped bytes E8 23 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        push ebx
        ; Exact mapped bytes E8 17 A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push ebx
        ; Exact mapped bytes E8 0B A1 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        push ebx
        ; Exact mapped bytes E8 FF A0 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes EB 4A: jmp 0x58898c57
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 1f00h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 34: jne 0x58898c57
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 83 3D 8C 83 A2 58 0C: cmp dword ptr [0x58a2838c], 0xc
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x0c
        ; Exact mapped bytes 75 25: jne 0x58898c51
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 94 45 A2 58: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 38h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 94 45 A2 58: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 34h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes EB 06: jmp 0x58898c57
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes FF 05 8C 83 A2 58: inc dword ptr [0x58a2838c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        pop ebx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x58898c75
        __asm _emit 0x74
        __asm _emit 0x16
        nop
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x58898c78
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x58898c60
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
