// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CFDD .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5886cfdd_5886CFDD() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        push esi
        push edi
        mov esi, 7ffh
        mov edi, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, edx
        shr eax, 14h
        and eax, esi
        cmp eax, esi
        ; Exact mapped bytes 75 3B: jne 0x5886d039
        __asm _emit 0x75
        __asm _emit 0x3b
        mov esi, edx
        mov eax, edi
        and esi, 0fffffh
        or eax, esi
        ; Exact mapped bytes 75 03: jne 0x5886d00f
        __asm _emit 0x75
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 2C: jmp 0x5886d03b
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, 80000h
        cmp edx, ecx
        ; Exact mapped bytes 7F 13: jg 0x5886d02b
        __asm _emit 0x7f
        __asm _emit 0x13
        ; Exact mapped bytes 7C 04: jl 0x5886d01e
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp edi, ecx
        ; Exact mapped bytes 73 0D: jae 0x5886d02b
        __asm _emit 0x73
        __asm _emit 0x0d
        cmp edi, ecx
        ; Exact mapped bytes 75 09: jne 0x5886d02b
        __asm _emit 0x75
        __asm _emit 0x09
        cmp esi, eax
        ; Exact mapped bytes 75 05: jne 0x5886d02b
        __asm _emit 0x75
        __asm _emit 0x05
        push 4
        pop eax
        ; Exact mapped bytes EB 10: jmp 0x5886d03b
        __asm _emit 0xeb
        __asm _emit 0x10
        and edx, eax
        or ecx, edx
        ; Exact mapped bytes 74 04: je 0x5886d035
        __asm _emit 0x74
        __asm _emit 0x04
        push 2
        ; Exact mapped bytes EB F3: jmp 0x5886d028
        __asm _emit 0xeb
        __asm _emit 0xf3
        push 3
        ; Exact mapped bytes EB EF: jmp 0x5886d028
        __asm _emit 0xeb
        __asm _emit 0xef
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ret
    }
}
