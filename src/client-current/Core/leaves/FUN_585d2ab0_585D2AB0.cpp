// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D2AB0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_585d2ab0_585D2AB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 21e80h]
        xor ecx, dword ptr [edx + eax + 21e68h]
        mov eax, ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
