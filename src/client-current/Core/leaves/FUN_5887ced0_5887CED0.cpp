// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CED0 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_5887ced0_5887CED0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        push ebx
        push esi
        push edi
        mov ecx, dword ptr [eax + 3ch]
        add ecx, eax
        movzx eax, word ptr [ecx + 14h]
        movzx ebx, word ptr [ecx + 6]
        add eax, 18h
        add eax, ecx
        test ebx, ebx
        ; Exact mapped bytes 74 1B: je 0x5887cf0c
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edi, dword ptr [ebp + 0ch]
        mov esi, dword ptr [eax + 0ch]
        cmp edi, esi
        ; Exact mapped bytes 72 09: jb 0x5887cf04
        __asm _emit 0x72
        __asm _emit 0x09
        mov ecx, dword ptr [eax + 8]
        add ecx, esi
        cmp edi, ecx
        ; Exact mapped bytes 72 0A: jb 0x5887cf0e
        __asm _emit 0x72
        __asm _emit 0x0a
        inc edx
        add eax, 28h
        cmp edx, ebx
        ; Exact mapped bytes 72 E8: jb 0x5887cef4
        __asm _emit 0x72
        __asm _emit 0xe8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
