// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A1270 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_584a1270_584A1270() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
