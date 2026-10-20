// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F6EF0 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_588f6ef0() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 64h]
        mov eax, 1
        xor edx, edx
        mov dword ptr [ecx + 60h], edx
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [ecx + 6ch]
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [ecx + 74h]
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [ecx + 7ch]
        mov dword ptr [esi + 50h], eax
        mov esi, dword ptr [ecx + 84h]
        mov dword ptr [esi + 50h], eax
        mov dword ptr [ecx + 9ch], edx
        mov dword ptr [ecx + 0a0h], edx
        mov dword ptr [ecx + 0a4h], 0ffffffffh
        pop esi
        ret
    }
}
