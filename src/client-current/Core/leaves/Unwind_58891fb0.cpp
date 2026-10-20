// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891FB0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891fb0() {
    __asm {
        ; Exact mapped bytes 8D 4D CC: lea ecx, [ebp - 0x34]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E9 28 51 C7 FF: jmp 0x585070e0
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x51
        __asm _emit 0xc7
        __asm _emit 0xff
    }
}
