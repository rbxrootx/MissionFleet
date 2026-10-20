// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446F73 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00446f73_00446F73() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8f8h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8fch], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8f0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8f4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 900h], 5
        mov esp, ebp
        pop ebp
        ret
    }
}
