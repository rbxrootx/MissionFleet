// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EDFE0 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_100edfe0_100EDFE0() {
    __asm {
        ; Exact mapped bytes 8A 44 24 04: mov al, byte ptr [esp + 4]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 88 81 30 03 00 00: mov byte ptr [ecx + 0x330], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
