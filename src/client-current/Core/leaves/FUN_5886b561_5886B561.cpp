// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B561 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_5886b561_5886B561() {
    __asm {
        ; Exact mapped bytes 83 3D 74 9C 96 58 00: cmp dword ptr [0x58969c74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 4F: jne 0x5886b5b9
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes DD 95 30 FD FF FF: fst qword ptr [ebp - 0x2d0]
        __asm _emit 0xdd
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp - 90h]
        or al, al
        ; Exact mapped bytes 74 1A: je 0x5886b594
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp al, 0ffh
        ; Exact mapped bytes 74 5B: je 0x5886b5d9
        __asm _emit 0x74
        __asm _emit 0x5b
        cmp al, 0feh
        ; Exact mapped bytes 74 3F: je 0x5886b5c1
        __asm _emit 0x74
        __asm _emit 0x3f
        or al, al
        ; Exact mapped bytes 74 33: je 0x5886b5b9
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        mov dword ptr [ebp - 8eh], eax
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x5886b646
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 85 5C FF FF FF: mov ax, word ptr [ebp - 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E0 20: and ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x20
        ; Exact mapped bytes 75 18: jne 0x5886b5b9
        __asm _emit 0x75
        __asm _emit 0x18
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes 66 83 E0 20: and ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x20
        ; Exact mapped bytes 74 0F: je 0x5886b5b9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dword ptr [ebp - 8eh], 8
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x5886b646
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 AD 5C FF FF FF: fldcw word ptr [ebp - 0xa4]
        __asm _emit 0xd9
        __asm _emit 0xad
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        wait
        ret
        ; Exact mapped bytes 66 8B 85 36 FD FF FF: mov ax, word ptr [ebp - 0x2ca]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 25 F0 7F: and ax, 0x7ff0
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 66 0B C0: or ax, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1B: je 0x5886b5ec
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 3D F0 7F: cmp ax, 0x7ff0
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 74 43: je 0x5886b61a
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes EB BB: jmp 0x5886b594
        __asm _emit 0xeb
        __asm _emit 0xbb
        ; Exact mapped bytes 66 8B 85 36 FD FF FF: mov ax, word ptr [ebp - 0x2ca]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 25 F0 7F: and ax, 0x7ff0
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 66 3D F0 7F: cmp ax, 0x7ff0
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 74 30: je 0x5886b61a
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes EB A8: jmp 0x5886b594
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov dword ptr [ebp - 8eh], 4
        ; Exact mapped bytes DD 05 D8 54 8C 58: fld qword ptr [0x588c54d8]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D9 FD: fscale
        __asm _emit 0xd9
        __asm _emit 0xfd
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D9 E1: fabs
        __asm _emit 0xd9
        __asm _emit 0xe1
        ; Exact mapped bytes DC 1D C8 54 8C 58: fcomp qword ptr [0x588c54c8]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x58
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        ; Exact mapped bytes 73 34: jae 0x5886b646
        __asm _emit 0x73
        __asm _emit 0x34
        ; Exact mapped bytes DC 0D E8 54 8C 58: fmul qword ptr [0x588c54e8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes EB 2C: jmp 0x5886b646
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov dword ptr [ebp - 8eh], 3
        ; Exact mapped bytes DD 05 D0 54 8C 58: fld qword ptr [0x588c54d0]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D9 FD: fscale
        __asm _emit 0xd9
        __asm _emit 0xfd
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D9 E1: fabs
        __asm _emit 0xd9
        __asm _emit 0xe1
        ; Exact mapped bytes DC 1D C0 54 8C 58: fcomp qword ptr [0x588c54c0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x58
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        ; Exact mapped bytes 76 06: jbe 0x5886b646
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes DC 0D E0 54 8C 58: fmul qword ptr [0x588c54e0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x58
        push esi
        push edi
        mov ebx, dword ptr [ebp - 94h]
        inc ebx
        mov dword ptr [ebp - 8ah], ebx
        test byte ptr [ebp - 2c8h], 1
        ; Exact mapped bytes 75 1A: jne 0x5886b678
        __asm _emit 0x75
        __asm _emit 0x1a
        cld
        lea esi, [ebp + 8]
        lea edi, [ebp - 86h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        cmp byte ptr [ebx + 0ch], 1
        ; Exact mapped bytes 74 08: je 0x5886b678
        __asm _emit 0x74
        __asm _emit 0x08
        lea esi, [ebp + 10h]
        lea edi, [ebp - 7eh]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes DD 5D 8A: fstp qword ptr [ebp - 0x76]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0x8a
        lea eax, [ebp - 8eh]
        lea ebx, [ebp - 0a4h]
        push ebx
        push eax
        mov ebx, dword ptr [ebp - 94h]
        mov al, byte ptr [ebx + 0eh]
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes E8 35 D2 00 00: call 0x588788d0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        ; Exact mapped bytes DD 45 8A: fld qword ptr [ebp - 0x76]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x8a
        ; Exact mapped bytes E9 11 FF FF FF: jmp 0x5886b5b9
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
