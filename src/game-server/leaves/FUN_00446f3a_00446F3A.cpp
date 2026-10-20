// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446F3A .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_00446f3a_00446F3A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8c4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8c8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8cch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
