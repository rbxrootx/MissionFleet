// Reconstructed from FUN_1016c830 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_1016c7f0();

extern "C" __declspec(naked) void FUN_1016c830() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        call FUN_1016c7f0
        add esp, 4
        neg eax
        sbb eax, eax
        neg eax
        dec eax
        pop ebp
        ret
    }
}
