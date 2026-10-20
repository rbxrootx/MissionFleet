// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EC5D0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_584ec5d0_584EC5D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [eax + 54h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
