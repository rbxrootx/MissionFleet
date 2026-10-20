// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C13C0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_100c13c0_100C13C0() {
    __asm {
        push ebx
        push esi
        push edi
        lea eax, [ecx + 0a74h]
        mov ebx, 20h
        mov edi, 0fffeh
        mov esi, 2
        mov edx, dword ptr [eax - 100h]
        add eax, 4
        ; Exact mapped bytes 66 21 7A 24: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7a
        __asm _emit 0x24
        mov edx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 7A 24: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7a
        __asm _emit 0x24
        dec esi
        ; Exact mapped bytes 75 E9: jne 0x100c13d8
        __asm _emit 0x75
        __asm _emit 0xe9
        dec ebx
        ; Exact mapped bytes 75 E1: jne 0x100c13d3
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        pop edi
        and eax, 0e4fdh
        pop esi
        or ah, 4
        pop ebx
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ret
    }
}
