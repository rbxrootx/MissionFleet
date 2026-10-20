// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506ED0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58506ed0_58506ED0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax - 18h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx - 18h], 588a3cdch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 18h]
        mov eax, dword ptr [edx + 4]
        sub eax, 18h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 18h]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx - 1ch], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
