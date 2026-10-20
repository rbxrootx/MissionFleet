// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446DF5 .. +0x46 bytes.
extern "C" __declspec(naked) void _CommonInit_CMFCPropertyPage__IAEXXZ_00446DF5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 13ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 140h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 144h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 148h], 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
