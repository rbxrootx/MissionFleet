// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446C1E .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00446c1e_00446C1E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 12ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 12dh], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
