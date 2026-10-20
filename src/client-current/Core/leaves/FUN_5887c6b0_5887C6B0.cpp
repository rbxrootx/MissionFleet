// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C6B0 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_5887c6b0_5887C6B0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        mov ecx, esi
        and ecx, 10h
        mov eax, esi
        shl ecx, 3
        mov edx, ecx
        or edx, 200h
        test al, 8
        cmove edx, ecx
        mov ecx, edx
        or ecx, 400h
        test al, 4
        cmove ecx, edx
        mov edx, ecx
        or edx, 800h
        test al, 2
        cmove edx, ecx
        mov ecx, edx
        or ecx, 1000h
        test al, 1
        cmove ecx, edx
        mov edx, ecx
        or edx, 100h
        test esi, 80000h
        cmove edx, ecx
        mov ecx, esi
        and ecx, 300h
        mov eax, edx
        cmp ecx, 200h
        ; Exact mapped bytes 77 1C: ja 0x5887c736
        __asm _emit 0x77
        __asm _emit 0x1c
        ; Exact mapped bytes 74 13: je 0x5887c72f
        __asm _emit 0x74
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x5887c743
        __asm _emit 0x74
        __asm _emit 0x23
        cmp ecx, 100h
        ; Exact mapped bytes 75 1B: jne 0x5887c743
        __asm _emit 0x75
        __asm _emit 0x1b
        or eax, 2000h
        ; Exact mapped bytes EB 14: jmp 0x5887c743
        __asm _emit 0xeb
        __asm _emit 0x14
        or eax, 4000h
        ; Exact mapped bytes EB 0D: jmp 0x5887c743
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 300h
        ; Exact mapped bytes 75 05: jne 0x5887c743
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 6000h
        and esi, 3000000h
        cmp esi, 1000000h
        ; Exact mapped bytes 74 1E: je 0x5887c76f
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp esi, 2000000h
        ; Exact mapped bytes 74 10: je 0x5887c769
        __asm _emit 0x74
        __asm _emit 0x10
        cmp esi, 3000000h
        ; Exact mapped bytes 75 13: jne 0x5887c774
        __asm _emit 0x75
        __asm _emit 0x13
        or eax, 8000h
        pop esi
        pop ebp
        ret
        or eax, 40h
        pop esi
        pop ebp
        ret
        or eax, 8040h
        pop esi
        pop ebp
        ret
    }
}
