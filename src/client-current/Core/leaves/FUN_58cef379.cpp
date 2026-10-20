// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58CEF379 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_58cef379() {
    __asm {
        ; Exact mapped bytes 0F 85 6E 3B E6 FF: jne 0x58b52eed
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x3b
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes E9 0B D5 04 00: jmp 0x58d3c890
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
