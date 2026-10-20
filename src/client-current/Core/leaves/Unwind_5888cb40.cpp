// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888CB40 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5888cb40() {
    __asm {
        ; Exact mapped bytes 8D 8D 54 FF FF FF: lea ecx, [ebp - 0xac]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A5 B0 F0 FF: jmp 0x58797bf0
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
