// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881600 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58881600() {
    __asm {
        ; Exact mapped bytes 8D 4D C4: lea ecx, [ebp - 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc4
        ; Exact mapped bytes E9 38 E5 C9 FF: jmp 0x5851fb40
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0xc9
        __asm _emit 0xff
    }
}
