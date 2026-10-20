// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F229 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_5884f229() {
    __asm {
        ; Exact mapped bytes E8 CD 03 00 00: call 0x5884f5fb
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
