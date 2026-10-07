// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 6 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897CE8C .. +0x6 bytes.
extern "C" __declspec(naked) void FUN_5897ce8c_segment_00() {
    __asm {
        ; Exact mapped bytes FF 25 64 C2 98 58: jmp dword ptr [0x5898c264]
        __asm _emit 0xff
        __asm _emit 0x25
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
