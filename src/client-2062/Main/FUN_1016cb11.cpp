// Reconstructed from FUN_1016cb11 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_1016c9f0();

extern "C" __declspec(naked) void FUN_1016cb11() {
    __asm {
        cmp dword ptr [ebp - 20h], 0
        ; Exact immediate encoding: jne short L_1016CB2C
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        call FUN_1016c9f0
L_1016CB2C:
        ret
    }
}
