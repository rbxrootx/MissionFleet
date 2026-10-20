// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009E8D0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_1009e8d0_1009E8D0() {
    __asm {
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esp + 4]
        push ebx
        push esi
        mov eax, dword ptr [eax + 4]
        mov esi, ecx
        xor ecx, ecx
        xor ebx, ebx
        mov cl, byte ptr [eax + edx + 1d8h]
        mov bl, byte ptr [eax + edx + 1f8h]
        mov eax, dword ptr [eax + edx*4 + 0cf4h]
        test eax, eax
        lea ecx, [ebx + ecx*2]
        ; Exact mapped bytes 74 0F: je 0x1009e90f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x1009e911
        __asm _emit 0x75
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 0E: jmp 0x1009e91d
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        setne dl
        inc edx
        mov eax, edx
        lea eax, [eax + ecx*2]
        mov ecx, dword ptr [esi + eax*4 + 7ch]
        xor eax, eax
        pop esi
        pop ebx
        ; Exact mapped bytes 66 8B 81 A4 00 00 00: mov ax, word ptr [ecx + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
