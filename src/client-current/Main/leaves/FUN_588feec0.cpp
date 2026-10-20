// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FEEC0 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_588feec0() {
    __asm {
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 73 17 00 00: push 0x1773
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 20 CC E6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcc
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 59 5E E6 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5e
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
