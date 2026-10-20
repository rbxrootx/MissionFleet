// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C6560 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_100c6560_100C6560() {
    __asm {
        mov eax, dword ptr [ecx + 8ch]
        mov dword ptr [eax + 50h], 1
        mov edx, dword ptr [ecx + 90h]
        xor eax, eax
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ecx + 98h]
        mov dword ptr [ecx + 50h], eax
        ret
    }
}
