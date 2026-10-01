// Reconstructed from FUN_100ff120 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" __declspec(naked) void SetTreeControlVisibility() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 3ch]
        mov dword ptr [edi + 28h], ebx
        test esi, esi
        ; Exact immediate encoding: je short L_100FF14F
        __asm _emit 0x74
        __asm _emit 0x1c
L_100FF133:
        test byte ptr [esi + 25h], 40h
        ; Exact immediate encoding: je short L_100FF141
        __asm _emit 0x74
        __asm _emit 0x08
        push ebx
        mov ecx, esi
        call SetTreeControlVisibility
L_100FF141:
        mov esi, dword ptr [esi + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact immediate encoding: je short L_100FF14F
        __asm _emit 0x74
        __asm _emit 0x04
        test esi, esi
        ; Exact immediate encoding: jne short L_100FF133
        __asm _emit 0x75
        __asm _emit 0xe4
L_100FF14F:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}
