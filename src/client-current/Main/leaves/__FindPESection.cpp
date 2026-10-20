// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897D8E0 .. +0x44 bytes.
extern "C" __declspec(naked) void __FindPESection() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 3ch]
        add ecx, eax
        movzx eax, word ptr [ecx + 14h]
        push ebx
        push esi
        movzx esi, word ptr [ecx + 6]
        xor edx, edx
        push edi
        lea eax, [eax + ecx + 18h]
        test esi, esi
        ; Exact mapped bytes 76 1B: jbe 0x5897d91d
        __asm _emit 0x76
        __asm _emit 0x1b
        mov edi, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        cmp edi, ecx
        ; Exact mapped bytes 72 09: jb 0x5897d915
        __asm _emit 0x72
        __asm _emit 0x09
        mov ebx, dword ptr [eax + 8]
        add ebx, ecx
        cmp edi, ebx
        ; Exact mapped bytes 72 0A: jb 0x5897d91f
        __asm _emit 0x72
        __asm _emit 0x0a
        inc edx
        add eax, 28h
        cmp edx, esi
        ; Exact mapped bytes 72 E8: jb 0x5897d905
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
