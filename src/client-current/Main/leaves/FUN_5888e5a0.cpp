// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888E5A0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5888e5a0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        lea eax, [ecx + 21cech]
        mov edx, 18h
        sub esi, eax
        lea ecx, [edx + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x5888e5d2
        __asm _emit 0x74
        __asm _emit 0x16
        mov cl, byte ptr [esi + eax]
        test cl, cl
        ; Exact mapped bytes 74 0F: je 0x5888e5d2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x5888e5b2
        __asm _emit 0x75
        __asm _emit 0xe7
        dec eax
        mov byte ptr [eax], dl
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 01: jne 0x5888e5d7
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
