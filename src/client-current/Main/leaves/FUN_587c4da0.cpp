// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4DA0 .. +0x6 bytes.
extern "C" __declspec(naked) void FUN_587c4da0() {
    __asm {
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
