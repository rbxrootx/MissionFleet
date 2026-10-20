// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104620 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_10104620_10104620() {
    __asm {
        push ebx
        push edi
        mov edi, dword ptr [ecx + 80h]
        test edi, edi
        ; Exact mapped bytes 75 0C: jne 0x10104638
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ecx + 78h]
        pop edi
        mov dword ptr [ecx + 80h], eax
        pop ebx
        ret
        mov ebx, dword ptr [edi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 38: je 0x10104677
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ecx + 78h]
        mov edx, dword ptr [ecx + 88h]
        push esi
        xor esi, esi
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1010465b
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp eax, edi
        ; Exact mapped bytes 74 0B: je 0x1010465e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 14h]
        inc esi
        test eax, eax
        ; Exact mapped bytes 75 F4: jne 0x1010464f
        __asm _emit 0x75
        __asm _emit 0xf4
        or esi, 0ffffffffh
        sub edx, esi
        mov eax, dword ptr [ecx + 20h]
        imul edx, dword ptr [ecx + 5ch]
        mov edi, dword ptr [ecx + 18h]
        pop esi
        sub eax, edi
        cmp edx, eax
        ; Exact mapped bytes 7C 06: jl 0x10104677
        __asm _emit 0x7c
        __asm _emit 0x06
        mov dword ptr [ecx + 80h], ebx
        pop edi
        pop ebx
        ret
    }
}
