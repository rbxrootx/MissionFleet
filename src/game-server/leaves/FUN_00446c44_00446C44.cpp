// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446C44 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_00446c44_00446C44() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8d0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8d4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8d8h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
