// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BED30 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_584bed30_584BED30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], 100h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8ch], 40000000h
        mov esp, ebp
        pop ebp
        ret
    }
}
