// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865DC0 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_58865dc0() {
    __asm {
        ; Exact mapped bytes 68 00 4D 8C 58: push 0x588c4d00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x4d
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 68 80 4C 8C 58: push 0x588c4c80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x4c
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 FB 00 00: call 0x588758f6
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
