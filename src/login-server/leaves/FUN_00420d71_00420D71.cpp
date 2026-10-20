// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420D71 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_00420d71_00420D71() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 10h]
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edi]
        cmp dword ptr [esi], 1
        ; Exact mapped bytes 76 1E: jbe 0x420da2
        __asm _emit 0x76
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        push 0ah
        cdq
        pop ebx
        idiv ebx
        mov eax, dword ptr [ebp + 8]
        add dl, 30h
        mov byte ptr [ecx], dl
        inc ecx
        cdq
        idiv ebx
        dec dword ptr [esi]
        test eax, eax
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7F DD: jg 0x420d7f
        __asm _emit 0x7f
        __asm _emit 0xdd
        mov eax, dword ptr [edi]
        mov dword ptr [edi], ecx
        dec ecx
        mov bl, byte ptr [eax]
        mov dl, byte ptr [ecx]
        mov byte ptr [ecx], bl
        dec ecx
        mov byte ptr [eax], dl
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 72 F2: jb 0x420da7
        __asm _emit 0x72
        __asm _emit 0xf2
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
