// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101070A0 .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_101070a0_101070A0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 10h
        cdq
        idiv dword ptr [ecx + 0f4h]
        push esi
        push edi
        mov esi, eax
        mov eax, dword ptr [esp + 20h]
        cdq
        idiv dword ptr [ecx + 0f8h]
        test esi, esi
        mov edi, eax
        ; Exact mapped bytes 0F 8C 1B 01 00 00: jl 0x101071e2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 8C 13 01 00 00: jl 0x101071e2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0fch]
        cmp esi, eax
        ; Exact mapped bytes 0F 8D 05 01 00 00: jge 0x101071e2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ecx + 100h]
        ; Exact mapped bytes 0F 8D F9 00 00 00: jge 0x101071e2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, edi
        mov edx, dword ptr [ecx + 108h]
        add eax, esi
        push ebx
        push ebp
        lea eax, [edx + eax*4]
        cmp dword ptr [eax], 0
        mov edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 75 04: jne 0x10107106
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 49: jmp 0x1010714f
        __asm _emit 0xeb
        __asm _emit 0x49
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ecx + 0fch]
        imul eax, edi
        mov ebx, dword ptr [ecx + 108h]
        add eax, esi
        mov eax, dword ptr [ebx + eax*4]
        mov dword ptr [edx + 5ch], eax
        mov eax, dword ptr [ecx + 0fch]
        imul eax, edi
        mov ebx, dword ptr [ecx + 108h]
        add eax, esi
        mov eax, dword ptr [ebx + eax*4]
        mov dword ptr [eax + 58h], edx
        mov eax, dword ptr [ecx + 0fch]
        imul eax, edi
        mov ebx, dword ptr [ecx + 108h]
        add eax, esi
        mov dword ptr [ebx + eax*4], edx
        mov eax, dword ptr [edx + 60h]
        lea ebp, [eax + esi]
        xor eax, eax
        test ebp, ebp
        setl al
        dec eax
        and eax, ebp
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [edx + 64h]
        lea ebp, [eax + edi]
        xor eax, eax
        test ebp, ebp
        setl al
        dec eax
        and ebp, eax
        mov eax, dword ptr [edx + 68h]
        add eax, esi
        mov esi, dword ptr [ecx + 0fch]
        cmp eax, esi
        mov ebx, eax
        ; Exact mapped bytes 7C 02: jl 0x10107186
        __asm _emit 0x7c
        __asm _emit 0x02
        mov ebx, esi
        mov eax, dword ptr [edx + 6ch]
        mov esi, dword ptr [ecx + 100h]
        add eax, edi
        cmp eax, esi
        ; Exact mapped bytes 7C 02: jl 0x10107197
        __asm _emit 0x7c
        __asm _emit 0x02
        mov eax, esi
        cmp ebp, eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 7D 31: jge 0x101071d0
        __asm _emit 0x7d
        __asm _emit 0x31
        mov esi, dword ptr [esp + 10h]
        cmp esi, ebx
        ; Exact mapped bytes 7D 24: jge 0x101071cb
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0fch]
        mov edi, dword ptr [ecx + 104h]
        imul eax, ebp
        add eax, esi
        lea eax, [edi + eax*4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 02: jne 0x101071c2
        __asm _emit 0x75
        __asm _emit 0x02
        mov dword ptr [eax], edx
        inc esi
        cmp esi, ebx
        ; Exact mapped bytes 7C E0: jl 0x101071a7
        __asm _emit 0x7c
        __asm _emit 0xe0
        mov eax, dword ptr [esp + 1ch]
        inc ebp
        cmp ebp, eax
        ; Exact mapped bytes 7C CF: jl 0x1010719f
        __asm _emit 0x7c
        __asm _emit 0xcf
        pop ebp
        pop ebx
        pop edi
        mov dword ptr [edx + 54h], ecx
        mov eax, 1
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
