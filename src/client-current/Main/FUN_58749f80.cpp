// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 29 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749F80 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58749f80_segment_00() {
    __asm {
        mov eax, dword ptr [ecx + 20de8h]
        xor eax, 0aaaaaaaah
        add eax, dword ptr [esp + 4]
        xor eax, 0aaaaaaaah
        mov dword ptr [ecx + 20de8h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
