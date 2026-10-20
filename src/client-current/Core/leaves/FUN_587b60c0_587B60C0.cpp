// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B60C0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_587b60c0_587B60C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588bdc4ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 10h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
