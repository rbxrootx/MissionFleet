// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013090 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_10013090_10013090() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 25: je 0x100130c2
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [esp + 10h]
        push esi
        push edi
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100130b2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, 12h
        mov esi, edx
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        add edx, 48h
        add eax, 48h
        cmp edx, ebx
        ; Exact mapped bytes 75 E7: jne 0x100130a3
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
