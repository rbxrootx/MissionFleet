// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876C4F0 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_5876c4f0_5876C4F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 64h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ebch], 0e10h
        ; Exact mapped bytes 7C 14: jl 0x5876c523
        __asm _emit 0x7c
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ebch]
        sub edx, 0e10h
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 0C: jmp 0x5876c52f
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ebch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 5ebch], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ebch], 0
        ; Exact mapped bytes 7D 13: jge 0x5876c55a
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ebch]
        add eax, 0e10h
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0C: jmp 0x5876c566
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ebch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 5ebch], ecx
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 5ebch]
        cdq
        idiv dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5eb8h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5eb8h], 24h
        ; Exact mapped bytes 7C 11: jl 0x5876c5ad
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5eb8h]
        sub ecx, 24h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x5876c5b9
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5eb8h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 5eb8h], edx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 5eb8h]
        mov esp, ebp
        pop ebp
        ret
    }
}
