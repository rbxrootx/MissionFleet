// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587024C0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_587024c0_587024C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 88h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
