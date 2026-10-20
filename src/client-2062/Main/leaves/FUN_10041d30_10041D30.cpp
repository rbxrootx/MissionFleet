// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10041D30 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_10041d30_10041D30() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        cmp ecx, edx
        ; Exact mapped bytes 74 1B: je 0x10041d57
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 0ch]
        push esi
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x10041d49
        __asm _emit 0x74
        __asm _emit 0x04
        mov esi, dword ptr [ecx]
        mov dword ptr [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        ; Exact mapped bytes 75 EE: jne 0x10041d41
        __asm _emit 0x75
        __asm _emit 0xee
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
