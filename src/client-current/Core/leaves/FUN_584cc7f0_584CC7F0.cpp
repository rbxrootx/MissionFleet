// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CC7F0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_584cc7f0_584CC7F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 84h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 88h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
