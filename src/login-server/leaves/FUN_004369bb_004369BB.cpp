// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004369BB .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_004369bb_004369BB() {
    __asm {
        ; Exact mapped bytes 83 7C 24 04 00: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x4369cc
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes FF 74 24 04: push dword ptr [esp + 4]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes FF 15 8C C2 43 00: call dword ptr [0x43c28c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
