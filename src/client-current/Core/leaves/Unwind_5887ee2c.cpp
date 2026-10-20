// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EE2C .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ee2c() {
    __asm {
        ; Exact mapped bytes 8D 8D F8 FE FF FF: lea ecx, [ebp - 0x108]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 49 A1 F1 FF: jmp 0x58798f80
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
