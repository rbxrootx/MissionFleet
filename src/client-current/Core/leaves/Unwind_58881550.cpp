// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881550 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58881550() {
    __asm {
        ; Exact mapped bytes 8D 8D 30 FF FF FF: lea ecx, [ebp - 0xd0]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B5 C6 C9 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xc6
        __asm _emit 0xc9
        __asm _emit 0xff
    }
}
