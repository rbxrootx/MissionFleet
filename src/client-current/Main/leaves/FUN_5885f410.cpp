// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885F410 .. +0x4A6 bytes.
extern "C" __declspec(naked) void FUN_5885f410() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 8A 04 00 00: je 0x5885f8aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        push ebx
        mov edx, 1f00h
        push ebp
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        xor ebp, ebp
        push edi
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 84 1A 03 00 00: je 0x5885f759
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x03
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
        ; Exact mapped bytes 0F 84 05 03 00 00: je 0x5885f759
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x03
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
        mov eax, 200h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 22 04 00 00: jne 0x5885f88b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 69 72 07 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x72
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 0C 04 00 00: je 0x5885f88b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        movzx eax, word ptr [esi + 0c8h]
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 76 08: jbe 0x5885f498
        __asm _emit 0x76
        __asm _emit 0x08
        dec eax
        ; Exact mapped bytes 66 89 86 C8 00 00 00: mov word ptr [esi + 0xc8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 1
        cmp dword ptr [esi + 0a8h], ebx
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x5885f575
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edi, [esi + 0b4h]
        push edx
        push edi
        ; Exact mapped bytes E8 7E 21 F4 FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x21
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        movzx eax, word ptr [eax + 164h]
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 4A: jne 0x5885f522
        __asm _emit 0x75
        __asm _emit 0x4a
        cmp dword ptr [edi], 7dh
        ; Exact mapped bytes 7C 3C: jl 0x5885f519
        __asm _emit 0x7c
        __asm _emit 0x3c
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 398h]
        mov edx, dword ptr [eax + 100ch]
        mov eax, dword ptr [edx + 68h]
        xor ecx, 0aaaaaaaah
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 42 68: fild dword ptr [edx + 0x68]
        __asm _emit 0xdb
        __asm _emit 0x42
        __asm _emit 0x68
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x5885f50a
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 38 EB 99 58: fmul qword ptr [0x5899eb38]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 5C: jne 0x5885f575
        __asm _emit 0x75
        __asm _emit 0x5c
        mov ecx, esi
        ; Exact mapped bytes E8 80 FE FF FF: call 0x5885f3a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 53: jmp 0x5885f575
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 4D: jne 0x5885f575
        __asm _emit 0x75
        __asm _emit 0x4d
        cmp dword ptr [edi], 96h
        ; Exact mapped bytes 7C 3C: jl 0x5885f56c
        __asm _emit 0x7c
        __asm _emit 0x3c
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 398h]
        mov edx, dword ptr [eax + 100ch]
        mov eax, dword ptr [edx + 68h]
        xor ecx, 0aaaaaaaah
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 42 68: fild dword ptr [edx + 0x68]
        __asm _emit 0xdb
        __asm _emit 0x42
        __asm _emit 0x68
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x5885f55d
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 30 EB 99 58: fmul qword ptr [0x5899eb30]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 09: jne 0x5885f575
        __asm _emit 0x75
        __asm _emit 0x09
        push 5
        mov ecx, esi
        ; Exact mapped bytes E8 1B F5 FF FF: call 0x5885ea90
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        movzx eax, word ptr [edx + 164h]
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 84 89 01 00 00: je 0x5885f717
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 7A 01 00 00: je 0x5885f712
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x5885f712
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 49: jne 0x5885f5f0
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, dword ptr [esi + 0f4h]
        mov dword ptr [eax + 50h], ebp
        mov edi, dword ptr [esi + 0ech]
        mov ecx, dword ptr [edi + 50h]
        add ecx, ebx
        cmp ecx, 0ch
        ; Exact mapped bytes 0F 8D 3B 01 00 00: jge 0x5885f6ff
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        lea ecx, [eax + eax*2]
        add ecx, ecx
        add ecx, ecx
        mov eax, 1b4e81b5h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [edi + 50h], eax
        add dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes E9 9B 02 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 5B: jne 0x5885f651
        __asm _emit 0x75
        __asm _emit 0x5b
        mov edx, dword ptr [esi + 0f4h]
        mov dword ptr [edx + 50h], ebp
        mov edi, dword ptr [esi + 0ech]
        mov eax, dword ptr [edi + 50h]
        sub eax, ebx
        test eax, eax
        ; Exact mapped bytes 7E 33: jle 0x5885f641
        __asm _emit 0x7e
        __asm _emit 0x33
        mov eax, dword ptr [esi + 0b0h]
        lea ecx, [eax + eax*2]
        add ecx, ecx
        add ecx, ecx
        mov eax, 1b4e81b5h
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov eax, 0ch
        sub eax, ecx
        mov dword ptr [edi + 50h], eax
        add dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes E9 4A 02 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], eax
        add dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes E9 3A 02 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 75 58: jne 0x5885f6af
        __asm _emit 0x75
        __asm _emit 0x58
        mov edx, dword ptr [esi + 0f4h]
        mov dword ptr [edx + 50h], ebp
        mov edi, dword ptr [esi + 0ech]
        mov eax, dword ptr [edi + 50h]
        add eax, ebx
        cmp eax, 16h
        ; Exact mapped bytes 7D 2C: jge 0x5885f69c
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov eax, dword ptr [esi + 0b0h]
        lea ecx, [eax + eax*4]
        add ecx, ecx
        mov eax, 51eb851fh
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        lea eax, [edx + ecx + 0ch]
        mov dword ptr [edi + 50h], eax
        add dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes E9 EF 01 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 16h
        mov dword ptr [edi + 50h], eax
        add dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes E9 DC 01 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 52: jne 0x5885f707
        __asm _emit 0x75
        __asm _emit 0x52
        mov edx, dword ptr [esi + 0f4h]
        mov dword ptr [edx + 50h], ebp
        mov edi, dword ptr [esi + 0ech]
        mov eax, dword ptr [edi + 50h]
        sub eax, ebx
        cmp eax, 0ch
        ; Exact mapped bytes 7E 31: jle 0x5885f6ff
        __asm _emit 0x7e
        __asm _emit 0x31
        mov eax, dword ptr [esi + 0b0h]
        lea ecx, [eax + eax*4]
        add ecx, ecx
        mov eax, 51eb851fh
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov eax, 16h
        sub eax, ecx
        mov dword ptr [edi + 50h], eax
        add dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes E9 8C 01 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        mov dword ptr [edi + 50h], eax
        add dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes E9 79 01 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 0E: jne 0x5885f725
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 0ech]
        mov dword ptr [edx + 50h], ebp
        ; Exact mapped bytes E9 66 01 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 12: jne 0x5885f73d
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi + 0ech]
        mov dword ptr [eax + 50h], 0ch
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 44 01 00 00: jne 0x5885f88b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        mov dword ptr [ecx + 50h], 16h
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        cmp eax, ebp
        ; Exact mapped bytes 7E 07: jle 0x5885f76a
        __asm _emit 0x7e
        __asm _emit 0x07
        dec eax
        mov dword ptr [esi + 0d0h], eax
        cmp dword ptr [esi + 0d0h], ebp
        ; Exact mapped bytes 0F 85 15 01 00 00: jne 0x5885f88b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov ecx, 100h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x5885f847
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 0ach]
        ; Exact mapped bytes 0F BF C1: movsx eax, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc1
        mov ebx, 1
        add eax, ebx
        cdq
        sub eax, edx
        sar eax, 1
        movzx eax, ax
        inc ecx
        ; Exact mapped bytes 66 89 8E AC 00 00 00: mov word ptr [esi + 0xac], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 14: cmp ax, 0x14
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x14
        ; Exact mapped bytes 73 1A: jae 0x5885f7d1
        __asm _emit 0x73
        __asm _emit 0x1a
        mov edx, dword ptr [esi + 0e0h]
        movzx eax, ax
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 0dch]
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x5885f88b
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0e2ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        mov eax, dword ptr [esi + 0e0h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dch]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0f4h]
        push ebx
        ; Exact mapped bytes E8 ED 1D ED FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x1d
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0f0h]
        push ebx
        ; Exact mapped bytes E8 E1 1D ED FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [esi + 0a8h], ebp
        ; Exact mapped bytes EB 44: jmp 0x5885f88b
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 400h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 33: jne 0x5885f88b
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
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
        mov eax, 0fffbh
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
        mov ecx, dword ptr [esi + 3ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 15: je 0x5885f8a7
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0E: je 0x5885f8ad
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        cmp edi, ebp
        ; Exact mapped bytes 75 EB: jne 0x5885f892
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop ebp
        pop ebx
        pop esi
        pop ecx
        ret
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 4
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
