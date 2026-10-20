// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042125B .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_0042125b_0042125B() {
    __asm {
        ; Exact mapped bytes 6A 0D: push 0xd
        __asm _emit 0x6a
        __asm _emit 0x0d
        ; Exact mapped bytes E8 A8 13 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
