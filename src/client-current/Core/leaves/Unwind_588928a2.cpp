// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588928A2 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_588928a2() {
    __asm {
        ; Exact mapped bytes 68 2C 84 96 58: push 0x5896842c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 F1 F9 FF: call 0x588319fe
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
