// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FB080 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_584fb080_584FB080() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
