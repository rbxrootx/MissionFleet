// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A1F20 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_587a1f20_587A1F20() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0ch]
        cmp esi, 4000h
        ; Exact mapped bytes 77 67: ja 0x587a1f94
        __asm _emit 0x77
        __asm _emit 0x67
        push edi
        mov edi, dword ptr [esp + 0ch]
        movzx eax, byte ptr [edi]
        mov ecx, eax
        and cl, 0fh
        cmp cl, 8
        ; Exact mapped bytes 75 54: jne 0x587a1f93
        __asm _emit 0x75
        __asm _emit 0x54
        mov ecx, eax
        and ecx, 0f0h
        cmp ecx, 70h
        ; Exact mapped bytes 77 47: ja 0x587a1f93
        __asm _emit 0x77
        __asm _emit 0x47
        shr eax, 4
        mov edx, 1
        lea ecx, [eax + 7]
        shl edx, cl
        cmp esi, edx
        ; Exact mapped bytes 77 36: ja 0x587a1f93
        __asm _emit 0x77
        __asm _emit 0x36
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        shr edx, 1
        sub eax, 1
        ; Exact mapped bytes 74 04: je 0x587a1f6b
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, edx
        ; Exact mapped bytes 76 F5: jbe 0x587a1f60
        __asm _emit 0x76
        __asm _emit 0xf5
        movzx ecx, byte ptr [edi + 1]
        xor edx, edx
        shl eax, 4
        and ecx, 0e0h
        or eax, 8
        mov esi, 1fh
        mov byte ptr [edi], al
        shl eax, 8
        add eax, ecx
        div esi
        sub cl, dl
        add cl, 1fh
        mov byte ptr [edi + 1], cl
        pop edi
        pop esi
        ret
    }
}
