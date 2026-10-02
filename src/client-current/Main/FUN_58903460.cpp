// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 3 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903460 .. +0x3 bytes.
extern "C" __declspec(naked) void FUN_58903460_segment_00() {
    __asm {
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
