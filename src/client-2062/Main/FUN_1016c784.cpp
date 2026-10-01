// Reconstructed from FUN_1016c784 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_1016cd44();

extern "C" __declspec(naked) void FUN_1016c784() {
    __asm {
        push dword ptr [esp + 4]
        call FUN_1016cd44
        pop ecx
        ret
    }
}
