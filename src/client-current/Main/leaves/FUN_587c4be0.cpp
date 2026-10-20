// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4BE0 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_587c4be0() {
    __asm {
        ; Exact mapped bytes 8A 44 24 04: mov al, byte ptr [esp + 4]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
