// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58731500 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58731500() {
    __asm {
        xor eax, eax
        push esi
        mov esi, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x58731520
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edx], al
        ; Exact mapped bytes 74 08: je 0x5873151c
        __asm _emit 0x74
        __asm _emit 0x08
        inc edx
        sub ecx, 1
        ; Exact mapped bytes 75 F6: jne 0x58731510
        __asm _emit 0x75
        __asm _emit 0xf6
        ; Exact mapped bytes EB 04: jmp 0x58731520
        __asm _emit 0xeb
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x58731525
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 80070057h
        test edi, edi
        ; Exact mapped bytes 74 10: je 0x58731539
        __asm _emit 0x74
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 06: jl 0x58731533
        __asm _emit 0x7c
        __asm _emit 0x06
        sub esi, ecx
        mov dword ptr [edi], esi
        pop esi
        ret
        mov dword ptr [edi], 0
        pop esi
        ret
    }
}
