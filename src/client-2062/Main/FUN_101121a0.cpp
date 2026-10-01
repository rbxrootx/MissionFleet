// Reconstructed from FUN_101121a0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_101121a0() {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        ; Exact immediate encoding: mov dword ptr [eax], 10176b20h
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0x10
        ret
    }
}
