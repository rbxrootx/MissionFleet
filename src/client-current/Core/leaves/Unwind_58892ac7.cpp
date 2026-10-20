// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892AC7 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892ac7() {
    __asm {
        ; Exact mapped bytes 8D 4D C0: lea ecx, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes E9 61 72 C1 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x72
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
