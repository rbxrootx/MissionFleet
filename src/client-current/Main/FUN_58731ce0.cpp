// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58731CE0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_58731ce0() {
    __asm {
        mov eax, dword ptr [ecx + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x58731d1f
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [esp + 4]
        test edx, edx
        ; Exact mapped bytes 74 30: je 0x58731d1f
        __asm _emit 0x74
        __asm _emit 0x30
        push esi
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x58731d16
        __asm _emit 0x74
        __asm _emit 0x17
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 11: je 0x58731d16
        __asm _emit 0x74
        __asm _emit 0x11
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x58731cf5
        __asm _emit 0x75
        __asm _emit 0xe7
        dec eax
        mov byte ptr [eax], 0
        pop esi
        ret 4
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x58731d1b
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        pop esi
        ret 4
    }
}
