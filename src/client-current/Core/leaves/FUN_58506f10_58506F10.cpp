// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506F10 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58506f10_58506F10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx - 8], 588a3ccch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 8]
        mov eax, dword ptr [edx + 4]
        sub eax, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 8]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx - 0ch], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
