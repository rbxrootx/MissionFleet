// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013140 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_10013140_10013140() {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        ; Exact mapped bytes 76 25: jbe 0x1001316d
        __asm _emit 0x76
        __asm _emit 0x25
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        mov edx, eax
        mov eax, dword ptr [esp + 0ch]
        push edi
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10013164
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, 12h
        mov esi, ebx
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        add eax, 48h
        dec edx
        ; Exact mapped bytes 75 EB: jne 0x10013155
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
