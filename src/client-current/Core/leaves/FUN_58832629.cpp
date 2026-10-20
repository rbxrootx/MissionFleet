// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832629 .. +0x4 bytes.
extern "C" __declspec(naked) void FUN_58832629() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
