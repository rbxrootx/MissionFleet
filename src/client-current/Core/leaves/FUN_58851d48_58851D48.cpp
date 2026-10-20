// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851D48 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_58851d48_58851D48() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 3C: je 0x58851d92
        __asm _emit 0x74
        __asm _emit 0x3c
        sub eax, 1
        ; Exact mapped bytes 74 33: je 0x58851d8e
        __asm _emit 0x74
        __asm _emit 0x33
        sub eax, 9
        ; Exact mapped bytes 74 2E: je 0x58851d8e
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [ebp + 14h], 0dh
        ; Exact mapped bytes 74 28: je 0x58851d8e
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        and eax, 4
        or eax, 0
        push 1
        pop eax
        ; Exact mapped bytes 74 04: je 0x58851d78
        __asm _emit 0x74
        __asm _emit 0x04
        mov cl, al
        ; Exact mapped bytes EB 02: jmp 0x58851d7a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor cl, cl
        ; Exact mapped bytes 66 83 7D 10 63: cmp word ptr [ebp + 0x10], 0x63
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x63
        ; Exact mapped bytes 74 07: je 0x58851d88
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 7D 10 73: cmp word ptr [ebp + 0x10], 0x73
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x73
        ; Exact mapped bytes 75 02: jne 0x58851d8a
        __asm _emit 0x75
        __asm _emit 0x02
        xor al, al
        xor al, cl
        pop ebp
        ret
        mov al, 1
        pop ebp
        ret
        xor al, al
        pop ebp
        ret
    }
}
