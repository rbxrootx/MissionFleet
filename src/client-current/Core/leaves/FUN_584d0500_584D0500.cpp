// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D0500 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_584d0500_584D0500() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [eax], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
