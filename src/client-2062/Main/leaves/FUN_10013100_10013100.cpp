// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013100 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_10013100_10013100() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 2A: je 0x10013137
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esp + 10h]
        push esi
        push edi
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10013122
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, 202h
        mov esi, edx
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        add edx, 808h
        add eax, 808h
        cmp edx, ebx
        ; Exact mapped bytes 75 E2: jne 0x10013113
        __asm _emit 0x75
        __asm _emit 0xe2
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
