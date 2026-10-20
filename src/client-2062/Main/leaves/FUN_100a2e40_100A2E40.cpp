// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A2E40 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_100a2e40_100A2E40() {
    __asm {
        mov eax, dword ptr [ecx + 120h]
        test eax, eax
        ; Exact mapped bytes 0F 84 2B 01 00 00: je 0x100a2f79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        lea eax, [edi + edi*8]
        lea esi, [edi + eax*4]
        mov eax, 91a2b3c5h
        imul esi
        add edx, esi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 14h]
        mov esi, edx
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [edx + 50h], esi
        lea edx, [eax + eax*8]
        lea ebx, [eax + edx*4]
        mov eax, 91a2b3c5h
        imul ebx
        add edx, ebx
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ecx + 0f0h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 0ech]
        mov dword ptr [eax + 50h], esi
        mov eax, dword ptr [ecx + 0f4h]
        lea esi, [edi + edi*2]
        shl esi, 3
        sub esi, edi
        mov dword ptr [eax + 50h], edx
        shl esi, 1
        mov eax, 91a2b3c5h
        imul esi
        add edx, esi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ecx + 0d8h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 0dch]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 0e0h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 0e4h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [esp + 18h]
        lea esi, [eax + eax*8]
        mov eax, 91a2b3c5h
        shl esi, 3
        imul esi
        add edx, esi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov esi, edx
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [edx + 50h], esi
        mov eax, dword ptr [ecx + 0bch]
        mov dword ptr [eax + 50h], esi
        mov eax, dword ptr [esp + 1ch]
        lea edi, [eax + eax*8]
        mov eax, 91a2b3c5h
        shl edi, 3
        imul edi
        add edx, edi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ecx + 0c8h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 0cch]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 0c0h]
        mov dword ptr [eax + 50h], esi
        mov eax, dword ptr [ecx + 0c4h]
        pop edi
        mov dword ptr [eax + 50h], esi
        mov eax, dword ptr [ecx + 0d0h]
        pop esi
        pop ebx
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [ecx + 0d4h]
        mov dword ptr [ecx + 50h], edx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
