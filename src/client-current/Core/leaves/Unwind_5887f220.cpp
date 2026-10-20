// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F220 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887f220() {
    __asm {
        ; Exact mapped bytes 8D 8D D4 FE FF FF: lea ecx, [ebp - 0x12c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 05 AB C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xab
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
