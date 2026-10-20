// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856C500 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5856c500_5856C500() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 5ch], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
