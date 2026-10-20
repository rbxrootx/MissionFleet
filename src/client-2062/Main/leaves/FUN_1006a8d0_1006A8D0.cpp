// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006A8D0 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_1006a8d0_1006A8D0() {
    __asm {
        ; Exact mapped bytes 8A 44 24 04: mov al, byte ptr [esp + 4]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 88 81 70 04 01 00: mov byte ptr [ecx + 0x10470], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
