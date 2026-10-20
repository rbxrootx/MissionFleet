// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867F030 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5867f030_5867F030() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 106d0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 106d4h], 320h
        mov esp, ebp
        pop ebp
        ret
    }
}
