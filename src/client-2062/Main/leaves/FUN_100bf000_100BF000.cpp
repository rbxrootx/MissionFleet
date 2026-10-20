// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BF000 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_100bf000_100BF000() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 14h]
        xor ebx, ebx
        push esi
        cmp ebp, ebx
        push edi
        mov esi, ecx
        ; Exact mapped bytes 75 05: jne 0x100bf015
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebp, 0c8h
        mov edi, dword ptr [esp + 20h]
        cmp edi, ebx
        ; Exact mapped bytes 75 05: jne 0x100bf022
        __asm _emit 0x75
        __asm _emit 0x05
        mov edi, 64h
        mov ecx, dword ptr [esp + 14h]
        xor edx, edx
        mov eax, ecx
        imul ecx, dword ptr [esp + 18h]
        div ebp
        xor edx, edx
        mov dword ptr [esi + 598h], edi
        mov dword ptr [esi + 0d4h], ecx
        mov ecx, 100h
        mov dword ptr [esi + 594h], ebp
        mov dword ptr [esi + 570h], eax
        mov eax, dword ptr [esp + 18h]
        div edi
        mov dword ptr [esi + 574h], eax
        mov eax, dword ptr [esi + 570h]
        mov edx, dword ptr [esi + 574h]
        mov dword ptr [esi + 578h], eax
        mov eax, ebp
        mov dword ptr [esi + 57ch], edx
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 4d8h], eax
        mov eax, edi
        cdq
        sub eax, edx
        lea edi, [esi + 0d8h]
        sar eax, 1
        mov dword ptr [esi + 4dch], eax
        xor eax, eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esi + 578h]
        mov edi, dword ptr [esi + 57ch]
        mov eax, ecx
        mov dword ptr [esi + 4e0h], ebx
        cdq
        sub eax, edx
        mov dword ptr [esi + 0ach], ebx
        sar eax, 1
        add eax, 400h
        mov dword ptr [esi + 0b0h], ebx
        cdq
        idiv ecx
        mov dword ptr [esi + 0b8h], ebx
        mov dword ptr [esi + 0c4h], ebx
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 0d0h], ebx
        mov dword ptr [esi + 70h], 1
        mov dword ptr [esi + 6ch], 8
        mov ecx, eax
        mov eax, edi
        cdq
        sub eax, edx
        mov dword ptr [esi + 60h], ecx
        sar eax, 1
        add eax, 300h
        mov dword ptr [esi + 0b4h], ecx
        cdq
        idiv edi
        mov dword ptr [esi + 0bch], ecx
        pop edi
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 0c0h], eax
        mov dword ptr [esi + 0c8h], eax
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
