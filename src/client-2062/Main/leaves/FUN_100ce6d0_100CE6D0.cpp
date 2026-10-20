// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CE6D0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_100ce6d0_100CE6D0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0
        push 64h
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push esi
        and eax, 0e1ffh
        or eax, 107h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        lea edi, [esi + 14ch]
        mov ebx, 3
        mov ecx, dword ptr [edi]
        push -1
        ; Exact mapped bytes E8 42 60 03 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F1: jne 0x100ce705
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esi + 228h]
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x100ce73a
        __asm _emit 0x75
        __asm _emit 0x1c
        lea ecx, [esi + 198h]
        mov edx, 2
        mov esi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100ce72e
        __asm _emit 0x75
        __asm _emit 0xf4
        pop edi
        pop esi
        pop ebx
        ret
    }
}
