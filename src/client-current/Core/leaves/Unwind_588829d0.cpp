// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588829D0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588829d0() {
    __asm {
        ; Exact mapped bytes 8D 4D B8: lea ecx, [ebp - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes E9 08 4E C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x4e
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
