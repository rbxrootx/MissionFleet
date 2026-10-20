// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426FE5 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_00426fe5_00426FE5() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        push 20h
        cdq
        pop ecx
        idiv ecx
        push 1fh
        mov esi, eax
        mov eax, dword ptr [esp + 10h]
        cdq
        idiv ecx
        pop ecx
        mov eax, dword ptr [esp + 8]
        sub ecx, edx
        or edx, 0ffffffffh
        shl edx, cl
        not edx
        test dword ptr [eax + esi*4], edx
        ; Exact mapped bytes 75 1C: jne 0x42702a
        __asm _emit 0x75
        __asm _emit 0x1c
        inc esi
        cmp esi, 3
        ; Exact mapped bytes 7D 11: jge 0x427025
        __asm _emit 0x7d
        __asm _emit 0x11
        lea eax, [eax + esi*4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 0E: jne 0x42702a
        __asm _emit 0x75
        __asm _emit 0x0e
        inc esi
        add eax, 4
        cmp esi, 3
        ; Exact mapped bytes 7C F2: jl 0x427017
        __asm _emit 0x7c
        __asm _emit 0xf2
        push 1
        pop eax
        pop esi
        ret
        xor eax, eax
        pop esi
        ret
    }
}
