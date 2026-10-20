// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588503BB .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_588503bb() {
    __asm {
        ; Exact mapped bytes E8 66 F2 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 78 18 00: cmp dword ptr [eax + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 7E 08: jle 0x588503ce
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes E8 5B F2 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 48 18: dec dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x48
        __asm _emit 0x18
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
