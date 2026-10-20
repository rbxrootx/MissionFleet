// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851020 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58851020() {
    __asm {
        ; Exact mapped bytes 8D 54 24 04: lea edx, [esp + 4]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E8 0C 94 01 00: call 0x5886a435
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 66 95 01 00: jmp 0x5886a594
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
