// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B1A70 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_004b1a70_004B1A70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push 0ffffh
        ; Exact mapped bytes A1 44 16 5D 00: mov eax, dword ptr [0x5d1644]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 3A B7 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0eh]
        and ecx, 0ffffh
        and ecx, 7ff0h
        cmp ecx, 7ff0h
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x4b1b2b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 0C B5 00 00: call 0x4bcfc0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 42: jle 0x4b1b02
        __asm _emit 0x7e
        __asm _emit 0x42
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7E 08: jle 0x4b1ace
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 74 1B: je 0x4b1ae7
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes EB 34: jmp 0x4b1b02
        __asm _emit 0xeb
        __asm _emit 0x34
        push 0ffffh
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 E4 B6 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x4b1ba1
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0ch
        ; Exact mapped bytes E8 86 A7 00 00: call 0x4bc280
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x4b1ba1
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 05 88 C6 58 00: fadd qword ptr [0x58c688]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0x58
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0ch
        push 8
        ; Exact mapped bytes E8 2A A8 00 00: call 0x4bc350
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes EB 76: jmp 0x4b1ba1
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 28 A7 00 00: call 0x4bc260
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes DC 5D 08: fcomp qword ptr [ebp + 8]
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 40h
        ; Exact mapped bytes 74 16: je 0x4b1b61
        __asm _emit 0x74
        __asm _emit 0x16
        push 0ffffh
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 67 B6 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 40: jmp 0x4b1ba1
        __asm _emit 0xeb
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 0ch]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x4b1b81
        __asm _emit 0x74
        __asm _emit 0x16
        push 0ffffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 47 B6 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 20: jmp 0x4b1ba1
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0ch
        push 10h
        ; Exact mapped bytes E8 B2 A7 00 00: call 0x4bc350
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov esp, ebp
        pop ebp
        ret
    }
}
