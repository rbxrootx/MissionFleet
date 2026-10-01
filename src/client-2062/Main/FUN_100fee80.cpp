// Reconstructed from FUN_100fee80 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_100fee80();

extern "C" __declspec(naked) void FUN_100fee80() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 4]
        mov esi, dword ptr [edi + 3ch]
        add ecx, ebx
        test esi, esi
        mov dword ptr [edi + 4], ecx
        ; Exact immediate encoding: je short L_100FEEB4
        __asm _emit 0x74
        __asm _emit 0x1c
L_100FEE98:
        test byte ptr [esi + 25h], 20h
        ; Exact immediate encoding: je short L_100FEEA6
        __asm _emit 0x74
        __asm _emit 0x08
        push ebx
        mov ecx, esi
        call FUN_100fee80
L_100FEEA6:
        mov esi, dword ptr [esi + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact immediate encoding: je short L_100FEEB4
        __asm _emit 0x74
        __asm _emit 0x04
        test esi, esi
        ; Exact immediate encoding: jne short L_100FEE98
        __asm _emit 0x75
        __asm _emit 0xe4
L_100FEEB4:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}
