// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F248 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_5884f248() {
    __asm {
        ; Exact mapped bytes E8 E4 04 00 00: call 0x5884f731
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
