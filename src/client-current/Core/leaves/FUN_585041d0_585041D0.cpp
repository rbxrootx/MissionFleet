// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585041D0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_585041d0_585041D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3a60h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
