// Reconstructed from FUN_10015b40 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_10015b40() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact immediate encoding: je short L_10015B73
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
L_10015B73:
        ret 4
    }
}
