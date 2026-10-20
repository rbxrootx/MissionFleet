// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B380 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888b380() {
    __asm {
        ; Exact mapped bytes 8D 4D A0: lea ecx, [ebp - 0x60]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes E9 08 E7 C6 FF: jmp 0x584f9a90
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xe7
        __asm _emit 0xc6
        __asm _emit 0xff
    }
}
