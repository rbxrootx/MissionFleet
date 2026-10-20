// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D14A78 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58d14a78() {
    __asm {
        ; Exact mapped bytes 0F 85 31 81 E2 FF: jne 0x58b3cbaf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E9 78 92 E0 FF: jmp 0x58b1dcfd
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0xff
    }
}
