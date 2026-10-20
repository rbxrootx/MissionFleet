// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046DDD0 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_0046ddd0_0046DDD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push 0ffffh
        ; Exact mapped bytes A1 E0 DD 67 00: mov eax, dword ptr [0x67dde0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 2A C0 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0eh]
        and ecx, 0ffffh
        and ecx, 7ff0h
        cmp ecx, 7ff0h
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x46de8b
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
        ; Exact mapped bytes E8 FC BD 00 00: call 0x479c10
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 42: jle 0x46de62
        __asm _emit 0x7e
        __asm _emit 0x42
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7E 08: jle 0x46de2e
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 74 1B: je 0x46de47
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes EB 34: jmp 0x46de62
        __asm _emit 0xeb
        __asm _emit 0x34
        push 0ffffh
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 D4 BF 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x46df01
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
        push 0bh
        ; Exact mapped bytes E8 76 B0 00 00: call 0x478ed0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x46df01
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
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0bh
        push 8
        ; Exact mapped bytes E8 1A B1 00 00: call 0x478fa0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes EB 76: jmp 0x46df01
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 18 B0 00 00: call 0x478eb0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb0
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
        ; Exact mapped bytes 74 16: je 0x46dec1
        __asm _emit 0x74
        __asm _emit 0x16
        push 0ffffh
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 57 BF 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 40: jmp 0x46df01
        __asm _emit 0xeb
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 0ch]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x46dee1
        __asm _emit 0x74
        __asm _emit 0x16
        push 0ffffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 37 BF 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 20: jmp 0x46df01
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
        push 0bh
        push 10h
        ; Exact mapped bytes E8 A2 B0 00 00: call 0x478fa0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov esp, ebp
        pop ebp
        ret
    }
}
