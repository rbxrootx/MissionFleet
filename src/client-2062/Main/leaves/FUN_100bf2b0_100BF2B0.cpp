// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BF2B0 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_100bf2b0_100BF2B0() {
    __asm {
        push edi
        mov edi, dword ptr [ecx + 4e0h]
        test edi, edi
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x100bf356
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        push ebx
        push esi
        mov esi, dword ptr [edi + 4]
        sub eax, esi
        mov ebx, dword ptr [ecx + 4]
        cdq
        idiv dword ptr [ecx + 578h]
        mov edx, dword ptr [edi + 8]
        mov edi, dword ptr [ecx + 4d8h]
        add edi, ebx
        mov esi, eax
        mov eax, dword ptr [esp + 1ch]
        sub eax, edx
        add edi, esi
        cdq
        idiv dword ptr [ecx + 57ch]
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [ecx + edx*8 + 0d8h], edi
        mov edi, dword ptr [ecx + 4dch]
        add edi, dword ptr [ecx + 8]
        add edi, eax
        mov dword ptr [ecx + edx*8 + 0dch], edi
        mov edi, eax
        imul edi, eax
        mov eax, esi
        imul eax, esi
        add edi, eax
        mov eax, dword ptr [ecx + 0d4h]
        pop esi
        cmp edi, eax
        pop ebx
        ; Exact mapped bytes 7D 1C: jge 0x100bf341
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov al, byte ptr [esp + 0ch]
        pop edi
        mov byte ptr [edx + ecx + 4e8h], al
        mov eax, dword ptr [ecx + 568h]
        inc eax
        mov dword ptr [ecx + 568h], eax
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov byte ptr [edx + ecx + 4e8h], 2
        mov eax, dword ptr [ecx + 568h]
        inc eax
        mov dword ptr [ecx + 568h], eax
        pop edi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
