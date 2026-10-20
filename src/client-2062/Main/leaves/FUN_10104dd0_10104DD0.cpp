// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104DD0 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_10104dd0_10104DD0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push 0
        ; Exact mapped bytes FF 15 D0 51 17 10: call dword ptr [0x101751d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        lea esi, [edi + 1ch]
        push esi
        push 10176c20h
        push 3
        push 0
        push 10176c70h
        ; Exact mapped bytes FF 15 D4 51 17 10: call dword ptr [0x101751d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10104e07
        __asm _emit 0x74
        __asm _emit 0x0d
        mov dword ptr [esi], 0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
        mov eax, dword ptr [esi]
        lea ebx, [edi + 20h]
        push ebx
        push 10176c60h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x10104e2e
        __asm _emit 0x74
        __asm _emit 0x13
        mov dword ptr [esi], 0
        pop edi
        pop esi
        mov dword ptr [ebx], 0
        pop ebp
        xor eax, eax
        pop ebx
        ret
        mov eax, dword ptr [esi]
        lea ebp, [edi + 24h]
        push ebp
        push 10176c30h
        mov edx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x10104e5c
        __asm _emit 0x74
        __asm _emit 0x1a
        mov dword ptr [esi], 0
        pop edi
        mov dword ptr [ebp], 0
        pop esi
        mov dword ptr [ebx], 0
        pop ebp
        xor eax, eax
        pop ebx
        ret
        mov eax, dword ptr [esi]
        add edi, 28h
        push edi
        push 10176c40h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x10104e90
        __asm _emit 0x74
        __asm _emit 0x20
        mov dword ptr [edi], 0
        mov dword ptr [esi], 0
        pop edi
        mov dword ptr [ebp], 0
        pop esi
        mov dword ptr [ebx], 0
        pop ebp
        xor eax, eax
        pop ebx
        ret
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
    }
}
