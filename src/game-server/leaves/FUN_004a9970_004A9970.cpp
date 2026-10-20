// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9970 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_004a9970_004A9970() {
    __asm {
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes DD 14 24: fst qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0x24
        ; Exact mapped bytes E8 6D A2 00 00: call 0x4b3be8
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0D 00 00 00: call 0x4a998d
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
