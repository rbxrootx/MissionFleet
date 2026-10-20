// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58876F10 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_58876f10_58876F10() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, edi
        movzx eax, word ptr [edi]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 27: je 0x58876f4c
        __asm _emit 0x74
        __asm _emit 0x27
        mov ebx, dword ptr [ebp + 0ch]
        mov ecx, eax
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        ; Exact mapped bytes E8 18 64 00 00: call 0x5887d34f
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x58876f4c
        __asm _emit 0x75
        __asm _emit 0x0e
        movzx eax, word ptr [esi + 2]
        add esi, 2
        mov ecx, eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 E4: jne 0x58876f30
        __asm _emit 0x75
        __asm _emit 0xe4
        sub esi, edi
        sar esi, 1
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
