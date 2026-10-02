// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 11 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903450 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58903450_segment_00() {
    __asm {
        mov dword ptr [ecx], 5898c540h
        ; Exact mapped bytes E9 05 F9 FF FF: jmp 0x58902d60
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
