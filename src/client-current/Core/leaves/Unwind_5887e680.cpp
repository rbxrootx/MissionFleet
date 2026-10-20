// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E680 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887e680() {
    __asm {
        ; Exact mapped bytes 8D 4D CC: lea ecx, [ebp - 0x34]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E9 18 A3 C3 FF: jmp 0x584b89a0
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xa3
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
