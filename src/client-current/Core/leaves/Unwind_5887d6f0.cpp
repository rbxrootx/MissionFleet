// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D6F0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887d6f0() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 B8 A0 C0 FF: jmp 0x584877b0
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xa0
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
