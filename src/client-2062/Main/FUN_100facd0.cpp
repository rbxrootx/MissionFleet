// Reconstructed from FUN_100facd0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_100facd0() {
    __asm {
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        ; Exact immediate encoding: je short L_100FACEF
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 4]
L_100FACDB:
        mov edx, dword ptr [eax + 48h]
        shr edx, 0ah
        cmp edx, ecx
        ; Exact immediate encoding: je short L_100FACF1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 0b70h]
        test eax, eax
        ; Exact immediate encoding: jne short L_100FACDB
        __asm _emit 0x75
        __asm _emit 0xec
L_100FACEF:
        xor eax, eax
L_100FACF1:
        ret 4
    }
}
