// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58771EE0 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58771ee0() {
    __asm {
        ; Exact mapped bytes E8 EB 19 00 00: call 0x587738d0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4C 24 04: mov cl, byte ptr [esp + 4]
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 88 48 16: mov byte ptr [eax + 0x16], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x16
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
