// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426F5C .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_00426f5c_00426F5C() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        xor eax, eax
        push esi
        test bl, 10h
        ; Exact mapped bytes 74 03: je 0x426f6c
        __asm _emit 0x74
        __asm _emit 0x03
        push 1
        pop eax
        test bl, 8
        ; Exact mapped bytes 74 02: je 0x426f73
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 4
        test bl, 4
        ; Exact mapped bytes 74 02: je 0x426f7a
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 8
        test bl, 2
        ; Exact mapped bytes 74 02: je 0x426f81
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 10h
        test bl, 1
        ; Exact mapped bytes 74 02: je 0x426f88
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 20h
        test ebx, 80000h
        ; Exact mapped bytes 74 02: je 0x426f92
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 2
        mov ecx, ebx
        mov edx, 300h
        and ecx, edx
        mov esi, 200h
        ; Exact mapped bytes 74 1D: je 0x426fbf
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp ecx, 100h
        ; Exact mapped bytes 74 12: je 0x426fbc
        __asm _emit 0x74
        __asm _emit 0x12
        cmp ecx, esi
        ; Exact mapped bytes 74 09: je 0x426fb7
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ecx, edx
        ; Exact mapped bytes 75 0D: jne 0x426fbf
        __asm _emit 0x75
        __asm _emit 0x0d
        or ah, 0ch
        ; Exact mapped bytes EB 08: jmp 0x426fbf
        __asm _emit 0xeb
        __asm _emit 0x08
        or ah, 8
        ; Exact mapped bytes EB 03: jmp 0x426fbf
        __asm _emit 0xeb
        __asm _emit 0x03
        or ah, 4
        mov ecx, ebx
        and ecx, 30000h
        ; Exact mapped bytes 74 0C: je 0x426fd5
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp ecx, 10000h
        ; Exact mapped bytes 75 06: jne 0x426fd7
        __asm _emit 0x75
        __asm _emit 0x06
        or eax, esi
        ; Exact mapped bytes EB 02: jmp 0x426fd7
        __asm _emit 0xeb
        __asm _emit 0x02
        or eax, edx
        pop esi
        test ebx, 40000h
        pop ebx
        ; Exact mapped bytes 74 03: je 0x426fe4
        __asm _emit 0x74
        __asm _emit 0x03
        or ah, 10h
        ret
    }
}
