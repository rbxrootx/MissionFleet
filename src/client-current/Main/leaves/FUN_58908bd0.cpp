// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58908BD0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58908bd0() {
    __asm {
        ; Exact mapped bytes C7 01 14 2A 9A 58: mov dword ptr [ecx], 0x589a2a14
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x14
        __asm _emit 0x2a
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E9 C5 AC FF FF: jmp 0x589038a0
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
