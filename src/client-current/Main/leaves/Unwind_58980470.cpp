// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980470 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58980470() {
    __asm {
        ; Exact mapped bytes 8D 8D D0 FE FF FF: lea ecx, [ebp - 0x130]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 35 1F F8 FF: jmp 0x589023b0
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
