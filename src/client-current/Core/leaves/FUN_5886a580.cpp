// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A580 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_5886a580() {
    __asm {
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes DD 14 24: fst qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0x24
        ; Exact mapped bytes E8 ED FE FF FF: call 0x5886a478
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 04 00 00 00: call 0x5886a594
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
