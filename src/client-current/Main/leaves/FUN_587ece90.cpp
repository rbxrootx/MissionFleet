// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ECE90 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_587ece90() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 218d4h], eax
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 88h], eax
        mov eax, 19h
        ; Exact mapped bytes 66 89 81 8C 00 00 00: mov word ptr [ecx + 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
