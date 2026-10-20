// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BC0F0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_584bc0f0_584BC0F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx]
        cdq
        mov ecx, 48h
        idiv ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
