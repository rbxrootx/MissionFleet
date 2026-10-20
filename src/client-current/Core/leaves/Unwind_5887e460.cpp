// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E460 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5887e460() {
    __asm {
        ; Exact mapped bytes 68 EC BE 90 58: push 0x5890beec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 35 FB FF: call 0x588319fe
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x35
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
