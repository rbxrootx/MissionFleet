// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6290 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_587a6290_587A6290() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov al, byte ptr [ecx + 8]
        test al, 2
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x587a6364
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        mov cl, byte ptr [ecx + 9]
        push esi
        cmp cl, 8
        ; Exact mapped bytes 75 50: jne 0x587a62fa
        __asm _emit 0x75
        __asm _emit 0x50
        cmp al, 2
        ; Exact mapped bytes 75 27: jne 0x587a62d5
        __asm _emit 0x75
        __asm _emit 0x27
        mov esi, dword ptr [esp + 0ch]
        test edx, edx
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x587a6363
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esi]
        lea esi, [esi + 3]
        mov al, byte ptr [esi - 1]
        mov byte ptr [esi - 3], al
        mov byte ptr [esi - 1], cl
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x587a62c0
        __asm _emit 0x75
        __asm _emit 0xed
        pop esi
        ret
        cmp al, 6
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x587a6363
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 7E: je 0x587a6363
        __asm _emit 0x74
        __asm _emit 0x7e
        mov cl, byte ptr [esi]
        lea esi, [esi + 4]
        mov al, byte ptr [esi - 2]
        mov byte ptr [esi - 4], al
        mov byte ptr [esi - 2], cl
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x587a62e5
        __asm _emit 0x75
        __asm _emit 0xed
        pop esi
        ret
        cmp cl, 10h
        ; Exact mapped bytes 75 64: jne 0x587a6363
        __asm _emit 0x75
        __asm _emit 0x64
        cmp al, 2
        ; Exact mapped bytes 75 31: jne 0x587a6334
        __asm _emit 0x75
        __asm _emit 0x31
        test edx, edx
        ; Exact mapped bytes 74 5C: je 0x587a6363
        __asm _emit 0x74
        __asm _emit 0x5c
        mov esi, dword ptr [esp + 0ch]
        inc esi
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov cl, byte ptr [esi - 1]
        lea esi, [esi + 6]
        movzx eax, byte ptr [esi - 3]
        mov byte ptr [esi - 7], al
        movzx eax, byte ptr [esi - 2]
        mov byte ptr [esi - 3], cl
        mov cl, byte ptr [esi - 6]
        mov byte ptr [esi - 6], al
        mov byte ptr [esi - 2], cl
        sub edx, 1
        ; Exact mapped bytes 75 DE: jne 0x587a6310
        __asm _emit 0x75
        __asm _emit 0xde
        pop esi
        ret
        cmp al, 6
        ; Exact mapped bytes 75 2B: jne 0x587a6363
        __asm _emit 0x75
        __asm _emit 0x2b
        test edx, edx
        ; Exact mapped bytes 74 27: je 0x587a6363
        __asm _emit 0x74
        __asm _emit 0x27
        mov esi, dword ptr [esp + 0ch]
        inc esi
        mov cl, byte ptr [esi - 1]
        lea esi, [esi + 8]
        movzx eax, byte ptr [esi - 5]
        mov byte ptr [esi - 9], al
        movzx eax, byte ptr [esi - 4]
        mov byte ptr [esi - 5], cl
        mov cl, byte ptr [esi - 8]
        mov byte ptr [esi - 8], al
        mov byte ptr [esi - 4], cl
        sub edx, 1
        ; Exact mapped bytes 75 DE: jne 0x587a6341
        __asm _emit 0x75
        __asm _emit 0xde
        pop esi
        ret
    }
}
