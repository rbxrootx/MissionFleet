// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58986370 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58986370() {
    __asm {
        ; Exact mapped bytes 8D 4D E0: lea ecx, [ebp - 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes E9 38 39 DF FF: jmp 0x58779cb0
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x39
        __asm _emit 0xdf
        __asm _emit 0xff
    }
}
