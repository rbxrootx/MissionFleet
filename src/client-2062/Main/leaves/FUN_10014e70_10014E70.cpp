// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014E70 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_10014e70_10014E70() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x10014ea4
        __asm _emit 0x75
        __asm _emit 0x2a
        push 0ch
        ; Exact mapped bytes E8 1F 79 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [esi + 50h], eax
        mov dword ptr [eax], 0
        mov eax, dword ptr [esi + 50h]
        mov dword ptr [esi + 54h], eax
        add esp, 4
        mov dword ptr [eax + 4], 0
        mov eax, dword ptr [esi + 50h]
        mov dword ptr [eax + 8], ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
