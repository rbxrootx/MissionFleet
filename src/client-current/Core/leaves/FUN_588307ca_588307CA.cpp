// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588307CA .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_588307ca_588307CA() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [eax]
        test edi, edi
        ; Exact mapped bytes 74 2B: je 0x58830802
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [edi]
        push esi
        mov esi, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 12: je 0x58830801
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [edi]
        push 1
        mov esi, dword ptr [ecx]
        mov ecx, esi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        pop esi
        pop edi
        pop ebp
        ret
    }
}
