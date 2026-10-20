// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100534F0 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_100534f0_100534F0() {
    __asm {
        push ecx
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov ebx, dword ptr [ecx + 70h]
        push esi
        mov edx, dword ptr [eax + 4]
        push edi
        mov edi, dword ptr [ecx + 68h]
        mov esi, edx
        sub esi, ebx
        mov ebx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx + 74h]
        mov dword ptr [esp + 0ch], edi
        sub eax, ebx
        imul edi, esi
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cmp eax, edi
        ; Exact mapped bytes 7F 40: jg 0x10053565
        __asm _emit 0x7f
        __asm _emit 0x40
        mov edi, dword ptr [ecx + 6ch]
        push ebp
        mov ebp, edi
        imul ebp, esi
        cmp eax, ebp
        pop ebp
        ; Exact mapped bytes 7C 32: jl 0x10053565
        __asm _emit 0x7c
        __asm _emit 0x32
        mov eax, dword ptr [ecx + 78h]
        mov ecx, dword ptr [ecx + 7ch]
        sub edx, eax
        sub ecx, ebx
        imul edi, edx
        lea eax, [ecx + ecx*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cmp eax, edi
        ; Exact mapped bytes 7F 15: jg 0x10053565
        __asm _emit 0x7f
        __asm _emit 0x15
        mov ecx, dword ptr [esp + 0ch]
        imul ecx, edx
        cmp eax, ecx
        ; Exact mapped bytes 7C 0A: jl 0x10053565
        __asm _emit 0x7c
        __asm _emit 0x0a
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        pop ecx
        ret
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret
    }
}
