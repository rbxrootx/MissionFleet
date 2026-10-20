// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A440 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_0040a440_0040A440() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0bc8h]
        mov edx, dword ptr [ecx + 0bcch]
        mov esp, ebp
        pop ebp
        ret
    }
}
