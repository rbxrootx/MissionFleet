// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881AC0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58881ac0() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 58 63 CA FF: jmp 0x58527e20
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x63
        __asm _emit 0xca
        __asm _emit 0xff
    }
}
