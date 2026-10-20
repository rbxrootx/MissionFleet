// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883ABE3 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_5883abe3() {
    __asm {
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 A1 07 00 00: call 0x5883b38d
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
