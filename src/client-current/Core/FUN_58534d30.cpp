// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534D30 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58534d30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
