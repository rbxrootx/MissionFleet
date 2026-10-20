// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588960D0 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_588960d0() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push esi
        xor ebx, ebx
        push edi
        mov esi, ecx
        cmp ebp, ebx
        ; Exact mapped bytes 75 05: jne 0x588960e5
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebp, 0c8h
        mov edi, dword ptr [esp + 20h]
        cmp edi, ebx
        ; Exact mapped bytes 75 05: jne 0x588960f2
        __asm _emit 0x75
        __asm _emit 0x05
        mov edi, 64h
        mov ecx, dword ptr [esp + 14h]
        xor edx, edx
        mov eax, ecx
        imul ecx, dword ptr [esp + 18h]
        div ebp
        xor edx, edx
        push 400h
        push ebx
        mov dword ptr [esi + 598h], ebp
        mov dword ptr [esi + 59ch], edi
        mov dword ptr [esi + 0d4h], ecx
        mov dword ptr [esi + 570h], eax
        mov eax, dword ptr [esp + 20h]
        div edi
        mov dword ptr [esi + 574h], eax
        mov eax, dword ptr [esi + 570h]
        mov edx, dword ptr [esi + 574h]
        mov dword ptr [esi + 578h], eax
        mov dword ptr [esi + 57ch], edx
        mov eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 4d8h], eax
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 4dch], eax
        lea eax, [esi + 0d8h]
        push eax
        ; Exact mapped bytes E8 DD 6A 0E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 578h]
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 400h
        cdq
        idiv ecx
        mov edi, dword ptr [esi + 57ch]
        add esp, 0ch
        mov dword ptr [esi + 4e0h], ebx
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 0b0h], ebx
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
        sar eax, 1
        add eax, 300h
        cdq
        idiv edi
        pop edi
        mov dword ptr [esi + 60h], ecx
        mov dword ptr [esi + 0b4h], ecx
        mov dword ptr [esi + 0bch], ecx
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
