// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885D040 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_5885d040() {
    __asm {
        cmp dword ptr [ecx + 120h], 0
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x5885d16f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ebx
        imul ebx, ebx, 2eh
        imul esi, esi, 25h
        mov eax, 91a2b3c5h
        imul esi
        mov eax, dword ptr [ecx + 0e8h]
        add edx, esi
        sar edx, 9
        mov esi, edx
        push edi
        mov edi, dword ptr [esp + 14h]
        imul edi, edi, 25h
        shr esi, 1fh
        add esi, edx
        mov dword ptr [eax + 50h], esi
        mov eax, 91a2b3c5h
        imul edi
        add edx, edi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [edx + 50h], esi
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [edx + 50h], eax
        mov eax, 91a2b3c5h
        imul ebx
        add edx, ebx
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [esp + 18h]
        lea esi, [eax + eax*8]
        add esi, esi
        add esi, esi
        add esi, esi
        mov eax, 91a2b3c5h
        imul esi
        mov eax, dword ptr [ecx + 0b8h]
        add edx, esi
        sar edx, 0bh
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        mov dword ptr [eax + 50h], esi
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [ecx + 0bch]
        lea edi, [eax + eax*8]
        mov dword ptr [edx + 50h], esi
        add edi, edi
        add edi, edi
        add edi, edi
        mov eax, 91a2b3c5h
        imul edi
        add edx, edi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [edx + 50h], esi
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [edx + 50h], esi
        mov edx, dword ptr [ecx + 0d0h]
        pop edi
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ecx + 0d4h]
        pop esi
        mov dword ptr [ecx + 50h], eax
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
