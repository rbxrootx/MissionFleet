// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB930 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_587bb930_587BB930() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
