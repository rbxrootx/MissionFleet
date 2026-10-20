// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588816F8 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588816f8() {
    __asm {
        ; Exact mapped bytes 8D 8D 04 FF FF FF: lea ecx, [ebp - 0xfc]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AD 62 C8 FF: jmp 0x585079b0
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x62
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
