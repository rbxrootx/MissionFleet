// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047520 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_10047520_10047520() {
    __asm {
        push esi
        mov esi, ecx
        xor eax, eax
        mov al, byte ptr [esi + 21eh]
        mov cl, byte ptr [esi + 218h]
        and ecx, 0fh
        lea eax, [eax + eax*4]
        shl eax, 1
        mov dword ptr [esi + 3904h], eax
        cdq
        idiv ecx
        mov dword ptr [esi + 3908h], eax
        pop esi
        ret
    }
}
