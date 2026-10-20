// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008AC90 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_1008ac90_1008AC90() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 25: je 0x1008acc2
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [esp + 10h]
        push esi
        push edi
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x1008acb2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, 15h
        mov esi, edx
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        add edx, 54h
        add eax, 54h
        cmp edx, ebx
        ; Exact mapped bytes 75 E7: jne 0x1008aca3
        __asm _emit 0x75
        __asm _emit 0xe7
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
