// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887ECE8 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887ece8() {
    __asm {
        ; Exact mapped bytes 8D 4D 08: lea ecx, [ebp + 8]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E9 40 B0 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xb0
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
