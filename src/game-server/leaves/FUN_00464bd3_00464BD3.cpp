// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464BD3 .. +0x1D8 bytes.
extern "C" __declspec(naked) void FUN_00464bd3_00464BD3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        cmp dword ptr [edx + 114h], 0
        ; Exact mapped bytes 0F 84 95 01 00 00: je 0x464d9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        shr al, 5
        and al, 1
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x464c91
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 75 52: jne 0x464c91
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 40ca8h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 0d78h]
        mov edx, dword ptr [ecx + 104h]
        shl edx, 4
        ; Exact mapped bytes D9 45 08: fld dword ptr [ebp + 8]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes D8 8C 10 A4 15 00 00: fmul dword ptr [eax + edx + 0x15a4]
        __asm _emit 0xd8
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0xa4
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 55 FC: fst dword ptr [ebp - 4]
        __asm _emit 0xd9
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes D8 1D 28 1C 58 00: fcomp dword ptr [0x581c28]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x28
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 74 08: je 0x464c82
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x464c89
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 43fa0000h
        ; Exact mapped bytes D9 45 F4: fld dword ptr [ebp - 0xc]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x464da5
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 40ca8h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 0d78h]
        mov edx, dword ptr [ecx + 104h]
        shl edx, 4
        cmp dword ptr [eax + edx + 15a8h], 0
        ; Exact mapped bytes 75 30: jne 0x464cec
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 40ca8h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [eax + 104h]
        shl ecx, 4
        ; Exact mapped bytes D9 45 08: fld dword ptr [ebp + 8]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes D8 8C 0A A4 15 00 00: fmul dword ptr [edx + ecx + 0x15a4]
        __asm _emit 0xd8
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0xa4
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x464da5
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax + 0d78h]
        mov eax, dword ptr [edx + 104h]
        shl eax, 4
        ; Exact mapped bytes DB 84 01 A8 15 00 00: fild dword ptr [ecx + eax + 0x15a8]
        __asm _emit 0xdb
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0xa8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 40ca8h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 0d78h]
        mov edx, dword ptr [ecx + 104h]
        shl edx, 4
        ; Exact mapped bytes D9 45 08: fld dword ptr [ebp + 8]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes D8 8C 10 A4 15 00 00: fmul dword ptr [eax + edx + 0x15a4]
        __asm _emit 0xd8
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0xa4
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 2D: je 0x464d75
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 40ca8h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [eax + 104h]
        shl ecx, 4
        ; Exact mapped bytes D9 45 08: fld dword ptr [ebp + 8]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes D8 8C 0A A4 15 00 00: fmul dword ptr [edx + ecx + 0x15a4]
        __asm _emit 0xd8
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0xa4
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x464da5
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax + 0d78h]
        mov eax, dword ptr [edx + 104h]
        shl eax, 4
        ; Exact mapped bytes DB 84 01 A8 15 00 00: fild dword ptr [ecx + eax + 0x15a8]
        __asm _emit 0xdb
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0xa8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x464da5
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes D9 05 24 1C 58 00: fld dword ptr [0x581c24]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
