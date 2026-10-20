// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587956A0 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_587956a0() {
    __asm {
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
