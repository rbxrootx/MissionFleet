// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10025630 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_10025630_10025630() {
    __asm {
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 1ch]
        xor esi, esi
        mov ecx, 1
        xor edx, edx
        xor eax, eax
        mov al, byte ptr [edx + edi]
        imul eax, ecx
        add esi, eax
        inc ecx
        inc edx
        cmp edx, 0c0h
        ; Exact mapped bytes 72 EC: jb 0x10025640
        __asm _emit 0x72
        __asm _emit 0xec
        mov edi, dword ptr [esp + 24h]
        xor eax, eax
        xor edx, edx
        mov dl, byte ptr [eax + edi]
        imul edx, ecx
        add esi, edx
        inc ecx
        inc eax
        cmp eax, 4
        ; Exact mapped bytes 72 EF: jb 0x1002565a
        __asm _emit 0x72
        __asm _emit 0xef
        mov edi, dword ptr [edi]
        test edi, edi
        ; Exact mapped bytes 7E 21: jle 0x10025692
        __asm _emit 0x7e
        __asm _emit 0x21
        imul edi, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 20h]
        xor edx, edx
        test edi, edi
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes 7E 10: jle 0x10025692
        __asm _emit 0x7e
        __asm _emit 0x10
        xor eax, eax
        mov al, byte ptr [edx + ebp]
        imul eax, ecx
        add esi, eax
        inc ecx
        inc edx
        cmp edx, edi
        ; Exact mapped bytes 7C F0: jl 0x10025682
        __asm _emit 0x7c
        __asm _emit 0xf0
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
