// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EDC9 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_0042edc9_0042EDC9() {
    __asm {
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes B9 B8 F5 44 00: mov ecx, 0x44f5b8
        __asm _emit 0xb9
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 20 01 00 00: call 0x42eef5
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
