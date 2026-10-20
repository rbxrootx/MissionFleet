// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887ECE0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887ece0() {
    __asm {
        ; Exact mapped bytes 8D 4D 20: lea ecx, [ebp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x20
        ; Exact mapped bytes E9 48 B0 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xb0
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
