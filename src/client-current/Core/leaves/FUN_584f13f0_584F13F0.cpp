// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F13F0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_584f13f0_584F13F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        cdq
        mov ecx, 108h
        idiv ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
