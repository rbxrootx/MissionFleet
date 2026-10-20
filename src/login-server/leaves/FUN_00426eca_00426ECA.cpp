// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426ECA .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_00426eca_00426ECA() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        xor eax, eax
        push ebp
        test bl, 1
        push edi
        ; Exact mapped bytes 74 03: je 0x426edb
        __asm _emit 0x74
        __asm _emit 0x03
        push 10h
        pop eax
        test bl, 4
        ; Exact mapped bytes 74 02: je 0x426ee2
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 8
        test bl, 8
        ; Exact mapped bytes 74 02: je 0x426ee9
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 4
        test bl, 10h
        ; Exact mapped bytes 74 02: je 0x426ef0
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 2
        test bl, 20h
        ; Exact mapped bytes 74 02: je 0x426ef7
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 1
        test bl, 2
        ; Exact mapped bytes 74 05: je 0x426f01
        __asm _emit 0x74
        __asm _emit 0x05
        or eax, 80000h
        movzx ecx, bx
        push esi
        mov edx, ecx
        mov esi, 0c00h
        mov edi, 300h
        and edx, esi
        mov ebp, 200h
        ; Exact mapped bytes 74 1F: je 0x426f39
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp edx, 400h
        ; Exact mapped bytes 74 14: je 0x426f36
        __asm _emit 0x74
        __asm _emit 0x14
        cmp edx, 800h
        ; Exact mapped bytes 74 08: je 0x426f32
        __asm _emit 0x74
        __asm _emit 0x08
        cmp edx, esi
        ; Exact mapped bytes 75 0B: jne 0x426f39
        __asm _emit 0x75
        __asm _emit 0x0b
        or eax, edi
        ; Exact mapped bytes EB 07: jmp 0x426f39
        __asm _emit 0xeb
        __asm _emit 0x07
        or eax, ebp
        ; Exact mapped bytes EB 03: jmp 0x426f39
        __asm _emit 0xeb
        __asm _emit 0x03
        or ah, 1
        and ecx, edi
        pop esi
        ; Exact mapped bytes 74 0B: je 0x426f49
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp ecx, ebp
        ; Exact mapped bytes 75 0C: jne 0x426f4e
        __asm _emit 0x75
        __asm _emit 0x0c
        or eax, 10000h
        ; Exact mapped bytes EB 05: jmp 0x426f4e
        __asm _emit 0xeb
        __asm _emit 0x05
        or eax, 20000h
        pop edi
        pop ebp
        test bh, 10h
        pop ebx
        ; Exact mapped bytes 74 05: je 0x426f5b
        __asm _emit 0x74
        __asm _emit 0x05
        or eax, 40000h
        ret
    }
}
