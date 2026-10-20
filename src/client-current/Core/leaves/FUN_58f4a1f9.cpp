// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F4A1F9 .. +0x6 bytes.
extern "C" __declspec(naked) void FUN_58f4a1f9() {
    __asm {
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes E9 DE 33 F6 FF: jmp 0x58ead5dd
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x33
        __asm _emit 0xf6
        __asm _emit 0xff
    }
}
