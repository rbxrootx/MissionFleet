// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F8160D .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58f8160d() {
    __asm {
        ; Exact mapped bytes 0F 87 F8 38 D0 FF: ja 0x58c84f0b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 8B D4: mov edx, esp
        __asm _emit 0x8b
        __asm _emit 0xd4
        ; Exact mapped bytes E9 93 1E E4 FF: jmp 0x58dc34ad
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x1e
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
