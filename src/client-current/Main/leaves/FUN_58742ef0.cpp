// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58742EF0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_58742ef0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [eax + 4]
        push ebx
        mov ebx, dword ptr [eax + 14h]
        push esi
        mov esi, dword ptr [ecx + 4]
        push edi
        mov edi, dword ptr [ecx + 1ch]
        add edi, esi
        add ebx, edx
        cmp ebx, edi
        ; Exact mapped bytes 7F 3B: jg 0x58742f46
        __asm _emit 0x7f
        __asm _emit 0x3b
        mov edi, dword ptr [ecx + 14h]
        add edi, esi
        mov esi, dword ptr [eax + 1ch]
        add esi, edx
        cmp esi, edi
        ; Exact mapped bytes 7C 2D: jl 0x58742f46
        __asm _emit 0x7c
        __asm _emit 0x2d
        mov edx, dword ptr [eax + 8]
        mov esi, dword ptr [ecx + 8]
        mov edi, dword ptr [ecx + 20h]
        mov ebx, dword ptr [eax + 18h]
        add edi, esi
        add ebx, edx
        cmp ebx, edi
        ; Exact mapped bytes 7F 19: jg 0x58742f46
        __asm _emit 0x7f
        __asm _emit 0x19
        mov ecx, dword ptr [ecx + 18h]
        mov eax, dword ptr [eax + 20h]
        add ecx, esi
        add eax, edx
        cmp eax, ecx
        ; Exact mapped bytes 7C 0B: jl 0x58742f46
        __asm _emit 0x7c
        __asm _emit 0x0b
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
