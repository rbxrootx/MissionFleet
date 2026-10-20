// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10005470 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_10005470_10005470() {
    __asm {
        mov edx, dword ptr [esp + 8]
        push ebx
        push ebp
        mov ebp, ecx
        xor eax, eax
        mov al, byte ptr [ebp + 238h]
        cmp eax, edx
        ; Exact mapped bytes 7D 02: jge 0x10005486
        __asm _emit 0x7d
        __asm _emit 0x02
        mov edx, eax
        test edx, edx
        ; Exact mapped bytes 0F 8E AF 00 00 00: jle 0x1000553d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [ebp + 0f4h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x1000553d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + eax*4]
        lea ebx, [ebp + ecx*4]
        mov cl, byte ptr [ebp + ecx*4 + 0fdh]
        test cl, cl
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x1000553d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        cmp eax, 1ch
        ; Exact mapped bytes 74 05: je 0x100054c4
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 1dh
        ; Exact mapped bytes 75 05: jne 0x100054c9
        __asm _emit 0x75
        __asm _emit 0x05
        mov ecx, 1
        cmp ecx, 1
        ; Exact mapped bytes 7F 33: jg 0x10005501
        __asm _emit 0x7f
        __asm _emit 0x33
        xor eax, eax
        push esi
        mov al, byte ptr [ebx + 0fch]
        mov esi, dword ptr [ebp + 0ch]
        push edi
        mov edi, 2
        lea esi, [esi + eax*4 + 0ce2h]
        sub edi, ecx
        xor eax, eax
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        xor eax, 0aah
        cmp eax, edx
        ; Exact mapped bytes 7D 02: jge 0x100054f9
        __asm _emit 0x7d
        __asm _emit 0x02
        mov edx, eax
        sub esi, 2
        dec edi
        ; Exact mapped bytes 75 EA: jne 0x100054e9
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        test edx, edx
        ; Exact mapped bytes 7E 42: jle 0x10005547
        __asm _emit 0x7e
        __asm _emit 0x42
        xor ecx, ecx
        mov byte ptr [ebx + 0fdh], dl
        mov cl, byte ptr [ebx + 0fch]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + ecx*4 + 0d60h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 B0 00 00 00: mov ax, word ptr [ecx + 0xb0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, edx
        mov dword ptr [ebx + 100h], eax
        mov al, byte ptr [ebp + 238h]
        sub al, dl
        mov byte ptr [ebp + 238h], al
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
