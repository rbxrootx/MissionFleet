// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887FB00 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887fb00() {
    __asm {
        ; Exact mapped bytes 8D 4D CC: lea ecx, [ebp - 0x34]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E9 98 22 C7 FF: jmp 0x584f1da0
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0xc7
        __asm _emit 0xff
    }
}
