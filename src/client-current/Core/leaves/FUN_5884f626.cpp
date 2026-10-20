// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F626 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_5884f626() {
    __asm {
        ; Exact mapped bytes E8 09 00 00 00: call 0x5884f634
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 DD 30 01 00: je 0x58862710
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
