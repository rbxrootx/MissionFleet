// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002BBD0 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_1002bbd0_1002BBD0() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 8]
        test esi, esi
        ; Exact mapped bytes 74 44: je 0x1002bc1c
        __asm _emit 0x74
        __asm _emit 0x44
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [eax + 150h]
        cmp ecx, edi
        ; Exact mapped bytes 75 14: jne 0x1002bbfe
        __asm _emit 0x75
        __asm _emit 0x14
        mov dword ptr [eax + 0a8h], 100h
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 17: jmp 0x1002bc15
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp ecx, 8
        ; Exact mapped bytes 75 12: jne 0x1002bc15
        __asm _emit 0x75
        __asm _emit 0x12
        mov dword ptr [eax + 0a8h], 60h
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov esi, dword ptr [esi]
        test esi, esi
        ; Exact mapped bytes 75 C2: jne 0x1002bbdd
        __asm _emit 0x75
        __asm _emit 0xc2
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
