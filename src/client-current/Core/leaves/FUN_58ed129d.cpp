// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58ED129D .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58ed129d() {
    __asm {
        ; Exact mapped bytes 0F 84 CE 2D E4 FF: je 0x58d14071
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x2d
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes E9 6D A0 C2 FF: jmp 0x58afb317
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xa0
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
