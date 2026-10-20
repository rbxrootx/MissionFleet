// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F049 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_5886f049_5886F049() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        mov ecx, 0ffffh
        push esi
        ; Exact mapped bytes 66 8B 75 0C: mov si, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x0c
        movzx edx, si
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 47: je 0x5886f0ad
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, 100h
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 73 10: jae 0x5886f080
        __asm _emit 0x73
        __asm _emit 0x10
        movzx ecx, ax
        ; Exact mapped bytes A1 34 74 90 58: mov eax, dword ptr [0x58907434]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        movzx eax, word ptr [eax + ecx*2]
        and eax, edx
        ; Exact mapped bytes EB 2F: jmp 0x5886f0af
        __asm _emit 0xeb
        __asm _emit 0x2f
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        lea eax, [ebp - 4]
        push eax
        push 1
        lea eax, [ebp - 8]
        push eax
        push 1
        ; Exact mapped bytes E8 B6 C1 00 00: call 0x5887b251
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x5886f0ad
        __asm _emit 0x74
        __asm _emit 0x0b
        movzx eax, word ptr [ebp - 4]
        movzx ecx, si
        and eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x5886f0af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        leave
        ret
    }
}
