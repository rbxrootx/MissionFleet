// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902C10 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58902c10() {
    __asm {
        ; Exact mapped bytes C7 01 20 C5 98 58: mov dword ptr [ecx], 0x5898c520
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x20
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 C5 07 00 00: jmp 0x589033e0
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
