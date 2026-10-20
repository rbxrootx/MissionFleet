// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F920 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5851f920_5851F920() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 4], 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 5], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
