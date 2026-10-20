// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856BD80 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5856bd80_5856BD80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 70h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
