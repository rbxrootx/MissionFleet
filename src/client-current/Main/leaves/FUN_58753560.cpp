// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58753560 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58753560() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        cmp eax, edx
        ; Exact mapped bytes 74 1E: je 0x5875358a
        __asm _emit 0x74
        __asm _emit 0x1e
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        push edi
        mov edi, eax
        add eax, 808h
        mov ecx, 202h
        mov esi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp eax, edx
        ; Exact mapped bytes 75 EC: jne 0x58753573
        __asm _emit 0x75
        __asm _emit 0xec
        pop edi
        pop esi
        pop ebx
        ret
    }
}
