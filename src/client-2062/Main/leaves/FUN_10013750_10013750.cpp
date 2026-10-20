// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013750 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_10013750_10013750() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        push edi
        mov edi, ecx
        lea eax, [ebx + 1]
        cmp eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 77 5A: ja 0x100137bb
        __asm _emit 0x77
        __asm _emit 0x5a
        mov ecx, dword ptr [edi + 20h]
        mov eax, dword ptr [ecx + ebx*4]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x1001377e
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 13 90 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x90
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [edi + 20h]
        add esp, 4
        mov dword ptr [edx + ebx*4], 0
        mov eax, dword ptr [edi + 10h]
        mov esi, dword ptr [esp + 1ch]
        push esi
        mov dword ptr [eax + ebx*4], 1
        ; Exact mapped bytes E8 0E 90 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x90
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 20h]
        add esp, 4
        mov dword ptr [ecx + ebx*4], eax
        mov edx, dword ptr [edi + 20h]
        mov ecx, esi
        mov esi, dword ptr [esp + 18h]
        mov edi, dword ptr [edx + ebx*4]
        mov eax, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 10h]
        mov esi, dword ptr [esp + 1ch]
        push esi
        mov dword ptr [ecx + ebx*4], 1
        ; Exact mapped bytes E8 D1 8F 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x8f
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [edi + 20h]
        mov ecx, esi
        mov esi, dword ptr [esp + 1ch]
        add esp, 4
        mov dword ptr [edx + ebx*4], eax
        mov eax, dword ptr [edi + 20h]
        mov edx, ecx
        mov edi, dword ptr [eax + ebx*4]
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
