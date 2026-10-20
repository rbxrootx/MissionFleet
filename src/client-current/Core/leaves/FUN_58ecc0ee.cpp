// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58ECC0EE .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58ecc0ee() {
    __asm {
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes E9 A8 51 00 00: jmp 0x58ed129d
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
