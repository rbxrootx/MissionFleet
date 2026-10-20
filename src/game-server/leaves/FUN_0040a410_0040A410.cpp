// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A410 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_0040a410_0040A410() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0bc0h]
        mov edx, dword ptr [ecx + 0bc4h]
        mov esp, ebp
        pop ebp
        ret
    }
}
