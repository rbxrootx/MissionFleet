// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7B00 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_588f7b00() {
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
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E0 3F E7 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x3f
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 19 D2 E6 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd2
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
