// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10004280 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_10004280_10004280() {
    __asm {
        sub esp, 8
        ; Exact mapped bytes 66 83 B9 E2 00 00 00 FF: cmp word ptr [ecx + 0xe2], -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        push ebp
        push esi
        mov ebp, 1
        ; Exact mapped bytes 75 03: jne 0x10004297
        __asm _emit 0x75
        __asm _emit 0x03
        or ebp, 0ffffffffh
        mov eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [edx]
        mov esi, dword ptr [eax + 4]
        sub ecx, esi
        mov esi, dword ptr [edx + 4]
        sub esi, dword ptr [eax + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x100042b3
        __asm _emit 0x75
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 74 65: je 0x10004318
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, esi
        push ebx
        cdq
        push edi
        mov edi, eax
        xor edi, edx
        mov eax, ecx
        sub edi, edx
        mov dword ptr [esp + 10h], ebp
        cdq
        xor eax, edx
        mov dword ptr [esp + 14h], ebp
        sub eax, edx
        lea ebx, [edi + eax]
        lea eax, [ecx + ecx*4]
        shl eax, 4
        cdq
        idiv ebx
        mov edi, eax
        lea eax, [esi + esi*4]
        shl eax, 4
        cdq
        idiv ebx
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x100042ee
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ecx, ebp
        neg ecx
        ; Exact mapped bytes EB 04: jmp 0x100042f2
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 10h]
        test esi, esi
        ; Exact mapped bytes 7E 04: jle 0x100042fa
        __asm _emit 0x7e
        __asm _emit 0x04
        neg ebp
        ; Exact mapped bytes EB 04: jmp 0x100042fe
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 14h]
        imul edi, ecx
        imul eax, ebp
        mov ecx, dword ptr [esp + 1ch]
        mov esi, dword ptr [ecx]
        mov edx, dword ptr [ecx + 4]
        add edi, esi
        add eax, edx
        mov dword ptr [ecx], edi
        pop edi
        mov dword ptr [ecx + 4], eax
        pop ebx
        pop esi
        pop ebp
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
