// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043A20 .. +0x218 bytes.
extern "C" __declspec(naked) void FUN_10043a20_10043A20() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 18h]
        mov ebp, 1
        push edi
        mov edx, ebp
        cmp esi, ebp
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 75 0E: jne 0x10043a46
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edi, dword ptr [ecx + 0c0h]
        mov ebx, dword ptr [ecx + 0bch]
        ; Exact mapped bytes EB 1B: jmp 0x10043a61
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp esi, 2
        ; Exact mapped bytes 75 0E: jne 0x10043a59
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edi, dword ptr [ecx + 0b4h]
        mov ebx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes EB 08: jmp 0x10043a61
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edi, dword ptr [esp + 1ch]
        mov ebx, dword ptr [esp + 1ch]
        mov eax, dword ptr [ecx + 80h]
        cmp eax, 3
        ; Exact mapped bytes 0F 87 BE 01 00 00: ja 0x10043c2e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 38 3C 04 10: jmp dword ptr [eax*4 + 0x10043c38]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0c8h]
        mov dword ptr [ecx + 0f4h], ebp
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 6F: je 0x10043af8
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ecx + 0a8h]
        cmp dword ptr [ecx + 0c4h], eax
        ; Exact mapped bytes 7E 25: jle 0x10043abc
        __asm _emit 0x7e
        __asm _emit 0x25
        cmp eax, edi
        ; Exact mapped bytes 0F 8D 8F 01 00 00: jge 0x10043c2e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 2
        ; Exact mapped bytes 75 3D: jne 0x10043ae1
        __asm _emit 0x75
        __asm _emit 0x3d
        mov dword ptr [ecx + 0a8h], edi
        pop edi
        mov dword ptr [ecx + 108h], ebp
        xor edx, edx
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 0F 8E 6A 01 00 00: jle 0x10043c2e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 2
        ; Exact mapped bytes 75 18: jne 0x10043ae1
        __asm _emit 0x75
        __asm _emit 0x18
        pop edi
        mov dword ptr [ecx + 108h], ebp
        xor edx, edx
        pop esi
        mov dword ptr [ecx + 0a8h], ebx
        pop ebp
        mov eax, edx
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp esi, 1
        ; Exact mapped bytes 75 06: jne 0x10043aec
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 0f4h], ebp
        pop edi
        xor edx, edx
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0c4h]
        mov ebp, 0e10h
        add eax, 708h
        cdq
        idiv ebp
        mov eax, dword ptr [ecx + 0a8h]
        cmp edx, eax
        ; Exact mapped bytes 7E 44: jle 0x10043b59
        __asm _emit 0x7e
        __asm _emit 0x44
        cmp eax, edi
        ; Exact mapped bytes 0F 8E 0D 01 00 00: jle 0x10043c2a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 2
        ; Exact mapped bytes 75 1C: jne 0x10043b3e
        __asm _emit 0x75
        __asm _emit 0x1c
        mov dword ptr [ecx + 0a8h], edi
        pop edi
        xor edx, edx
        pop esi
        pop ebp
        mov dword ptr [ecx + 108h], 0
        mov eax, edx
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp esi, 1
        ; Exact mapped bytes 75 0A: jne 0x10043b4d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ecx + 0f4h], 0
        pop edi
        xor edx, edx
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 0F 8D C9 00 00 00: jge 0x10043c2a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 2
        ; Exact mapped bytes 75 D8: jne 0x10043b3e
        __asm _emit 0x75
        __asm _emit 0xd8
        mov dword ptr [ecx + 0a8h], ebx
        ; Exact mapped bytes EB BA: jmp 0x10043b28
        __asm _emit 0xeb
        __asm _emit 0xba
        mov eax, dword ptr [ecx + 0a8h]
        mov dword ptr [ecx + 0f4h], ebp
        cmp eax, edi
        ; Exact mapped bytes 7D 35: jge 0x10043bb3
        __asm _emit 0x7d
        __asm _emit 0x35
        xor edx, edx
        cmp esi, 2
        ; Exact mapped bytes 75 16: jne 0x10043b9b
        __asm _emit 0x75
        __asm _emit 0x16
        mov dword ptr [ecx + 0a8h], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 108h], edx
        mov eax, edx
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp esi, ebp
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x10043c2e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 0f4h], edx
        mov eax, edx
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 7E 77: jle 0x10043c2e
        __asm _emit 0x7e
        __asm _emit 0x77
        xor edx, edx
        cmp esi, 2
        ; Exact mapped bytes 75 DD: jne 0x10043b9b
        __asm _emit 0x75
        __asm _emit 0xdd
        pop edi
        pop esi
        mov dword ptr [ecx + 0a8h], ebx
        pop ebp
        mov dword ptr [ecx + 108h], edx
        mov eax, edx
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0a8h]
        mov esi, dword ptr [ecx + 0c0h]
        xor edx, edx
        cmp eax, esi
        mov dword ptr [ecx + 0f4h], edx
        ; Exact mapped bytes 7C 10: jl 0x10043bfc
        __asm _emit 0x7c
        __asm _emit 0x10
        cmp eax, dword ptr [ecx + 0bch]
        ; Exact mapped bytes 7F 08: jg 0x10043bfc
        __asm _emit 0x7f
        __asm _emit 0x08
        mov edx, ebp
        mov dword ptr [ecx + 0f4h], ebp
        mov ebx, dword ptr [ecx + 0bch]
        mov edi, 0e10h
        sub edi, ebx
        cmp eax, edi
        ; Exact mapped bytes 7C 21: jl 0x10043c2e
        __asm _emit 0x7c
        __asm _emit 0x21
        mov edi, 0e10h
        sub edi, esi
        cmp eax, edi
        ; Exact mapped bytes 7F 16: jg 0x10043c2e
        __asm _emit 0x7f
        __asm _emit 0x16
        pop edi
        mov edx, ebp
        mov dword ptr [ecx + 0f4h], ebp
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
