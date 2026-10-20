// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00485C80 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_00485c80_00485C80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0ch]
        xor eax, eax
        cmp edx, dword ptr [ecx + 10h]
        sete al
        mov esp, ebp
        pop ebp
        ret
    }
}
