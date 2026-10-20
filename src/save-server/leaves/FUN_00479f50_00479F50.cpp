// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00479F50 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_00479f50_00479F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push 0ffffh
        push 133fh
        ; Exact mapped bytes E8 AB FE FF FF: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0eh]
        and eax, 0ffffh
        and eax, 7ff0h
        cmp eax, 7ff0h
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x47a007
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 80 FC FF FF: call 0x479c10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 42: jle 0x479fde
        __asm _emit 0x7e
        __asm _emit 0x42
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7E 08: jle 0x479faa
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 74 1B: je 0x479fc3
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes EB 34: jmp 0x479fde
        __asm _emit 0xeb
        __asm _emit 0x34
        push 0ffffh
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 58 FE FF FF: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x47a078
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 25h
        ; Exact mapped bytes E8 FA EE FF FF: call 0x478ed0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x47a078
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 05 E0 EC 63 00: fadd qword ptr [0x63ece0]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0x63
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 25h
        push 8
        ; Exact mapped bytes E8 9E EF FF FF: call 0x478fa0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        ; Exact mapped bytes EB 71: jmp 0x47a078
        __asm _emit 0xeb
        __asm _emit 0x71
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
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
        ; Exact mapped bytes 74 28: je 0x47a03f
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        push ecx
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
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 25h
        push 4
        ; Exact mapped bytes E8 66 EF FF FF: call 0x478fa0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        ; Exact mapped bytes EB 39: jmp 0x47a078
        __asm _emit 0xeb
        __asm _emit 0x39
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 40 FC FF FF: call 0x479c90
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes DB 45 E8: fild dword ptr [ebp - 0x18]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes DD 5D F0: fstp qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf0
        push 0ffffh
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 9E FD FF FF: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes DD 45 F0: fld qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf0
        mov esp, ebp
        pop ebp
        ret
    }
}
