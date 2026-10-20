// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587562B0 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_587562b0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [ecx + 64h]
        sub ebx, dword ptr [ecx + 5ch]
        push ebp
        push esi
        mov esi, dword ptr [ecx + 68h]
        sub esi, dword ptr [ecx + 60h]
        push edi
        mov dword ptr [ecx + 74h], ebx
        mov dword ptr [ecx + 78h], esi
        cmp eax, -1
        ; Exact mapped bytes 75 31: jne 0x58756300
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, 66666667h
        imul ebx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [ecx + 7ch], eax
        mov eax, 66666667h
        imul esi
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        ; Exact mapped bytes EB 03: jmp 0x58756303
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ecx + 7ch], eax
        mov edi, dword ptr [ecx + 7ch]
        mov dword ptr [ecx + 80h], eax
        test edi, edi
        ; Exact mapped bytes 75 05: jne 0x58756315
        __asm _emit 0x75
        __asm _emit 0x05
        mov edi, 1
        mov eax, ebx
        imul eax, eax, 3e8h
        cdq
        idiv edi
        mov ebp, dword ptr [ecx + 80h]
        mov edi, 1
        mov dword ptr [ecx + 8ch], eax
        test ebp, ebp
        ; Exact mapped bytes 74 02: je 0x58756337
        __asm _emit 0x74
        __asm _emit 0x02
        mov edi, ebp
        mov eax, esi
        imul eax, eax, 3e8h
        cdq
        idiv edi
        mov edi, 1
        mov dword ptr [ecx + 90h], eax
        test ebx, ebx
        ; Exact mapped bytes 74 02: je 0x58756353
        __asm _emit 0x74
        __asm _emit 0x02
        mov edi, ebx
        mov eax, esi
        imul eax, eax, 64h
        cdq
        idiv edi
        cdq
        mov edi, eax
        xor edi, edx
        sub edi, edx
        mov dword ptr [ecx + 9ch], edi
        test esi, esi
        ; Exact mapped bytes 75 05: jne 0x58756371
        __asm _emit 0x75
        __asm _emit 0x05
        mov esi, 1
        mov eax, ebx
        imul eax, eax, 64h
        cdq
        idiv esi
        cdq
        xor eax, edx
        sub eax, edx
        cmp edi, 64h
        mov dword ptr [ecx + 0a0h], eax
        ; Exact mapped bytes 7F 10: jg 0x58756399
        __asm _emit 0x7f
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 7ch]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 0a8h], eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        mov dword ptr [ecx + 0a8h], ebp
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
