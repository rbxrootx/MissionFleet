// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F2E04D .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58f2e04d() {
    __asm {
        ; Exact mapped bytes 8D 54 51 D0: lea edx, [ecx + edx*2 - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x51
        __asm _emit 0xd0
        ; Exact mapped bytes 8A 0E: mov cl, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x0e
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes E9 1E 6A DE FF: jmp 0x58d14a78
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x6a
        __asm _emit 0xde
        __asm _emit 0xff
    }
}
