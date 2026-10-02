// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487780 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58487780() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894ccch
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [edx], ecx
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret 8
    }
}
