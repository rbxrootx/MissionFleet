// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589038B0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_589038b0() {
    __asm {
        ; Exact mapped bytes C7 01 5C C5 98 58: mov dword ptr [ecx], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 A5 F4 FF FF: jmp 0x58902d60
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
