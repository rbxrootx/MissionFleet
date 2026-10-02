// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849F480 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_5849f480() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov esp, ebp
        pop ebp
        ret 4
    }
}
