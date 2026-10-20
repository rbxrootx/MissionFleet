// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6780 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_587a6780_587A6780() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        cmp byte ptr [ecx + 9], 10h
        ; Exact mapped bytes 75 2A: jne 0x587a67b4
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esp + 8]
        push esi
        movzx esi, byte ptr [ecx + 0ah]
        imul esi, dword ptr [ecx]
        test esi, esi
        ; Exact mapped bytes 74 19: je 0x587a67b3
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        lea eax, [eax + 2]
        mov cl, byte ptr [eax - 1]
        mov byte ptr [eax - 2], cl
        mov byte ptr [eax - 1], dl
        sub esi, 1
        ; Exact mapped bytes 75 ED: jne 0x587a67a0
        __asm _emit 0x75
        __asm _emit 0xed
        pop esi
        ret
    }
}
