// Reconstructed from FUN_10167370 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_10167d20();

extern "C" __declspec(naked) void FUN_10167370() {
    __asm {
        push esi
        mov esi, ecx
        push 2
        call FUN_10167d20
        ; Exact immediate encoding: mov dword ptr [esi], 10176b98h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x98
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, esi
        pop esi
        ret 8
    }
}
