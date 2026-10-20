// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CDFD0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_584cdfd0_584CDFD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
