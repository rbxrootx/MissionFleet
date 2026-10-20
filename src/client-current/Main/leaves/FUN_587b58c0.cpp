// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B58C0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_587b58c0() {
    __asm {
        movzx eax, byte ptr [ecx + 22eh]
        lea eax, [eax + eax*4]
        push esi
        movzx esi, word ptr [ecx + 228h]
        add eax, eax
        mov dword ptr [ecx + 391ch], eax
        and esi, 0fh
        cdq
        idiv esi
        pop esi
        mov dword ptr [ecx + 3920h], eax
        ret
    }
}
