// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046E150 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_0046e150_0046E150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push 0
        push 0
        ; Exact mapped bytes E8 B1 BC 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        push 0ffffh
        ; Exact mapped bytes A1 E8 DD 67 00: mov eax, dword ptr [0x67dde8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 9B BC 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 0eh]
        and ecx, 0ffffh
        and ecx, 7ff0h
        cmp ecx, 7ff0h
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x46e270
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes A1 C0 05 68 00: mov eax, dword ptr [0x6805c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [edx], eax
        ; Exact mapped bytes 8B 0D C4 05 68 00: mov ecx, dword ptr [0x6805c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5D BA 00 00: call 0x479c10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7E 75: jle 0x46e234
        __asm _emit 0x7e
        __asm _emit 0x75
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7E 08: jle 0x46e1cd
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 74 40: je 0x46e20b
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes EB 67: jmp 0x46e234
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
        ; Exact mapped bytes E8 E4 BC 00 00: call 0x479ed0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbc
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
        ; Exact mapped bytes E8 10 BC 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x46e2da
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
        ; Exact mapped bytes E8 A4 AC 00 00: call 0x478ed0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x46e2da
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 35 AD 00 00: call 0x478fa0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes EB 6A: jmp 0x46e2da
        __asm _emit 0xeb
        __asm _emit 0x6a
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
        ; Exact mapped bytes 74 1C: je 0x46e29c
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
        ; Exact mapped bytes EB 2A: jmp 0x46e2c6
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 07 AC 00 00: call 0x478eb0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xac
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
        ; Exact mapped bytes E8 3C BB 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbb
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
