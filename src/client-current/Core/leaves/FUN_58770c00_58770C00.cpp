// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58770C00 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58770c00_58770C00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
