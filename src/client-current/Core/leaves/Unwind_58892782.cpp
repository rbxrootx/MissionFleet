// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892782 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892782() {
    __asm {
        ; Exact mapped bytes 8D 4D F0: lea ecx, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 F4 DC F9 FF: jmp 0x5883047e
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
    }
}
