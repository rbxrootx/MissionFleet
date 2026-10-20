// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435A86 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_00435a86_00435A86() {
    __asm {
        ; Exact mapped bytes 68 3B 5D 43 00: push 0x435d3b
        __asm _emit 0x68
        __asm _emit 0x3b
        __asm _emit 0x5d
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes B9 C0 DC 44 00: mov ecx, 0x44dcc0
        __asm _emit 0xb9
        __asm _emit 0xc0
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 1E 13 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
