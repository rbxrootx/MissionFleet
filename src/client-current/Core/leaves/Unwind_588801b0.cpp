// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588801B0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588801b0() {
    __asm {
        ; Exact mapped bytes 8D 4D 0C: lea ecx, [ebp + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes E9 78 9B C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x9b
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
