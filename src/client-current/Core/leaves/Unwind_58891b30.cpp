// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891B30 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58891b30() {
    __asm {
        ; Exact mapped bytes 68 C0 5E 96 58: push 0x58965ec0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 FE F9 FF: call 0x588319fe
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
