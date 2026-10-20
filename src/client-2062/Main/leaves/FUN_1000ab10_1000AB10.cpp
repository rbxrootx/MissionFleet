// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000AB10 .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_1000ab10_1000AB10() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 334h]
        mov eax, 10624dd3h
        mov ebx, dword ptr [ecx + 330h]
        imul esi
        sar edx, 6
        mov eax, edx
        push edi
        shr eax, 1fh
        add edx, eax
        mov edi, edx
        cmp edi, ebx
        ; Exact mapped bytes 7E 08: jle 0x1000ab3f
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [ecx + 318h], ebx
        ; Exact mapped bytes EB 0F: jmp 0x1000ab4e
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp edi, 14h
        ; Exact mapped bytes 7D 0A: jge 0x1000ab4e
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [ecx + 318h], 14h
        mov eax, dword ptr [esp + 14h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x1000abde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 334h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edi, edx
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x1000ac55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx + edx*4]
        mov edi, dword ptr [ecx + 33ch]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        mov edx, eax
        mov dword ptr [ecx + 318h], eax
        sub edx, esi
        cmp edi, ebp
        ; Exact mapped bytes 7D 06: jge 0x1000aba1
        __asm _emit 0x7d
        __asm _emit 0x06
        cmp eax, esi
        ; Exact mapped bytes 7C 0C: jl 0x1000abab
        __asm _emit 0x7c
        __asm _emit 0x0c
        ; Exact mapped bytes EB 04: jmp 0x1000aba5
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp eax, esi
        ; Exact mapped bytes 7F 06: jg 0x1000abab
        __asm _emit 0x7f
        __asm _emit 0x06
        mov dword ptr [ecx + 33ch], ebp
        lea eax, [edx + edx*4]
        mov esi, dword ptr [ecx + 33ch]
        shl eax, 1
        cdq
        idiv ebx
        add eax, esi
        mov dword ptr [ecx + 33ch], eax
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 190h
        ; Exact mapped bytes 0F 8E 84 00 00 00: jle 0x1000ac55
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 33ch], esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 310h]
        cmp eax, ebp
        ; Exact mapped bytes 75 1D: jne 0x1000ac05
        __asm _emit 0x75
        __asm _emit 0x1d
        pop edi
        mov dword ptr [ecx + 4bch], ebp
        pop esi
        mov dword ptr [ecx + 318h], ebx
        pop ebp
        mov dword ptr [ecx + 310h], 1
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 4B: jne 0x1000ac55
        __asm _emit 0x75
        __asm _emit 0x4b
        mov eax, dword ptr [ecx + 318h]
        mov edi, dword ptr [ecx + 33ch]
        sub eax, esi
        lea eax, [eax + eax*4]
        shl eax, 1
        cdq
        idiv ebx
        add edi, eax
        mov eax, edi
        mov dword ptr [ecx + 33ch], edi
        cmp eax, 190h
        ; Exact mapped bytes 7E 0A: jle 0x1000ac3b
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov dword ptr [ecx + 33ch], 190h
        cmp dword ptr [ecx + 318h], esi
        ; Exact mapped bytes 7F 12: jg 0x1000ac55
        __asm _emit 0x7f
        __asm _emit 0x12
        mov dword ptr [ecx + 33ch], ebp
        mov dword ptr [ecx + 4b8h], ebp
        mov dword ptr [ecx + 310h], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
