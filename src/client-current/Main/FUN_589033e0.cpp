// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589033E0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_589033e0() {
    __asm {
        ; Exact mapped bytes C7 01 00 C5 98 58: mov dword ptr [ecx], 0x5898c500
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 75 F9 FF FF: jmp 0x58902d60
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
