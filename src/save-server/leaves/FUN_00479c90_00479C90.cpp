// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00479C90 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_00479c90_00479C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
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
        ; Exact mapped bytes 74 1A: je 0x479cc0
        __asm _emit 0x74
        __asm _emit 0x1a
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x479dba
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0eh]
        and eax, 0ffffh
        and eax, 7ff0h
        test eax, eax
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x479d89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 0ch
        test ecx, ecx
        ; Exact mapped bytes 75 0A: jne 0x479ce9
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x479d89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0fffffc03h
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
        ; Exact mapped bytes 74 09: je 0x479d09
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x479d10
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 0eh]
        and eax, 0ffffh
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x479d55
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 80000000h
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x479d42
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        or al, 1
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB C1: jmp 0x479d16
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        ; Exact mapped bytes 66 25 EF FF: and ax, 0xffef
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 0E: mov word ptr [ebp + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x0e
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0B: je 0x479d72
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4D 0E: mov cx, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0e
        or ch, 80h
        ; Exact mapped bytes 66 89 4D 0E: mov word ptr [ebp + 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x0e
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9F FD FF FF: call 0x479b20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes EB 31: jmp 0x479dba
        __asm _emit 0xeb
        __asm _emit 0x31
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 88 FD FF FF: call 0x479b20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 0eh]
        and eax, 0ffffh
        and eax, 7ff0h
        sar eax, 4
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        sub ecx, 3feh
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        ; Exact mapped bytes DD 45 F4: fld qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf4
        mov esp, ebp
        pop ebp
        ret
    }
}
