// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F560 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887f560() {
    __asm {
        ; Exact mapped bytes 8D 8D D4 DA FF FF: lea ecx, [ebp - 0x252c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 85 86 F1 FF: jmp 0x58797bf0
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
