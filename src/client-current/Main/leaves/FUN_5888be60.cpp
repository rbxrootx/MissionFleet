// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888BE60 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_5888be60() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        lea ebx, [ecx + 6ch]
        mov ebp, 5
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov esi, dword ptr [eax + 80h]
        test esi, esi
        ; Exact mapped bytes 74 2B: je 0x5888bea7
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebx + 20h]
        mov edi, 100h
        lea edx, [edi + 7ffffefeh]
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x5888be9f
        __asm _emit 0x74
        __asm _emit 0x11
        mov dl, byte ptr [esi]
        test dl, dl
        ; Exact mapped bytes 74 0B: je 0x5888be9f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], dl
        inc eax
        inc esi
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x5888be84
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5888bea3
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 01: jne 0x5888bea4
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        add ebx, 4
        sub ebp, 1
        ; Exact mapped bytes 75 C1: jne 0x5888be70
        __asm _emit 0x75
        __asm _emit 0xc1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes E9 88 F7 FF FF: jmp 0x5888b640
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
