// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008A740 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_1008a740_1008A740() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov esi, dword ptr [ebp + 194h]
        mov eax, dword ptr [ebp + 198h]
        cmp esi, eax
        ; Exact mapped bytes 74 26: je 0x1008a77c
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [esp + 14h]
        lea edi, [esi + 2dh]
        lea ebx, [eax + 2dh]
        push edi
        push ebx
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x1008a785
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 198h]
        add esi, 54h
        add edi, 54h
        cmp esi, eax
        ; Exact mapped bytes 75 E4: jne 0x1008a760
        __asm _emit 0x75
        __asm _emit 0xe4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 198h]
        lea eax, [esi + 54h]
        cmp eax, ebx
        ; Exact mapped bytes 74 18: je 0x1008a7aa
        __asm _emit 0x74
        __asm _emit 0x18
        lea edx, [eax - 54h]
        mov esi, eax
        mov edi, edx
        add eax, 54h
        mov ecx, 15h
        add edx, 54h
        cmp eax, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 EB: jne 0x1008a795
        __asm _emit 0x75
        __asm _emit 0xeb
        mov eax, dword ptr [ebp + 198h]
        pop edi
        add eax, -54h
        pop esi
        mov dword ptr [ebp + 198h], eax
        mov dword ptr [esp + 0ch], eax
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
