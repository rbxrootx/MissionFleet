// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10005100 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_10005100_10005100() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esi]
        cmp eax, ecx
        ; Exact mapped bytes 75 16: jne 0x10005128
        __asm _emit 0x75
        __asm _emit 0x16
        mov edi, dword ptr [edx + 4]
        push ebx
        mov ebx, dword ptr [esi + 4]
        cmp edi, ebx
        pop ebx
        ; Exact mapped bytes 75 0A: jne 0x10005128
        __asm _emit 0x75
        __asm _emit 0x0a
        pop edi
        mov eax, 2710h
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4]
        sub eax, ecx
        mov ecx, dword ptr [edx + 4]
        sub ecx, edi
        test eax, eax
        ; Exact mapped bytes 7E 3E: jle 0x10005174
        __asm _emit 0x7e
        __asm _emit 0x3e
        test ecx, ecx
        ; Exact mapped bytes 7E 0F: jle 0x10005149
        __asm _emit 0x7e
        __asm _emit 0x0f
        push eax
        push ecx
        ; Exact mapped bytes E8 8F 86 03 00: call 0x1003d7d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x10005155
        __asm _emit 0x75
        __asm _emit 0x0a
        pop edi
        mov eax, 384h
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 6D 86 03 00: call 0x1003d7d0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov ecx, 708h
        sub ecx, eax
        pop edi
        mov eax, ecx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 7D 4D: jge 0x100051c3
        __asm _emit 0x7d
        __asm _emit 0x4d
        test ecx, ecx
        ; Exact mapped bytes 7D 20: jge 0x1000519a
        __asm _emit 0x7d
        __asm _emit 0x20
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        mov eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 43 86 03 00: call 0x1003d7d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        add eax, 708h
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x100051a6
        __asm _emit 0x75
        __asm _emit 0x0a
        pop edi
        mov eax, 0a8ch
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        push ecx
        ; Exact mapped bytes E8 1E 86 03 00: call 0x1003d7d0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov edx, 0e10h
        sub edx, eax
        pop edi
        mov eax, edx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        pop edi
        test ecx, ecx
        setge al
        dec eax
        pop esi
        and eax, 708h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
