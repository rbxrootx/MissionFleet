// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58758360 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_58758360() {
    __asm {
        push ecx
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        mov eax, dword ptr [ecx + 8]
        ; Exact mapped bytes D9 14 24: fst dword ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0x24
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x587583d7
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [esp + 8]
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        push esi
        mov esi, dword ptr [eax + edx*4 + 0b40h]
        test esi, esi
        ; Exact mapped bytes 74 12: je 0x58758391
        __asm _emit 0x74
        __asm _emit 0x12
        movzx esi, byte ptr [esi]
        ; Exact mapped bytes 66 83 FE 05: cmp si, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x05
        ; Exact mapped bytes 75 09: jne 0x58758391
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ecx + edx*4 + 8ch]
        ; Exact mapped bytes EB 1B: jmp 0x587583ac
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [eax + edx*4 + 0b40h]
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x587583d2
        __asm _emit 0x74
        __asm _emit 0x36
        movzx eax, byte ptr [eax]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 2D: jne 0x587583d2
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ecx + edx*4 + 10ch]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x587583d2
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [eax + 98h]
        mov eax, dword ptr [eax + 9ch]
        sub eax, ecx
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes DB 44 24 0C: fild dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        mov dword ptr [esp + 4], ecx
        ; Exact mapped bytes DA 44 24 04: fiadd dword ptr [esp + 4]
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes D9 5C 24 04: fstp dword ptr [esp + 4]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes D9 44 24 04: fld dword ptr [esp + 4]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        pop esi
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
