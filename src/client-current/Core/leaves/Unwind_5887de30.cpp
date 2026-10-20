// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DE30 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887de30() {
    __asm {
        ; Exact mapped bytes 8D 4D D4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E9 78 47 C2 FF: jmp 0x584a25b0
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
