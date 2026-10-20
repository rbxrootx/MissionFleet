// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881880 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58881880() {
    __asm {
        ; Exact mapped bytes 68 34 73 94 58: push 0x58947334
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 01 FB FF: call 0x588319fe
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
