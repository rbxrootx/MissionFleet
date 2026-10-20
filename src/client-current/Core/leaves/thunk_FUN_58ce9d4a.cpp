// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B4F0BD .. +0x7 bytes.
extern "C" __declspec(naked) void thunk_FUN_58ce9d4a() {
    __asm {
        ; Exact mapped bytes 3A C8: cmp cl, al
        __asm _emit 0x3a
        __asm _emit 0xc8
        ; Exact mapped bytes E9 86 AC 19 00: jmp 0x58ce9d4a
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x19
        __asm _emit 0x00
    }
}
