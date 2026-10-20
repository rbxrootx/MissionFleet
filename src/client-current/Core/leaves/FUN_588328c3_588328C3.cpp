// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588328C3 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_588328c3_588328C3() {
    __asm {
        push ebx
        push esi
        mov esi, 588dfd28h
        mov ebx, 588dfd28h
        cmp esi, ebx
        ; Exact mapped bytes 73 19: jae 0x588328ec
        __asm _emit 0x73
        __asm _emit 0x19
        push edi
        mov edi, dword ptr [esi]
        test edi, edi
        ; Exact mapped bytes 74 0A: je 0x588328e4
        __asm _emit 0x74
        __asm _emit 0x0a
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
        add esi, 4
        cmp esi, ebx
        ; Exact mapped bytes 72 E9: jb 0x588328d4
        __asm _emit 0x72
        __asm _emit 0xe9
        pop edi
        pop esi
        pop ebx
        ret
    }
}
