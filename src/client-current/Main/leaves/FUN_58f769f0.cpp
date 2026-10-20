// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F769F0 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58f769f0() {
    __asm {
        ; Exact mapped bytes 0F 84 EC EC E2 FF: je 0x58da56e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0xec
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes 3A C1: cmp al, cl
        __asm _emit 0x3a
        __asm _emit 0xc1
        ; Exact mapped bytes E9 DF EC E2 FF: jmp 0x58da56dc
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
