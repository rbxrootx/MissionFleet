// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891610 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891610() {
    __asm {
        ; Exact mapped bytes 8D 4D E4: lea ecx, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E9 C8 77 F0 FF: jmp 0x58798de0
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x77
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
