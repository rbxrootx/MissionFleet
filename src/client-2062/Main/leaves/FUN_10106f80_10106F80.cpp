// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10106F80 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_10106f80_10106F80() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        push edi
        mov eax, dword ptr [esi + 0b0h]
        mov edi, dword ptr [esp + 10h]
        imul eax, dword ptr [esi + 0a8h]
        cdq
        idiv ecx
        mov dword ptr [esi + 0f8h], edi
        mov dword ptr [esi + 0f4h], ecx
        mov dword ptr [esi + 0fch], eax
        mov eax, dword ptr [esi + 0b4h]
        imul eax, dword ptr [esi + 0ach]
        cdq
        idiv edi
        xor edi, edi
        mov dword ptr [esi + 100h], eax
        mov eax, dword ptr [esi + 104h]
        cmp eax, edi
        ; Exact mapped bytes 74 0F: je 0x10106fdf
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 AE 57 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 104h], edi
        mov eax, dword ptr [esi + 108h]
        cmp eax, edi
        ; Exact mapped bytes 74 0F: je 0x10106ff8
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 95 57 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 108h], edi
        mov eax, dword ptr [esi + 100h]
        imul eax, dword ptr [esi + 0fch]
        cmp eax, edi
        ; Exact mapped bytes 74 7F: je 0x10107088
        __asm _emit 0x74
        __asm _emit 0x7f
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 8E 57 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        mov dword ptr [esi + 104h], eax
        imul ecx, dword ptr [esi + 0fch]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 72 57 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        mov edi, dword ptr [esi + 104h]
        imul ecx, dword ptr [esi + 0fch]
        shl ecx, 2
        mov edx, ecx
        mov dword ptr [esi + 108h], eax
        xor eax, eax
        add esp, 8
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov ecx, dword ptr [esi + 100h]
        mov edi, dword ptr [esi + 108h]
        imul ecx, dword ptr [esi + 0fch]
        shl ecx, 2
        mov edx, ecx
        xor eax, eax
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 104h], edi
        mov dword ptr [esi + 108h], edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
