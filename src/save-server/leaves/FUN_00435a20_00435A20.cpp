// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435A20 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00435a20_00435A20() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov edx, dword ptr [esp + 10h]
        mov ecx, esi
        sub ecx, eax
        sar ecx, 3
        test ecx, ecx
        ; Exact mapped bytes 7E 25: jle 0x435a5d
        __asm _emit 0x7e
        __asm _emit 0x25
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 46: je 0x435a83
        __asm _emit 0x74
        __asm _emit 0x46
        add eax, 2
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 3E: je 0x435a83
        __asm _emit 0x74
        __asm _emit 0x3e
        add eax, 2
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 36: je 0x435a83
        __asm _emit 0x74
        __asm _emit 0x36
        add eax, 2
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 2E: je 0x435a83
        __asm _emit 0x74
        __asm _emit 0x2e
        add eax, 2
        dec ecx
        test ecx, ecx
        ; Exact mapped bytes 7F DB: jg 0x435a38
        __asm _emit 0x7f
        __asm _emit 0xdb
        mov ecx, esi
        sub ecx, eax
        sar ecx, 1
        dec ecx
        ; Exact mapped bytes 74 16: je 0x435a7c
        __asm _emit 0x74
        __asm _emit 0x16
        dec ecx
        ; Exact mapped bytes 74 0B: je 0x435a74
        __asm _emit 0x74
        __asm _emit 0x0b
        dec ecx
        ; Exact mapped bytes 75 15: jne 0x435a81
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 12: je 0x435a83
        __asm _emit 0x74
        __asm _emit 0x12
        add eax, 2
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 0A: je 0x435a83
        __asm _emit 0x74
        __asm _emit 0x0a
        add eax, 2
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 02: je 0x435a83
        __asm _emit 0x74
        __asm _emit 0x02
        mov eax, esi
        pop esi
        ret
    }
}
