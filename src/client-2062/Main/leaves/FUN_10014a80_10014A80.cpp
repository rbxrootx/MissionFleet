// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014A80 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_10014a80_10014A80() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 75 1D: jne 0x10014aa8
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 33: jle 0x10014acc
        __asm _emit 0x7e
        __asm _emit 0x33
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x10014acc
        __asm _emit 0x74
        __asm _emit 0x29
        add eax, 40h
        ; Exact mapped bytes EB 26: jmp 0x10014ace
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp eax, 1
        ; Exact mapped bytes 75 30: jne 0x10014add
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 5
        ; Exact mapped bytes 7E 11: jle 0x10014acc
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10014acc
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 140h
        ; Exact mapped bytes EB 02: jmp 0x10014ace
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 3b4h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 5D: je 0x10014b38
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes EB 33: jmp 0x10014b10
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp eax, 2
        ; Exact mapped bytes 75 56: jne 0x10014b38
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 6
        ; Exact mapped bytes 7E 11: jle 0x10014b01
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10014b01
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 180h
        ; Exact mapped bytes EB 02: jmp 0x10014b03
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 3b4h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10014b38
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
