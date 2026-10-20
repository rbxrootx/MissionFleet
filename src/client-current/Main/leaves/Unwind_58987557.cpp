// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58987557 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58987557() {
    __asm {
        ; Exact mapped bytes 8D 4D B4: lea ecx, [ebp - 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes E9 91 22 F1 FF: jmp 0x588997f0
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
