// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B900 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888b900() {
    __asm {
        ; Exact mapped bytes 8D 4D E4: lea ecx, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E9 A8 BE BF FF: jmp 0x584877b0
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0xbe
        __asm _emit 0xbf
        __asm _emit 0xff
    }
}
