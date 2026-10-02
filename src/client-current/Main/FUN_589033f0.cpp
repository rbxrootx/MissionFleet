// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589033F0 .. +0x5 bytes.
extern "C" __declspec(naked) void FUN_589033f0() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
