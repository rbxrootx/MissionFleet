// Reconstructed from FUN_1010c290 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_1010c290() {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        ; Exact immediate encoding: mov dword ptr [eax], 10176b14h
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0x10
        ret
    }
}
