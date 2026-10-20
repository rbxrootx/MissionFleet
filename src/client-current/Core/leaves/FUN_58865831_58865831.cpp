// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865831 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58865831_58865831() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 74 1F: je 0x5886585d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [esi]
        push edi
        mov edi, esi
        ; Exact mapped bytes EB 0C: jmp 0x58865851
        __asm _emit 0xeb
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 C5 73 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [edi + 4]
        mov eax, dword ptr [edi]
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 F0: jne 0x58865845
        __asm _emit 0x75
        __asm _emit 0xf0
        push esi
        ; Exact mapped bytes E8 B5 73 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        ret
    }
}
