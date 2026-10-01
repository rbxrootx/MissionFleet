// Reconstructed from FUN_1016cd4a Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_1016cd4a() {
    __asm {
        ; Exact immediate encoding: jmp dword ptr [10175128h]
        __asm _emit 0xff
        __asm _emit 0x25
        __asm _emit 0x28
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
    }
}
