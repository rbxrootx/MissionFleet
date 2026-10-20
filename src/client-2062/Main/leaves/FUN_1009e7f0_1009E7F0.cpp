// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009E7F0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_1009e7f0_1009E7F0() {
    __asm {
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov edx, dword ptr [eax + 4]
        push edi
        mov edi, ecx
        mov eax, dword ptr [edx + esi*4 + 0cf4h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1009e813
        __asm _emit 0x74
        __asm _emit 0x07
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes EB 02: jmp 0x1009e815
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        xor ecx, ecx
        xor ebx, ebx
        mov cl, byte ptr [edx + esi + 1d8h]
        mov bl, byte ptr [edx + esi + 1f8h]
        and eax, 0ffffh
        cmp eax, 5
        lea edx, [ebx + ecx*2]
        ; Exact mapped bytes 75 11: jne 0x1009e845
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [edi + edx*8 + 7ch]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 66 8B 82 A4 00 00 00: mov ax, word ptr [edx + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 75 14: jne 0x1009e85e
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [edi + edx*8 + 80h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 66 8B 80 A4 00 00 00: mov ax, word ptr [eax + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes 66 33 C0: xor ax, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc0
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
