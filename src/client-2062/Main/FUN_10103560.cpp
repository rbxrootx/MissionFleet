// Reconstructed from FUN_10103560 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_10167d20();

extern "C" __declspec(naked) void FUN_10103560() {
    __asm {
        push esi
        mov esi, ecx
        push 1
        call FUN_10167d20
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        cmp ecx, eax
        ; Exact immediate encoding: mov dword ptr [esi], 101767e4h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xe4
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 18h], eax
        mov dword ptr [esi + 1ch], eax
        ; Exact immediate encoding: je short L_10103589
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [esi + 18h], eax
L_10103589:
        mov eax, esi
        pop esi
        ret 8
    }
}
