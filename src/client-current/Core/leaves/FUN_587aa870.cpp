// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA870 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_587aa870() {
    __asm {
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF 74 24 08: push dword ptr [esp + 8]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes E8 F5 F9 FF FF: call 0x587aa270
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
