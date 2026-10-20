// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881850 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58881850() {
    __asm {
        ; Exact mapped bytes 68 2C 73 94 58: push 0x5894732c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 01 FB FF: call 0x588319fe
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
