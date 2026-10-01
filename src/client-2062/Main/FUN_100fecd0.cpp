// Reconstructed from FUN_100fecd0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_100fee30();

extern "C" __declspec(naked) void FUN_100fecd0() {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 8]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 8]
        mov ebp, edx
        push edi
        mov edi, dword ptr [ecx + 4]
        mov ebx, eax
        sub ebp, esi
        mov esi, dword ptr [ecx + 3ch]
        sub ebx, edi
        mov dword ptr [esp + 10h], ecx
        test esi, esi
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx + 8], edx
        ; Exact immediate encoding: je short L_100FED48
        __asm _emit 0x74
        __asm _emit 0x4c
L_100FECFC:
        test byte ptr [esi + 25h], 20h
        ; Exact immediate encoding: je short L_100FED3A
        __asm _emit 0x74
        __asm _emit 0x38
        mov edi, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 8]
        add edi, ebx
        add edx, ebp
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], edx
        mov edi, dword ptr [esi + 3ch]
        test edi, edi
        ; Exact immediate encoding: je short L_100FED3A
        __asm _emit 0x74
        __asm _emit 0x21
L_100FED19:
        test byte ptr [edi + 25h], 20h
        ; Exact immediate encoding: je short L_100FED2C
        __asm _emit 0x74
        __asm _emit 0x0d
        push ebp
        push ebx
        mov ecx, edi
        call FUN_100fee30
        mov ecx, dword ptr [esp + 10h]
L_100FED2C:
        mov edi, dword ptr [edi + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact immediate encoding: je short L_100FED3A
        __asm _emit 0x74
        __asm _emit 0x04
        test edi, edi
        ; Exact immediate encoding: jne short L_100FED19
        __asm _emit 0x75
        __asm _emit 0xdf
L_100FED3A:
        mov esi, dword ptr [esi + 38h]
        mov eax, dword ptr [ecx + 3ch]
        cmp esi, eax
        ; Exact immediate encoding: je short L_100FED48
        __asm _emit 0x74
        __asm _emit 0x04
        test esi, esi
        ; Exact immediate encoding: jne short L_100FECFC
        __asm _emit 0x75
        __asm _emit 0xb4
L_100FED48:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
    }
}
