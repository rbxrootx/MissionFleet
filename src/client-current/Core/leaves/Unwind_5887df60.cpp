// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DF60 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887df60() {
    __asm {
        ; Exact mapped bytes 8D 4D BC: lea ecx, [ebp - 0x44]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes E9 48 46 C2 FF: jmp 0x584a25b0
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
