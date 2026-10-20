// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047A080 .. +0x33A bytes.
extern "C" __declspec(naked) void FUN_0047a080_0047A080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push 0ffffh
        push 133fh
        ; Exact mapped bytes E8 7B FD FF FF: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 0eh]
        and eax, 0ffffh
        and eax, 7ff0h
        cmp eax, 7ff0h
        ; Exact mapped bytes 74 1B: je 0x47a0ca
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 16h]
        and ecx, 0ffffh
        and ecx, 7ff0h
        cmp ecx, 7ff0h
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x47a197
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0eh]
        and edx, 0ffffh
        and edx, 7ff8h
        cmp edx, 7ff0h
        ; Exact mapped bytes 75 10: jne 0x47a0f1
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 0dh
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x47a118
        __asm _emit 0x75
        __asm _emit 0x2d
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 27: jne 0x47a118
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 16h]
        and ecx, 0ffffh
        and ecx, 7ff8h
        cmp ecx, 7ff0h
        ; Exact mapped bytes 75 41: jne 0x47a149
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ebp + 14h]
        shl edx, 0dh
        test edx, edx
        ; Exact mapped bytes 75 06: jne 0x47a118
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 31: je 0x47a149
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 45 10: fadd qword ptr [ebp + 0x10]
        __asm _emit 0xdc
        __asm _emit 0x45
        __asm _emit 0x10
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 26h
        push 8
        ; Exact mapped bytes E8 1F EF FF FF: call 0x479060
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes E9 6D 02 00 00: jmp 0x47a3b6
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0eh]
        and edx, 0ffffh
        and edx, 7ff8h
        cmp edx, 7ff8h
        ; Exact mapped bytes 74 14: je 0x47a174
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 16h]
        and eax, 0ffffh
        and eax, 7ff8h
        cmp eax, 7ff8h
        ; Exact mapped bytes 75 23: jne 0x47a197
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 26h
        ; Exact mapped bytes E8 A1 ED FF FF: call 0x478f30
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes E9 1F 02 00 00: jmp 0x47a3b6
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 45 10: fld qword ptr [ebp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DC 5D 08: fcomp qword ptr [ebp + 8]
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 40h
        ; Exact mapped bytes 74 19: je 0x47a1bd
        __asm _emit 0x74
        __asm _emit 0x19
        push 0ffffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 5E FC FF FF: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes E9 F9 01 00 00: jmp 0x47a3b6
        __asm _emit 0xe9
        __asm _emit 0xf9
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
        ; Exact mapped bytes 74 24: je 0x47a1f1
        __asm _emit 0x74
        __asm _emit 0x24
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes DD 45 10: fld qword ptr [ebp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DC 5D 08: fcomp qword ptr [ebp + 8]
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 09: jne 0x47a1ea
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x47a1f1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 80000000h
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
        test ah, 41h
        ; Exact mapped bytes 75 0D: jne 0x47a20e
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes DD 45 10: fld qword ptr [ebp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DC 5D 08: fcomp qword ptr [ebp + 8]
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 75 1D: jne 0x47a22b
        __asm _emit 0x75
        __asm _emit 0x1d
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
        test ah, 1
        ; Exact mapped bytes 74 2D: je 0x47a24b
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes DD 45 10: fld qword ptr [ebp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DC 5D 08: fcomp qword ptr [ebp + 8]
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 20: jne 0x47a24b
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 09: jne 0x47a249
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 58: jmp 0x47a2a3
        __asm _emit 0xeb
        __asm _emit 0x58
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
        test ah, 41h
        ; Exact mapped bytes 75 0D: jne 0x47a268
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes DD 45 10: fld qword ptr [ebp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DC 5D 08: fcomp qword ptr [ebp + 8]
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 74 1D: je 0x47a285
        __asm _emit 0x74
        __asm _emit 0x1d
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
        test ah, 1
        ; Exact mapped bytes 74 2B: je 0x47a2a3
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes DD 45 10: fld qword ptr [ebp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DC 5D 08: fcomp qword ptr [ebp + 8]
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 1E: je 0x47a2a3
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x47a2a3
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 2]
        and ecx, 0ffffh
        and ecx, 7ff0h
        test ecx, ecx
        ; Exact mapped bytes 75 70: jne 0x47a326
        __asm _emit 0x75
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 4]
        shl edx, 0ch
        test edx, edx
        ; Exact mapped bytes 75 06: jne 0x47a2c6
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 60: je 0x47a326
        __asm _emit 0x74
        __asm _emit 0x60
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 B9 F9 FF FF: call 0x479c90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D E8: fstp qword ptr [ebp - 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe8
        mov eax, dword ptr [ebp - 10h]
        add eax, 600h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 2D F8 FF FF: call 0x479b20
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 26h
        push 12h
        ; Exact mapped bytes E8 42 ED FF FF: call 0x479060
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x47a3b6
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 7ff00000h
        ; Exact mapped bytes 75 06: jne 0x47a335
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x47a344
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 4], 0fff00000h
        ; Exact mapped bytes 75 64: jne 0x47a3a2
        __asm _emit 0x75
        __asm _emit 0x64
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 5E: jne 0x47a3a2
        __asm _emit 0x75
        __asm _emit 0x5e
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 3B F9 FF FF: call 0x479c90
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D DC: fstp qword ptr [ebp - 0x24]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, 600h
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 AE F7 FF FF: call 0x479b20
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf7
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
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 26h
        push 11h
        ; Exact mapped bytes E8 C3 EC FF FF: call 0x479060
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes EB 14: jmp 0x47a3b6
        __asm _emit 0xeb
        __asm _emit 0x14
        push 0ffffh
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 60 FA FF FF: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfa
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
