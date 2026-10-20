// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880390 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880390() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 68 6A C8 FF: jmp 0x58506e00
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x6a
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
