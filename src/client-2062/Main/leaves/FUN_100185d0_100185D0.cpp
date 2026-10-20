// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100185D0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_100185d0_100185D0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [ecx + 68h]
        push esi
        mov esi, dword ptr [esp + 8]
        lea eax, [eax + eax*8]
        lea eax, [esi + eax*4]
        pop esi
        imul eax, edx
        mov dword ptr [ecx + 64h], eax
        mov dword ptr [ecx + 50h], eax
        lea edx, [eax + edx - 1]
        mov dword ptr [ecx + 60h], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
