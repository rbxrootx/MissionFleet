// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891F80 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891f80() {
    __asm {
        ; Exact mapped bytes 8D 4D A8: lea ecx, [ebp - 0x58]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E9 A8 7D C1 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x7d
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
