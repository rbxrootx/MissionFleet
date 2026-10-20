// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043691C .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_0043691c_0043691C() {
    __asm {
        ; Exact mapped bytes 68 21 F0 00 00: push 0xf021
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes B9 10 F8 44 00: mov ecx, 0x44f810
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 A0 0D FE FF: call 0x4176cd
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
