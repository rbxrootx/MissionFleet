// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891983 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891983() {
    __asm {
        ; Exact mapped bytes 8D 8D 40 FF FF FF: lea ecx, [ebp - 0xc0]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 82 C2 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
