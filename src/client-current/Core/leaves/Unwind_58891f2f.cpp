// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891F2F .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891f2f() {
    __asm {
        ; Exact mapped bytes 8D 4D E4: lea ecx, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E9 59 94 F0 FF: jmp 0x5879b390
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x94
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
