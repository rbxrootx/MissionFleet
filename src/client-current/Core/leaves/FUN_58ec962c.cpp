// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58EC962C .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58ec962c() {
    __asm {
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes A9 52 75 94 07: test eax, 0x7947552
        __asm _emit 0xa9
        __asm _emit 0x52
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x07
        ; Exact mapped bytes 80 FA 1B: cmp dl, 0x1b
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x1b
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes E9 2F AA E4 FF: jmp 0x58d1406b
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xaa
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
