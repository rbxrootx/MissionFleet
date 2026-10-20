// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047F310 .. +0x2BC bytes.
extern "C" __declspec(naked) void FUN_0047f310_0047F310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push 0ffffh
        push 133fh
        ; Exact mapped bytes E8 EB AA FF FF: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 0eh]
        and eax, 0ffffh
        and eax, 7ff0h
        cmp eax, 7ff0h
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x47f3e6
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
        ; Exact mapped bytes E8 C0 A8 FF FF: call 0x479c10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7E 50: jle 0x47f3ac
        __asm _emit 0x7e
        __asm _emit 0x50
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7E 08: jle 0x47f36a
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 20h], 3
        ; Exact mapped bytes 74 1B: je 0x47f383
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes EB 42: jmp 0x47f3ac
        __asm _emit 0xeb
        __asm _emit 0x42
        push 0ffffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 98 AA FF FF: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes E9 45 02 00 00: jmp 0x47f5c8
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
        ; Exact mapped bytes E8 8C 9B FF FF: call 0x478f30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes E9 1C 02 00 00: jmp 0x47f5c8
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
        ; Exact mapped bytes E8 82 9C FF FF: call 0x479060
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes E9 E2 01 00 00: jmp 0x47f5c8
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 74 19: je 0x47f40f
        __asm _emit 0x74
        __asm _emit 0x19
        push 0ffffh
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 0C AA FF FF: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x47f5c8
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
        ; Exact mapped bytes E8 70 A8 FF FF: call 0x479c90
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D E4: fstp qword ptr [ebp - 0x1c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe4
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 0A: jge 0x47f436
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 10h]
        neg eax
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 06: jmp 0x47f43c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 7fffffffh
        ; Exact mapped bytes 7E 08: jle 0x47f44d
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 09: jmp 0x47f456
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0a00h
        ; Exact mapped bytes 7E 4C: jle 0x47f4ab
        __asm _emit 0x7e
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes 8B 0D BC 05 68 00: mov ecx, dword ptr [0x6805bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 B8 05 68 00: mov edx, dword ptr [0x6805b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 52 AA FF FF: call 0x479ed0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xaa
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
        ; Exact mapped bytes E8 BD 9B FF FF: call 0x479060
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x47f5c8
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 400h
        ; Exact mapped bytes 7E 50: jle 0x47f504
        __asm _emit 0x7e
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 600h
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 55 A6 FF FF: call 0x479b20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa6
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
        ; Exact mapped bytes E8 64 9B FF FF: call 0x479060
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x47f5c8
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0fffff603h
        ; Exact mapped bytes 7D 3A: jge 0x47f547
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes DD 45 E4: fld qword ptr [ebp - 0x1c]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes DC 0D E0 A4 63 00: fmul qword ptr [0x63a4e0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0xa4
        __asm _emit 0x63
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
        ; Exact mapped bytes E8 21 9B FF FF: call 0x479060
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x47f5c8
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0fffffc03h
        ; Exact mapped bytes 7D 4D: jge 0x47f59d
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 600h
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 B9 A5 FF FF: call 0x479b20
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa5
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
        ; Exact mapped bytes E8 C8 9A FF FF: call 0x479060
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes EB 2B: jmp 0x47f5c8
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 72 A5 FF FF: call 0x479b20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa5
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
        ; Exact mapped bytes E8 4E A8 FF FF: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa8
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
