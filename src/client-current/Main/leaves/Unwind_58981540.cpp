// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981540 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58981540() {
    __asm {
        ; Exact mapped bytes 8D 4D 0C: lea ecx, [ebp + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes E9 28 32 E4 FF: jmp 0x587c4770
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x32
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
