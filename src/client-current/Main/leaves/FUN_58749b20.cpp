// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749B20 .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_58749b20() {
    __asm {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 6ch]
        mov esi, dword ptr [edi + 70h]
        sub ebx, dword ptr [edi + 84h]
        sub esi, dword ptr [edi + 88h]
        mov ecx, ebx
        mov eax, esi
        imul ecx, ebx
        imul eax, esi
        add eax, ecx
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes DB 44 24 0C: fild dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes E8 3D 31 23 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x31
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes E8 48 31 23 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x31
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [esp + 0ch], eax
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x58749b68
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esp + 0ch], 1
        mov edx, esi
        neg edx
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DA 74 24 0C: fidiv dword ptr [esp + 0xc]
        __asm _emit 0xda
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        test ebx, ebx
        ; Exact mapped bytes 7C 10: jl 0x58749b90
        __asm _emit 0x7c
        __asm _emit 0x10
        xor eax, eax
        test esi, esi
        setle al
        dec eax
        and eax, 3
        inc eax
        mov esi, eax
        ; Exact mapped bytes EB 0C: jmp 0x58749b9c
        __asm _emit 0xeb
        __asm _emit 0x0c
        xor ecx, ecx
        test esi, esi
        setg cl
        add ecx, 2
        mov esi, ecx
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 87 32 23 00: call 0x5897ce2c
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x32
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DC 0D D0 CF 98 58: fmul qword ptr [0x5898cfd0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 38 CB 98 58: fmul qword ptr [0x5898cb38]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 30 23 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x30
        __asm _emit 0x23
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 10: jl 0x58749bd2
        __asm _emit 0x7c
        __asm _emit 0x10
        cmp esi, 1
        ; Exact mapped bytes 74 20: je 0x58749be7
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, 708h
        sub edx, eax
        mov eax, edx
        ; Exact mapped bytes EB 15: jmp 0x58749be7
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp esi, 3
        ; Exact mapped bytes 75 0B: jne 0x58749be2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, 708h
        sub ecx, eax
        mov eax, ecx
        ; Exact mapped bytes EB 05: jmp 0x58749be7
        __asm _emit 0xeb
        __asm _emit 0x05
        add eax, 0e10h
        mov ecx, eax
        sub ecx, dword ptr [edi + 0ach]
        cmp ecx, 708h
        ; Exact mapped bytes 7E 0D: jle 0x58749c04
        __asm _emit 0x7e
        __asm _emit 0x0d
        sub eax, dword ptr [edi + 0ach]
        sub eax, 0e10h
        ; Exact mapped bytes EB 13: jmp 0x58749c17
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp ecx, 0fffff8f8h
        ; Exact mapped bytes 7D 0D: jge 0x58749c19
        __asm _emit 0x7d
        __asm _emit 0x0d
        sub eax, dword ptr [edi + 0ach]
        add eax, 0e10h
        mov ecx, eax
        mov eax, dword ptr [edi + 0cch]
        cmp ecx, eax
        ; Exact mapped bytes 7F 06: jg 0x58749c29
        __asm _emit 0x7f
        __asm _emit 0x06
        neg eax
        cmp ecx, eax
        ; Exact mapped bytes 7F 02: jg 0x58749c2b
        __asm _emit 0x7f
        __asm _emit 0x02
        mov ecx, eax
        add dword ptr [edi + 0ach], ecx
        mov eax, dword ptr [edi + 0ach]
        ; Exact mapped bytes 79 07: jns 0x58749c40
        __asm _emit 0x79
        __asm _emit 0x07
        add eax, 0e10h
        ; Exact mapped bytes EB 0C: jmp 0x58749c4c
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 0e10h
        ; Exact mapped bytes 7C 05: jl 0x58749c4c
        __asm _emit 0x7c
        __asm _emit 0x05
        add eax, 0fffff1f0h
        cdq
        mov esi, 0e10h
        idiv esi
        mov dword ptr [edi + 58h], ecx
        mov dword ptr [edi + 0ach], edx
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}
