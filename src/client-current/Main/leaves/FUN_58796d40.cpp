// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58796D40 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58796d40() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes FF 15 2C C4 98 58: call dword ptr [0x5898c42c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 ED 5E 1E 00: call 0x5897cc3c
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x5e
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 DF 5E 1E 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x5e
        __asm _emit 0x1e
        __asm _emit 0x00
        cdq
        mov ecx, 0dh
        idiv ecx
        mov eax, dword ptr [esi + edx*4 + 4]
        pop esi
        ret
    }
}
