// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433C43 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_00433c43_00433C43() {
    __asm {
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 87 FF FF FF: call 0x433bd1
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes FF 74 24 04: push dword ptr [esp + 4]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E8 22 F1 FF FF: call 0x432d77
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
