// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853A30 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_58853a30() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 14h]
        mov ecx, edi
        imul ecx, ecx, 2ch
        mov ebx, dword ptr [esp + 18h]
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 188h]
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 50h], eax
        mov ecx, ebx
        imul ecx, ecx, 2ch
        mov ebp, dword ptr [esp + 1ch]
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 18ch]
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 50h], eax
        mov ecx, ebp
        imul ecx, ecx, 2ch
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 190h]
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [esp + 20h]
        imul ecx, ecx, 2ch
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 194h]
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [esi + 198h]
        mov eax, 66666667h
        imul edi
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        ; Exact mapped bytes E8 7B 38 0B 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 66666667h
        imul ebx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 19ch]
        ; Exact mapped bytes E8 5E 38 0B 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        mov eax, 66666667h
        imul ebp
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        ; Exact mapped bytes E8 41 38 0B 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 66666667h
        imul dword ptr [esp + 20h]
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 1a4h]
        ; Exact mapped bytes E8 22 38 0B 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esi + 0a4h]
        push edx
        push eax
        push ebx
        push edi
        ; Exact mapped bytes E8 EB 94 00 00: call 0x5885d040
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
