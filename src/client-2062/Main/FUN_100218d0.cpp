// Reconstructed from FUN_100218d0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_100218d0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 160h]
        cmp edx, eax
        ; Exact immediate encoding: jle short L_100218F4
        __asm _emit 0x7e
        __asm _emit 0x16
        test eax, eax
        ; Exact immediate encoding: jl short L_100218F4
        __asm _emit 0x7c
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact immediate encoding: je short L_100218F4
        __asm _emit 0x74
        __asm _emit 0x08
        shl eax, 6
        add eax, ecx
        ret 4
L_100218F4:
        xor eax, eax
        ret 4
    }
}
