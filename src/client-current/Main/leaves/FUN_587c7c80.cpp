// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C7C80 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_587c7c80() {
    __asm {
        xor eax, eax
        mov dword ptr [ecx + 0bch], eax
        mov dword ptr [ecx + 0c8h], eax
        mov dword ptr [ecx + 0c0h], eax
        mov eax, dword ptr [ecx + 0ach]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 0b0h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 0b4h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ecx + 0b8h]
        mov ecx, dword ptr [ecx + 8ch]
        mov dword ptr [eax + 50h], ecx
        ret
    }
}
