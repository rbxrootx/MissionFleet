// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892B40 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892b40() {
    __asm {
        ; Exact mapped bytes 8D 4D 90: lea ecx, [ebp - 0x70]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes E9 E8 71 C1 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
