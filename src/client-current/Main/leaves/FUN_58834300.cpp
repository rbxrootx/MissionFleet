// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834300 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58834300() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        mov ecx, ebx
        mov ebp, dword ptr [esp + 18h]
        sub ecx, esi
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 54h
        add eax, ebp
        mov edx, esi
        cmp esi, ebx
        ; Exact mapped bytes 74 17: je 0x58834346
        __asm _emit 0x74
        __asm _emit 0x17
        sub ebp, esi
        push edi
        lea edi, [edx + ebp]
        mov esi, edx
        add edx, 54h
        mov ecx, 15h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp edx, ebx
        ; Exact mapped bytes 75 ED: jne 0x58834332
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
