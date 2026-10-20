// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867EF00 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_5867ef00_5867EF00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2b8h]
        ; Exact mapped bytes E8 C9 AE E4 FF: call 0x584c9de0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        imul eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 87h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 19: jl 0x5867ef4e
        __asm _emit 0x7c
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2b8h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 65 66 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x66
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5867ef65
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2b8h]
        mov dword ptr [ebp - 14h], edx
        push -50h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4C 66 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x66
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 9F 20 1D 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x20
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        cmp eax, 25h
        ; Exact mapped bytes 75 39: jne 0x5867efaf
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 31ch], 0
        ; Exact mapped bytes 74 2D: je 0x5867efaf
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2b8h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 76 20 1D 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x20
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 94 08 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 28: jmp 0x5867efd7
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2b8h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 49 20 1D 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x20
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6A 08 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
