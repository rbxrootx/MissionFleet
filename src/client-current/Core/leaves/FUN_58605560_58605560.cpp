// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58605560 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58605560_58605560() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 0b4h], 3e8h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 0b8h]
        mov esp, ebp
        pop ebp
        ret
    }
}
