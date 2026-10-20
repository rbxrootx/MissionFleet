// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042734B .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_0042734b_0042734B() {
    __asm {
        ; Exact mapped bytes 68 40 D6 44 00: push 0x44d640
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xd6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF 74 24 0C: push dword ptr [esp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes FF 74 24 0C: push dword ptr [esp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes E8 82 FE FF FF: call 0x4271df
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
