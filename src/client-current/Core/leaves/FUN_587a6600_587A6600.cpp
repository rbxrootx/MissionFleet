// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6600 .. +0x171 bytes.
extern "C" __declspec(naked) void FUN_587a6600_587A6600() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        mov ebp, dword ptr [esp + 10h]
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        mov esi, dword ptr [edi + 4]
        mov al, byte ptr [edi + 0ah]
        add esi, ebp
        cmp al, 2
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x587a66ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi + 9]
        cmp al, 8
        ; Exact mapped bytes 75 29: jne 0x587a6650
        __asm _emit 0x75
        __asm _emit 0x29
        test ebx, ebx
        lea ecx, [ebp + 1]
        mov eax, ebp
        lea edx, [ebp + 2]
        cmove eax, ecx
        neg ebx
        sbb ebx, ebx
        add edx, ebx
        cmp edx, esi
        ; Exact mapped bytes 73 0E: jae 0x587a664c
        __asm _emit 0x73
        __asm _emit 0x0e
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        mov cl, byte ptr [edx]
        add edx, 2
        mov byte ptr [eax], cl
        inc eax
        cmp edx, esi
        ; Exact mapped bytes 72 F4: jb 0x587a6640
        __asm _emit 0x72
        __asm _emit 0xf4
        mov cl, 8
        ; Exact mapped bytes EB 3E: jmp 0x587a668e
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp al, 10h
        ; Exact mapped bytes 0F 85 14 01 00 00: jne 0x587a676c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        lea ecx, [ebp + 2]
        test ebx, ebx
        mov eax, ebp
        sete dl
        lea edx, [edx*2 + 2]
        add edx, ebp
        test ebx, ebx
        cmove eax, ecx
        cmp edx, esi
        ; Exact mapped bytes 73 16: jae 0x587a668c
        __asm _emit 0x73
        __asm _emit 0x16
        movzx ecx, byte ptr [edx]
        mov byte ptr [eax], cl
        movzx ecx, byte ptr [edx + 1]
        add edx, 4
        mov byte ptr [eax + 1], cl
        add eax, 2
        cmp edx, esi
        ; Exact mapped bytes 72 EA: jb 0x587a6676
        __asm _emit 0x72
        __asm _emit 0xea
        mov cl, 10h
        mov byte ptr [edi + 0bh], cl
        cmp byte ptr [edi + 8], 4
        mov byte ptr [edi + 0ah], 1
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x587a6767
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ebp
        mov byte ptr [edi + 8], 0
        mov dword ptr [edi + 4], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        cmp al, 4
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x587a676c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi + 9]
        cmp al, 8
        ; Exact mapped bytes 75 45: jne 0x587a6701
        __asm _emit 0x75
        __asm _emit 0x45
        test ebx, ebx
        lea ecx, [ebp + 3]
        mov eax, ebp
        mov edx, 1
        cmove eax, ecx
        mov ecx, 4
        cmove edx, ecx
        add edx, ebp
        cmp edx, esi
        ; Exact mapped bytes 73 24: jae 0x587a66fd
        __asm _emit 0x73
        __asm _emit 0x24
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [edx]
        mov byte ptr [eax], cl
        movzx ecx, byte ptr [edx + 1]
        mov byte ptr [eax + 1], cl
        movzx ecx, byte ptr [edx + 2]
        add edx, 4
        mov byte ptr [eax + 2], cl
        add eax, 3
        cmp edx, esi
        ; Exact mapped bytes 72 E3: jb 0x587a66e0
        __asm _emit 0x72
        __asm _emit 0xe3
        mov cl, 18h
        ; Exact mapped bytes EB 55: jmp 0x587a6756
        __asm _emit 0xeb
        __asm _emit 0x55
        cmp al, 10h
        ; Exact mapped bytes 75 67: jne 0x587a676c
        __asm _emit 0x75
        __asm _emit 0x67
        test ebx, ebx
        lea ecx, [ebp + 6]
        mov eax, ebp
        mov edx, 2
        cmove eax, ecx
        mov ecx, 8
        cmove edx, ecx
        add edx, ebp
        cmp edx, esi
        ; Exact mapped bytes 73 32: jae 0x587a6754
        __asm _emit 0x73
        __asm _emit 0x32
        movzx ecx, byte ptr [edx]
        mov byte ptr [eax], cl
        movzx ecx, byte ptr [edx + 1]
        mov byte ptr [eax + 1], cl
        movzx ecx, byte ptr [edx + 2]
        mov byte ptr [eax + 2], cl
        movzx ecx, byte ptr [edx + 3]
        mov byte ptr [eax + 3], cl
        movzx ecx, byte ptr [edx + 4]
        mov byte ptr [eax + 4], cl
        movzx ecx, byte ptr [edx + 5]
        add edx, 8
        mov byte ptr [eax + 5], cl
        add eax, 6
        cmp edx, esi
        ; Exact mapped bytes 72 CE: jb 0x587a6722
        __asm _emit 0x72
        __asm _emit 0xce
        mov cl, 30h
        mov byte ptr [edi + 0bh], cl
        cmp byte ptr [edi + 8], 6
        mov byte ptr [edi + 0ah], 3
        ; Exact mapped bytes 75 04: jne 0x587a6767
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [edi + 8], 2
        sub eax, ebp
        mov dword ptr [edi + 4], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
