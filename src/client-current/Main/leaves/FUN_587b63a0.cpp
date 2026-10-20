// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B63A0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_587b63a0() {
    __asm {
        ; Exact mapped bytes C7 01 B0 A0 99 58: mov dword ptr [ecx], 0x5899a0b0
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xb0
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 F5 D4 14 00: jmp 0x589038a0
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xd4
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
