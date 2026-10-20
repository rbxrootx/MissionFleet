// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C7820 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_587c7820() {
    __asm {
        mov edx, dword ptr [esp + 4]
        xor eax, eax
        cmp edx, 3
        ; Exact mapped bytes 75 13: jne 0x587c783e
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [esp + 8]
        add dword ptr [ecx + 0c0h], eax
        mov eax, dword ptr [ecx + 0c0h]
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edx, 2
        ; Exact mapped bytes 75 1A: jne 0x587c785d
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ecx + 0c0h]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edx, 1
        ; Exact mapped bytes 75 1A: jne 0x587c787c
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ecx + 0c0h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 17: jne 0x587c7897
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 0c0h]
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
