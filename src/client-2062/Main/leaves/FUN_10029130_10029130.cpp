// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029130 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_10029130_10029130() {
    __asm {
        push ebx
        push esi
        push edi
        mov ebx, ecx
        push 108h
        ; Exact mapped bytes E8 61 36 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x36
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, dword ptr [esp + 14h]
        mov edx, eax
        or ecx, 0ffffffffh
        xor eax, eax
        add esp, 4
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        mov eax, dword ptr [esp + 18h]
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [edx + 104h], eax
        mov dword ptr [edx + 100h], ecx
        mov eax, dword ptr [ebx + 454h]
        mov esi, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 0ch]
        dec esi
        cmp ecx, esi
        ; Exact mapped bytes 75 04: jne 0x1002918e
        __asm _emit 0x75
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 03: jmp 0x10029191
        __asm _emit 0xeb
        __asm _emit 0x03
        lea esi, [ecx + 1]
        mov edi, dword ptr [eax + 10h]
        mov dword ptr [eax + 0ch], esi
        cmp esi, edi
        ; Exact mapped bytes 74 0D: je 0x100291a8
        __asm _emit 0x74
        __asm _emit 0x0d
        mov esi, dword ptr [eax + 14h]
        mov dword ptr [esi + ecx*4], edx
        mov ecx, dword ptr [eax + 8]
        inc ecx
        mov dword ptr [eax + 8], ecx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
