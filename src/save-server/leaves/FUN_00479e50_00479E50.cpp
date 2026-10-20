// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00479E50 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_00479e50_00479E50() {
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
        ; Exact mapped bytes 74 0A: je 0x479e6d
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes DB 2D E0 05 68 00: fld xword ptr [0x6805e0]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes DB 5D F4: fistp dword ptr [ebp - 0xc]
        __asm _emit 0xdb
        __asm _emit 0x5d
        __asm _emit 0xf4
        wait
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x479e87
        __asm _emit 0x74
        __asm _emit 0x10
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes DB 2D E0 05 68 00: fld xword ptr [0x6805e0]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x68
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
        ; Exact mapped bytes 74 0A: je 0x479e9b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes DB 2D EC 05 68 00: fld xword ptr [0x6805ec]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        wait
        mov eax, dword ptr [ebp + 8]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x479eae
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
        ; Exact mapped bytes 74 06: je 0x479ebe
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
