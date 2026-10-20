// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043FC4F .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0043fc4f_0043FC4F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40cech]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 40cech], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
