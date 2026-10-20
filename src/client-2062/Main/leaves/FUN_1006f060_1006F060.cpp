// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006F060 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_1006f060_1006F060() {
    __asm {
        mov ecx, dword ptr [ecx + 20bb8h]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ecx + 4]
        xor eax, eax
        test edi, edi
        ; Exact mapped bytes 74 62: je 0x1006f0d5
        __asm _emit 0x74
        __asm _emit 0x62
        mov ebp, dword ptr [esp + 1ch]
        mov ebx, dword ptr [esp + 14h]
        mov esi, dword ptr [edi + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 3E: je 0x1006f0c0
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [esi + 8ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ecx + 14h]
        add eax, edx
        cmp ebx, eax
        ; Exact mapped bytes 7C 2C: jl 0x1006f0c0
        __asm _emit 0x7c
        __asm _emit 0x2c
        mov eax, dword ptr [ecx + 1ch]
        add eax, edx
        cmp ebx, eax
        ; Exact mapped bytes 7D 23: jge 0x1006f0c0
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ecx + 18h]
        add eax, edx
        cmp dword ptr [esp + 18h], eax
        ; Exact mapped bytes 7C 15: jl 0x1006f0c0
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ecx + 20h]
        mov eax, dword ptr [esp + 18h]
        add ecx, edx
        cmp eax, ecx
        ; Exact mapped bytes 7D 08: jge 0x1006f0c0
        __asm _emit 0x7d
        __asm _emit 0x08
        cmp ebp, dword ptr [esi + 88h]
        ; Exact mapped bytes 7F 10: jg 0x1006f0d0
        __asm _emit 0x7f
        __asm _emit 0x10
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 75 B4: jne 0x1006f07b
        __asm _emit 0x75
        __asm _emit 0xb4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
