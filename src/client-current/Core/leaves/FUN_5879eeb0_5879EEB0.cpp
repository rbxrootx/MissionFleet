// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879EEB0 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_5879eeb0_5879EEB0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        push edi
        mov ebx, dword ptr [eax + 120h]
        mov esi, 18h
        mov edi, dword ptr [esp + 14h]
        xor eax, eax
        mov ecx, esi
        mov edx, ebx
        shr edx, cl
        sub esi, 8
        movzx edx, dl
        lea ecx, [edx - 41h]
        cmp ecx, 39h
        ; Exact mapped bytes 77 10: ja 0x5879eeec
        __asm _emit 0x77
        __asm _emit 0x10
        cmp edx, 5ah
        ; Exact mapped bytes 76 05: jbe 0x5879eee6
        __asm _emit 0x76
        __asm _emit 0x05
        cmp edx, 61h
        ; Exact mapped bytes 72 06: jb 0x5879eeec
        __asm _emit 0x72
        __asm _emit 0x06
        mov byte ptr [edi + eax], dl
        inc eax
        ; Exact mapped bytes EB 2A: jmp 0x5879ef16
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, edx
        mov byte ptr [edi + eax], 5bh
        shr ecx, 4
        and edx, 0fh
        movzx ecx, byte ptr [ecx + 588b76c0h]
        mov byte ptr [eax + edi + 1], cl
        movzx ecx, byte ptr [edx + 588b76c0h]
        mov byte ptr [eax + edi + 2], cl
        mov byte ptr [eax + edi + 3], 5dh
        add eax, 4
        test esi, esi
        ; Exact mapped bytes 79 AE: jns 0x5879eec8
        __asm _emit 0x79
        __asm _emit 0xae
        mov ecx, dword ptr [esp + 18h]
        lea edx, [eax + edi]
        test ecx, ecx
        ; Exact mapped bytes 75 06: jne 0x5879ef2b
        __asm _emit 0x75
        __asm _emit 0x06
        pop edi
        pop esi
        mov byte ptr [edx], cl
        pop ebx
        ret
        mov byte ptr [edx], 3ah
        lea esi, [edi + 2]
        mov byte ptr [eax + edi + 1], 20h
        lea edx, [ecx + 2]
        add eax, 2
        mov ebx, 0fffffffeh
        add esi, eax
        sub ebx, ecx
        mov cl, byte ptr [edx - 2]
        test cl, cl
        ; Exact mapped bytes 74 67: je 0x5879efb3
        __asm _emit 0x74
        __asm _emit 0x67
        mov byte ptr [esi - 2], cl
        mov cl, byte ptr [edx - 1]
        test cl, cl
        ; Exact mapped bytes 74 5C: je 0x5879efb2
        __asm _emit 0x74
        __asm _emit 0x5c
        mov byte ptr [esi - 1], cl
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 48: je 0x5879efa7
        __asm _emit 0x74
        __asm _emit 0x48
        mov byte ptr [esi], cl
        mov cl, byte ptr [edx + 1]
        test cl, cl
        ; Exact mapped bytes 74 34: je 0x5879ef9c
        __asm _emit 0x74
        __asm _emit 0x34
        mov byte ptr [esi + 1], cl
        mov cl, byte ptr [edx + 2]
        test cl, cl
        ; Exact mapped bytes 74 1F: je 0x5879ef91
        __asm _emit 0x74
        __asm _emit 0x1f
        add edx, 5
        mov byte ptr [esi + 2], cl
        add eax, 5
        add esi, 5
        lea ecx, [ebx + edx]
        cmp ecx, 0c3h
        ; Exact mapped bytes 7C BC: jl 0x5879ef45
        __asm _emit 0x7c
        __asm _emit 0xbc
        mov byte ptr [eax + edi], 0
        pop edi
        pop esi
        pop ebx
        ret
        add eax, 4
        mov byte ptr [eax + edi], 0
        pop edi
        pop esi
        pop ebx
        ret
        add eax, 3
        mov byte ptr [eax + edi], 0
        pop edi
        pop esi
        pop ebx
        ret
        add eax, 2
        mov byte ptr [eax + edi], 0
        pop edi
        pop esi
        pop ebx
        ret
        inc eax
        mov byte ptr [eax + edi], 0
        pop edi
        pop esi
        pop ebx
        ret
    }
}
