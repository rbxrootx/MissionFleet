// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EE45 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_0042ee45_0042EE45() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes B9 38 F5 44 00: mov ecx, 0x44f538
        __asm _emit 0xb9
        __asm _emit 0x38
        __asm _emit 0xf5
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 A4 00 00 00: call 0x42eef5
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
