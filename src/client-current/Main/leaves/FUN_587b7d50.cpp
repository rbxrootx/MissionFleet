// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B7D50 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_587b7d50() {
    __asm {
        push esi
        lea esi, [ecx + 21d04h]
        lea eax, [ecx + 21cech]
        mov edx, 18h
        sub esi, eax
        lea ecx, [edx + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x587b7d82
        __asm _emit 0x74
        __asm _emit 0x14
        mov cl, byte ptr [esi + eax]
        test cl, cl
        ; Exact mapped bytes 74 0D: je 0x587b7d82
        __asm _emit 0x74
        __asm _emit 0x0d
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x587b7d64
        __asm _emit 0x75
        __asm _emit 0xe7
        dec eax
        mov byte ptr [eax], dl
        pop esi
        ret
        test edx, edx
        ; Exact mapped bytes 75 01: jne 0x587b7d87
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        pop esi
        ret
    }
}
