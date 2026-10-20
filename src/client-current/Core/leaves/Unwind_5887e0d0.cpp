// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E0D0 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5887e0d0() {
    __asm {
        ; Exact mapped bytes 68 D8 BE 90 58: push 0x5890bed8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 39 FB FF: call 0x588319fe
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
