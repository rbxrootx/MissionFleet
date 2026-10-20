// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CB88 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_5886cb88_5886CB88() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 75 25: jne 0x5886cbba
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [edx]
        test cl, 2
        ; Exact mapped bytes 75 18: jne 0x5886cbba
        __asm _emit 0x75
        __asm _emit 0x18
        and ecx, 0fffffffeh
        mov al, 1
        or ecx, 2
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [edx + 4]
        and ecx, 0fffffffch
        or ecx, 4
        mov dword ptr [edx + 4], ecx
        pop ebp
        ret
        xor al, al
        pop ebp
        ret
    }
}
