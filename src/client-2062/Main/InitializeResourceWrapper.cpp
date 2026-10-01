// Reconstructed from FUN_101029b0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void InitializeResourceWrapper() {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        ; Exact immediate encoding: mov dword ptr [eax + 4], 8
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [eax + 8], 10h
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [eax], 10176790h
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [eax + 0ch], ecx
        ret 4
    }
}
