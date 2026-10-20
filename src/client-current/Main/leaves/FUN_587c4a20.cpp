// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4A20 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_587c4a20() {
    __asm {
        lea edx, [ecx + 18h]
        mov dword ptr [ecx + 20h], edx
        lea edx, [ecx + 1ch]
        mov dword ptr [ecx + 24h], edx
        lea eax, [ecx + 8]
        mov dword ptr [ecx + 10h], eax
        lea edx, [ecx + 28h]
        mov dword ptr [ecx + 30h], edx
        lea eax, [ecx + 0ch]
        mov dword ptr [ecx + 14h], eax
        lea edx, [ecx + 2ch]
        mov dword ptr [ecx + 34h], edx
        mov dword ptr [eax], 0
        mov eax, dword ptr [ecx + 24h]
        mov dword ptr [eax], 0
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ecx + 10h]
        mov dword ptr [eax], 0
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ecx + 30h]
        mov dword ptr [eax], 0
        ret
    }
}
