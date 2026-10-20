// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C43E0 .. +0x2BC bytes.
extern "C" __declspec(naked) void FUN_004c43e0_004C43E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push 0ffffh
        push 133fh
        ; Exact mapped bytes E8 CB 8D FF FF: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 0eh]
        and eax, 0ffffh
        and eax, 7ff0h
        cmp eax, 7ff0h
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x4c44b6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A0 8B FF FF: call 0x4bcfc0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7E 50: jle 0x4c447c
        __asm _emit 0x7e
        __asm _emit 0x50
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7E 08: jle 0x4c443a
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 20h], 3
        ; Exact mapped bytes 74 1B: je 0x4c4453
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes EB 42: jmp 0x4c447c
        __asm _emit 0xeb
        __asm _emit 0x42
        push 0ffffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 78 8D FF FF: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes E9 45 02 00 00: jmp 0x4c4698
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes DB 45 10: fild dword ptr [ebp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DD 5D D8: fstp qword ptr [ebp - 0x28]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 19h
        ; Exact mapped bytes E8 6C 7E FF FF: call 0x4bc2e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes E9 1C 02 00 00: jmp 0x4c4698
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
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
        ; Exact mapped bytes DB 45 10: fild dword ptr [ebp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DD 5D D0: fstp qword ptr [ebp - 0x30]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 19h
        push 8
        ; Exact mapped bytes E8 62 7F FF FF: call 0x4bc410
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes E9 E2 01 00 00: jmp 0x4c4698
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 74 19: je 0x4c44df
        __asm _emit 0x74
        __asm _emit 0x19
        push 0ffffh
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 EC 8C FF FF: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x4c4698
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 50 8B FF FF: call 0x4bd040
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D E4: fstp qword ptr [ebp - 0x1c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe4
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 0A: jge 0x4c4506
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 10h]
        neg eax
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 06: jmp 0x4c450c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 7fffffffh
        ; Exact mapped bytes 7E 08: jle 0x4c451d
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 09: jmp 0x4c4526
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0a00h
        ; Exact mapped bytes 7E 4C: jle 0x4c457b
        __asm _emit 0x7e
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes 8B 0D 1C 21 5D 00: mov ecx, dword ptr [0x5d211c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 18 21 5D 00: mov edx, dword ptr [0x5d2118]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 32 8D FF FF: call 0x4bd280
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes DB 45 10: fild dword ptr [ebp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DD 5D C4: fstp qword ptr [ebp - 0x3c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 19h
        push 11h
        ; Exact mapped bytes E8 9D 7E FF FF: call 0x4bc410
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x4c4698
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 400h
        ; Exact mapped bytes 7E 50: jle 0x4c45d4
        __asm _emit 0x7e
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 600h
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 35 89 FF FF: call 0x4bced0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes DB 45 10: fild dword ptr [ebp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DD 5D BC: fstp qword ptr [ebp - 0x44]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xbc
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 19h
        push 11h
        ; Exact mapped bytes E8 44 7E FF FF: call 0x4bc410
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x4c4698
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0fffff603h
        ; Exact mapped bytes 7D 3A: jge 0x4c4617
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes DD 45 E4: fld qword ptr [ebp - 0x1c]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes DC 0D 18 11 58 00: fmul qword ptr [0x581118]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes DB 45 10: fild dword ptr [ebp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DD 5D B4: fstp qword ptr [ebp - 0x4c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xb4
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 19h
        push 12h
        ; Exact mapped bytes E8 01 7E FF FF: call 0x4bc410
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x4c4698
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0fffffc03h
        ; Exact mapped bytes 7D 4D: jge 0x4c466d
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 600h
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 99 88 FF FF: call 0x4bced0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes DB 45 10: fild dword ptr [ebp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DD 5D AC: fstp qword ptr [ebp - 0x54]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xac
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 19h
        push 12h
        ; Exact mapped bytes E8 A8 7D FF FF: call 0x4bc410
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes EB 2B: jmp 0x4c4698
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 52 88 FF FF: call 0x4bced0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        push 0ffffh
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 2E 8B FF FF: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
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
