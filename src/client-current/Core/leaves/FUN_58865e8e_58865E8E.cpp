// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865E8E .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58865e8e_58865E8E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes EB 17: jmp 0x58865eb1
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edi, dword ptr [esi]
        test edi, edi
        ; Exact mapped bytes 74 0E: je 0x58865eae
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, edi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x58865eb8
        __asm _emit 0x75
        __asm _emit 0x0a
        add esi, 4
        cmp esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 E4: jne 0x58865e9a
        __asm _emit 0x75
        __asm _emit 0xe4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ret
    }
}
