// Reconstructed from FUN_10105c40 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_10105c40() {
    __asm {
        ; Exact immediate encoding: mov edx, dword ptr [101c9348h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        sub esp, 24h
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        cmp edx, ebp
        mov ebx, ecx
        ; Exact immediate encoding: je short L_10105CCD
        __asm _emit 0x74
        __asm _emit 0x79
        push edi
        ; Exact immediate encoding: mov ecx, 9
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea edi, [esp + 10h]
        ; Exact immediate encoding: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push ebp
        lea ecx, [esp + 14h]
        ; Exact immediate encoding: mov dword ptr [esp + 14h], 24h
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esp + 18h], 11h
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx]
        push 101c9344h
        push ecx
        push edx
        call dword ptr [eax + 0ch]
        test eax, eax
        pop edi
        ; Exact immediate encoding: jl short L_10105CD6
        __asm _emit 0x7c
        __asm _emit 0x4e
        ; Exact immediate encoding: mov eax, dword ptr [101c9344h]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        lea esi, [ebx + 10h]
        push esi
        push 10176d28h
        mov edx, dword ptr [eax]
        push eax
        call dword ptr [edx]
        test eax, eax
        ; Exact immediate encoding: jl short L_10105CAF
        __asm _emit 0x7c
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        cmp eax, ebp
        ; Exact immediate encoding: je short L_10105CAF
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax]
        add ebx, 4
        push ebx
        push eax
        call dword ptr [edx + 1ch]
L_10105CAF:
        ; Exact immediate encoding: mov eax, dword ptr [101c9344h]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ebp
        ; Exact immediate encoding: je short L_10105CD6
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [eax]
        push eax
        call dword ptr [ecx + 8]
        ; Exact immediate encoding: mov dword ptr [101c9344h], ebp
        __asm _emit 0x89
        __asm _emit 0x2d
        __asm _emit 0x44
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 24h
        ret
L_10105CCD:
        ; Exact immediate encoding: mov dword ptr [101c9344h], ebp
        __asm _emit 0x89
        __asm _emit 0x2d
        __asm _emit 0x44
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ebx + 10h], ebp
L_10105CD6:
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 24h
        ret
    }
}
