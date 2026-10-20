// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437893 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00437893_00437893() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 4], 0
        lea eax, [esi + 4]
        ; Exact mapped bytes 75 04: jne 0x4378a3
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        push edi
        push eax
        ; Exact mapped bytes FF 15 98 C2 43 00: call dword ptr [0x43c298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 07: jne 0x4378b8
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
