// Reconstructed from FUN_1016ca70 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_1016cd62();

extern "C" __declspec(naked) void FUN_1016ca70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0e06d7363h
        ; Exact immediate encoding: je short L_1016CA91
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact immediate encoding: jmp short L_1016CA96
        __asm _emit 0xeb
        __asm _emit 0x05
L_1016CA91:
        call FUN_1016cd62
L_1016CA96:
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
