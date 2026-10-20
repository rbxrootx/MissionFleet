// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E84E0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_585e84e0_585E84E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 0fffff0ffh
        or ecx, 400h
        or ecx, 20h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10678h], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
