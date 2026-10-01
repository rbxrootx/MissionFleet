// Reconstructed from FUN_1016c7f0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_1016cd56();

extern "C" __declspec(naked) void FUN_1016c7f0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact instruction bytes: cmp dword ptr [101c9370h], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0xff
        ; Exact instruction bytes: jne short L_1016C80F
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact instruction bytes: call dword ptr [10175150h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact instruction bytes: jmp short L_1016C828
        __asm _emit 0xeb
        __asm _emit 0x19
L_1016C80F:
        push 101c936ch
        push 101c9370h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        call FUN_1016cd56
        add esp, 0ch
        mov dword ptr [ebp - 4], eax
L_1016C828:
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
