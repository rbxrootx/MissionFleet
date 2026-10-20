// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043400 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_10043400_10043400() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        add eax, 0fffffc7ch
        mov esi, 0e10h
        cdq
        idiv esi
        push edi
        test edx, edx
        mov dword ptr [ecx + 0a8h], edx
        ; Exact mapped bytes 7D 08: jge 0x10043425
        __asm _emit 0x7d
        __asm _emit 0x08
        add edx, esi
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ecx + 0a8h]
        mov esi, 0e10h
        add eax, 32h
        mov edi, dword ptr [esp + 10h]
        cdq
        idiv esi
        mov dword ptr [ecx + 0ach], edi
        test edx, edx
        ; Exact mapped bytes 7D 02: jge 0x10043446
        __asm _emit 0x7d
        __asm _emit 0x02
        add edx, esi
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        test edi, edi
        mov dword ptr [ecx + 0a0h], edx
        ; Exact mapped bytes 74 3A: je 0x1004349b
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ecx + 0b8h]
        cdq
        and edx, 7
        add eax, edx
        mov esi, eax
        sar esi, 3
        ; Exact mapped bytes 74 31: je 0x100434a5
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        add eax, edi
        cdq
        idiv esi
        cmp eax, 8
        mov dword ptr [ecx + 0a4h], eax
        ; Exact mapped bytes 75 05: jne 0x10043490
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 7
        pop edi
        mov dword ptr [ecx + 0a4h], eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ecx + 0a4h], 0
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
