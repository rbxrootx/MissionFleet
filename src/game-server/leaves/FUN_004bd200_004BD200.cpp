// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BD200 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_004bd200_004BD200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4bd21d
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes DB 2D 40 21 5D 00: fld xword ptr [0x5d2140]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes DB 5D F4: fistp dword ptr [ebp - 0xc]
        __asm _emit 0xdb
        __asm _emit 0x5d
        __asm _emit 0xf4
        wait
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x4bd237
        __asm _emit 0x74
        __asm _emit 0x10
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes DB 2D 40 21 5D 00: fld xword ptr [0x5d2140]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        wait
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        and edx, 10h
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x4bd24b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes DB 2D 4C 21 5D 00: fld xword ptr [0x5d214c]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x4c
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        wait
        mov eax, dword ptr [ebp + 8]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4bd25e
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        ; Exact mapped bytes DE F1: fdivrp st(1)
        __asm _emit 0xde
        __asm _emit 0xf1
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        wait
        mov ecx, dword ptr [ebp + 8]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x4bd26e
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes D9 EB: fldpi
        __asm _emit 0xd9
        __asm _emit 0xeb
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        wait
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
