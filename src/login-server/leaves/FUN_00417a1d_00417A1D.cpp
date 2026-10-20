// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417A1D .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_00417a1d_00417A1D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 66 81 7D 08 0F 27: cmp word ptr [ebp + 8], 0x270f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x27
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 0F 87 21 01 00 00: ja 0x417b51
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 7D 0C: mov di, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x0c
        push 1
        pop esi
        ; Exact mapped bytes 66 3B FE: cmp di, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 82 11 01 00 00: jb 0x417b51
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FF 0C: cmp di, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 87 07 01 00 00: ja 0x417b51
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [ebp + 8], 3
        ; Exact mapped bytes 75 32: jne 0x417a82
        __asm _emit 0x75
        __asm _emit 0x32
        movzx ecx, word ptr [ebp + 8]
        mov eax, ecx
        push 64h
        cdq
        pop ebx
        idiv ebx
        test edx, edx
        ; Exact mapped bytes 75 0E: jne 0x417a6e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, ecx
        mov ecx, 190h
        cdq
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x417a82
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 83 7D 10 1D: cmp word ptr [ebp + 0x10], 0x1d
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x1d
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes 75 0E: jne 0x417a86
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 FF 02: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 75 08: jne 0x417a86
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, esi
        ; Exact mapped bytes EB 10: jmp 0x417a92
        __asm _emit 0xeb
        __asm _emit 0x10
        and dword ptr [ebp - 4], 0
        xor eax, eax
        ; Exact mapped bytes 66 39 75 10: cmp word ptr [ebp + 0x10], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 0F 82 BF 00 00 00: jb 0x417b51
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, di
        mov edi, dword ptr [ecx*4 + 44a088h]
        movzx edx, word ptr [ebp + 10h]
        lea ecx, [ecx*4 + 44a08ch]
        sub eax, edi
        mov dword ptr [ebp + 10h], edx
        add eax, dword ptr [ecx]
        cmp edx, eax
        ; Exact mapped bytes 0F 8F 9B 00 00 00: jg 0x417b51
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 14 17: cmp word ptr [ebp + 0x14], 0x17
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x14
        __asm _emit 0x17
        ; Exact mapped bytes 0F 87 90 00 00 00: ja 0x417b51
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 18 3B: cmp word ptr [ebp + 0x18], 0x3b
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0x3b
        ; Exact mapped bytes 0F 87 85 00 00 00: ja 0x417b51
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 1C 3B: cmp word ptr [ebp + 0x1c], 0x3b
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x1c
        __asm _emit 0x3b
        ; Exact mapped bytes 77 7E: ja 0x417b51
        __asm _emit 0x77
        __asm _emit 0x7e
        movzx esi, word ptr [ebp + 8]
        mov eax, esi
        mov ebx, 190h
        cdq
        idiv ebx
        mov ecx, esi
        push 64h
        shr ecx, 2
        add ecx, eax
        mov eax, esi
        imul eax, eax, 16dh
        add ecx, eax
        mov eax, esi
        cdq
        pop esi
        idiv esi
        sub ecx, eax
        add ecx, dword ptr [ebp + 10h]
        add ecx, edi
        ; Exact mapped bytes 66 83 7D 0C 02: cmp word ptr [ebp + 0xc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 77 07: ja 0x417b0f
        __asm _emit 0x77
        __asm _emit 0x07
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 01: je 0x417b0f
        __asm _emit 0x74
        __asm _emit 0x01
        dec ecx
        movzx eax, word ptr [ebp + 14h]
        movzx edx, word ptr [ebp + 18h]
        imul eax, eax, 3ch
        add eax, edx
        sub ecx, 0a96c7h
        movzx edx, word ptr [ebp + 1ch]
        imul eax, eax, 3ch
        add eax, edx
        mov dword ptr [ebp + 10h], ecx
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes DB 45 08: fild dword ptr [ebp + 8]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes DC 0D B0 EA 43 00: fmul qword ptr [0x43eab0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0xea
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 7D 02: jge 0x417b40
        __asm _emit 0x7d
        __asm _emit 0x02
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DB 45 10: fild dword ptr [ebp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 20h]
        push 1
        ; Exact mapped bytes D8 C1: fadd st(1)
        __asm _emit 0xd8
        __asm _emit 0xc1
        ; Exact mapped bytes DD 18: fstp qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x18
        pop eax
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes EB 02: jmp 0x417b53
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
