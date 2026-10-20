// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095B50 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_10095b50_10095B50() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi + 8]
        push eax
        push edi
        ; Exact mapped bytes E8 6E 91 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ecx
        mov dword ptr [esi + 0b8h], 1
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
