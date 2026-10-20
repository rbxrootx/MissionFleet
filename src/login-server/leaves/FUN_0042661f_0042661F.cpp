// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042661F .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_0042661f_0042661F() {
    __asm {
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 74 24 0C: push dword ptr [esp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes E8 04 00 00 00: call 0x426630
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
