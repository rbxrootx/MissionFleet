// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446F01 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_00446f01_00446F01() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 130h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 134h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 138h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
