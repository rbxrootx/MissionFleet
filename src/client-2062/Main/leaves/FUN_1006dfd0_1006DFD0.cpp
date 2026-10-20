// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006DFD0 .. +0x205 bytes.
extern "C" __declspec(naked) void FUN_1006dfd0_1006DFD0() {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov esi, dword ptr [ebx + 104e0h]
        mov eax, 0add40h
        cdq
        mov ebp, dword ptr [esi + 110h]
        push edi
        idiv ebp
        mov dword ptr [esp + 14h], ebx
        mov ecx, eax
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esp + 10h], eax
        mov edi, dword ptr [eax + 4]
        cmp edi, ecx
        ; Exact mapped bytes 0F 8E BE 00 00 00: jle 0x1006e0c8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0b0h]
        imul edx, dword ptr [esi + 0a8h]
        sub edx, ecx
        cmp edi, edx
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x1006e0c4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8e940h
        cdq
        idiv ebp
        mov edx, dword ptr [esp + 10h]
        cmp dword ptr [edx + 8], eax
        ; Exact mapped bytes 0F 8E 8E 00 00 00: jle 0x1006e0c4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0b4h]
        imul edx, dword ptr [esi + 0ach]
        sub edx, eax
        mov eax, dword ptr [esp + 10h]
        cmp dword ptr [eax + 8], edx
        ; Exact mapped bytes 7D 76: jge 0x1006e0c4
        __asm _emit 0x7d
        __asm _emit 0x76
        mov dword ptr [ebx + 390h], 40000000h
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 1ch]
        pop edi
        sub eax, ecx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv dword ptr [esi + 110h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ecx + 4]
        sar eax, 1
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebx + 104e8h], eax
        mov eax, dword ptr [esi + 18h]
        mov ebp, dword ptr [esi + 20h]
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        sub eax, ebp
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv dword ptr [esi + 110h]
        pop esi
        pop ebp
        cdq
        sub eax, edx
        mov edx, dword ptr [ecx + 4]
        sar eax, 1
        add eax, dword ptr [edx + 8]
        mov dword ptr [ebx + 104ech], eax
        pop ebx
        add esp, 8
        ret
        cmp edi, ecx
        ; Exact mapped bytes 7F 04: jg 0x1006e0cc
        __asm _emit 0x7f
        __asm _emit 0x04
        xor ebx, ebx
        ; Exact mapped bytes EB 4C: jmp 0x1006e118
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov eax, dword ptr [esi + 0b0h]
        imul eax, dword ptr [esi + 0a8h]
        sub eax, ecx
        cmp edi, eax
        ; Exact mapped bytes 7C 19: jl 0x1006e0f8
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, 0fa000h
        mov ebx, dword ptr [esi + 0b0h]
        cdq
        imul ebx, dword ptr [esi + 0a8h]
        idiv ebp
        sub ebx, eax
        ; Exact mapped bytes EB 20: jmp 0x1006e118
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [esi + 14h]
        mov edx, dword ptr [esi + 1ch]
        sub eax, edx
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ebp
        cdq
        sub eax, edx
        mov ebx, eax
        sar ebx, 1
        add ebx, edi
        mov eax, 8e940h
        mov ecx, dword ptr [esp + 10h]
        cdq
        idiv ebp
        mov ecx, dword ptr [ecx + 8]
        cmp ecx, eax
        ; Exact mapped bytes 7F 04: jg 0x1006e12f
        __asm _emit 0x7f
        __asm _emit 0x04
        xor edi, edi
        ; Exact mapped bytes EB 4C: jmp 0x1006e17b
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov edx, dword ptr [esi + 0b4h]
        imul edx, dword ptr [esi + 0ach]
        sub edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 19: jl 0x1006e15b
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, 0bb800h
        mov edi, dword ptr [esi + 0b4h]
        cdq
        imul edi, dword ptr [esi + 0ach]
        idiv ebp
        sub edi, eax
        ; Exact mapped bytes EB 20: jmp 0x1006e17b
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [esi + 18h]
        mov edi, dword ptr [esi + 20h]
        sub eax, edi
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ebp
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        add edi, ecx
        test ebx, ebx
        ; Exact mapped bytes 7C 44: jl 0x1006e1c3
        __asm _emit 0x7c
        __asm _emit 0x44
        mov eax, 0fa000h
        mov ecx, dword ptr [esi + 0b0h]
        cdq
        imul ecx, dword ptr [esi + 0a8h]
        idiv ebp
        sub ecx, eax
        cmp ebx, ecx
        ; Exact mapped bytes 7F 29: jg 0x1006e1c3
        __asm _emit 0x7f
        __asm _emit 0x29
        test edi, edi
        ; Exact mapped bytes 7C 25: jl 0x1006e1c3
        __asm _emit 0x7c
        __asm _emit 0x25
        mov eax, 0bb800h
        mov ecx, dword ptr [esi + 0b4h]
        cdq
        imul ecx, dword ptr [esi + 0ach]
        idiv ebp
        sub ecx, eax
        cmp edi, ecx
        ; Exact mapped bytes 7F 0A: jg 0x1006e1c3
        __asm _emit 0x7f
        __asm _emit 0x0a
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edx + 104e8h], ebx
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [eax + 104ech], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
