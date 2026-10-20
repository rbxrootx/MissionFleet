// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446B9A .. +0x46 bytes.
extern "C" __declspec(naked) void _CommonInit_CMFCPropertyPage__IAEXXZ_00446B9A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 120h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ech], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f0h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
