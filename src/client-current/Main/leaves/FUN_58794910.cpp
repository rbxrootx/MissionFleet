// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58794910 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_58794910() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        mov edx, dword ptr [esi*4 + 58a0b4d8h]
        imul edx, edx, 7d0h
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 5ch], eax
        mov edx, dword ptr [esi*4 + 58a0ed18h]
        imul edx, edx, 7d0h
        mov ebx, dword ptr [esp + 0ch]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov esi, edx
        push edi
        lea edi, [ebx*4 + 58a0ed18h]
        shr esi, 1fh
        add esi, edx
        mov edx, dword ptr [edi]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [ebx*4 + 58a0b4d8h]
        imul edx, esi
        lea ebx, [ebx*4 + 58a0b4d8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 58h], eax
        mov edi, dword ptr [edi]
        lea edx, [edi + edi*4]
        add edx, edx
        add edx, edx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 60h], eax
        mov ebx, dword ptr [ebx]
        lea edx, [ebx + ebx*4]
        add edx, edx
        add edx, edx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        pop edi
        shr eax, 1fh
        add eax, edx
        pop esi
        mov dword ptr [ecx + 64h], eax
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
