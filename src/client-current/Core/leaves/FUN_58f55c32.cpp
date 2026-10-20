// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F55C32 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58f55c32() {
    __asm {
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 3D 38 71 B8 0A: cmp eax, 0xab87138
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x71
        __asm _emit 0xb8
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes E9 69 6F BE FF: jmp 0x58b3cba9
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x6f
        __asm _emit 0xbe
        __asm _emit 0xff
    }
}
