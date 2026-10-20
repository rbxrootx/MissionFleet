// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425651 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_00425651_00425651() {
    __asm {
        ; Exact mapped bytes 68 00 00 03 00: push 0x30000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 01 00: push 0x10000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 18 00 00: call 0x426eb4
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
