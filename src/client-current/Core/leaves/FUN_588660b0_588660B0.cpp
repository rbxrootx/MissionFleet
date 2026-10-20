// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588660B0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_588660b0_588660B0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        mov edi, dword ptr [ebp + 8]
        movzx ecx, word ptr [esi]
        movzx edx, word ptr [edi]
        sub edx, ecx
        ; Exact mapped bytes 75 1F: jne 0x588660e6
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, ecx
        sub edi, esi
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 11: je 0x588660e6
        __asm _emit 0x74
        __asm _emit 0x11
        movzx ecx, word ptr [esi + 2]
        add esi, 2
        mov eax, ecx
        movzx edx, word ptr [edi + esi]
        sub edx, ecx
        ; Exact mapped bytes 74 EA: je 0x588660d0
        __asm _emit 0x74
        __asm _emit 0xea
        mov eax, edx
        shr edx, 1fh
        neg eax
        shr eax, 1fh
        pop edi
        sub eax, edx
        pop esi
        pop ebp
        ret
    }
}
