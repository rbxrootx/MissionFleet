// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10021ED0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_10021ed0_10021ED0() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        mov ebx, dword ptr [eax*4 + 101ad160h]
        push edi
        mov edi, dword ptr [eax*4 + 101b09a0h]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        imul eax, ebx
        imul ecx, edi
        sub ecx, eax
        mov eax, 10624dd3h
        imul ecx
        mov ebp, dword ptr [esp + 18h]
        mov eax, 10624dd3h
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [ebp], edx
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esi]
        imul ecx, edi
        imul edx, ebx
        add ecx, edx
        pop edi
        imul ecx
        sar edx, 6
        mov eax, edx
        pop esi
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ebp + 4], edx
        pop ebp
        pop ebx
        ret
    }
}
