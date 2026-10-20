// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009D030 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_1009d030_1009D030() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        mov esi, ecx
        mov ebx, dword ptr [esp + 18h]
        mov ebp, dword ptr [esp + 1ch]
        lea eax, [edi + edi*4]
        lea ecx, [edi + eax*2]
        mov eax, 91a2b3c5h
        shl ecx, 2
        imul ecx
        add edx, ecx
        mov eax, dword ptr [esi + 170h]
        sar edx, 9
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        lea ecx, [ebx + ebx*4]
        mov dword ptr [eax + 50h], edx
        mov eax, 91a2b3c5h
        lea ecx, [ebx + ecx*2]
        shl ecx, 2
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 174h]
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 91a2b3c5h
        mov dword ptr [ecx + 50h], edx
        lea edx, [ebp + ebp*4]
        lea ecx, [ebp + edx*2]
        shl ecx, 2
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 178h]
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 91a2b3c5h
        mov dword ptr [ecx + 50h], edx
        mov ecx, dword ptr [esp + 20h]
        lea edx, [ecx + ecx*4]
        lea ecx, [ecx + edx*2]
        shl ecx, 2
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 17ch]
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 66666667h
        mov dword ptr [ecx + 50h], edx
        imul edi
        sar edx, 2
        mov ecx, dword ptr [esi + 180h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 27 26 06 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 66666667h
        imul ebx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 184h]
        push edx
        ; Exact mapped bytes E8 0A 26 06 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 66666667h
        imul ebp
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov ecx, dword ptr [esi + 188h]
        push edx
        ; Exact mapped bytes E8 ED 25 06 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 66666667h
        imul dword ptr [esp + 20h]
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 18ch]
        push edx
        ; Exact mapped bytes E8 CE 25 06 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esi + 0a0h]
        push edx
        push eax
        push ebx
        push edi
        ; Exact mapped bytes E8 D7 5C 00 00: call 0x100a2e40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5c
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
