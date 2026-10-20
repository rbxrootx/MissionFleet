// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F6BC9F .. +0x6 bytes.
extern "C" __declspec(naked) void FUN_58f6bc9f() {
    __asm {
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes E9 52 67 C0 FF: jmp 0x58b723f7
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x67
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
