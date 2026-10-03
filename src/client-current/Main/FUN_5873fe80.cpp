// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 6761 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873FE80 .. +0x1A69 bytes.
extern "C" __declspec(naked) void FUN_5873fe80_segment_00() {
    __asm {
        push -1
        push 5897deceh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 114h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 110h], eax
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 128h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 F8 19 00 00: je 0x587418c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp dword ptr [esi + 470h], ebx
        ; Exact mapped bytes 0F 84 F2 18 00 00: je 0x587417c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        mov eax, dword ptr [esi + 98h]
        mov ebp, 1
        sub ecx, ebp
        cmp eax, ecx
        ; Exact mapped bytes 7D 09: jge 0x5873fef7
        __asm _emit 0x7d
        __asm _emit 0x09
        inc eax
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes EB 06: jmp 0x5873fefd
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 98h], ebx
        mov edx, dword ptr [esi + 530h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x5873ffb6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 2dch]
        push ecx
        mov ecx, dword ptr [esi + 534h]
        ; Exact mapped bytes E8 1E E8 03 00: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        movzx edx, word ptr [esi + 2dch]
        mov ecx, dword ptr [esi + 538h]
        push edx
        ; Exact mapped bytes E8 0B E8 03 00: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 52ch]
        mov eax, 55555556h
        imul ecx
        movzx ecx, word ptr [esi + 2dch]
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7D 2C: jge 0x5873ff81
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov edx, dword ptr [esi + 534h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 0C: je 0x5873ff6f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 534h]
        push ebx
        ; Exact mapped bytes E8 81 16 FF FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 538h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 75 38: jne 0x5873ffb6
        __asm _emit 0x75
        __asm _emit 0x38
        push ebp
        ; Exact mapped bytes EB 2A: jmp 0x5873ffab
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 534h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 0C: jne 0x5873ff9c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 534h]
        push ebp
        ; Exact mapped bytes E8 54 16 FF FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 538h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 0C: je 0x5873ffb6
        __asm _emit 0x74
        __asm _emit 0x0c
        push ebx
        mov ecx, dword ptr [esi + 538h]
        ; Exact mapped bytes E8 3A 16 FF FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 63 F0 FF FF: call 0x5873f020
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [esi + 2deh]
        imul ecx, dword ptr [esi + 4bch]
        mov eax, 57619f1h
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov dword ptr [esi + 32ch], ecx
        mov ecx, dword ptr [esi + 4b0h]
        mov eax, 57619f1h
        imul ecx
        mov ecx, dword ptr [esi + 340h]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edi, eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        sub edi, ecx
        mov ecx, dword ptr [esi + 4ach]
        mov eax, 57619f1h
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        push edi
        add eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5C 32 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x32
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 4fch]
        push edx
        push eax
        ; Exact mapped bytes E8 49 32 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x32
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 504h]
        push edx
        push eax
        ; Exact mapped bytes E8 36 32 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x32
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 508h]
        push edx
        push eax
        ; Exact mapped bytes E8 23 32 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x32
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 50ch]
        push edx
        push eax
        ; Exact mapped bytes E8 10 32 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x32
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 0ah
        push ecx
        mov ecx, dword ptr [esi + 514h]
        sub edx, 2
        push edx
        ; Exact mapped bytes E8 F7 31 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x31
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        sub eax, 0ah
        add ecx, 1eh
        push eax
        push ecx
        mov ecx, dword ptr [esi + 51ch]
        ; Exact mapped bytes E8 DE 31 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x31
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        sub edx, 0ah
        push edx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 518h]
        add eax, 46h
        push eax
        ; Exact mapped bytes E8 C5 31 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x31
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4bch]
        and eax, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x587400dd
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffffe0h
        inc eax
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi + eax*8 + 354h], ecx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [esi + eax*8 + 358h], edx
        mov ecx, dword ptr [esi + 340h]
        mov eax, 10624dd3h
        imul ecx
        mov ecx, dword ptr [esi + 4b0h]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        mov eax, 57619f1h
        imul ecx
        mov eax, dword ptr [esi + 4]
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        lea edx, [edx + ecx - 12ch]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push eax
        ; Exact mapped bytes E8 8B AA 0A 00: call 0x587eabc0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 500h]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x58740150
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 271ah
        mov dword ptr [esi + 458h], ebp
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        ; Exact mapped bytes EB 0F: jmp 0x5874015f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, 2706h
        mov dword ptr [esi + 458h], ebx
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5874016c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E4 2D 1C 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2d
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58740179
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 67 2D 1C 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x2d
        __asm _emit 0x1c
        __asm _emit 0x00
        cmp dword ptr [esi + 4c8h], -1
        ; Exact mapped bytes 75 4F: jne 0x587401d1
        __asm _emit 0x75
        __asm _emit 0x4f
        cmp dword ptr [esi + 31ch], ebx
        ; Exact mapped bytes 75 47: jne 0x587401d1
        __asm _emit 0x75
        __asm _emit 0x47
        mov ecx, dword ptr [esi + 4b0h]
        mov eax, 57619f1h
        imul ecx
        mov ecx, dword ptr [esi + 340h]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edi, eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, dword ptr [esi + 4]
        sub edi, ecx
        mov ecx, dword ptr [esi + 500h]
        push edi
        push edx
        ; Exact mapped bytes E8 C4 30 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x30
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes E9 17 01 00 00: jmp 0x587402e8
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 500h]
        cmp dword ptr [esi + 458h], ebx
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x587402b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 50h
        ; Exact mapped bytes E8 F6 2A 1C 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x2a
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4f0h]
        mov eax, 66666667h
        imul ecx
        mov ecx, dword ptr [esi + 4b0h]
        sar edx, 2
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        mov eax, 57619f1h
        imul ecx
        sar edx, 6
        mov eax, edx
        add edi, edx
        mov edx, dword ptr [esi + 4]
        shr eax, 1fh
        lea ecx, [eax + edi - 12ch]
        push ecx
        mov ecx, dword ptr [esi + 500h]
        push edx
        ; Exact mapped bytes E8 61 30 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x30
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes E8 02 CA 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xca
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 3F: jne 0x5874027f
        __asm _emit 0x75
        __asm _emit 0x3f
        mov eax, dword ptr [esi + 4f0h]
        cmp eax, ebx
        ; Exact mapped bytes 7E 0F: jle 0x58740259
        __asm _emit 0x7e
        __asm _emit 0x0f
        cmp eax, 0ah
        ; Exact mapped bytes 7E 08: jle 0x58740257
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [esi + 4f4h], ebx
        ; Exact mapped bytes EB 28: jmp 0x5874027f
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp eax, ebx
        ; Exact mapped bytes 7D 0D: jge 0x58740268
        __asm _emit 0x7d
        __asm _emit 0x0d
        cmp eax, -0ah
        ; Exact mapped bytes 7D 08: jge 0x58740268
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [esi + 4f4h], ebp
        ; Exact mapped bytes EB 17: jmp 0x5874027f
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes E8 C9 C9 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc9
        __asm _emit 0x23
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58740279
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov dword ptr [esi + 4f4h], eax
        cmp dword ptr [esi + 4f4h], ebx
        ; Exact mapped bytes 74 15: je 0x5874029c
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes E8 AA C9 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc9
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 1eh
        idiv ecx
        add dword ptr [esi + 4f0h], edx
        ; Exact mapped bytes EB 4C: jmp 0x587402e8
        __asm _emit 0xeb
        __asm _emit 0x4c
        ; Exact mapped bytes E8 95 C9 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc9
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 1eh
        idiv ecx
        sub dword ptr [esi + 4f0h], edx
        ; Exact mapped bytes EB 37: jmp 0x587402e8
        __asm _emit 0xeb
        __asm _emit 0x37
        push 100h
        ; Exact mapped bytes E8 25 2A 1C 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2a
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4b0h]
        mov eax, 57619f1h
        imul ecx
        mov ecx, dword ptr [esi + 4]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 500h]
        ; Exact mapped bytes E8 AE 2F 1C 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2f
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [esi + 4f0h], ebx
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, ebx
        ; Exact mapped bytes 0F 84 B7 01 00 00: je 0x587404aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F8 C8 19 00: call 0x588dcbf0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc8
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 AA 01 00 00: je 0x587404aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 9C 45 A2 58: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ebp + 10488h], 1
        ; Exact mapped bytes 0F 85 9D 01 00 00: jne 0x587404b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10490h]
        and edx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x58740326
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffff8h
        inc edx
        ; Exact mapped bytes 0F 85 84 01 00 00: jne 0x587404b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        cmp ecx, ebx
        ; Exact mapped bytes 0F 8C FF 00 00 00: jl 0x58740436
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10524h]
        mov edx, dword ptr [eax + 0b0h]
        imul edx, dword ptr [eax + 0a8h]
        cmp ecx, edx
        ; Exact mapped bytes 0F 8F E4 00 00 00: jg 0x58740436
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        cmp edx, ebx
        ; Exact mapped bytes 0F 8C D9 00 00 00: jl 0x58740436
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 0b4h]
        imul edi, dword ptr [eax + 0ach]
        cmp edx, edi
        ; Exact mapped bytes 0F 8F C4 00 00 00: jg 0x58740436
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 458h], ebx
        ; Exact mapped bytes 74 67: je 0x587403e1
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [esi + 340h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        imul edx, edx, 56h
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        mov edx, dword ptr [esi + 4b0h]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, dword ptr [esi + 0b4h]
        mov edx, dword ptr [esi + 0a8h]
        sub eax, edi
        sub ecx, dword ptr [esi + 0b0h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push ecx
        push edx
        mov ecx, ebp
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x587404a5
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edi, word ptr [esi + 2e2h]
        mov edx, edi
        imul edx, edx, 56h
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esi + 4b0h]
        mov ebx, eax
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esi + 0a0h]
        sub eax, ebx
        push eax
        sub ecx, edi
        push ecx
        mov ecx, dword ptr [esi + 0a4h]
        push ecx
        push edx
        mov ecx, ebp
        ; Exact mapped bytes E8 7E 58 0A 00: call 0x587e5cb0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes EB 74: jmp 0x587404aa
        __asm _emit 0xeb
        __asm _emit 0x74
        mov eax, dword ptr [esi + 0a4h]
        mov edx, dword ptr [esi + 0b8h]
        mov ecx, eax
        imul ecx, eax
        push ecx
        push ebx
        push edx
        ; Exact mapped bytes E8 F9 C7 23 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc7
        __asm _emit 0x23
        __asm _emit 0x00
        movzx edi, word ptr [esi + 2e2h]
        mov ecx, edi
        imul ecx, ecx, 56h
        mov eax, 51eb851fh
        imul ecx
        mov ecx, dword ptr [esi + 4b0h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ebp, eax
        mov eax, 57619f1h
        imul ecx
        mov eax, dword ptr [esi + 0a4h]
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        sub ecx, ebp
        push ecx
        mov ecx, dword ptr [esi + 0b8h]
        sub edx, edi
        push edx
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 58 0A 00: call 0x587e5cb0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 9C 45 A2 58: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [esi + 220h], ebx
        ; Exact mapped bytes 0F 84 07 02 00 00: je 0x587406c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 1D DC 8E 9C 58: cmp dword ptr [0x589c8edc], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x58740615
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 80 45 A2 58: mov edi, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edi + 1ch]
        sub eax, dword ptr [edi + 14h]
        mov ecx, dword ptr [ebp + 10524h]
        mov ebp, dword ptr [ecx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        mov ebp, dword ptr [esi + 4]
        mov ebx, dword ptr [ecx + 50h]
        sub ebp, eax
        mov eax, dword ptr [edi + 20h]
        sub eax, dword ptr [edi + 18h]
        sub ebp, ebx
        mov ebx, dword ptr [ecx + 54h]
        mov ecx, dword ptr [ecx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ecx
        mov edi, eax
        sub edi, dword ptr [esi + 8]
        add edi, ebx
        ; Exact mapped bytes E8 1B C7 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc7
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        ; Exact mapped bytes 8B 0D DC 46 A2 58: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 13h
        push edx
        ; Exact mapped bytes E8 DE 12 FF FF: call 0x58731810
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 35: je 0x5874056d
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes DB 05 F8 48 A2 58: fild dword ptr [0x58a248f8]
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D C7 23 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc7
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        ; Exact mapped bytes DC C1: fadd st(1), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc1
        mov eax, 2
        test al, 1
        ; Exact mapped bytes 74 02: je 0x58740552
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        shr eax, 1
        ; Exact mapped bytes 74 06: je 0x5874055c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes D9 C1: fld st(1)
        __asm _emit 0xd9
        __asm _emit 0xc1
        ; Exact mapped bytes DE CA: fmulp st(2)
        __asm _emit 0xde
        __asm _emit 0xca
        ; Exact mapped bytes EB F0: jmp 0x5874054c
        __asm _emit 0xeb
        __asm _emit 0xf0
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes E8 3D C7 23 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc7
        __asm _emit 0x23
        __asm _emit 0x00
        push eax
        push edi
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 93 6E 07 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x6e
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 21c34h], 0
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x58740615
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 474h], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x58740615
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [esi + 74h], eax
        ; Exact mapped bytes 75 7B: jne 0x58740615
        __asm _emit 0x75
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 3bh
        push 38h
        push 0ah
        ; Exact mapped bytes E8 05 B9 1A 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb9
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 66: jne 0x58740615
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 22h
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x587405d8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x587405d8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes EB 02: jmp 0x587405da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 AA 73 1C 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x73
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x5874060a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x5874060a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes EB 02: jmp 0x5874060c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        dec dword ptr [esi + 220h]
        push 58h
        ; Exact mapped bytes E8 2C C6 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc6
        __asm _emit 0x23
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 18h], ebp
        xor edi, edi
        mov dword ptr [esp + 130h], edi
        cmp ebp, edi
        ; Exact mapped bytes 74 6A: je 0x587406a2
        __asm _emit 0x74
        __asm _emit 0x6a
        ; Exact mapped bytes A1 F4 46 A2 58: mov eax, dword ptr [0x58a246f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 14h
        ; Exact mapped bytes 7E 14: jle 0x5874065a
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], edi
        ; Exact mapped bytes 74 0C: je 0x5874065a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edi, dword ptr [eax + 190h]
        add edi, 500h
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [ecx + 10524h]
        push 1770h
        ; Exact mapped bytes E8 C6 C5 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc5
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 0ah
        idiv ecx
        mov eax, dword ptr [esi + 8]
        sub eax, edx
        add eax, 5
        push eax
        ; Exact mapped bytes E8 B0 C5 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc5
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 0ah
        idiv ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, ebp
        sub eax, edx
        add eax, 5
        push eax
        push edi
        push ebx
        ; Exact mapped bytes E8 E0 75 1C 00: call 0x58907c80
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x75
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587406a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 102h
        mov ecx, eax
        mov dword ptr [esp + 134h], 0ffffffffh
        ; Exact mapped bytes E8 65 26 1C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x26
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 9C 45 A2 58: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        xor ebx, ebx
        mov eax, dword ptr [esi + 224h]
        cmp eax, ebx
        mov edi, 25h
        ; Exact mapped bytes 0F 8E F1 00 00 00: jle 0x587407c7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 474h], ebx
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x58740796
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 540h], ebx
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x58740796
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 21c34h], ebx
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x58740796
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x58740796
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 37h
        push 34h
        push 9
        ; Exact mapped bytes E8 93 B7 1A 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb7
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 5E: jne 0x5874077f
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 16: jle 0x58740744
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0E: je 0x58740744
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes EB 02: jmp 0x58740746
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 3E 72 1C 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x72
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 16: jle 0x58740775
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0E: je 0x58740775
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes EB 02: jmp 0x58740777
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, 1
        mov dword ptr [esi + 540h], eax
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 1090ch], eax
        dec dword ptr [esi + 224h]
        mov ecx, dword ptr [esi + 50ch]
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 0ffffh
        ; Exact mapped bytes 66 33 C2: xor ax, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov edi, 0fffeh
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes EB 1B: jmp 0x587407e2
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 75 19: jne 0x587407e2
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [esi + 50ch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov dword ptr [esi + 224h], 0ffffffffh
        cmp dword ptr [esi + 460h], ebx
        ; Exact mapped bytes 0F 85 1D 04 00 00: jne 0x58740c0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 80 45 A2 58: mov ebp, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 1ch]
        sub eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 10524h]
        mov ebx, dword ptr [ecx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebx
        mov edi, dword ptr [esi + 4]
        sub edi, eax
        mov eax, dword ptr [ebp + 20h]
        sub eax, dword ptr [ebp + 18h]
        sub edi, dword ptr [ecx + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebx
        add eax, dword ptr [ecx + 54h]
        mov ecx, dword ptr [esi + 520h]
        sub eax, dword ptr [esi + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x5874084e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 B2 6C 07 00: call 0x587b7500
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE CE 02 00 00 00: cmp word ptr [esi + 0x2ce], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 75: je 0x587408cd
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 228h]
        test eax, eax
        ; Exact mapped bytes 7E 2D: jle 0x5874088f
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov eax, dword ptr [esi + 4c0h]
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x58740873
        __asm _emit 0x7e
        __asm _emit 0x07
        dec eax
        mov dword ptr [esi + 4c0h], eax
        ; Exact mapped bytes 66 83 BE CC 02 00 00 02: cmp word ptr [esi + 0x2cc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 74 09: je 0x58740886
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [esi + 45ch], 0
        ; Exact mapped bytes 74 59: je 0x587408df
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, esi
        ; Exact mapped bytes E8 03 B7 FF FF: call 0x5873bf90
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3E: jmp 0x587408cd
        __asm _emit 0xeb
        __asm _emit 0x3e
        ; Exact mapped bytes 75 3C: jne 0x587408cd
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 11: jne 0x587408b0
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 7bh
        push 7ah
        push 1ch
        ; Exact mapped bytes E8 00 B6 1A 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb6
        __asm _emit 0x1a
        __asm _emit 0x00
        lea edx, [esp + 14h]
        push edx
        push 5
        mov ecx, esi
        mov dword ptr [esi + 228h], 0ffffffffh
        mov byte ptr [esp + 1ch], 61h
        ; Exact mapped bytes E8 13 C6 FF FF: call 0x5873cee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 45ch], 0
        ; Exact mapped bytes 74 09: je 0x587408df
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, esi
        ; Exact mapped bytes E8 23 9A FF FF: call 0x5873a300
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 24: jmp 0x58740903
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [esi + 474h], 0
        ; Exact mapped bytes 75 1B: jne 0x58740903
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 4c8h]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x587408fc
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 4
        ; Exact mapped bytes 74 05: je 0x587408fc
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 64h
        ; Exact mapped bytes 75 07: jne 0x58740903
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 9D B2 FF FF: call 0x5873bba0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 74h]
        test edi, edi
        ; Exact mapped bytes 0F 84 FD 02 00 00: je 0x58740c0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 10490h]
        add eax, dword ptr [ecx + 10488h]
        mov ecx, 0ch
        cdq
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 DB 02 00 00: jne 0x58740c0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4b0h]
        mov ecx, dword ptr [edi + 4]
        sub ecx, dword ptr [esi + 4]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [edi + 8]
        sub eax, edx
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 25 C3 23 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc3
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes E8 30 C3 23 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc3
        __asm _emit 0x23
        __asm _emit 0x00
        movzx edx, word ptr [esi + 2deh]
        movzx ecx, word ptr [esi + 2e0h]
        imul ecx, edx
        imul ecx, ecx, 19h
        mov dword ptr [esi + 330h], eax
        mov eax, 57619f1h
        imul ecx
        sar edx, 5
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov eax, 10624dd3h
        imul ecx
        sar edx, 7
        mov edi, edx
        shr edi, 1fh
        xor ebx, ebx
        add edi, edx
        cmp dword ptr [esi + 464h], ebx
        ; Exact mapped bytes 0F 85 51 02 00 00: jne 0x58740c0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebp
        sub eax, dword ptr [esi + 32ch]
        mov ecx, ebx
        sets cl
        dec ecx
        and eax, ecx
        mov ecx, dword ptr [esi + 51ch]
        push eax
        ; Exact mapped bytes E8 8A 69 1C 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x69
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 330h]
        mov ecx, dword ptr [esi + 518h]
        push edx
        ; Exact mapped bytes E8 78 69 1C 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x69
        __asm _emit 0x1c
        __asm _emit 0x00
        cmp dword ptr [esi + 454h], ebx
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x58740a94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 558h], ebx
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x58740a94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x58740a94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 66666667h
        imul edi
        sub edi, dword ptr [esi + 32ch]
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        add eax, dword ptr [esi + 330h]
        cmp edi, eax
        ; Exact mapped bytes 7D 61: jge 0x58740a94
        __asm _emit 0x7d
        __asm _emit 0x61
        mov eax, dword ptr [esi + 4c8h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0A: je 0x58740a47
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 1
        ; Exact mapped bytes 74 05: je 0x58740a47
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 64h
        ; Exact mapped bytes 75 4D: jne 0x58740a94
        __asm _emit 0x75
        __asm _emit 0x4d
        mov dword ptr [esi + 454h], ebx
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 100ch]
        mov cl, byte ptr [eax + 4]
        and cl, 1fh
        push 1
        cmp cl, 9
        ; Exact mapped bytes 75 16: jne 0x58740a7f
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [esi + 7ch]
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0a0h]
        push edx
        ; Exact mapped bytes E8 E3 E1 11 00: call 0x5885ec60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe1
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x58740a94
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 5C 7A 11 00: call 0x588584f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7a
        __asm _emit 0x11
        __asm _emit 0x00
        cmp ebp, dword ptr [esi + 32ch]
        ; Exact mapped bytes 0F 8D 6B 01 00 00: jge 0x58740c0b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 464h], 1
        mov dword ptr [esi + 4c8h], 0ah
        mov dword ptr [esi + 31ch], ebx
        mov dword ptr [esi + 324h], ebx
        ; Exact mapped bytes 39 1D 74 45 A2 58: cmp dword ptr [0x58a24574], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 67: je 0x58740b2f
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [esi + 340h]
        mov ecx, dword ptr [esi + 4b0h]
        mov edx, dword ptr [esi + 4ach]
        push eax
        mov eax, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [esi + 4]
        push edx
        push eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 10488h]
        mov eax, dword ptr [eax + 10490h]
        push ecx
        push edx
        push eax
        lea ecx, [esp + 40h]
        push 5898ce08h
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 24h
        push ebx
        lea edx, [esp + 24h]
        push edx
        lea eax, [esp + 2ch]
        push eax
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        push eax
        lea ecx, [esp + 30h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 21c34h], ebx
        ; Exact mapped bytes 0F 85 CB 00 00 00: jne 0x58740c0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 474h], ebx
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x58740c0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 0F 85 AD 00 00 00: jne 0x58740c0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 2fh
        push 2ah
        push 7
        ; Exact mapped bytes E8 41 B3 1A 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb3
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x58740c0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 29h
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 16: jle 0x58740b9f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0E: je 0x58740b9f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x58740ba1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 5F: jne 0x58740c0b
        __asm _emit 0x75
        __asm _emit 0x5f
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 16: jle 0x58740bcf
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0E: je 0x58740bcf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x58740bd1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 B3 6D 1C 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6d
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 16: jle 0x58740c00
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0E: je 0x58740c00
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x58740c02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 21c34h], 0
        ; Exact mapped bytes 0F 85 D2 04 00 00: jne 0x587410f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 4]
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 41 99 FF FF: call 0x5873a570
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        mov eax, dword ptr [esi + 74h]
        mov ebx, 1
        cmp dword ptr [eax + 6070h], ebx
        ; Exact mapped bytes 75 1E: jne 0x58740c5f
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 21c48h]
        push edi
        push eax
        ; Exact mapped bytes E8 2C 4D 03 00: call 0x58775980
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x58740db3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x58740c72
        __asm _emit 0xeb
        __asm _emit 0x13
        movzx edx, byte ptr [edi + 354h]
        cmp dword ptr [esi + 80h], edx
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x58740db3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 53ch], 0
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x58740d22
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 474h], ebx
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x58740d22
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        cmp ebp, dword ptr [eax + 0dcch]
        ; Exact mapped bytes 0F 87 83 00 00 00: ja 0x58740d22
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 21c34h], 0
        ; Exact mapped bytes 75 74: jne 0x58740d22
        __asm _emit 0x75
        __asm _emit 0x74
        cmp dword ptr [eax + 63b0h], 0
        ; Exact mapped bytes 75 6B: jne 0x58740d22
        __asm _emit 0x75
        __asm _emit 0x6b
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 2bh
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x58740ce0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x58740ce0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 194h]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes EB 02: jmp 0x58740ce2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes A1 FC 48 A2 58: mov eax, dword ptr [0x58a248fc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 A3 6C 1C 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x58740d11
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x58740d11
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes EB 02: jmp 0x58740d13
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 53ch], ebx
        cmp dword ptr [esi + 550h], 0
        ; Exact mapped bytes 75 4B: jne 0x58740d76
        __asm _emit 0x75
        __asm _emit 0x4b
        cmp dword ptr [esi + 474h], ebx
        ; Exact mapped bytes 75 43: jne 0x58740d76
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        cmp ebp, dword ptr [eax + 0dc4h]
        ; Exact mapped bytes 77 32: ja 0x58740d76
        __asm _emit 0x77
        __asm _emit 0x32
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 21c34h], 0
        ; Exact mapped bytes 75 23: jne 0x58740d76
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [eax + 63b0h], 0
        ; Exact mapped bytes 75 14: jne 0x58740d70
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 84h
        push 22h
        ; Exact mapped bytes E8 90 B3 1A 00: call 0x588ec100
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb3
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [esi + 550h], ebx
        cmp dword ptr [esi + 53ch], ebx
        ; Exact mapped bytes 75 35: jne 0x58740db3
        __asm _emit 0x75
        __asm _emit 0x35
        cmp dword ptr [esi + 474h], ebx
        ; Exact mapped bytes 75 2D: jne 0x58740db3
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        cmp ebp, dword ptr [ecx + 0dcch]
        ; Exact mapped bytes 76 1D: jbe 0x58740db3
        __asm _emit 0x76
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 21c34h], 0
        ; Exact mapped bytes 75 0E: jne 0x58740db3
        __asm _emit 0x75
        __asm _emit 0x0e
        xor eax, eax
        mov dword ptr [esi + 53ch], eax
        mov dword ptr [esi + 550h], eax
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 0F 85 BD 01 00 00: jne 0x58740f81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 474h], ebx
        ; Exact mapped bytes 0F 85 B1 01 00 00: jne 0x58740f81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 21c34h], 0
        ; Exact mapped bytes 0F 85 9E 01 00 00: jne 0x58740f81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 0ch]
        test edi, edi
        ; Exact mapped bytes 0F 84 93 01 00 00: je 0x58740f81
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, edi
        xor ebp, ebp
        cmp dword ptr [edi + 6070h], ebx
        ; Exact mapped bytes 75 20: jne 0x58740e1a
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [esi + 74h]
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 21c48h]
        push edx
        push edi
        ; Exact mapped bytes E8 71 4B 03 00: call 0x58775980
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x58740eaf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x58740e2f
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [esi + 74h]
        mov cl, byte ptr [edi + 354h]
        cmp cl, byte ptr [eax + 354h]
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58740eaf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 100ch]
        mov al, byte ptr [edx + 4]
        and al, 1fh
        cmp al, 9
        ; Exact mapped bytes 75 0C: jne 0x58740e4a
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 BF 64 01 00 00 03: cmp word ptr [edi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 72 02: jb 0x58740e4a
        __asm _emit 0x72
        __asm _emit 0x02
        mov ebp, ebx
        mov ebx, dword ptr [esi + 544h]
        test ebx, ebx
        ; Exact mapped bytes 75 35: jne 0x58740e89
        __asm _emit 0x75
        __asm _emit 0x35
        test ebp, ebp
        ; Exact mapped bytes 75 31: jne 0x58740e89
        __asm _emit 0x75
        __asm _emit 0x31
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 10 97 FF FF: call 0x5873a570
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [esi + 2e2h]
        cmp eax, ecx
        ; Exact mapped bytes 77 1E: ja 0x58740e89
        __asm _emit 0x77
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 1D 2C C4 98 58: mov ebx, dword ptr [0x5898c42c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 2B 05 08 FC 9C 58: sub eax, dword ptr [0x589cfc08]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        cmp eax, 1388h
        ; Exact mapped bytes 77 44: ja 0x58740ec4
        __asm _emit 0x77
        __asm _emit 0x44
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes A3 08 FC 9C 58: mov dword ptr [0x589cfc08], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes EB 26: jmp 0x58740eaf
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp ebx, 1
        ; Exact mapped bytes 75 21: jne 0x58740eaf
        __asm _emit 0x75
        __asm _emit 0x21
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 DA 96 FF FF: call 0x5873a570
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [esi + 2e2h]
        cmp eax, edx
        ; Exact mapped bytes 77 04: ja 0x58740ea5
        __asm _emit 0x77
        __asm _emit 0x04
        cmp ebp, ebx
        ; Exact mapped bytes 75 0A: jne 0x58740eaf
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esi + 544h], 0
        mov edi, dword ptr [edi + 78h]
        mov ebx, 1
        test edi, edi
        ; Exact mapped bytes 0F 85 31 FF FF FF: jne 0x58740df0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x58740f81
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 23h
        push 1eh
        push 5
        ; Exact mapped bytes E8 DB AF 1A 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xaf
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x58740f6b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 1dh
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 14: jle 0x58740f03
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x58740f03
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes EB 02: jmp 0x58740f05
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 5B: jne 0x58740f6b
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 14: jle 0x58740f31
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x58740f31
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes EB 02: jmp 0x58740f33
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 51 6A 1C 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x6a
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 14: jle 0x58740f60
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x58740f60
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes EB 02: jmp 0x58740f62
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 544h], 1
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes A3 08 FC 9C 58: mov dword ptr [0x589cfc08], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        mov ebx, 1
        mov ecx, esi
        ; Exact mapped bytes E8 B8 A5 FF FF: call 0x5873b540
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 65 01 00 00: je 0x587410f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 4]
        cmp dword ptr [esi + 74h], edi
        ; Exact mapped bytes 0F 85 53 01 00 00: jne 0x587410f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        sub edx, dword ptr [eax + 8]
        mov ecx, dword ptr [esi + 4]
        sub ecx, dword ptr [eax + 4]
        mov eax, edx
        imul eax, edx
        mov edx, ecx
        imul edx, ecx
        add eax, edx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 C9 BC 23 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbc
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        movzx eax, word ptr [esp + 14h]
        movzx ecx, word ptr [esi + 2e2h]
        or eax, 0c00h
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes D9 6C 24 18: fldcw word ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DF 7C 24 18: fistp qword ptr [esp + 0x18]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        cmp eax, ecx
        ; Exact mapped bytes 0F 87 E4 00 00 00: ja 0x587410dc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 548h], 0
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x587410d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 63b0h], 0
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x587410d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 33h
        push 30h
        push 8
        ; Exact mapped bytes E8 8D AE 1A 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x587410d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 24h
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x58741054
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x58741054
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x58741056
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 6F: jne 0x587410d0
        __asm _emit 0x75
        __asm _emit 0x6f
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x58741085
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x58741085
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 90h]
        ; Exact mapped bytes EB 02: jmp 0x58741087
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 FD 68 1C 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 26: jle 0x587410c6
        __asm _emit 0x7e
        __asm _emit 0x26
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 1D: je 0x587410c6
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 548h], ebx
        ; Exact mapped bytes EB 2F: jmp 0x587410f5
        __asm _emit 0xeb
        __asm _emit 0x2f
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ecx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 548h], ebx
        ; Exact mapped bytes EB 1D: jmp 0x587410f5
        __asm _emit 0xeb
        __asm _emit 0x1d
        cmp eax, ecx
        ; Exact mapped bytes 76 19: jbe 0x587410f5
        __asm _emit 0x76
        __asm _emit 0x19
        cmp dword ptr [esi + 548h], ebx
        ; Exact mapped bytes 75 11: jne 0x587410f5
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [esi + 548h], 0
        ; Exact mapped bytes EB 05: jmp 0x587410f5
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebx, 1
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 4]
        cmp dword ptr [esi + 74h], ecx
        ; Exact mapped bytes 0F 85 42 05 00 00: jne 0x58741649
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 474h], 0
        ; Exact mapped bytes 0F 84 88 01 00 00: je 0x5874129c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4c8h]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 79 01 00 00: je 0x5874129c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 478h], 0
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x5874129c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 100ch]
        mov cl, byte ptr [edx + 4]
        and cl, 1fh
        cmp cl, 9
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x587411f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 45ch], 0
        ; Exact mapped bytes 74 13: je 0x58741161
        __asm _emit 0x74
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x58741161
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0a0h]
        push ebx
        ; Exact mapped bytes EB 0C: jmp 0x5874116d
        __asm _emit 0xeb
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 FE EE 11 00: call 0x58860070
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xee
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 55730h
        cmp dword ptr [esi + 340h], eax
        ; Exact mapped bytes 7E 06: jle 0x58741185
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 340h], eax
        mov ecx, dword ptr [esi + 340h]
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 43 DA 11 00: call 0x5885ebe0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        movzx eax, word ptr [esi + 2deh]
        movzx ecx, word ptr [esi + 2e0h]
        imul ecx, eax
        imul ecx, ecx, 19h
        mov eax, 57619f1h
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, dword ptr [esi + 51ch]
        mov eax, dword ptr [edx + 64h]
        push ecx
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0a0h]
        push eax
        ; Exact mapped bytes E8 32 DA 11 00: call 0x5885ec10
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 81 F1 11 00: call 0x58860370
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x5874129c
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 45ch], 0
        ; Exact mapped bytes 74 12: je 0x5874120f
        __asm _emit 0x74
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x5874120f
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 9ch]
        push ebx
        ; Exact mapped bytes EB 0D: jmp 0x5874121c
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 9ch]
        push eax
        ; Exact mapped bytes E8 AF 79 11 00: call 0x58858bd0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x79
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 55730h
        cmp dword ptr [esi + 340h], eax
        ; Exact mapped bytes 7E 06: jle 0x58741234
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 340h], eax
        mov edx, dword ptr [esi + 340h]
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 9ch]
        push edx
        ; Exact mapped bytes E8 25 72 11 00: call 0x58858470
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x72
        __asm _emit 0x11
        __asm _emit 0x00
        movzx edx, word ptr [esi + 2deh]
        movzx ecx, word ptr [esi + 2e0h]
        imul ecx, edx
        imul ecx, ecx, 19h
        mov eax, 57619f1h
        imul ecx
        mov ecx, dword ptr [esi + 51ch]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 64h]
        push eax
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 9ch]
        push edx
        ; Exact mapped bytes E8 15 72 11 00: call 0x588584a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x72
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 34 7C 11 00: call 0x58858ed0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7c
        __asm _emit 0x11
        __asm _emit 0x00
        movzx edx, word ptr [esi + 2deh]
        movzx ecx, word ptr [esi + 2e0h]
        imul ecx, edx
        imul ecx, ecx, 19h
        mov eax, 57619f1h
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, dword ptr [esi + 51ch]
        mov eax, dword ptr [edx + 64h]
        imul eax, eax, 64h
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 4c8h]
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 6A 03 00 00: je 0x58741649
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 14h
        ; Exact mapped bytes 0F 8F 14 01 00 00: jg 0x587413fc
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        cmp dword ptr [esi + 55ch], edx
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x587413fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 55ch], edx
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 35h
        ; Exact mapped bytes 7E 16: jle 0x58741323
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58741323
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0d40h
        ; Exact mapped bytes EB 02: jmp 0x58741325
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 504h]
        push eax
        ; Exact mapped bytes E8 EF 35 FF FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3fch
        ; Exact mapped bytes 7E 17: jle 0x58741359
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58741359
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0ff0h]
        ; Exact mapped bytes EB 02: jmp 0x5874135b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 510h]
        push eax
        ; Exact mapped bytes E8 59 03 FF FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 37h
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 16: jle 0x5874138f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5874138f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0dc0h
        ; Exact mapped bytes EB 02: jmp 0x58741391
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 514h]
        mov dword ptr [edx + 0f8h], eax
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 16: jle 0x587413c0
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587413c0
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0dc0h
        ; Exact mapped bytes EB 02: jmp 0x587413c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 518h]
        mov dword ptr [edx + 0f8h], eax
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 0F 8E 5C 02 00 00: jle 0x5874163b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 0F 84 4F 02 00 00: je 0x5874163b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 190h]
        add eax, 0dc0h
        ; Exact mapped bytes E9 41 02 00 00: jmp 0x5874163d
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 44 02 00 00: je 0x58741649
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax - 15h]
        cmp edx, 1dh
        ; Exact mapped bytes 0F 87 0F 01 00 00: ja 0x58741520
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 55ch], ebx
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x58741520
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 55ch], ebx
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 34h
        ; Exact mapped bytes 7E 16: jle 0x58741447
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58741447
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0d00h
        ; Exact mapped bytes EB 02: jmp 0x58741449
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 504h]
        push eax
        ; Exact mapped bytes E8 CB 34 FF FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3fbh
        ; Exact mapped bytes 7E 17: jle 0x5874147d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5874147d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 0fech]
        ; Exact mapped bytes EB 02: jmp 0x5874147f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 510h]
        push eax
        ; Exact mapped bytes E8 35 02 FF FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 36h
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 16: jle 0x587414b3
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587414b3
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0d80h
        ; Exact mapped bytes EB 02: jmp 0x587414b5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 514h]
        mov dword ptr [edx + 0f8h], eax
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 16: jle 0x587414e4
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587414e4
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0d80h
        ; Exact mapped bytes EB 02: jmp 0x587414e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 518h]
        mov dword ptr [edx + 0f8h], eax
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 0F 8E 38 01 00 00: jle 0x5874163b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 0F 84 2B 01 00 00: je 0x5874163b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 190h]
        add eax, 0d80h
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x5874163d
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 20 01 00 00: je 0x58741649
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 32h
        ; Exact mapped bytes 0F 8E 17 01 00 00: jle 0x58741649
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 55ch], 0
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x58741649
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 55ch], 0
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 25h
        ; Exact mapped bytes 7E 16: jle 0x5874156d
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5874156d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 940h
        ; Exact mapped bytes EB 02: jmp 0x5874156f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 504h]
        push eax
        ; Exact mapped bytes E8 A5 33 FF FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2b6h
        ; Exact mapped bytes 7E 17: jle 0x587415a3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587415a3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 0ad8h]
        ; Exact mapped bytes EB 02: jmp 0x587415a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 510h]
        push eax
        ; Exact mapped bytes E8 0F 01 FF FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, 26h
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 16: jle 0x587415d9
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587415d9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 980h
        ; Exact mapped bytes EB 02: jmp 0x587415db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 514h]
        mov dword ptr [edx + 0f8h], eax
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 16: jle 0x5874160a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5874160a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 980h
        ; Exact mapped bytes EB 02: jmp 0x5874160c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 518h]
        mov dword ptr [edx + 0f8h], eax
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 16: jle 0x5874163b
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5874163b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 980h
        ; Exact mapped bytes EB 02: jmp 0x5874163d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 51ch]
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [edx + 105f0h]
        ; Exact mapped bytes 66 83 FA 03: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x58741797
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 28h
        lea ecx, [eax + 32h]
        lea edi, [eax - 14h]
        lea ebx, [eax + 3ch]
        ; Exact mapped bytes 66 83 FA 0F: cmp dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0f
        ; Exact mapped bytes 75 0D: jne 0x58741681
        __asm _emit 0x75
        __asm _emit 0x0d
        lea eax, [ecx + 1eh]
        mov ecx, 23h
        lea edi, [ebx - 0ah]
        mov ebx, ecx
        mov edx, dword ptr [esi + 74h]
        cmp dword ptr [edx + 606ch], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x58741797
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        cmp edx, eax
        ; Exact mapped bytes 7C 3C: jl 0x587416d4
        __asm _emit 0x7c
        __asm _emit 0x3c
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 10524h]
        mov ebp, dword ptr [eax + 0b0h]
        imul ebp, dword ptr [eax + 0a8h]
        sub ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 7F 1E: jg 0x587416d4
        __asm _emit 0x7f
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 8]
        cmp ecx, edi
        ; Exact mapped bytes 7C 17: jl 0x587416d4
        __asm _emit 0x7c
        __asm _emit 0x17
        mov edx, dword ptr [eax + 0b4h]
        imul edx, dword ptr [eax + 0ach]
        sub edx, ebx
        cmp ecx, edx
        ; Exact mapped bytes 0F 8E C3 00 00 00: jle 0x58741797
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 460h], 0
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x58741797
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 F6 AB FF FF: call 0x5873c2e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        cmp dword ptr [esi + 348h], eax
        ; Exact mapped bytes 66 89 86 DC 02 00 00: mov word ptr [esi + 0x2dc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 460h], 1
        mov dword ptr [esi + 31ch], eax
        mov dword ptr [esi + 4c8h], 0ah
        mov dword ptr [esi + 324h], eax
        ; Exact mapped bytes 7C 0A: jl 0x58741725
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [esi + 348h], 0ffffff6ah
        mov ecx, dword ptr [esi + 520h]
        cmp ecx, eax
        ; Exact mapped bytes 74 07: je 0x58741736
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 53: jne 0x58741797
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [eax + 2e4h]
        test ebx, ebx
        ; Exact mapped bytes 74 44: je 0x58741797
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 9fh
        push 0
        push 5898cde8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 2E 94 03 00: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [ecx + 2e4h]
        push 10101h
        push 1
        push 5898cdc0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 09 94 03 00: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        inc dword ptr [esi + 4bch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x587418c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0D: je 0x587417c2
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x587417a8
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x587418c1
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x587418c1
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 100ch]
        mov cl, byte ptr [eax + 4]
        and cl, 1fh
        push 2710h
        cmp cl, 9
        ; Exact mapped bytes 75 4B: jne 0x58741833
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 E7 D3 11 00: call 0x5885ebe0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd3
        __asm _emit 0x11
        __asm _emit 0x00
        movzx eax, word ptr [esi + 2deh]
        movzx ecx, word ptr [esi + 2e0h]
        imul ecx, eax
        imul ecx, ecx, 19h
        mov eax, 57619f1h
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [edx + 0a0h]
        push ebx
        ; Exact mapped bytes E8 DF D3 11 00: call 0x5885ec10
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd3
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 48: jmp 0x5874187b
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 2D 6C 11 00: call 0x58858470
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x6c
        __asm _emit 0x11
        __asm _emit 0x00
        movzx edx, word ptr [esi + 2deh]
        movzx ecx, word ptr [esi + 2e0h]
        imul ecx, edx
        imul ecx, ecx, 19h
        mov eax, 57619f1h
        imul ecx
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 9ch]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        push ebx
        ; Exact mapped bytes E8 25 6C 11 00: call 0x588584a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6c
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [esi + 7ch]
        mov eax, dword ptr [esi + 74h]
        shl edx, 4
        push esi
        lea ecx, [edx + eax + 138ch]
        ; Exact mapped bytes E8 3F A4 1A 00: call 0x588ebcd0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa4
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 88 13 1C 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 D1 13 1C 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x13
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edi, dword ptr [esi + 490h]
        cmp edi, ebx
        ; Exact mapped bytes 74 0E: je 0x587418b7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, edi
        ; Exact mapped bytes E8 70 13 1C 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x13
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 B9 13 1C 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x13
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 128h]
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
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 110h]
        xor ecx, esp
        ; Exact mapped bytes E8 F8 B2 23 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb2
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 120h
        ret
    }
}
