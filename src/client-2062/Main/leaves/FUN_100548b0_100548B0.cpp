// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100548B0 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_100548b0_100548B0() {
    __asm {
        ; Exact mapped bytes 66 8B 81 16 01 00 00: mov ax, word ptr [ecx + 0x116]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
