// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834620 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58834620() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        cmp eax, edx
        ; Exact mapped bytes 74 1C: je 0x58834648
        __asm _emit 0x74
        __asm _emit 0x1c
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        push edi
        mov edi, eax
        add eax, 54h
        mov ecx, 15h
        mov esi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp eax, edx
        ; Exact mapped bytes 75 EE: jne 0x58834633
        __asm _emit 0x75
        __asm _emit 0xee
        pop edi
        pop esi
        pop ebx
        ret
    }
}
