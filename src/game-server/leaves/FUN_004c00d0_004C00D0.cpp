// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C00D0 .. +0x264 bytes.
extern "C" __declspec(naked) void FUN_004c00d0_004C00D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 0ch], 0
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
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x4c00f7
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DD 5D E8: fstp qword ptr [ebp - 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe8
        ; Exact mapped bytes EB 0C: jmp 0x4c0103
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 14h], 7ff00000h
        ; Exact mapped bytes 75 6C: jne 0x4c0184
        __asm _emit 0x75
        __asm _emit 0x6c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 66: jne 0x4c0184
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes DC 1D 88 C6 58 00: fcomp qword ptr [0x58c688]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 15: jne 0x4c0143
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 8B 15 18 21 5D 00: mov edx, dword ptr [0x5d2118]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx], edx
        ; Exact mapped bytes A1 1C 21 5D 00: mov eax, dword ptr [0x5d211c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 3C: jmp 0x4c017f
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes DC 1D 88 C6 58 00: fcomp qword ptr [0x58c688]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 12: je 0x4c0165
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], 0
        mov dword ptr [ecx + 4], 0
        ; Exact mapped bytes EB 1A: jmp 0x4c017f
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 18h]
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
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E9 A9 01 00 00: jmp 0x4c032d
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0fff00000h
        ; Exact mapped bytes 75 6E: jne 0x4c01fb
        __asm _emit 0x75
        __asm _emit 0x6e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 68: jne 0x4c01fb
        __asm _emit 0x75
        __asm _emit 0x68
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes DC 1D 88 C6 58 00: fcomp qword ptr [0x58c688]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 12: jne 0x4c01b5
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], 0
        mov dword ptr [edx + 4], 0
        ; Exact mapped bytes EB 41: jmp 0x4c01f6
        __asm _emit 0xeb
        __asm _emit 0x41
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes DC 1D 88 C6 58 00: fcomp qword ptr [0x58c688]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 16: je 0x4c01db
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 8B 0D 18 21 5D 00: mov ecx, dword ptr [0x5d2118]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        ; Exact mapped bytes 8B 15 1C 21 5D 00: mov edx, dword ptr [0x5d211c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 1B: jmp 0x4c01f6
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 8B 0D 20 21 5D 00: mov ecx, dword ptr [0x5d2120]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        ; Exact mapped bytes 8B 15 24 21 5D 00: mov edx, dword ptr [0x5d2124]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax + 4], edx
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x4c032d
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 7ff00000h
        ; Exact mapped bytes 75 63: jne 0x4c0267
        __asm _emit 0x75
        __asm _emit 0x63
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 5D: jne 0x4c0267
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes DD 45 10: fld qword ptr [ebp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x10
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
        test ah, 41h
        ; Exact mapped bytes 75 16: jne 0x4c0230
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 8B 0D 18 21 5D 00: mov ecx, dword ptr [0x5d2118]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        ; Exact mapped bytes 8B 15 1C 21 5D 00: mov edx, dword ptr [0x5d211c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 32: jmp 0x4c0262
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes DD 45 10: fld qword ptr [ebp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x10
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
        test ah, 1
        ; Exact mapped bytes 74 12: je 0x4c0252
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], 0
        mov dword ptr [eax + 4], 0
        ; Exact mapped bytes EB 10: jmp 0x4c0262
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], 0
        mov dword ptr [ecx + 4], 3ff00000h
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x4c032d
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0fff00000h
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x4c032d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x4c032d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 B5 00 00 00: call 0x4c0340
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes DD 45 10: fld qword ptr [ebp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x10
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
        test ah, 41h
        ; Exact mapped bytes 75 35: jne 0x4c02d6
        __asm _emit 0x75
        __asm _emit 0x35
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 75 0D: jne 0x4c02b4
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes DD 05 18 21 5D 00: fld qword ptr [0x5d2118]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DD 5D E0: fstp qword ptr [ebp - 0x20]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe0
        ; Exact mapped bytes EB 12: jmp 0x4c02c6
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 18 21 5D 00: mov ecx, dword ptr [0x5d2118]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 8B 15 1C 21 5D 00: mov edx, dword ptr [0x5d211c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 57: jmp 0x4c032d
        __asm _emit 0xeb
        __asm _emit 0x57
        ; Exact mapped bytes DD 45 10: fld qword ptr [ebp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x10
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
        test ah, 1
        ; Exact mapped bytes 74 37: je 0x4c031d
        __asm _emit 0x74
        __asm _emit 0x37
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 75 13: jne 0x4c02ff
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes A1 38 21 5D 00: mov eax, dword ptr [0x5d2138]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 8B 0D 3C 21 5D 00: mov ecx, dword ptr [0x5d213c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 0E: jmp 0x4c030d
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes EB 10: jmp 0x4c032d
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], 0
        mov dword ptr [edx + 4], 3ff00000h
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
