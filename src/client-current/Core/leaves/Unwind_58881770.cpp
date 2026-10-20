// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881770 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58881770() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 C8 5B C8 FF: jmp 0x58507340
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x5b
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
