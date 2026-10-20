// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BEBD0 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_584bebd0_584BEBD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 98h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 5ch], 3e8h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], eax
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 60h], 3e8h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3b0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
