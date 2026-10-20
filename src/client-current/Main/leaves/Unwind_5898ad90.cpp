// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898AD90 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5898ad90() {
    __asm {
        ; Exact mapped bytes 8D 8D AC F7 FF FF: lea ecx, [ebp - 0x854]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 95 7A FE FF: jmp 0x58972830
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
