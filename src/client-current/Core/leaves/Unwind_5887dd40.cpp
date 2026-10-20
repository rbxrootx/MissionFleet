// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DD40 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887dd40() {
    __asm {
        ; Exact mapped bytes 8D 4D CC: lea ecx, [ebp - 0x34]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E9 68 9A C0 FF: jmp 0x584877b0
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x9a
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
