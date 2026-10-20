// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418949 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_00418949_00418949() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push edi
        mov eax, dword ptr [ebx - 4]
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x418979
        __asm _emit 0x74
        __asm _emit 0x23
        mov edi, dword ptr [eax + 54h]
        push esi
        mov esi, dword ptr [esp + 14h]
        test esi, esi
        ; Exact mapped bytes 74 06: je 0x418968
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [esi]
        push esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [ebx - 4]
        test edi, edi
        mov dword ptr [eax + 54h], esi
        pop esi
        ; Exact mapped bytes 74 06: je 0x418979
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [edi]
        push edi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
