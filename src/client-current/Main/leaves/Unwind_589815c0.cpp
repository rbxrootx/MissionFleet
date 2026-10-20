// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589815C0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_589815c0() {
    __asm {
        ; Exact mapped bytes 8D 8D 68 FF FF FF: lea ecx, [ebp - 0x98]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 05 56 E4 FF: jmp 0x587c6bd0
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x56
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
