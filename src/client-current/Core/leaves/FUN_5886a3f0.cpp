// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A3F0 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_5886a3f0() {
    __asm {
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D9 FC: frndint
        __asm _emit 0xd9
        __asm _emit 0xfc
        ; Exact mapped bytes DC E1: fsubr st(1), st(0)
        __asm _emit 0xdc
        __asm _emit 0xe1
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes D9 F0: f2xm1
        __asm _emit 0xd9
        __asm _emit 0xf0
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 FD: fscale
        __asm _emit 0xd9
        __asm _emit 0xfd
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
