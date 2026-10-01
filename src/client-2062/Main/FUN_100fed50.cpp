// Reconstructed from FUN_100fed50 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_100fee80();

extern "C" __declspec(naked) void FUN_100fed50() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ecx, dword ptr [ebp + 4]
        mov edi, dword ptr [ebp + 3ch]
        mov ebx, eax
        mov dword ptr [ebp + 4], eax
        sub ebx, ecx
        test edi, edi
        ; Exact immediate encoding: je short L_100FEDAA
        __asm _emit 0x74
        __asm _emit 0x3f
L_100FED6B:
        test byte ptr [edi + 25h], 20h
        ; Exact immediate encoding: je short L_100FED9C
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [edi + 4]
        add ecx, ebx
        mov dword ptr [edi + 4], ecx
        mov esi, dword ptr [edi + 3ch]
        test esi, esi
        ; Exact immediate encoding: je short L_100FED9C
        __asm _emit 0x74
        __asm _emit 0x1c
L_100FED80:
        test byte ptr [esi + 25h], 20h
        ; Exact immediate encoding: je short L_100FED8E
        __asm _emit 0x74
        __asm _emit 0x08
        push ebx
        mov ecx, esi
        call FUN_100fee80
L_100FED8E:
        mov esi, dword ptr [esi + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact immediate encoding: je short L_100FED9C
        __asm _emit 0x74
        __asm _emit 0x04
        test esi, esi
        ; Exact immediate encoding: jne short L_100FED80
        __asm _emit 0x75
        __asm _emit 0xe4
L_100FED9C:
        mov edi, dword ptr [edi + 38h]
        mov eax, dword ptr [ebp + 3ch]
        cmp edi, eax
        ; Exact immediate encoding: je short L_100FEDAA
        __asm _emit 0x74
        __asm _emit 0x04
        test edi, edi
        ; Exact immediate encoding: jne short L_100FED6B
        __asm _emit 0x75
        __asm _emit 0xc1
L_100FEDAA:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}
