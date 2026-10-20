// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042C80 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_10042c80_10042C80() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 38h]
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x10042c9e
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ecx + 34h]
        cmp esi, 64h
        ; Exact mapped bytes 7F 13: jg 0x10042ca3
        __asm _emit 0x7f
        __asm _emit 0x13
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv esi
        pop esi
        ret
        mov eax, 64h
        pop esi
        ret
    }
}
