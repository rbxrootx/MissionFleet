// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849FA00 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5849fa00_5849FA00() {
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
        sar eax, 3
        mov esp, ebp
        pop ebp
        ret
    }
}
