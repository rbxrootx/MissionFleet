// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830B37 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58830b37_58830B37() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, ecx
        push edi
        mov edi, dword ptr [ebx + 2ch]
        test edi, edi
        ; Exact mapped bytes 74 1F: je 0x58830b64
        __asm _emit 0x74
        __asm _emit 0x1f
        push esi
        push dword ptr [edi + 4]
        mov esi, dword ptr [edi + 8]
        mov ecx, esi
        push ebx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, dword ptr [edi]
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 75 E3: jne 0x58830b46
        __asm _emit 0x75
        __asm _emit 0xe3
        pop esi
        pop edi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
