// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00479600 .. +0x372 bytes.
extern "C" __declspec(naked) void FUN_00479600_00479600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 21: je 0x47963a
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 10h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x47963a
        __asm _emit 0x74
        __asm _emit 0x17
        push 1
        ; Exact mapped bytes E8 26 08 00 00: call 0x479e50
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        and al, 0f7h
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 04 03 00 00: jmp 0x47993e
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 21: je 0x479665
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 10h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x479665
        __asm _emit 0x74
        __asm _emit 0x17
        push 4
        ; Exact mapped bytes E8 FB 07 00 00: call 0x479e50
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        and al, 0fbh
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 D9 02 00 00: jmp 0x47993e
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x4797e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 0F 84 60 01 00 00: je 0x4797e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes E8 C8 07 00 00: call 0x479e50
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 10h]
        and eax, 0c00h
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 800h
        ; Exact mapped bytes 77 21: ja 0x4796c0
        __asm _emit 0x77
        __asm _emit 0x21
        cmp dword ptr [ebp - 20h], 800h
        ; Exact mapped bytes 74 6D: je 0x479715
        __asm _emit 0x74
        __asm _emit 0x6d
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 24: je 0x4796d2
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp - 20h], 400h
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x479755
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x4797d3
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0c00h
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x479795
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x4797d3
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes DC 1D E0 A4 63 00: fcomp qword ptr [0x63a4e0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 13: jne 0x4796f7
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 B8 05 68 00: mov edx, dword ptr [0x6805b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes A1 BC 05 68 00: mov eax, dword ptr [0x6805bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 0B: jmp 0x479702
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes DD 05 B8 05 68 00: fld qword ptr [0x6805b8]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DD 5D D8: fstp qword ptr [ebp - 0x28]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x4797d3
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes DC 1D E0 A4 63 00: fcomp qword ptr [0x63a4e0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 13: jne 0x47973a
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 B8 05 68 00: mov edx, dword ptr [0x6805b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes A1 BC 05 68 00: mov eax, dword ptr [0x6805bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x479745
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes DD 05 C8 05 68 00: fld qword ptr [0x6805c8]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DD 5D D0: fstp qword ptr [ebp - 0x30]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 7E: jmp 0x4797d3
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes DC 1D E0 A4 63 00: fcomp qword ptr [0x63a4e0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 13: jne 0x47977a
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 C8 05 68 00: mov edx, dword ptr [0x6805c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes A1 CC 05 68 00: mov eax, dword ptr [0x6805cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 0B: jmp 0x479785
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes DD 05 B8 05 68 00: fld qword ptr [0x6805b8]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DD 5D C8: fstp qword ptr [ebp - 0x38]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 3E: jmp 0x4797d3
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes DC 1D E0 A4 63 00: fcomp qword ptr [0x63a4e0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 13: jne 0x4797ba
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 C8 05 68 00: mov edx, dword ptr [0x6805c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes A1 CC 05 68 00: mov eax, dword ptr [0x6805cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x4797c5
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes DD 05 C8 05 68 00: fld qword ptr [0x6805c8]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DD 5D C0: fstp qword ptr [ebp - 0x40]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0fffffffeh
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x47993e
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 0F 84 4F 01 00 00: je 0x47993e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x47993e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 8]
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x479815
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 02: fld qword ptr [edx]
        __asm _emit 0xdd
        __asm _emit 0x02
        ; Exact mapped bytes DC 1D E0 A4 63 00: fcomp qword ptr [0x63a4e0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 40h
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x47991e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        ; Exact mapped bytes E8 52 04 00 00: call 0x479c90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes DD 5D F0: fstp qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, 600h
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0fffffbceh
        ; Exact mapped bytes 7D 18: jge 0x479871
        __asm _emit 0x7d
        __asm _emit 0x18
        ; Exact mapped bytes DD 45 F0: fld qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes DC 0D E0 A4 63 00: fmul qword ptr [0x63a4e0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D F0: fstp qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf0
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x47990e
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 45 F0: fld qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes DC 1D E0 A4 63 00: fcomp qword ptr [0x63a4e0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 09: je 0x47988a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 1
        ; Exact mapped bytes EB 07: jmp 0x479891
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 66 8B 45 F6: mov ax, word ptr [ebp - 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf6
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F6: mov word ptr [ebp - 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf6
        ; Exact mapped bytes 66 8B 4D F6: mov cx, word ptr [ebp - 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf6
        or cl, 10h
        ; Exact mapped bytes 66 89 4D F6: mov word ptr [ebp - 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf6
        ; Exact mapped bytes EB 09: jmp 0x4798b9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0fffffc03h
        ; Exact mapped bytes 7D 3E: jge 0x479900
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 10h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x4798d9
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x4798d9
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp - 10h]
        shr ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x4798f6
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        or eax, 80000000h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        shr ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB B0: jmp 0x4798b0
        __asm _emit 0xeb
        __asm _emit 0xb0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 08: je 0x47990e
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes DD 45 F0: fld qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DD 5D F0: fstp qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x479925
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x479935
        __asm _emit 0x74
        __asm _emit 0x0a
        push 10h
        ; Exact mapped bytes E8 1E 05 00 00: call 0x479e50
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        and edx, 0fffffffdh
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x479965
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x479965
        __asm _emit 0x74
        __asm _emit 0x13
        push 20h
        ; Exact mapped bytes E8 F7 04 00 00: call 0x479e50
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffffefh
        mov dword ptr [ebp - 4], edx
        xor eax, eax
        cmp dword ptr [ebp - 4], 0
        sete al
        mov esp, ebp
        pop ebp
        ret
    }
}
