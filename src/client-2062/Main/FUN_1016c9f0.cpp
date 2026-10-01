// Reconstructed from FUN_1016c9f0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_1016ca70();

extern "C" __declspec(naked) void FUN_1016c9f0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 10176cd0h
        push 1016cd5ch
        ; Exact immediate encoding: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact immediate encoding: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        ; Exact immediate encoding: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1016CA1D:
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        mov dword ptr [ebp + 10h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact immediate encoding: jl short L_1016CA3D
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        call dword ptr [ebp + 14h]
        ; Exact immediate encoding: jmp short L_1016CA1D
        __asm _emit 0xeb
        __asm _emit 0xe0
L_1016CA3D:
        ; Exact immediate encoding: mov dword ptr [ebp - 4], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact immediate encoding: jmp short L_1016CA5D
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        push edx
        call FUN_1016ca70
        add esp, 4
        ret
        mov esp, dword ptr [ebp - 18h]
        ; Exact immediate encoding: mov dword ptr [ebp - 4], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_1016CA5D:
        mov ecx, dword ptr [ebp - 10h]
        ; Exact immediate encoding: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 10h
    }
}
