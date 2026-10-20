// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B1BB0 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_004b1bb0_004B1BB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push 0
        push 0
        ; Exact mapped bytes E8 01 B6 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        push 0ffffh
        ; Exact mapped bytes A1 48 16 5D 00: mov eax, dword ptr [0x5d1648]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 EB B5 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 0eh]
        and ecx, 0ffffh
        and ecx, 7ff0h
        cmp ecx, 7ff0h
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x4b1cd0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes A1 20 21 5D 00: mov eax, dword ptr [0x5d2120]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [edx], eax
        ; Exact mapped bytes 8B 0D 24 21 5D 00: mov ecx, dword ptr [0x5d2124]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 AD B3 00 00: call 0x4bcfc0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7E 75: jle 0x4b1c94
        __asm _emit 0x7e
        __asm _emit 0x75
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7E 08: jle 0x4b1c2d
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 74 40: je 0x4b1c6b
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes EB 67: jmp 0x4b1c94
        __asm _emit 0xeb
        __asm _emit 0x67
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 0
        ; Exact mapped bytes E8 34 B6 00 00: call 0x4bd280
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        push 0ffffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 60 B5 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x4b1d3a
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 1ch
        ; Exact mapped bytes E8 F4 A5 00 00: call 0x4bc280
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x4b1d3a
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
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
        push 1ch
        push 8
        ; Exact mapped bytes E8 85 A6 00 00: call 0x4bc350
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes EB 6A: jmp 0x4b1d3a
        __asm _emit 0xeb
        __asm _emit 0x6a
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 1D 18 11 58 00: fcomp qword ptr [0x581118]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 40h
        ; Exact mapped bytes 74 1C: je 0x4b1cfc
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 2A: jmp 0x4b1d26
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 57 A5 00 00: call 0x4bc260
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D EC: fstp qword ptr [ebp - 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xec
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 65 EC: fsub qword ptr [ebp - 0x14]
        __asm _emit 0xdc
        __asm _emit 0x65
        __asm _emit 0xec
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        push 0ffffh
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 8C B4 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        mov esp, ebp
        pop ebp
        ret
    }
}
