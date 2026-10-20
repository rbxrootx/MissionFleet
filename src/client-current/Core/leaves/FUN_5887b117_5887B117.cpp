// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B117 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_5887b117_5887B117() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x5887b132
        __asm _emit 0x75
        __asm _emit 0x0f
        xor ecx, ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        xor eax, eax
        inc eax
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x5887b13d
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB E8: jmp 0x5887b125
        __asm _emit 0xeb
        __asm _emit 0xe8
        test ecx, 0ffffff80h
        ; Exact mapped bytes 75 04: jne 0x5887b149
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB E4: jmp 0x5887b12d
        __asm _emit 0xeb
        __asm _emit 0xe4
        push ebx
        push esi
        test ecx, 0fffff800h
        ; Exact mapped bytes 75 07: jne 0x5887b15a
        __asm _emit 0x75
        __asm _emit 0x07
        xor esi, esi
        mov bl, 0c0h
        inc esi
        ; Exact mapped bytes EB 33: jmp 0x5887b18d
        __asm _emit 0xeb
        __asm _emit 0x33
        test ecx, 0ffff0000h
        ; Exact mapped bytes 75 16: jne 0x5887b178
        __asm _emit 0x75
        __asm _emit 0x16
        cmp ecx, 0d800h
        ; Exact mapped bytes 72 08: jb 0x5887b172
        __asm _emit 0x72
        __asm _emit 0x08
        cmp ecx, 0dfffh
        ; Exact mapped bytes 76 42: jbe 0x5887b1b4
        __asm _emit 0x76
        __asm _emit 0x42
        push 2
        mov bl, 0e0h
        ; Exact mapped bytes EB 14: jmp 0x5887b18c
        __asm _emit 0xeb
        __asm _emit 0x14
        test ecx, 0ffe00000h
        ; Exact mapped bytes 75 34: jne 0x5887b1b4
        __asm _emit 0x75
        __asm _emit 0x34
        cmp ecx, 10ffffh
        ; Exact mapped bytes 77 2C: ja 0x5887b1b4
        __asm _emit 0x77
        __asm _emit 0x2c
        push 3
        mov bl, 0f0h
        pop esi
        push edi
        mov edi, esi
        mov al, cl
        shr ecx, 6
        and al, 3fh
        or al, 80h
        mov byte ptr [edi + edx], al
        sub edi, 1
        ; Exact mapped bytes 75 EF: jne 0x5887b190
        __asm _emit 0x75
        __asm _emit 0xef
        pop edi
        push dword ptr [ebp + 10h]
        lea eax, [esi + 1]
        or bl, cl
        push eax
        mov byte ptr [edx], bl
        ; Exact mapped bytes E8 13 00 00 00: call 0x5887b1c5
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x5887b1bf
        __asm _emit 0xeb
        __asm _emit 0x0b
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 1A 00 00 00: call 0x5887b1d9
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
