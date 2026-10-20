// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865DD2 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58865dd2() {
    __asm {
        ; Exact mapped bytes E8 1A 2E 00 00: call 0x58868bf1
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
