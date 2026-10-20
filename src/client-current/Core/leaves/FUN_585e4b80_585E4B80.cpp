// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E4B80 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_585e4b80_585E4B80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10690h], 1
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 10de8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20de8h], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
