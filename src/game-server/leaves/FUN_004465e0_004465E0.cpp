// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004465E0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_004465e0_004465E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0bb8h]
        mov edx, dword ptr [ecx + 0bbch]
        mov esp, ebp
        pop ebp
        ret
    }
}
