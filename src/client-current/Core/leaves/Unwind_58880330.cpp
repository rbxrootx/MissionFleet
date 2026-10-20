// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880330 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58880330() {
    __asm {
        ; Exact mapped bytes 8D 8D 64 FF FF FF: lea ecx, [ebp - 0x9c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 05 70 C8 FF: jmp 0x58507340
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
