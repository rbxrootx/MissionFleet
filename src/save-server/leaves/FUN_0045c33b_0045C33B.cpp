// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C33B .. +0x21B bytes.
extern "C" __declspec(naked) void FUN_0045c33b_0045C33B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        cmp eax, 270fh
        ; Exact mapped bytes 7F 1C: jg 0x45c36d
        __asm _emit 0x7f
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 7C 0E: jl 0x45c36d
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        cmp edx, 0ch
        ; Exact mapped bytes 7E 07: jle 0x45c374
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DB 01 00 00: jmp 0x45c54f
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        and eax, 3
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x45c3b4
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        cdq
        mov ecx, 64h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x45c3ab
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        cdq
        mov ecx, 190h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x45c3b4
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 07: jmp 0x45c3bb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 24: je 0x45c3eb
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffffh
        cmp eax, 1dh
        ; Exact mapped bytes 75 17: jne 0x45c3eb
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 75 09: jne 0x45c3eb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x45c3f2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        mov ecx, dword ptr [edx*4 + 678624h]
        sub ecx, dword ptr [eax*4 + 678620h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffffh
        cmp edx, 1
        ; Exact mapped bytes 7C 36: jl 0x45c45b
        __asm _emit 0x7c
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffffh
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7F 29: jg 0x45c45b
        __asm _emit 0x7f
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffffh
        cmp ecx, 17h
        ; Exact mapped bytes 7F 1B: jg 0x45c45b
        __asm _emit 0x7f
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ffffh
        cmp edx, 3bh
        ; Exact mapped bytes 7F 0D: jg 0x45c45b
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 1ch]
        and eax, 0ffffh
        cmp eax, 3bh
        ; Exact mapped bytes 7E 07: jle 0x45c462
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x45c54f
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        imul ecx, ecx, 16dh
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add ecx, eax
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        cdq
        mov esi, 64h
        idiv esi
        sub ecx, eax
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        cdq
        mov esi, 190h
        idiv esi
        add ecx, eax
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        add ecx, dword ptr [edx*4 + 678620h]
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffffh
        add ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 7F 0F: jg 0x45c4e2
        __asm _emit 0x7f
        __asm _emit 0x0f
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 09: je 0x45c4e2
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, 0a96c7h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffffh
        imul ecx, ecx, 0e10h
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ffffh
        imul edx, edx, 3ch
        add ecx, edx
        mov eax, dword ptr [ebp + 1ch]
        and eax, 0ffffh
        add ecx, eax
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes DB 45 E0: fild dword ptr [ebp - 0x20]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes DC 35 D8 A4 63 00: fdiv qword ptr [0x63a4d8]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7C 0E: jl 0x45c537
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 08: jmp 0x45c53f
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes DD 45 F4: fld qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DD 5D D8: fstp qword ptr [ebp - 0x28]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd8
        ; Exact mapped bytes DB 45 F0: fild dword ptr [ebp - 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes DC 45 D8: fadd qword ptr [ebp - 0x28]
        __asm _emit 0xdc
        __asm _emit 0x45
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 20h]
        ; Exact mapped bytes DD 18: fstp qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x18
        mov eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
