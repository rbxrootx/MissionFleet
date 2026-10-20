// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10033230 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_10033230_10033230() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        mov ebx, dword ptr [esp + 0ch]
        push edi
        mov eax, dword ptr [esi*4 + 101ad160h]
        lea edi, [ebx*4 + 101b09a0h]
        lea ebx, [ebx*4 + 101ad160h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        mov eax, 10624dd3h
        shl edx, 4
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [esi*4 + 101b09a0h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        mov eax, 10624dd3h
        shl edx, 4
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov esi, edx
        mov edx, dword ptr [edi]
        imul edx, esi
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [ecx + 54h], edx
        mov edx, dword ptr [ebx]
        imul edx, esi
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [ecx + 58h], edx
        mov edi, dword ptr [edi]
        lea edx, [edi + edi*4]
        pop edi
        shl edx, 2
        imul edx
        sar edx, 6
        mov eax, edx
        pop esi
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [ecx + 60h], edx
        mov ebx, dword ptr [ebx]
        lea edx, [ebx + ebx*4]
        pop ebx
        shl edx, 2
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 64h], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
