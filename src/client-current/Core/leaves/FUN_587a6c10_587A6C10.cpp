// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6C10 .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_587a6c10_587A6C10() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 8]
        cmp byte ptr [ebp + 9], 8
        ; Exact mapped bytes 0F 85 33 01 00 00: jne 0x587a6d52
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp + 0ah], 1
        ; Exact mapped bytes 0F 85 29 01 00 00: jne 0x587a6d52
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        push ebx
        push esi
        push edi
        sub eax, 1
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x587a6cd3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 74 55: je 0x587a6c93
        __asm _emit 0x74
        __asm _emit 0x55
        sub eax, 2
        ; Exact mapped bytes 0F 85 D2 00 00 00: jne 0x587a6d19
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp]
        lea ecx, [eax + 4]
        mov esi, dword ptr [esp + 18h]
        xor edx, edx
        mov edi, esi
        test ebx, ebx
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x587a6d19
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        movzx eax, byte ptr [esi]
        and eax, 0fh
        shl eax, cl
        or edx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 0C: jne 0x587a6c7a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov byte ptr [edi], dl
        mov ecx, 4
        inc edi
        xor edx, edx
        ; Exact mapped bytes EB 03: jmp 0x587a6c7d
        __asm _emit 0xeb
        __asm _emit 0x03
        sub ecx, 4
        inc esi
        sub ebx, 1
        ; Exact mapped bytes 75 DD: jne 0x587a6c60
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp ecx, 4
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x587a6d19
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [edi], dl
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x587a6d19
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp]
        xor edx, edx
        mov esi, dword ptr [esp + 18h]
        mov edi, esi
        mov ecx, 6
        test ebx, ebx
        ; Exact mapped bytes 74 72: je 0x587a6d19
        __asm _emit 0x74
        __asm _emit 0x72
        movzx eax, byte ptr [esi]
        and eax, 3
        shl eax, cl
        or edx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 0C: jne 0x587a6cc1
        __asm _emit 0x75
        __asm _emit 0x0c
        mov byte ptr [edi], dl
        mov ecx, 6
        inc edi
        xor edx, edx
        ; Exact mapped bytes EB 03: jmp 0x587a6cc4
        __asm _emit 0xeb
        __asm _emit 0x03
        sub ecx, 2
        inc esi
        sub ebx, 1
        ; Exact mapped bytes 75 DD: jne 0x587a6ca7
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp ecx, 6
        ; Exact mapped bytes 74 4A: je 0x587a6d19
        __asm _emit 0x74
        __asm _emit 0x4a
        mov byte ptr [edi], dl
        ; Exact mapped bytes EB 46: jmp 0x587a6d19
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edi, dword ptr [ebp]
        xor edx, edx
        mov ebx, dword ptr [esp + 18h]
        mov esi, ebx
        mov ecx, 80h
        test edi, edi
        ; Exact mapped bytes 74 32: je 0x587a6d19
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, edx
        lea ebx, [ebx + 1]
        or eax, ecx
        cmp byte ptr [ebx - 1], 0
        cmove eax, edx
        mov edx, eax
        cmp ecx, 1
        ; Exact mapped bytes 7E 04: jle 0x587a6d00
        __asm _emit 0x7e
        __asm _emit 0x04
        sar ecx, 1
        ; Exact mapped bytes EB 0A: jmp 0x587a6d0a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov byte ptr [esi], dl
        mov ecx, 80h
        inc esi
        xor edx, edx
        sub edi, 1
        ; Exact mapped bytes 75 D8: jne 0x587a6ce7
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp ecx, 80h
        ; Exact mapped bytes 74 02: je 0x587a6d19
        __asm _emit 0x74
        __asm _emit 0x02
        mov byte ptr [esi], dl
        mov eax, dword ptr [esp + 1ch]
        movzx ecx, byte ptr [ebp + 0ah]
        mov byte ptr [ebp + 9], al
        movzx eax, al
        imul ecx, eax
        mov eax, dword ptr [ebp]
        pop edi
        pop esi
        pop ebx
        mov byte ptr [ebp + 0bh], cl
        movzx edx, cl
        cmp cl, 8
        ; Exact mapped bytes 72 0B: jb 0x587a6d46
        __asm _emit 0x72
        __asm _emit 0x0b
        shr edx, 3
        imul edx, eax
        mov dword ptr [ebp + 4], edx
        pop ebp
        ret
        imul edx, eax
        add edx, 7
        shr edx, 3
        mov dword ptr [ebp + 4], edx
        pop ebp
        ret
    }
}
