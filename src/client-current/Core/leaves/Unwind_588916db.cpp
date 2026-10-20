// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588916DB .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588916db() {
    __asm {
        ; Exact mapped bytes 8D 8D 38 FF FF FF: lea ecx, [ebp - 0xc8]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2A C5 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xc5
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
