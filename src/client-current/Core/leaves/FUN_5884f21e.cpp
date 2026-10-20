// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F21E .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5884f21e() {
    __asm {
        ; Exact mapped bytes E8 11 04 00 00: call 0x5884f634
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
