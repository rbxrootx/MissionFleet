// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880343 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58880343() {
    __asm {
        ; Exact mapped bytes 8D 8D 5C FF FF FF: lea ecx, [ebp - 0xa4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F2 6F C8 FF: jmp 0x58507340
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x6f
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
