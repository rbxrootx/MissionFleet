// Reconstructed from FUN_100fee30 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_100fee30();

extern "C" __declspec(naked) void FUN_100fee30() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [esp + 10h]
        push esi
        push edi
        mov edi, ecx
        mov edx, dword ptr [edi + 4]
        mov ecx, dword ptr [edi + 8]
        mov esi, dword ptr [edi + 3ch]
        add edx, ebx
        add ecx, ebp
        mov dword ptr [edi + 4], edx
        test esi, esi
        mov dword ptr [edi + 8], ecx
        ; Exact immediate encoding: je short L_100FEE72
        __asm _emit 0x74
        __asm _emit 0x1d
L_100FEE55:
        test byte ptr [esi + 25h], 20h
        ; Exact immediate encoding: je short L_100FEE64
        __asm _emit 0x74
        __asm _emit 0x09
        push ebp
        push ebx
        mov ecx, esi
        call FUN_100fee30
L_100FEE64:
        mov esi, dword ptr [esi + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact immediate encoding: je short L_100FEE72
        __asm _emit 0x74
        __asm _emit 0x04
        test esi, esi
        ; Exact immediate encoding: jne short L_100FEE55
        __asm _emit 0x75
        __asm _emit 0xe3
L_100FEE72:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
    }
}
