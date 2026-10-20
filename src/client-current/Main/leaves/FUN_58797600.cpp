// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797600 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58797600() {
    __asm {
        ; Exact mapped bytes 8A 44 24 04: mov al, byte ptr [esp + 4]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 88 81 D8 02 00 00: mov byte ptr [ecx + 0x2d8], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
