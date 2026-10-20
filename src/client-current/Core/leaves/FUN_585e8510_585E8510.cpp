// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E8510 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_585e8510_585E8510() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20f34h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10678h]
        xor edx, 100h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10678h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10678h]
        or edx, 200h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10678h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
