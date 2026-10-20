// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016C6E0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_1016c6e0_1016C6E0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 11ch]
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x1016c758
        __asm _emit 0x74
        __asm _emit 0x6a
        mov esi, dword ptr [esp + 0ch]
        cmp esi, -1
        ; Exact mapped bytes 74 61: je 0x1016c758
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, esi
        xor ecx, ecx
        and eax, 0ffffh
        lea edx, [edi + eax*4 + 120h]
        mov eax, dword ptr [edi + eax*4 + 120h]
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x1016c74b
        __asm _emit 0x74
        __asm _emit 0x39
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 74 1B: je 0x1016c731
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, eax
        mov eax, dword ptr [eax + 8]
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x1016c712
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [edi + 11ch]
        dec eax
        mov dword ptr [edi + 11ch], eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x1016c73c
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 06: jmp 0x1016c742
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        push eax
        ; Exact mapped bytes E8 3C 00 00 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [edi + 11ch]
        dec eax
        mov dword ptr [edi + 11ch], eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
