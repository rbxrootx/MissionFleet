// Reconstructed from FUN_10017900 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void SetTreeControlStyle();

extern "C" __declspec(naked) void FUN_10017900() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        test eax, eax
        mov ecx, dword ptr [esi + 94h]
        mov dword ptr [esi + 98h], eax
        mov dword ptr [ecx + 54h], eax
        ; Exact immediate encoding: je short L_10017942
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
L_10017942:
        mov eax, dword ptr [esi + 98h]
        test eax, eax
        ; Exact immediate encoding: je short L_1001795C
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 94h]
        push 0fffffeffh
        call SetTreeControlStyle
L_1001795C:
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact immediate encoding: jne short L_10017969
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact immediate encoding: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10017969:
        mov dword ptr [esi + 9ch], eax
        pop esi
        ret 8
    }
}
