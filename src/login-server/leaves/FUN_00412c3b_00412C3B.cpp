// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412C3B .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_00412c3b_00412C3B() {
    __asm {
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 14h], 0
        ; Exact mapped bytes 76 0A: jbe 0x412c4e
        __asm _emit 0x76
        __asm _emit 0x0a
        mov eax, dword ptr [edi + 94h]
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x412c52
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 52: jmp 0x412ca4
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp dword ptr [edi + 1ch], 0
        ; Exact mapped bytes 74 13: je 0x412c6b
        __asm _emit 0x74
        __asm _emit 0x13
        cmp eax, 1
        mov ecx, edi
        ; Exact mapped bytes 75 07: jne 0x412c66
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 59 23 00 00: call 0x414fbd
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x412c6b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 76 23 00 00: call 0x414fe1
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        xor ebx, ebx
        cmp dword ptr [esp + 0ch], ebx
        push esi
        ; Exact mapped bytes 75 06: jne 0x412c7b
        __asm _emit 0x75
        __asm _emit 0x06
        mov esi, dword ptr [edi + 14h]
        dec esi
        ; Exact mapped bytes EB 10: jmp 0x412c8b
        __asm _emit 0xeb
        __asm _emit 0x10
        push dword ptr [esp + 10h]
        mov ecx, edi
        ; Exact mapped bytes E8 69 1F 00 00: call 0x414bef
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        dec esi
        mov ebx, esi
        xor eax, eax
        cmp ebx, esi
        ; Exact mapped bytes 7F 11: jg 0x412ca2
        __asm _emit 0x7f
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x412ca2
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, ebx
        mov ecx, edi
        push eax
        inc ebx
        ; Exact mapped bytes E8 3E 20 00 00: call 0x414cde
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB EB: jmp 0x412c8d
        __asm _emit 0xeb
        __asm _emit 0xeb
        pop esi
        pop ebx
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
