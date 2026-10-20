// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891AE0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891ae0() {
    __asm {
        ; Exact mapped bytes 8D 8D 1C FF FF FF: lea ecx, [ebp - 0xe4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 25 C1 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0xc1
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
