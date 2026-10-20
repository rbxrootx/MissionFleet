// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427B46 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00427b46_00427B46() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [eax + 4]
        mov esi, edx
        mov edi, ecx
        shl esi, 1fh
        shr ecx, 1
        or ecx, esi
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [eax]
        shl edi, 1fh
        shr ecx, 1
        shr edx, 1
        or ecx, edi
        pop edi
        mov dword ptr [eax + 8], edx
        mov dword ptr [eax], ecx
        pop esi
        ret
    }
}
