// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898AD70 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898ad70() {
    __asm {
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E9 28 72 FE FF: jmp 0x58971fa0
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
