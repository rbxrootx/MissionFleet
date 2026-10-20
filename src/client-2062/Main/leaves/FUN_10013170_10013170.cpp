// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013170 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_10013170_10013170() {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        ; Exact mapped bytes 76 27: jbe 0x1001319f
        __asm _emit 0x76
        __asm _emit 0x27
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        mov edx, eax
        mov eax, dword ptr [esp + 0ch]
        push edi
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10013194
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, 202h
        mov esi, ebx
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        add eax, 808h
        dec edx
        ; Exact mapped bytes 75 E9: jne 0x10013185
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
