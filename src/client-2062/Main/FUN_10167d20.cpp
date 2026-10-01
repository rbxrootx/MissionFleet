// Reconstructed from FUN_10167d20 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_10167bf0();

extern "C" __declspec(naked) void FUN_10167d20() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact immediate encoding: mov dword ptr [esi], 10176bd8h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xd8
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: mov eax, dword ptr [101c9348h]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: jne short L_10167D4D
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact immediate encoding: mov eax, dword ptr [101c934ch]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: jne short L_10167D4D
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact immediate encoding: mov eax, dword ptr [101c92dch]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        push 0
        push eax
        call FUN_10167bf0
        add esp, 0ch
L_10167D4D:
        ; Exact immediate encoding: mov eax, dword ptr [101c9328h]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 8]
        inc eax
        ; Exact immediate encoding: mov dword ptr [101c9328h], eax
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esi + 4], ecx
        ; Exact immediate encoding: mov dword ptr [esi + 8], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esi + 0ch], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop esi
        ret 4
    }
}
