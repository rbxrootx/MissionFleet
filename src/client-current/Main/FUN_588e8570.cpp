// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 3294 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E8570 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_588e8570_segment_00() {
    __asm {
        sub esp, 24h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 20h], eax
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        mov esi, ecx
        push 400h
        lea eax, [esi + 11ch]
        push ebp
        push eax
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esp + 2ch], ebp
        mov dword ptr [esp + 30h], ebp
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes E8 A0 46 09 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [esi + 130h]
        lea ecx, [ebp + 20h]
        ; Exact mapped bytes EB 0A: jmp 0x588e85c0
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E85C0 .. +0xC98 bytes.
extern "C" __declspec(naked) void FUN_588e8570_segment_01() {
    __asm {
        mov edx, dword ptr [eax]
        and edx, 0caa2a8aah
        or edx, 0aa2a8aah
        mov byte ptr [eax - 13h], 0aah
        mov dword ptr [eax], edx
        mov dword ptr [eax - 10h], 0aah
        mov byte ptr [eax + 4], 0aah
        add eax, 20h
        sub ecx, 1
        ; Exact mapped bytes 75 D9: jne 0x588e85c0
        __asm _emit 0x75
        __asm _emit 0xd9
        ; Exact mapped bytes DD 05 E0 CA 98 58: fld qword ptr [0x5898cae0]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        xor ebx, ebx
        cmp dword ptr [esi + ebx*4 + 9a4h], ebp
        ; Exact mapped bytes 0F 84 36 0C 00 00: je 0x588e9232
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        shl eax, 5
        lea edi, [eax + esi]
        mov byte ptr [edi + 11ch], bl
        mov ecx, dword ptr [esi + ebx*4 + 9a4h]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        mov byte ptr [edi + 11dh], dl
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        mov cl, byte ptr [eax + 5eh]
        and cl, 0fh
        mov byte ptr [edi + 11fh], cl
        mov edx, dword ptr [esi + ebx*4 + 9a4h]
        movzx ecx, word ptr [edx + 0a0h]
        xor ecx, 0aah
        mov eax, 66666667h
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        xor al, 0aah
        mov byte ptr [edi + 134h], al
        mov ecx, dword ptr [esi + ebx*4 + 9a4h]
        movzx edx, word ptr [ecx + 58h]
        xor edx, dword ptr [edi + 130h]
        and edx, 3ffh
        xor dword ptr [edi + 130h], edx
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        movzx eax, word ptr [eax + 5ah]
        mov ecx, dword ptr [edi + 130h]
        shl eax, 0ah
        xor eax, ecx
        and eax, 0ffc00h
        xor eax, ecx
        mov dword ptr [edi + 130h], eax
        mov ecx, dword ptr [esi + ebx*4 + 9a4h]
        movzx edx, word ptr [ecx + 5ch]
        shl edx, 14h
        xor edx, eax
        and edx, 3ff00000h
        xor edx, eax
        mov dword ptr [edi + 130h], edx
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        movzx ecx, word ptr [eax + 7ah]
        lea edx, [ebx + 9]
        shl edx, 5
        mov dword ptr [edx + esi], ecx
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 48 6C: xor cx, word ptr [eax + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x6c
        mov eax, 0aah
        ; Exact mapped bytes 66 89 8F 24 01 00 00: mov word ptr [edi + 0x124], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + ebx*4 + 9a4h]
        ; Exact mapped bytes 66 33 42 70: xor ax, word ptr [edx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x70
        mov edx, 0aah
        ; Exact mapped bytes 66 89 87 26 01 00 00: mov word ptr [edi + 0x126], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + ebx*4 + 9a4h]
        ; Exact mapped bytes 66 33 51 6E: xor dx, word ptr [ecx + 0x6e]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x6e
        ; Exact mapped bytes 66 89 97 28 01 00 00: mov word ptr [edi + 0x128], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        mov ecx, dword ptr [eax + 1c0h]
        mov dword ptr [edi + 138h], ecx
        test ebx, ebx
        ; Exact mapped bytes 0F 85 53 03 00 00: jne 0x588e8a83
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0cc0h]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        mov ecx, 3e0h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes 66 83 F8 60: cmp ax, 0x60
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x60
        ; Exact mapped bytes 0F 85 78 02 00 00: jne 0x588e89c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 9a4h]
        mov eax, dword ptr [edx + 0b4h]
        test eax, 0c000000h
        ; Exact mapped bytes 0F 85 A0 01 00 00: jne 0x588e8903
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 70000h
        ; Exact mapped bytes 75 60: jne 0x588e87ca
        __asm _emit 0x75
        __asm _emit 0x60
        xor eax, eax
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 66 89 86 2A 01 00 00: mov word ptr [esi + 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 11eh], bl
        mov ecx, dword ptr [esi + 9a4h]
        mov edx, 0aah
        ; Exact mapped bytes 66 33 51 64: xor dx, word ptr [ecx + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x64
        push ebp
        movzx eax, dx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DA E2 FF FF: call 0x588e6a70
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 86 2C 01 00 00: mov word ptr [esi + 0x12c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9a4h]
        mov edx, 0aah
        ; Exact mapped bytes 66 33 51 64: xor dx, word ptr [ecx + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x64
        push ebp
        movzx eax, dx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B8 E2 FF FF: call 0x588e6a70
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 86 2E 01 00 00: mov word ptr [esi + 0x12e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 05 E0 CA 98 58: fld qword ptr [0x5898cae0]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 AC 08 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 11eh], 3
        mov eax, dword ptr [esi + 9a4h]
        test dword ptr [eax + 0b4h], 20000h
        ; Exact mapped bytes 74 52: je 0x588e8835
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 48 64: xor cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x64
        movzx eax, cx
        movzx edx, ax
        movzx eax, bp
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        movzx eax, word ptr [esp + 14h]
        or eax, 0c00h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 4C 24 10: mov cx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 8E 2A 01 00 00: mov word ptr [esi + 0x12a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        mov eax, dword ptr [esi + 9a4h]
        test dword ptr [eax + 0b4h], 40000h
        ; Exact mapped bytes 74 4F: je 0x588e8896
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, 0aah
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 33 50 64: xor dx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x50
        __asm _emit 0x64
        movzx ecx, bp
        movzx eax, dx
        mov dword ptr [esp + 10h], eax
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], ecx
        or eax, 0c00h
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 54 24 10: mov dx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 96 2E 01 00 00: mov word ptr [esi + 0x12e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        mov eax, dword ptr [esi + 9a4h]
        test dword ptr [eax + 0b4h], 10000h
        ; Exact mapped bytes 0F 84 CA 07 00 00: je 0x588e9076
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0aah
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 33 48 64: xor cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x64
        movzx eax, cx
        movzx edx, ax
        movzx eax, bp
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        movzx eax, word ptr [esp + 14h]
        or eax, 0c00h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 4C 24 10: mov cx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 8E 2C 01 00 00: mov word ptr [esi + 0x12c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E9 73 07 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 11eh], 2
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        mov edx, dword ptr [esi + 9a4h]
        mov eax, 0aah
        ; Exact mapped bytes 66 33 42 72: xor ax, word ptr [edx + 0x72]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x72
        movzx edx, word ptr [esp + 26h]
        movzx eax, ax
        movzx ecx, ax
        mov dword ptr [esp + 10h], ecx
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], edx
        or eax, 0c00h
        mov edx, 0aah
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D8 CA: fmul st(2)
        __asm _emit 0xd8
        __asm _emit 0xca
        ; Exact mapped bytes D8 F3: fdiv st(3)
        __asm _emit 0xd8
        __asm _emit 0xf3
        ; Exact mapped bytes DE C2: faddp st(2)
        __asm _emit 0xde
        __asm _emit 0xc2
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 2A 01 00 00: mov word ptr [esi + 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9a4h]
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 33 51 72: xor dx, word ptr [ecx + 0x72]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x72
        movzx eax, dx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DE CA: fmulp st(2)
        __asm _emit 0xde
        __asm _emit 0xca
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        or eax, 0c00h
        mov dword ptr [esp + 10h], eax
        xor edx, edx
        ; Exact mapped bytes 66 89 96 2E 01 00 00: mov word ptr [esi + 0x12e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 4C 24 10: mov cx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 8E 2C 01 00 00: mov word ptr [esi + 0x12c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E9 B2 06 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 86 2A 01 00 00: mov word ptr [esi + 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 11eh], 0
        mov ecx, dword ptr [esi + 9a4h]
        mov edx, 0aah
        ; Exact mapped bytes 66 33 51 64: xor dx, word ptr [ecx + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x64
        movzx ecx, bp
        movzx eax, dx
        mov dword ptr [esp + 10h], eax
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], ecx
        or eax, 0c00h
        mov ecx, 0aah
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D9 C1: fld st(1)
        __asm _emit 0xd9
        __asm _emit 0xc1
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D8 F3: fdiv st(3)
        __asm _emit 0xd8
        __asm _emit 0xf3
        ; Exact mapped bytes DE C2: faddp st(2)
        __asm _emit 0xde
        __asm _emit 0xc2
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 54 24 10: mov dx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 96 2C 01 00 00: mov word ptr [esi + 0x12c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9a4h]
        ; Exact mapped bytes 66 33 48 64: xor cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x64
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        movzx eax, cx
        movzx edx, ax
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DE CA: fmulp st(2)
        __asm _emit 0xde
        __asm _emit 0xca
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        or eax, 0c00h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 2E 01 00 00: mov word ptr [esi + 0x12e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E9 F3 05 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebx - 1]
        cmp ecx, 3
        ; Exact mapped bytes 0F 87 F9 00 00 00: ja 0x588e8b88
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + ebx*4 + 9a4h]
        test dword ptr [edx + 0b4h], 20000000h
        ; Exact mapped bytes 74 1E: je 0x588e8ac0
        __asm _emit 0x74
        __asm _emit 0x1e
        xor eax, eax
        xor ecx, ecx
        mov byte ptr [edi + 11eh], 6
        ; Exact mapped bytes 66 89 87 26 01 00 00: mov word ptr [edi + 0x126], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8F 28 01 00 00: mov word ptr [edi + 0x128], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B6 05 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [edi + 11eh], 1
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        mov edx, dword ptr [esi + ebx*4 + 9a4h]
        mov eax, 0aah
        ; Exact mapped bytes 66 33 42 66: xor ax, word ptr [edx + 0x66]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x66
        movzx edx, word ptr [esp + 1ah]
        movzx eax, ax
        movzx ecx, ax
        mov dword ptr [esp + 10h], ecx
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], edx
        or eax, 0c00h
        mov edx, 0aah
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 87 2A 01 00 00: mov word ptr [edi + 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + ebx*4 + 9a4h]
        ; Exact mapped bytes 66 33 51 68: xor dx, word ptr [ecx + 0x68]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x68
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        movzx eax, dx
        mov dword ptr [esp + 10h], eax
        xor eax, eax
        movzx ecx, ax
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        or eax, 0c00h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 54 24 10: mov dx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        xor eax, eax
        ; Exact mapped bytes 66 89 97 2C 01 00 00: mov word ptr [edi + 0x12c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 87 2E 01 00 00: mov word ptr [edi + 0x12e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EE 04 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + ebx*4 + 9a4h]
        mov eax, dword ptr [ecx + 0b4h]
        test eax, 80203c00h
        ; Exact mapped bytes 0F 84 51 01 00 00: je 0x588e8cf1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 80200400h
        ; Exact mapped bytes 74 09: je 0x588e8bb0
        __asm _emit 0x74
        __asm _emit 0x09
        mov byte ptr [edi + 11eh], 0bh
        ; Exact mapped bytes EB 2E: jmp 0x588e8bde
        __asm _emit 0xeb
        __asm _emit 0x2e
        test eax, 800h
        ; Exact mapped bytes 74 09: je 0x588e8bc0
        __asm _emit 0x74
        __asm _emit 0x09
        mov byte ptr [edi + 11eh], 0ch
        ; Exact mapped bytes EB 1E: jmp 0x588e8bde
        __asm _emit 0xeb
        __asm _emit 0x1e
        test eax, 1000h
        ; Exact mapped bytes 74 09: je 0x588e8bd0
        __asm _emit 0x74
        __asm _emit 0x09
        mov byte ptr [edi + 11eh], 0eh
        ; Exact mapped bytes EB 0E: jmp 0x588e8bde
        __asm _emit 0xeb
        __asm _emit 0x0e
        test eax, 2000h
        ; Exact mapped bytes 74 07: je 0x588e8bde
        __asm _emit 0x74
        __asm _emit 0x07
        mov byte ptr [edi + 11eh], 0dh
        mov ecx, dword ptr [esi + ebx*4 + 9a4h]
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        mov edx, 0aah
        ; Exact mapped bytes 66 33 51 76: xor dx, word ptr [ecx + 0x76]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x76
        movzx ecx, word ptr [esp + 28h]
        movzx eax, dx
        mov dword ptr [esp + 10h], eax
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], ecx
        or eax, 0c00h
        mov ecx, 0aah
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 54 24 10: mov dx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 97 2A 01 00 00: mov word ptr [edi + 0x12a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        ; Exact mapped bytes 66 33 48 74: xor cx, word ptr [eax + 0x74]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x74
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        movzx eax, cx
        movzx edx, ax
        movzx eax, word ptr [esp + 2ah]
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        movzx eax, word ptr [esp + 14h]
        or eax, 0c00h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        mov eax, 0aah
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 4C 24 10: mov cx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 8F 2C 01 00 00: mov word ptr [edi + 0x12c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + ebx*4 + 9a4h]
        ; Exact mapped bytes 66 33 42 78: xor ax, word ptr [edx + 0x78]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x78
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        movzx eax, ax
        movzx ecx, ax
        xor eax, eax
        movzx edx, ax
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        mov dword ptr [esp + 10h], ecx
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], edx
        or eax, 0c00h
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 87 2E 01 00 00: mov word ptr [edi + 0x12e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E9 85 03 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 80000h
        ; Exact mapped bytes 0F 84 24 01 00 00: je 0x588e8e20
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [edi + 11eh], 4
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        mov ecx, dword ptr [esi + ebx*4 + 9a4h]
        mov edx, 0aah
        ; Exact mapped bytes 66 33 51 64: xor dx, word ptr [ecx + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x64
        movzx ecx, bp
        movzx eax, dx
        mov dword ptr [esp + 10h], eax
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], ecx
        or eax, 0c00h
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D9 C1: fld st(1)
        __asm _emit 0xd9
        __asm _emit 0xc1
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D8 F3: fdiv st(3)
        __asm _emit 0xd8
        __asm _emit 0xf3
        ; Exact mapped bytes DE C2: faddp st(2)
        __asm _emit 0xde
        __asm _emit 0xc2
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 54 24 10: mov dx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 97 2A 01 00 00: mov word ptr [edi + 0x12a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        test dword ptr [eax + 0b4h], 20000h
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 74 49: je 0x588e8db9
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, 0aah
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 33 48 64: xor cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x64
        movzx eax, cx
        movzx edx, ax
        mov dword ptr [esp + 10h], edx
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        or eax, 0c00h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D8 CA: fmul st(2)
        __asm _emit 0xd8
        __asm _emit 0xca
        ; Exact mapped bytes D8 F3: fdiv st(3)
        __asm _emit 0xd8
        __asm _emit 0xf3
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 87 2A 01 00 00: mov word ptr [edi + 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        test dword ptr [eax + 0b4h], 10000h
        ; Exact mapped bytes 0F 84 A4 02 00 00: je 0x588e9074
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0aah
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 33 48 64: xor cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x64
        movzx eax, cx
        movzx edx, ax
        mov dword ptr [esp + 10h], edx
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        or eax, 0c00h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DE CA: fmulp st(2)
        __asm _emit 0xde
        __asm _emit 0xca
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 87 2E 01 00 00: mov word ptr [edi + 0x12e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E9 56 02 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 0c000000h
        ; Exact mapped bytes 0F 85 93 01 00 00: jne 0x588e8fbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 70000h
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x588e8f09
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        and edx, 4000h
        ; Exact mapped bytes 75 62: jne 0x588e8ea2
        __asm _emit 0x75
        __asm _emit 0x62
        test eax, 8000h
        ; Exact mapped bytes 75 5B: jne 0x588e8ea2
        __asm _emit 0x75
        __asm _emit 0x5b
        test eax, 20000000h
        ; Exact mapped bytes 74 15: je 0x588e8e63
        __asm _emit 0x74
        __asm _emit 0x15
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8F 26 01 00 00: mov word ptr [edi + 0x126], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 97 28 01 00 00: mov word ptr [edi + 0x128], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 800000h
        ; Exact mapped bytes 0F 84 08 02 00 00: je 0x588e9076
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 22h]
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        mov edx, 0aah
        ; Exact mapped bytes 66 33 51 6E: xor dx, word ptr [ecx + 0x6e]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x6e
        push eax
        movzx eax, dx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E7 DB FF FF: call 0x588e6a70
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 87 28 01 00 00: mov word ptr [edi + 0x128], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 05 E0 CA 98 58: fld qword ptr [0x5898cae0]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        mov byte ptr [edi + 11eh], 8
        ; Exact mapped bytes E9 D4 01 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x588e8eaf
        __asm _emit 0x74
        __asm _emit 0x07
        mov byte ptr [edi + 11eh], 10h
        mov ecx, dword ptr [esi + ebx*4 + 9a4h]
        test dword ptr [ecx + 0b4h], 8000h
        ; Exact mapped bytes 74 07: je 0x588e8ec9
        __asm _emit 0x74
        __asm _emit 0x07
        mov byte ptr [edi + 11eh], 11h
        mov edx, dword ptr [esi + ebx*4 + 9a4h]
        mov eax, 0aah
        ; Exact mapped bytes 66 33 42 64: xor ax, word ptr [edx + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x64
        push ebp
        movzx ecx, ax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 8B DB FF FF: call 0x588e6a70
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes DD 05 E0 CA 98 58: fld qword ptr [0x5898cae0]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 87 2A 01 00 00: mov word ptr [edi + 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 89 97 2C 01 00 00: mov word ptr [edi + 0x12c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 87 2E 01 00 00: mov word ptr [edi + 0x12e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [edi + 11eh], 3
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        test dword ptr [eax + 0b4h], 20000h
        ; Exact mapped bytes 74 24: je 0x588e8f47
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, 0aah
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 66 33 48 64: xor cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x64
        push ebp
        movzx edx, cx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 36 DB FF FF: call 0x588e6a70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 87 2A 01 00 00: mov word ptr [edi + 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 05 E0 CA 98 58: fld qword ptr [0x5898cae0]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        test dword ptr [eax + 0b4h], 40000h
        ; Exact mapped bytes 74 24: je 0x588e8f7e
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, 0aah
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 66 33 48 64: xor cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x64
        push ebp
        movzx edx, cx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 FF DA FF FF: call 0x588e6a70
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 87 2C 01 00 00: mov word ptr [edi + 0x12c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 05 E0 CA 98 58: fld qword ptr [0x5898cae0]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        test dword ptr [eax + 0b4h], 10000h
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x588e9076
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0aah
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes 66 33 48 64: xor cx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x64
        push ebp
        movzx edx, cx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 C4 DA FF FF: call 0x588e6a70
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 87 2E 01 00 00: mov word ptr [edi + 0x12e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 05 E0 CA 98 58: fld qword ptr [0x5898cae0]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x588e9076
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [edi + 11eh], 2
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        mov eax, dword ptr [esi + ebx*4 + 9a4h]
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 48 72: xor cx, word ptr [eax + 0x72]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x72
        movzx eax, cx
        movzx edx, ax
        movzx eax, word ptr [esp + 26h]
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        movzx eax, word ptr [esp + 14h]
        or eax, 0c00h
        ; Exact mapped bytes D9 C1: fld st(1)
        __asm _emit 0xd9
        __asm _emit 0xc1
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        mov eax, 0aah
        ; Exact mapped bytes D8 F3: fdiv st(3)
        __asm _emit 0xd8
        __asm _emit 0xf3
        ; Exact mapped bytes DE C2: faddp st(2)
        __asm _emit 0xde
        __asm _emit 0xc2
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 4C 24 10: mov cx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 8F 2A 01 00 00: mov word ptr [edi + 0x12a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + ebx*4 + 9a4h]
        ; Exact mapped bytes 66 33 42 72: xor ax, word ptr [edx + 0x72]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x72
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        movzx eax, ax
        movzx ecx, ax
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DE CA: fmulp st(2)
        __asm _emit 0xde
        __asm _emit 0xca
        movzx eax, word ptr [esp + 14h]
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        or eax, 0c00h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 5C 24 10: fistp dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 54 24 10: mov dx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E9 FF FA FF FF: jmp 0x588e8b73
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        mov ecx, dword ptr [esi + ebx*4 + 9a4h]
        mov al, byte ptr [ecx + 1c4h]
        mov ecx, ebx
        shl ecx, 4
        mov byte ptr [edi + 135h], al
        test al, 1
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x588e915a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [esi + ecx*2 + 124h]
        imul edx, edx, 0bh
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        movzx edx, word ptr [esi + ecx*2 + 126h]
        imul edx, edx, 0bh
        ; Exact mapped bytes 66 89 84 4E 24 01 00 00: mov word ptr [esi + ecx*2 + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        movzx edx, word ptr [esi + ecx*2 + 128h]
        imul edx, edx, 0bh
        ; Exact mapped bytes 66 89 84 4E 26 01 00 00: mov word ptr [esi + ecx*2 + 0x126], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        movzx edx, word ptr [esi + ecx*2 + 12ah]
        imul edx, edx, 0bh
        ; Exact mapped bytes 66 89 84 4E 28 01 00 00: mov word ptr [esi + ecx*2 + 0x128], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        movzx edx, word ptr [esi + ecx*2 + 12ch]
        imul edx, edx, 0bh
        ; Exact mapped bytes 66 89 84 4E 2A 01 00 00: mov word ptr [esi + ecx*2 + 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        movzx edx, word ptr [esi + ecx*2 + 12eh]
        ; Exact mapped bytes 66 89 84 4E 2C 01 00 00: mov word ptr [esi + ecx*2 + 0x12c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, edx, 0bh
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x588e9219
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + ecx*2 + 124h]
        lea edx, [eax + eax*8]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 66 89 84 4E 24 01 00 00: mov word ptr [esi + ecx*2 + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + ecx*2 + 126h]
        lea edx, [eax + eax*8]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 66 89 84 4E 26 01 00 00: mov word ptr [esi + ecx*2 + 0x126], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + ecx*2 + 128h]
        lea edx, [eax + eax*8]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 66 89 84 4E 28 01 00 00: mov word ptr [esi + ecx*2 + 0x128], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + ecx*2 + 12ah]
        lea edx, [eax + eax*8]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 66 89 84 4E 2A 01 00 00: mov word ptr [esi + ecx*2 + 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + ecx*2 + 12ch]
        lea edx, [eax + eax*8]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 66 89 84 4E 2C 01 00 00: mov word ptr [esi + ecx*2 + 0x12c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + ecx*2 + 12eh]
        lea edx, [eax + eax*8]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 66 89 84 4E 2E 01 00 00: mov word ptr [esi + ecx*2 + 0x12e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        inc ebx
        cmp ebx, 20h
        ; Exact mapped bytes 0F 8C B3 F3 FF FF: jl 0x588e85ef
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes E8 CB E9 FF FF: call 0x588e7c10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 30h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 86 39 09 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 24h
        ret
    }
}
