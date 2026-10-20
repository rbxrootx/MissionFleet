// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749AC0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58749ac0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, 88888889h
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        lea eax, [eax + eax*2]
        shl eax, 4
        lea eax, [eax + ecx + 49a0h]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
