// Reconstructed from FUN_10148170 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_10148170() {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax + 0ch], ecx
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], ecx
        ; Exact immediate encoding: mov dword ptr [eax], 10176b74h
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0x10
        ret 0ch
    }
}
