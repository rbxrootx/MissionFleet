// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10076590 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_10076590_10076590() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        lea edx, [ecx + 658h]
        push edi
        mov ecx, 65h
        xor eax, eax
        mov edi, edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 65h
        mov edi, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
