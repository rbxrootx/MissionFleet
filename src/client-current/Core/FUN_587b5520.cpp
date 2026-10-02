// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B5520 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587b5520() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        mov esp, ebp
        pop ebp
        ret 4
    }
}
