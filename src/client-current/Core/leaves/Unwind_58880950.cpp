// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880950 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58880950() {
    __asm {
        ; Exact mapped bytes 8D 8D 78 FF FF FF: lea ecx, [ebp - 0x88]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E5 69 C8 FF: jmp 0x58507340
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x69
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
