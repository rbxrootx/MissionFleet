// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881518 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58881518() {
    __asm {
        ; Exact mapped bytes 8D 4D 90: lea ecx, [ebp - 0x70]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes E9 20 5E C8 FF: jmp 0x58507340
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
