// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887595E .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5887595e_5887595E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0ch]
        cmp dword ptr [ebp + 8], esi
        ; Exact mapped bytes 74 1E: je 0x5887598a
        __asm _emit 0x74
        __asm _emit 0x1e
        push edi
        mov edi, dword ptr [esi - 4]
        test edi, edi
        ; Exact mapped bytes 74 0D: je 0x58875981
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
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
        pop ecx
        sub esi, 8
        cmp esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 E4: jne 0x5887596d
        __asm _emit 0x75
        __asm _emit 0xe4
        pop edi
        mov al, 1
        pop esi
        pop ebp
        ret
    }
}
