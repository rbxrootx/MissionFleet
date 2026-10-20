// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004368E4 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_004368e4_004368E4() {
    __asm {
        ; Exact mapped bytes 68 23 F0 00 00: push 0xf023
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes B9 A8 F8 44 00: mov ecx, 0x44f8a8
        __asm _emit 0xb9
        __asm _emit 0xa8
        __asm _emit 0xf8
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B 0D FE FF: call 0x417680
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
