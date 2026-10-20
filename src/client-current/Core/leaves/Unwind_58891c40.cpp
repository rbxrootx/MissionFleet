// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891C40 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891c40() {
    __asm {
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E9 48 57 C7 FF: jmp 0x58507390
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x57
        __asm _emit 0xc7
        __asm _emit 0xff
    }
}
