// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892909 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58892909() {
    __asm {
        ; Exact mapped bytes 8D 8D 7C FC FF FF: lea ecx, [ebp - 0x384]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 91 B0 FA FF: jmp 0x5883d9a5
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0xb0
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
