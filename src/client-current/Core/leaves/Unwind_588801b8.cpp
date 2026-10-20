// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588801B8 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588801b8() {
    __asm {
        ; Exact mapped bytes 8D 8D 7C FC FF FF: lea ecx, [ebp - 0x384]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DD 1D C8 FF: jmp 0x58501fa0
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
