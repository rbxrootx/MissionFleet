// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427B18 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00427b18_00427B18() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        mov esi, dword ptr [eax]
        mov edi, dword ptr [eax + 4]
        mov ecx, esi
        add esi, esi
        mov dword ptr [eax], esi
        lea esi, [edi + edi]
        shr ecx, 1fh
        or esi, ecx
        mov ecx, dword ptr [eax + 8]
        mov edx, edi
        mov dword ptr [eax + 4], esi
        shr edx, 1fh
        shl ecx, 1
        or ecx, edx
        pop edi
        mov dword ptr [eax + 8], ecx
        pop esi
        ret
    }
}
