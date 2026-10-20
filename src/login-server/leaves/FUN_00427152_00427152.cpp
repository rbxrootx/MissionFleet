// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427152 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_00427152_00427152() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        push esi
        push edi
        push 20h
        mov edi, dword ptr [ebp + 8]
        pop ebx
        or esi, 0ffffffffh
        cdq
        mov ecx, ebx
        mov dword ptr [ebp - 4], 3
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        cdq
        idiv ecx
        and dword ptr [ebp + 0ch], 0
        mov ecx, edx
        shl esi, cl
        sub ebx, edx
        not esi
        mov eax, dword ptr [edi]
        mov ecx, eax
        and ecx, esi
        mov dword ptr [ebp - 8], ecx
        mov ecx, edx
        shr eax, cl
        or eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, ebx
        add edi, 4
        shl eax, cl
        dec dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 DC: jne 0x427188
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edi, dword ptr [ebp - 0ch]
        push 2
        pop ebx
        mov esi, edi
        push 8
        pop ecx
        shl esi, 2
        cmp ebx, edi
        ; Exact mapped bytes 7C 0F: jl 0x4271cd
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        mov eax, ecx
        sub eax, esi
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ecx + edx], eax
        ; Exact mapped bytes EB 07: jmp 0x4271d4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp + 8]
        and dword ptr [ecx + eax], 0
        dec ebx
        sub ecx, 4
        ; Exact mapped bytes 79 E0: jns 0x4271ba
        __asm _emit 0x79
        __asm _emit 0xe0
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
