// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797D40 .. +0x1CE bytes.
extern "C" __declspec(naked) void FUN_58797d40() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        movzx eax, word ptr [esi + 26ch]
        xor ebx, ebx
        xor ecx, ecx
        push edi
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x58797e4c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, ax
        sub eax, ecx
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x58797e07
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 2
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 7C: je 0x58797dec
        __asm _emit 0x74
        __asm _emit 0x7c
        sub eax, 1
        ; Exact mapped bytes 74 5C: je 0x58797dd1
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [esi + 270h]
        mov edi, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edi + edx*4 + 0b40h]
        mov edi, dword ptr [edi + 0cc0h]
        movzx ebx, word ptr [edi + edx*2 + 0dah]
        test eax, eax
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58797e25
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [edx + 0cc0h]
        mov ecx, dword ptr [ecx + 78h]
        sub ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [edx + 0a70h]
        mov edi, dword ptr [esp + 10h]
        imul ecx, ecx, 3e8h
        sub edi, dword ptr [eax + 74h]
        xor edx, 0aaaaaaaah
        sub ecx, edx
        add ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes EB 7F: jmp 0x58797e50
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 0ccch]
        mov edx, dword ptr [edx + 0cc0h]
        movzx ebx, word ptr [edx + 0d8h]
        ; Exact mapped bytes EB AA: jmp 0x58797d96
        __asm _emit 0xeb
        __asm _emit 0xaa
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 0cc8h]
        mov edx, dword ptr [edx + 0cc0h]
        movzx ebx, word ptr [edx + 0d6h]
        ; Exact mapped bytes EB 8F: jmp 0x58797d96
        __asm _emit 0xeb
        __asm _emit 0x8f
        ; Exact mapped bytes A1 C4 84 A2 58: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 5898ce74h
        push 5899809ch
        push eax
        ; Exact mapped bytes FF 15 CC C3 98 58: call dword ptr [0x5898c3cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [eax + 0cc0h]
        mov ecx, dword ptr [ecx + 78h]
        sub ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [eax + 0a70h]
        imul ecx, ecx, 3e8h
        xor edx, 0aaaaaaaah
        sub ecx, edx
        mov edi, dword ptr [esp + 10h]
        xor eax, eax
        ; Exact mapped bytes 66 39 86 78 02 00 00: cmp word ptr [esi + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 9C 00 00 00: jle 0x58797efb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0eeh
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x58797e77
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 18ch]
        mov dword ptr [ecx + 60h], 0eeeeeeh
        ; Exact mapped bytes EB 0E: jmp 0x58797e85
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 18ch]
        mov dword ptr [eax + 60h], edx
        mov eax, 1
        test ebx, ebx
        ; Exact mapped bytes 7C 0F: jl 0x58797e98
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 190h]
        mov dword ptr [ecx + 60h], 0eeeeeeh
        ; Exact mapped bytes EB 0E: jmp 0x58797ea6
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 190h]
        mov dword ptr [eax + 60h], edx
        mov eax, 2
        ; Exact mapped bytes 8B 0D 68 B4 A0 58: mov ecx, dword ptr [0x58a0b468]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        xor ecx, 0aaaaaaaah
        cmp edi, ecx
        ; Exact mapped bytes 7F 24: jg 0x58797eda
        __asm _emit 0x7f
        __asm _emit 0x24
        mov edx, dword ptr [esi + 194h]
        mov dword ptr [edx + 60h], 0eeeeeeh
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x58797efb
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [esi + 88h]
        pop edi
        pop esi
        mov dword ptr [ecx + 50h], 0
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 194h]
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [esi + 88h]
        pop edi
        pop esi
        mov eax, 3
        mov dword ptr [ecx + 50h], 0
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 88h]
        pop edi
        pop esi
        mov dword ptr [edx + 50h], 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
