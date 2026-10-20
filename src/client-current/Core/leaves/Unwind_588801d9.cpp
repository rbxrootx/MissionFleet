// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588801D9 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588801d9() {
    __asm {
        ; Exact mapped bytes 8D 8D 9C FC FF FF: lea ecx, [ebp - 0x364]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4C 9B C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x9b
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
