// Reconstructed from FUN_100e28c0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_1016c784();

extern "C" __declspec(naked) void FUN_100e28c0() {
    __asm {
        ; Exact instruction bytes: mov dword ptr [ecx], 1017654ch
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x4c
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0ch]
        test ecx, ecx
        ; Exact instruction bytes: je short L_100E28D4
        __asm _emit 0x74
        __asm _emit 0x07
        push ecx
        call FUN_1016c784
        pop ecx
L_100E28D4:
        ret
    }
}
