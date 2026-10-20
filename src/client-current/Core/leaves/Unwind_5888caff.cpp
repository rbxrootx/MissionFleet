// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888CAFF .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5888caff() {
    __asm {
        ; Exact mapped bytes 8D 8D 3C FE FF FF: lea ecx, [ebp - 0x1c4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C6 51 C9 FF: jmp 0x58521cd0
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x51
        __asm _emit 0xc9
        __asm _emit 0xff
    }
}
