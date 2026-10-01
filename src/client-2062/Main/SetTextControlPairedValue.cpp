// Reconstructed from FUN_100188e0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void SetTextControlPairedValue() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 74h], eax
        mov dword ptr [ecx + 70h], eax
        ret 4
    }
}
