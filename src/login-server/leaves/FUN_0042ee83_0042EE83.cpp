// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EE83 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_0042ee83_0042EE83() {
    __asm {
        ; Exact mapped bytes 6A FE: push -2
        __asm _emit 0x6a
        __asm _emit 0xfe
        ; Exact mapped bytes B9 F8 F4 44 00: mov ecx, 0x44f4f8
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xf4
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 66 00 00 00: call 0x42eef5
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
