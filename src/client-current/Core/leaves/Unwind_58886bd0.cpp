// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58886BD0 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58886bd0() {
    __asm {
        ; Exact mapped bytes 68 14 5D 96 58: push 0x58965d14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 AE FA FF: call 0x588319fe
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xae
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
