// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10074200 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_10074200_10074200() {
    __asm {
        mov eax, dword ptr [ecx + 68h]
        push esi
        cmp eax, 40000000h
        push edi
        ; Exact mapped bytes 0F 85 0B 01 00 00: jne 0x1007431b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0fch]
        mov eax, dword ptr [ecx + 0b4h]
        mov edi, dword ptr [ecx + 11ch]
        push ebx
        lea ebx, [eax + edx]
        push ebp
        mov esi, dword ptr [edi + 50h]
        cmp ebx, esi
        ; Exact mapped bytes 75 19: jne 0x10074247
        __asm _emit 0x75
        __asm _emit 0x19
        mov ebx, dword ptr [ecx + 100h]
        mov ebp, dword ptr [ecx + 0b8h]
        add ebx, ebp
        mov ebp, dword ptr [edi + 54h]
        cmp ebx, ebp
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x100742e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edi + 54h]
        mov ebx, dword ptr [ecx + 0b8h]
        sub eax, esi
        mov esi, dword ptr [ecx + 100h]
        sub esi, ebp
        add eax, edx
        add esi, ebx
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x1007428d
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x1007428d
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 17: jle 0x10074284
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, 4
        ; Exact mapped bytes 7D 12: jge 0x10074284
        __asm _emit 0x7d
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x1007427b
        __asm _emit 0x7d
        __asm _emit 0x05
        or ebx, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x10074298
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor ebx, ebx
        test eax, eax
        setg bl
        ; Exact mapped bytes EB 14: jmp 0x10074298
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov ebx, eax
        sar ebx, 1
        ; Exact mapped bytes EB 0B: jmp 0x10074298
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov ebx, eax
        sar ebx, 2
        cmp esi, -8
        ; Exact mapped bytes 7E 2A: jle 0x100742c7
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp esi, 8
        ; Exact mapped bytes 7D 25: jge 0x100742c7
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp esi, -4
        ; Exact mapped bytes 7E 17: jle 0x100742be
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp esi, 4
        ; Exact mapped bytes 7D 12: jge 0x100742be
        __asm _emit 0x7d
        __asm _emit 0x12
        test esi, esi
        ; Exact mapped bytes 7D 05: jge 0x100742b5
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x100742d2
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test esi, esi
        setg al
        ; Exact mapped bytes EB 14: jmp 0x100742d2
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x100742d2
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, esi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov esi, dword ptr [edi + 50h]
        mov edx, dword ptr [edi + 54h]
        add esi, ebx
        add edx, eax
        mov dword ptr [edi + 50h], esi
        mov dword ptr [edi + 54h], edx
        mov eax, dword ptr [ecx + 11ch]
        mov edx, dword ptr [ecx + 0b4h]
        mov edi, dword ptr [ecx + 0fch]
        pop ebp
        mov esi, dword ptr [eax + 50h]
        add edx, edi
        cmp edx, esi
        pop ebx
        ; Exact mapped bytes 75 1C: jne 0x1007431b
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ecx + 100h]
        mov edi, dword ptr [ecx + 0b8h]
        mov esi, dword ptr [eax + 54h]
        add edx, edi
        cmp edx, esi
        ; Exact mapped bytes 75 07: jne 0x1007431b
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ecx + 68h], 0
        pop edi
        pop esi
        ret
    }
}
