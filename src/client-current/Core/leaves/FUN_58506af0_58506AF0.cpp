// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506AF0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_58506af0_58506AF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3c74h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        xor ecx, ecx
        mov dword ptr [edx + 18h], eax
        mov dword ptr [edx + 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        xor ecx, ecx
        mov dword ptr [edx + 20h], eax
        mov dword ptr [edx + 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
