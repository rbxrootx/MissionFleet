// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589814A0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589814a0() {
    __asm {
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E9 C8 32 E4 FF: jmp 0x587c4770
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x32
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
