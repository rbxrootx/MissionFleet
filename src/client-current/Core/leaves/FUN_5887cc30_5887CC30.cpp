// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CC30 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_5887cc30_5887CC30() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, edi
        shr esi, 4
        mov edx, edi
        and esi, 1
        mov ebx, edi
        mov eax, esi
        or eax, 4
        test dl, 8
        movzx ecx, ax
        mov eax, esi
        cmove ecx, eax
        movzx edx, cx
        mov eax, edx
        or eax, 8
        test bl, 4
        movzx ecx, ax
        mov eax, edx
        cmove ecx, eax
        movzx edx, cx
        mov eax, edx
        or eax, 10h
        test bl, 2
        movzx ecx, ax
        mov eax, edx
        cmove ecx, eax
        movzx edx, cx
        mov eax, edx
        or eax, 20h
        test bl, 1
        movzx ecx, ax
        mov eax, edx
        cmove ecx, eax
        movzx edx, cx
        mov eax, edx
        or eax, 2
        test edi, 80000h
        movzx ecx, ax
        mov eax, edx
        cmove ecx, eax
        mov edx, edi
        and edx, 300h
        movzx eax, cx
        cmp edx, 200h
        ; Exact mapped bytes 77 1E: ja 0x5887ccd7
        __asm _emit 0x77
        __asm _emit 0x1e
        ; Exact mapped bytes 74 15: je 0x5887ccd0
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, eax
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x5887cce9
        __asm _emit 0x74
        __asm _emit 0x28
        cmp edx, 100h
        ; Exact mapped bytes 75 20: jne 0x5887cce9
        __asm _emit 0x75
        __asm _emit 0x20
        or eax, 400h
        ; Exact mapped bytes EB 16: jmp 0x5887cce6
        __asm _emit 0xeb
        __asm _emit 0x16
        or eax, 800h
        ; Exact mapped bytes EB 0F: jmp 0x5887cce6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, eax
        cmp edx, 300h
        ; Exact mapped bytes 75 08: jne 0x5887cce9
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0c00h
        movzx ecx, ax
        mov eax, edi
        and eax, 30000h
        ; Exact mapped bytes 74 0F: je 0x5887cd01
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp eax, 10000h
        ; Exact mapped bytes 75 0E: jne 0x5887cd07
        __asm _emit 0x75
        __asm _emit 0x0e
        or ecx, 200h
        ; Exact mapped bytes EB 06: jmp 0x5887cd07
        __asm _emit 0xeb
        __asm _emit 0x06
        or ecx, 300h
        movzx ecx, cx
        mov eax, ecx
        or eax, 1000h
        test ebx, 40000h
        pop edi
        movzx eax, ax
        pop esi
        cmove eax, ecx
        pop ebx
        pop ebp
        ret
    }
}
