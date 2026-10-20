// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040370D .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_0040370d_0040370D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0d90h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0d94h]
        mov esp, ebp
        pop ebp
        ret
    }
}
