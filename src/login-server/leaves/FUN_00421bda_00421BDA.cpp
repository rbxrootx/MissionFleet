// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421BDA .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_00421bda_00421BDA() {
    __asm {
        ; Exact mapped bytes E8 E4 08 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 08: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
