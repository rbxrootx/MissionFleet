// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10034990 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_10034990_10034990() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 54h]
        push edi
        mov edi, dword ptr [esp + 0ch]
        shl esi, 2
        mov dword ptr [ecx + 58h], edi
        mov eax, 10624dd3h
        mov edx, dword ptr [esi + 101b09a0h]
        imul edx, edi
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [ecx + 5ch], edx
        mov esi, dword ptr [esi + 101ad160h]
        imul esi, edi
        imul esi
        sar edx, 6
        mov eax, edx
        pop edi
        shr eax, 1fh
        add edx, eax
        pop esi
        mov dword ptr [ecx + 60h], edx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
