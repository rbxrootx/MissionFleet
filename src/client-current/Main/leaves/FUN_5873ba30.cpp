// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873BA30 .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_5873ba30() {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx + 33ch]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ecx + 340h]
        mov eax, 10624dd3h
        imul edi
        sar edx, 6
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        cmp esi, ebx
        ; Exact mapped bytes 7E 08: jle 0x5873ba5d
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [ecx + 324h], ebx
        ; Exact mapped bytes EB 0F: jmp 0x5873ba6c
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp esi, 14h
        ; Exact mapped bytes 7D 0A: jge 0x5873ba6c
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [ecx + 324h], 14h
        mov eax, dword ptr [esp + 14h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 7A: je 0x5873baf0
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [eax + 340h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp esi, eax
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x5873bb90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, eax, 3e8h
        mov edx, eax
        sub edx, edi
        cmp dword ptr [ecx + 348h], ebp
        mov dword ptr [ecx + 324h], eax
        ; Exact mapped bytes 7D 06: jge 0x5873bab3
        __asm _emit 0x7d
        __asm _emit 0x06
        cmp eax, edi
        ; Exact mapped bytes 7C 0C: jl 0x5873babd
        __asm _emit 0x7c
        __asm _emit 0x0c
        ; Exact mapped bytes EB 04: jmp 0x5873bab7
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp eax, edi
        ; Exact mapped bytes 7F 06: jg 0x5873babd
        __asm _emit 0x7f
        __asm _emit 0x06
        mov dword ptr [ecx + 348h], ebp
        lea eax, [edx + edx*4]
        add eax, eax
        cdq
        idiv ebx
        mov esi, dword ptr [ecx + 348h]
        add eax, esi
        mov dword ptr [ecx + 348h], eax
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 190h
        ; Exact mapped bytes 0F 8E AD 00 00 00: jle 0x5873bb90
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov dword ptr [ecx + 348h], esi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 31ch]
        cmp eax, ebp
        ; Exact mapped bytes 75 1D: jne 0x5873bb17
        __asm _emit 0x75
        __asm _emit 0x1d
        pop edi
        pop esi
        mov dword ptr [ecx + 4cch], ebp
        pop ebp
        mov dword ptr [ecx + 324h], ebx
        mov dword ptr [ecx + 31ch], 1
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 74: jne 0x5873bb90
        __asm _emit 0x75
        __asm _emit 0x74
        mov eax, dword ptr [ecx + 324h]
        sub eax, edi
        lea eax, [eax + eax*4]
        add eax, eax
        cdq
        idiv ebx
        add dword ptr [ecx + 348h], eax
        mov eax, dword ptr [ecx + 348h]
        cmp eax, 190h
        ; Exact mapped bytes 7E 0A: jle 0x5873bb49
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov dword ptr [ecx + 348h], 190h
        cmp dword ptr [ecx + 324h], edi
        ; Exact mapped bytes 7F 3F: jg 0x5873bb90
        __asm _emit 0x7f
        __asm _emit 0x3f
        mov eax, dword ptr [ecx + 4e0h]
        mov dword ptr [ecx + 348h], ebp
        mov dword ptr [ecx + 31ch], ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 23: je 0x5873bb8a
        __asm _emit 0x74
        __asm _emit 0x23
        pop edi
        pop esi
        mov dword ptr [ecx + 4d8h], eax
        mov eax, dword ptr [ecx + 4e4h]
        pop ebp
        mov dword ptr [ecx + 4c8h], 64h
        mov dword ptr [ecx + 4dch], eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ecx + 4c8h], ebp
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
