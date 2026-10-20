// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F4C0B7 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58f4c0b7() {
    __asm {
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes F7 C3 8D 2B 87 25: test ebx, 0x25872b8d
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x8d
        __asm _emit 0x2b
        __asm _emit 0x87
        __asm _emit 0x25
        ; Exact mapped bytes E9 14 F3 BB FF: jmp 0x58b0b3d8
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0xf3
        __asm _emit 0xbb
        __asm _emit 0xff
    }
}
